using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace SHNameSpace
{
	// --------------------------------------------------------------
	// Window
	// --------------------------------------------------------------
	public class SimpleSelectionHistorySettingsWindow :EditorWindow 
	{
		static SimpleSelectionHistorySettingsWindow window = null;

		Vector2 m_scroll;
		GUIStyle m_ButtonStyle = null;
		IMECompositionMode prevMode;
		// bool m_bFileNameOnly = true;

		// --------------------------------------------------------------
		// Back
		[MenuItem("Tools/Simple Selection History/Settings",false, StaticSimpleSelectionMain.Priority + 20)]
		public static void Open()
		{
			EditorWindow.GetWindow<SimpleSelectionHistorySettingsWindow>(true,"Simple Selection History Settings"); 
		}

		// --------------------------------------------------------------
		void Awake()
		{
			window = this;
			prevMode = Input.imeCompositionMode;
			Input.imeCompositionMode = IMECompositionMode.On;
		}
		// --------------------------------------------------------------
		void OnDestroy()
		{
			window = null;
			Input.imeCompositionMode = prevMode;			
		}

		// --------------------------------------------------------------
		static public void Refresh()
		{
			if( window != null )
				window.Repaint();
		}


		// --------------------------------------------------------------
		void OnGUI()
		{
			// if( m_ButtonStyle == null )
			{
				// m_ButtonStyle = new GUIStyle( EditorStyles.miniButtonLeft );
				m_ButtonStyle = new GUIStyle( GUI.skin.button );
				// m_ButtonStyle.fixedHeight = 30;
				m_ButtonStyle.alignment = TextAnchor.MiddleCenter;
				m_ButtonStyle.alignment = TextAnchor.MiddleRight;
			}
;
			bool needSave = false;

			// --------------------------------------------------------------
			EditorGUILayout.BeginHorizontal();
			GUILayout.Label("History Count");
			int count = EditorGUILayout.IntSlider( StaticSimpleSelectionMain.HistoryData.historycount, 100 , 1000 );
			if( count !=  StaticSimpleSelectionMain.HistoryData.historycount ){
				needSave = true;
				StaticSimpleSelectionMain.HistoryData.HistoryCount = count;
			}
			EditorGUILayout.EndHorizontal();


			// --------------------------------------------------------------
			bool isAutoRemove = GUILayout.Toggle( StaticSimpleSelectionMain.HistoryData.isAutoRemoveSameFile , "Auto remove same file history" );;
			if( isAutoRemove != StaticSimpleSelectionMain.HistoryData.isAutoRemoveSameFile ){
				StaticSimpleSelectionMain.HistoryData.isAutoRemoveSameFile = isAutoRemove;
				needSave = true;
			}

			// --------------------------------------------------------------
			bool withoutHierarchy = GUILayout.Toggle( StaticSimpleSelectionMain.HistoryData.WithoutHierarchy , "Without Hierarchy object" );;
			if( withoutHierarchy != StaticSimpleSelectionMain.HistoryData.WithoutHierarchy ){
				StaticSimpleSelectionMain.HistoryData.WithoutHierarchy = withoutHierarchy;
				needSave = true;
			}

			// --------------------------------------------------------------
			bool UpdateWhenSelected = GUILayout.Toggle( StaticSimpleSelectionMain.HistoryData.UpdateWhenSelected , "Update when selected history" );
			if( UpdateWhenSelected != StaticSimpleSelectionMain.HistoryData.UpdateWhenSelected ){
				StaticSimpleSelectionMain.HistoryData.UpdateWhenSelected = UpdateWhenSelected;
				needSave = true;
			}

			if( needSave ){
				StaticSimpleSelectionMain.Save();
				SimpleSelectionHistoryWindow.Refresh();
			}
		}
	}
}