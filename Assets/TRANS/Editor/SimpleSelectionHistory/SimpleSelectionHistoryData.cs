#if UNITY_2018_3_OR_NEWER
#define USEPREFABMODE
#endif

using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using System.IO;
#if USEPREFABMODE

#endif

namespace SHNameSpace
{
	public enum IconType
	{
		Hierarchy,
		Prefab,
	}

	// **************************************************************
	[System.Serializable]
	public class SelectionData{
		[SerializeField] private string	identifier;

		public string	Identifier{ get{ return identifier; }}
		public string 	Path{ get; private set; }
		public string 	FileName{ get; private set; }
		public Texture	Icon{ get; private set; }
		public bool		IsView{ get; set; }
		public string 	Extension{ get; private set; }
		public int		ExtensionHash{ get; private set; }
		public bool 	isActive{get;set;}
		public bool		isGameObject{ get{ return identifier.StartsWith("/");}}
		public bool		isPrefab{ get{ return identifier.StartsWith("*");}}

		public SelectionData( string _identifier )
		{
			identifier = _identifier;
			Refresh(true);
		}

		public void Refresh(bool refreshIcon){
			if( isGameObject ){
				Path = identifier;
				FileName = System.IO.Path.GetFileName( Path );
			}else if( isPrefab ){
				Path = identifier;
				FileName = System.IO.Path.GetFileName( Path.Substring(1) );
			}else{
				Path = AssetDatabase.GUIDToAssetPath( identifier );
				FileName = System.IO.Path.GetFileName( Path );
			}
			if( refreshIcon )
				RefreshIcon();
			Extension = System.IO.Path.GetExtension( Path );
			ExtensionHash = Extension.GetHashCode();
		}

		public void RefreshIcon(){
			if( isGameObject ){
				Icon = StaticSimpleSelectionMain.GetIcon(IconType.Hierarchy);
			}else if( isPrefab ){
				Icon = StaticSimpleSelectionMain.GetIcon(IconType.Prefab);
			}else{
				if( !string.IsNullOrEmpty( Path )  )
				Icon = AssetPreview.GetMiniThumbnail( AssetDatabase.LoadMainAssetAtPath( Path ) );
			}
		}

		public string GetPath( bool bFileNameOnley = true )
		{
			return bFileNameOnley ? FileName : Path;
		}

		public Object GetObject( bool showLog = false ){
			if( isGameObject ){
#if USEPREFABMODE
				var stage = UnityEditor.SceneManagement.PrefabStageUtility.GetCurrentPrefabStage();
				if( stage != null ){
					if( showLog ) Debug.LogWarning("SimpleSelectionHistory: Don't Find GameObject! Not Prefab Mode!!["+ Path + "]" );
				}
				else
#endif
				{
					GameObject go = null;
					go = GameObject.Find(Path);
					if( go != null ){
						return go;
					}
					if( showLog ) Debug.LogWarning("SimpleSelectionHistory: Don't Find GameObject! ["+ Path + "]" );
				}
			}
#if USEPREFABMODE
			else if( isPrefab ){
				var stage = UnityEditor.SceneManagement.PrefabStageUtility.GetCurrentPrefabStage();
				if( stage != null ){
					var path = Path.Substring(1);
					if( path == stage.prefabContentsRoot.name ){
						return stage.prefabContentsRoot;
					}
					else if( path.StartsWith( stage.prefabContentsRoot.name ) ){
						path = path.Substring( 1 + stage.prefabContentsRoot.name.Length );
						var findTrans = stage.prefabContentsRoot.transform.Find( path );
						if( findTrans != null )
							return findTrans.gameObject;
					}
					if( showLog ) Debug.LogWarning("SimpleSelectionHistory: Don't Find GameObject! Not in this prefab. ["+ Path.Substring(1) + "]" );
				}else{
					if( showLog ) Debug.LogWarning("SimpleSelectionHistory: Don't Find GameObject! This is in Prefab Mode. ["+ Path.Substring(1) + "]" );
				}
			}
#endif
			else{
				return AssetDatabase.LoadAssetAtPath(Path,typeof(object));
			}
			return null;	
		}
	}

	// **************************************************************
	[System.Serializable]
	public class FavoriteData : SelectionData {
		public string 	displayName;			// override display name 

		public FavoriteData( string guid , string displayName ) : base( guid )
		{
			displayName = string.IsNullOrEmpty( displayName ) ? "" : displayName;
		}
		public FavoriteData( SelectionData selectData ) : base( selectData.Identifier )
		{
			displayName = "";
		}

		public string GetFavoritePath( bool bFileNameOnley = true )
		{
			if( !string.IsNullOrEmpty( displayName ) )
				return displayName;
			if( bFileNameOnley )
				return System.IO.Path.GetFileName( Path );
			return Path;
		}
	}

	// **************************************************************
	public class HistoryDataInstance : ScriptableSingleton<HistoryDataInstance>{
		public HistoryData	historyData 		= null;
		public Dictionary<IconType, Texture> icons 	= new Dictionary<IconType, Texture>();
		public int filterMask;
	}

	// **************************************************************
	// Saved Classes
	[System.Serializable]
	public class FilterData{
		public string				extension = "";
		public int					_enabled;

		private int _extensionHash = 0;
		public int 	extensionHash{ get{ return _extensionHash != 0 ? _extensionHash : ( _extensionHash = extension.GetHashCode() ); }}

		public bool Enabled{ get{ return _enabled != 0;} set { _enabled = value ? 1 : 0; }}

		public FilterData( string e , bool enabled ){
			extension = e;
			this._enabled = enabled ? 1 : 0;
		}
	}


	[System.Serializable]
	public class HistoryData
	{
		const string EditorUserSettings  = "SelectionHistory";

		public int 					historycount 		= 200;
		public List<FilterData>		filterDatas 		= new List<FilterData>();
		public List<SelectionData> 	history				= new List<SelectionData>();
		public int					autoRemoveSameFile	= 1;
		public int					withoutHierarchy	= 0;
		public int					updateWhenSelected	= 0;

		// public bool FilterEnable{ get { return filterEnable != 0; } set{ filterEnable = value ? 1 : 0; } }

		public bool isAutoRemoveSameFile{
			get { return autoRemoveSameFile != 0; }
			set {
				autoRemoveSameFile = value ? 1 : 0; 
				if( value ){
					List<SelectionData> newHistory = new List<SelectionData>(history.Count);
					for( int i = history.Count - 1; i >= 0; --i )
					{
						var item = history[i];
						if( !newHistory.Any( x => x.Identifier == item.Identifier ) )
							newHistory.Insert(0,item);
					}
					history = newHistory;
				}
			}
		}

		public bool WithoutHierarchy{
			get { return withoutHierarchy != 0; }
			set{
				withoutHierarchy = value ? 1 : 0; 
				if( value ){
					for( int i = history.Count - 1; i >= 0; --i )
					{
						var item = history[i];
						if( item.isGameObject )
							history.RemoveAt(i);
					}
				}
			}
		}

		public bool UpdateWhenSelected{
			get{ return updateWhenSelected != 0; }
			set{ updateWhenSelected = value ? 1 : 0; }
		}

		// --------------------------------------------------------------
		public int HistoryCount{ set {
			historycount = value;
			if( history.Count > historycount ){
				history.RemoveRange( 0 , history.Count - historycount );
			}
		} }
		// --------------------------------------------------------------
		public void Save(){
			string str = JsonUtility.ToJson( this );
			UnityEditor.EditorUserSettings.SetConfigValue (EditorUserSettings, str );
		}

		// --------------------------------------------------------------
		public static HistoryData Load()
		{
			string json = UnityEditor.EditorUserSettings.GetConfigValue (EditorUserSettings);
			if( string.IsNullOrEmpty(json) ){
				return new HistoryData();
			}else{
				var ret = JsonUtility.FromJson<HistoryData>( json );
				ret.Refresh(true);
				return ret;
			}
		}

		// --------------------------------------------------------------
		private void Refresh(bool refreshIcon){
			for( int i = history.Count - 1; i >= 0; --i )
			{
				var item = history[i];
				item.Refresh(refreshIcon);
				if( string.IsNullOrEmpty( item.Path ) || item.Icon == null )
					history.RemoveAt(i);
				else 
					item.IsView = filterDatas.Count == 0 ? true : filterDatas.Any( x => x.Enabled && x.extensionHash == item.ExtensionHash );
			}
		}

		// --------------------------------------------------------------
		public void SetupDefaultFilter(){
			filterDatas.Add( new FilterData( "Scene" , false ));
		}
	}
}
