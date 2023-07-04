using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System;

namespace SHNameSpace
{
	// --------------------------------------------------------------
	// View
	// --------------------------------------------------------------
	public class SimpleSelectionHistoryWindow :EditorWindow, IHasCustomMenu {

		static public SimpleSelectionHistoryWindow SelectHistoryWindow = null;
		Vector2 m_scroll;
		GUIStyle m_ButtonStyle = null;
		GUIStyle m_ButtonActiveStyle = null;
		SelectionData activeSelect = null;
		Vector2 mouseDownPos = Vector2.zero;

		GUIContent cont;

		[MenuItem("Tools/Simple Selection History/Show window %&#h",false, StaticSimpleSelectionMain.Priority + 10)]
		static void Open()
		{
			EditorWindow.GetWindow<SimpleSelectionHistoryWindow>(false,"Simple Selection History"); 
		}

		// --------------------------------------------------------------
		public void AddItemsToMenu (GenericMenu menu)
		{
			menu.AddItem (new GUIContent ("Settings"), false, () => {
				SimpleSelectionHistorySettingsWindow.Open();
			});
		}

		// --------------------------------------------------------------
		void OnEnable()
		{
			SelectHistoryWindow = this;
		}
		
		// --------------------------------------------------------------
		void OnDestroy()
		{
			SelectHistoryWindow = null;
		}

		// --------------------------------------------------------------
		static public void Refresh()
		{
			if( SelectHistoryWindow != null )
				SelectHistoryWindow.Repaint();
		}
	
		// --------------------------------------------------------------
		void OnGUI()
		{
			// Button style
			if( m_ButtonStyle == null )
			{
				m_ButtonStyle = new GUIStyle( GUI.skin.button );
				m_ButtonStyle.alignment = TextAnchor.MiddleLeft;
				m_ButtonActiveStyle = new GUIStyle( m_ButtonStyle );
				m_ButtonActiveStyle.normal = m_ButtonStyle.active;
			}

			// Load data
			if( StaticSimpleSelectionMain.HistoryData == null )
				StaticSimpleSelectionMain.Load();

			bool needSave = false;
			// --------------------------------------------------------------
			if( cont == null )
				cont = new GUIContent();
			var	HistoryButtonLayout = new GUILayoutOption[]{ GUILayout.Width( position.width - 50 ),GUILayout.Height(20) };

			// --------------------------------------------------------------
			// Filter
			var mask = StaticSimpleSelectionMain.filterMask;
			var extentions = StaticSimpleSelectionMain.FilterExtensions;
			EditorGUILayout.BeginHorizontal();
			mask = EditorGUILayout.MaskField( "Extension Filter" , mask , extentions );
			if( StaticSimpleSelectionMain.filterMask != mask ){
				StaticSimpleSelectionMain.SetFilterMask( mask );
			}
			EditorGUILayout.EndHorizontal();			

			m_scroll = EditorGUILayout.BeginScrollView(m_scroll);

			// History
			var history = StaticSimpleSelectionMain.HistoryData.history;
			// StaticSimpleSelectionMain.UpdateViewFillter();
			EditorGUILayout.Space();
			for( int i = history.Count - 1; i >= 0; --i )
			{
				var data = history[i];
				if( !data.IsView )
					continue;

				EditorGUILayout.BeginHorizontal();
				// Current Index
				GUILayout.Label( StaticSimpleSelectionMain.s_curHidtoryIndex == i ? ">" : "" , EditorStyles.miniLabel , GUILayout.Width(10) );

				// Select
				cont.text = data.GetPath();
				cont.image = data.Icon;

				// var rect = GUILayoutUtility.GetRect( cont , data.isActive ? m_ButtonActiveStyle : m_ButtonStyle  , HistoryButtonLayout );
				GUILayout.Label( cont , activeSelect == data ? m_ButtonActiveStyle : m_ButtonStyle , HistoryButtonLayout );
				var rect = GUILayoutUtility.GetLastRect();
				if( ControllAction( rect , data ) ){
					var obj = data.GetObject(true);
					if( StaticSimpleSelectionMain.HistoryData.UpdateWhenSelected ){
						StaticSimpleSelectionMain.s_prevActiveGameObject = null;
					}else{
						StaticSimpleSelectionMain.s_curHidtoryIndex = i;
						StaticSimpleSelectionMain.s_prevActiveGameObject = obj as GameObject;
					}
					StaticSimpleSelectionMain.SelectData(obj);
					// Open Asset
					if( IsPressCtrl() && !data.isGameObject && !data.isPrefab ){
						AssetDatabase.OpenAsset( AssetDatabase.LoadAssetAtPath<UnityEngine.Object>( data.Path ) );
					}
				}
				EditorGUILayout.EndHorizontal();			
			}

			// --------------------------------------------------------------
			EditorGUILayout.EndScrollView();

			if( activeSelect != null && Event.current.type == EventType.DragUpdated){
				DragAndDrop.visualMode = DragAndDropVisualMode.Move;
			}

			if( needSave )
				StaticSimpleSelectionMain.Save();
		}

		// --------------------------------------------------------------
		bool ControllAction( Rect rect, SelectionData selData ){
			EventType eventType = Event.current.type;
			// var objectRef = DragAndDrop.objectReferences.Length == 1 ? DragAndDrop.objectReferences[0] : null;
			// var buttonData = DragAndDrop.objectReferences.Length == 1 ? DragAndDrop.objectReferences[0] as DragButtonData : null;
			var mousepos = Event.current.mousePosition;
			switch( eventType )
			{
				case EventType.MouseDown:
					if( rect.Contains(mousepos ) ){
						// Debug.Log("MouseDown");
						activeSelect = selData;
						mouseDownPos = mousepos;
					}
					break;
				case EventType.MouseDrag:
					if( activeSelect == selData && (mouseDownPos-mousepos).sqrMagnitude >= 25 ){
						// Debug.Log("MouseDrag");
						activeSelect = selData;
						DragAndDrop.PrepareStartDrag();
						var obj = AssetDatabase.LoadAssetAtPath<UnityEngine.Object>( selData.Path );
						var objs = new UnityEngine.Object[] { obj };
						DragAndDrop.objectReferences = objs;
						DragAndDrop.StartDrag( selData.FileName );
						Event.current.Use();
					}
					break;
				case EventType.MouseUp:
					if( activeSelect == selData && rect.Contains(mousepos ) ){
						// Debug.Log("MouseUp");
						activeSelect = null;
						// DragAndDrop.PrepareStartDrag();
						return true;
					}
					break;
				case EventType.DragExited:
					if( activeSelect == selData ){
						// Debug.Log("DragExited");
						activeSelect = null;
					}
					break;
				// case EventType.DragPerform:
				// 	if( activeSelect == selData ){
				// 		Debug.Log("DragPerform");
				// 	}				
				// 	break;
				case EventType.DragUpdated:
					if( activeSelect == selData ){
                		DragAndDrop.visualMode = DragAndDropVisualMode.Move;
					}
					break;
				default:
					// if( activeSelect == selData ){
					// 	Debug.Log(eventType.ToString());
					// }
					break;
			}
			return false;
		}		


		//----------------------------------------------------------------------------------------------
		static bool IsPressCtrl(){		
#if UNITY_EDITOR_OSX
			return ( Event.current.modifiers & EventModifiers.Command ) != 0;
#else // UNITY_EDITOR_WIN
			return ( Event.current.modifiers & EventModifiers.Control ) != 0;
#endif
		}
	}
}