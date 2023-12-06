#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.IComparer`1<FunkyCode.Rendering.Day.Sorting.SortObject>
struct IComparer_1_t0F28EBD615B7F31AB2B7DAFB6CE2D1DA9FC02BCD;
// FunkyCode.LightColliderLayer`1<FunkyCode.LightCollider2D>
struct LightColliderLayer_1_t6DDAC6C1EA77BF6077014F4781834303481D63FD;
// FunkyCode.LightColliderLayer`1<FunkyCode.LightTilemapCollider2D>
struct LightColliderLayer_1_t93A0EBD611E199715B981091F60A655DA171784E;
// System.Collections.Generic.List`1<FunkyCode.Light2D>
struct List_1_t9605206A92A0B872360B64394A5053F7D75CE565;
// System.Collections.Generic.List`1<FunkyCode.LightCollider2D>
struct List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0;
// System.Collections.Generic.List`1<FunkyCode.LightCollision2D>
struct List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D;
// System.Collections.Generic.List`1<FunkyCode.LightTile>
struct List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA;
// System.Collections.Generic.List`1<FunkyCode.LightTilemapCollider2D>
struct List_1_t53210D23CC79388549233000764405C28B06BEFA;
// System.Collections.Generic.List`1<FunkyCode.MeshObject>
struct List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2>
struct List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// LayerEventSetting[]
struct LayerEventSettingU5BU5D_t1A9B422372D5D6281A43B7E1B860EC63598A1815;
// FunkyCode.LightCollider2D[]
struct LightCollider2DU5BU5D_t2C1D980B99EF203700319B0E755A8A6F70A4380A;
// FunkyCode.LightCollision2D[]
struct LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C;
// FunkyCode.LightTile[]
struct LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D;
// FunkyCode.LightTilemapCollider2D[]
struct LightTilemapCollider2DU5BU5D_t27AF88C3DC925BFD01DDD0CB094F6B2F24A29697;
// FunkyCode.MeshObject[]
struct MeshObjectU5BU5D_t925C185E4319C808EA533A1ACCEBDC06233C92AB;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// FunkyCode.Utilities.Polygon2[]
struct Polygon2U5BU5D_tB3FC47D2BF1F996FEA9E45FBAF784EF60CE74A55;
// FunkyCode.Rendering.Day.Sorting.SortObject[]
struct SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Collections.Generic.List`1<FunkyCode.LightTile>[,]
struct List_1U5BU2CU5D_t8F789D376BCF4DBC7C84974697314D3AC7A621CA;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// FunkyCode.EventHandling.Base
struct Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE;
// FunkyCode.LightShape.Base
struct Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4;
// FunkyCode.LightTilemapCollider.Base
struct Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// FunkyCode.LightingSettings.BumpMapMode
struct BumpMapMode_t6A34FC9F18E4D274179FA244CF6CC9300948C080;
// FunkyCode.Lighting2DMaterial.BumpMask
struct BumpMask_t49876927B265478932B35E71DA5873E621748801;
// FunkyCode.LightingSettings.Chunks
struct Chunks_t4E49B7B7A566B45E2FF48AB5CE59D6FF42ABFA10;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// FunkyCode.LightShape.Collider2DShape
struct Collider2DShape_tAF6ADDE0E774C06B594E23CD3EDD692314EE53F4;
// FunkyCode.LightShape.Collider3DShape
struct Collider3DShape_t8C4300F45946A263397E81640B1D363EE8760D8B;
// FunkyCode.EventHandling.CollisionEvent2D
struct CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.CompositeCollider2D
struct CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8;
// FunkyCode.LightShape.CompositeCollider2DShape
struct CompositeCollider2DShape_t1A95207D8A3E361B4694CE001345A12FB611664C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EdgeCollider2D
struct EdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710;
// FunkyCode.LightingSettings.EditorView
struct EditorView_t599C5C5AE6D9722C1D05952454777D9F562DFEF3;
// FunkyCode.LightingSettings.EventPreset
struct EventPreset_t66A7EA3289F9C1FF587BE9EF2DF55CF81CF65F0A;
// FunkyCode.LightingSettings.EventPresetLayers
struct EventPresetLayers_t2E44C99CDDEEDFA3B19BDF2B6635379F05F24D4A;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// FunkyCode.FreeFormPoints
struct FreeFormPoints_tB954A31D82AE8A6AB8F18ADE273080F5353FD54A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// FunkyCode.LightingSettings.Gizmos
struct Gizmos_t78439F9F9CC75683F6AEF6C9A01B503778F72C05;
// UnityEngine.Grid
struct Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE;
// UnityEngine.GridLayout
struct GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B;
// FunkyCode.LightTilemapCollider.Hexagon
struct Hexagon_tF485227D12FC1DC72A9D432DFB5CD7ADC867C9AC;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.Tilemaps.ITilemap
struct ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164;
// FunkyCode.LightTilemapCollider.Isometric
struct Isometric_tFF8D90125CF28DB5D80059E20536A2C185EDFF5E;
// LayerEventSetting
struct LayerEventSetting_t6CA000F050E7540EB8666EDEDD02952AB9E05BAC;
// FunkyCode.Light2D
struct Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F;
// FunkyCode.LightBuffer2D
struct LightBuffer2D_t2ABE82B6CBEEC0E3802DE572566927504246CD09;
// FunkyCode.EventHandling.LightCollider
struct LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B;
// FunkyCode.LightCollider2D
struct LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F;
// FunkyCode.LightColliderShape
struct LightColliderShape_tD23C84CBA7B2840DDA09A49B9A21D15050F23FE9;
// FunkyCode.LightColliderTransform
struct LightColliderTransform_t5CE8EAB088E35B65A6FB16B4D9C5FE10529D365C;
// FunkyCode.LightSettings.LightEvent
struct LightEvent_t551CA2B4FEE01D7002F186216C3BE29699A6C1E2;
// FunkyCode.LightFreeForm
struct LightFreeForm_t43F4A910CC44B2D8A6354833611947554AAD5EA1;
// FunkyCode.LightTile
struct LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06;
// FunkyCode.EventHandling.LightTilemap
struct LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4;
// FunkyCode.LightTilemapCollider2D
struct LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D;
// FunkyCode.LightTilemapTransform
struct LightTilemapTransform_tD68C51F4D0846371FD7918AEE0DDD7F913AF3D08;
// FunkyCode.LightTransform
struct LightTransform_t5531F5CC0B11D9FFAE4C3C130ECE8AA1B674E333;
// FunkyCode.LightingMaterial
struct LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE;
// FunkyCode.Lighting2DMaterial.Lights
struct Lights_tECCB145250BAC426989E77FB374536421B467FE8;
// FunkyCode.Lighting2DMaterial.Mask
struct Mask_t8B4899F29A477996CF8F6529A7035C5388D309EE;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// FunkyCode.LightingSettings.MeshMode
struct MeshMode_t0FEDCE32C50D70D1146EF0511EC85F128E2BC573;
// FunkyCode.MeshObject
struct MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// FunkyCode.LightShape.MeshRendererShape
struct MeshRendererShape_tC193DD208D035762FBE951AAA017FF72DCCC9082;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// FunkyCode.EventHandling.Object
struct Object_t179F01F942C4F00D02406C0227229D635FBF2CEC;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// FunkyCode.SpriteExtension.PhysicsShape
struct PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7;
// FunkyCode.Utilities.Polygon2
struct Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3;
// FunkyCode.LightingSettings.Profile
struct Profile_tAD78BE693E7497B38FC822DC924DCB13A72E1949;
// FunkyCode.LightingSettings.ProjectSettings
struct ProjectSettings_tF1A6266C74517361A17F8055B28EE33E3398665F;
// FunkyCode.LightTilemapCollider.Rectangle
struct Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// FunkyCode.Lighting2DMaterial.Room
struct Room_t9D9FF97811BA8DCE6F0FC2A4D791DD0846D767FD;
// FunkyCode.Lighting2DMaterial.Shadow
struct Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// FunkyCode.LightShape.SkinnedMeshRendererShape
struct SkinnedMeshRendererShape_t6985EF091F4BBDE9A1AD402910CB1A1998767B80;
// FunkyCode.Rendering.Day.Sorting.SortList
struct SortList_t06AC051DCDD31922C338190E8E262E4032CA216F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// FunkyCode.SpriteMeshObject
struct SpriteMeshObject_t091413E240336D1284B8D70ED8A08C3A17E9DE23;
// FunkyCode.LightShape.SpritePhysicsShape
struct SpritePhysicsShape_t2D07C474C4F4A0D7942EDB4EC4F4CB472F7FC888;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// FunkyCode.LightShape.SpriteShape
struct SpriteShape_tCCA2A2247D8CB9EF2FE69B47F7FCEEA313CE01E1;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Tilemaps.TileBase
struct TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9;
// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751;
// FunkyCode.SuperTilemapEditorSupport.TilemapCollider2D
struct TilemapCollider2D_tFBD8C58BB2F4909D9A8621EE6361DEEA39713293;
// UnityEngine.Tilemaps.TilemapCollider2D
struct TilemapCollider2D_t66245B4B99A740FBC2F1EA873E82EE808B57E177;
// FunkyCode.Chunks.TilemapManager
struct TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C;
// FunkyCode.TilemapProperties
struct TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// FunkyCode.Utilities.VirtualSpriteRenderer
struct VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// FunkyCode.Light2D/BumpMap
struct BumpMap_t95D45DDC5E4DC963F0146FF8DC397D48F1C8515A;
// FunkyCode.Light2D/LightEventHandling
struct LightEventHandling_tB3D09C6487F99BF16F68A4AA563822CC4BC1E5F0;

IL2CPP_EXTERN_C RuntimeClass* Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lighting2D_tC57B79084FE0F1E4C5B2BFDF710A7D5CDA053240_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1U5BU2CU5D_t8F789D376BCF4DBC7C84974697314D3AC7A621CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math2D_tB73A97540B11E23BE741C52B51A3BEB43BB6FFE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhysicsShapeManager_t330075DFA7A54C2D406B6417F60E25398974635F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Polygon2Collider2D_tA3B1D29DF1F185806590CD6F430CF75FD909CF66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02A37ADB2DD7A80870BEBE5248EAB4D4EB26DD07;
IL2CPP_EXTERN_C String_t* _stringLiteral042F871A028627E0C0614B8CA232A1195BAEF6C7;
IL2CPP_EXTERN_C String_t* _stringLiteral05BD3EB4B0E38F9811FF6173E4DB563F3BEDBBF9;
IL2CPP_EXTERN_C String_t* _stringLiteral0CC020C4425B6477B2EE0BFC6A4A75C22CECDF20;
IL2CPP_EXTERN_C String_t* _stringLiteral0D38C76DB2F4FAE3FAC5A9C6EB4BA532CBC7500E;
IL2CPP_EXTERN_C String_t* _stringLiteral1132B207B4DB3036C424089107B143E1FB581C61;
IL2CPP_EXTERN_C String_t* _stringLiteral1256B19FCB217438D8AC3048BC752499FC2CA341;
IL2CPP_EXTERN_C String_t* _stringLiteral1C3CE03CEDB9C0F6B4207E4C62000FEC423A4C29;
IL2CPP_EXTERN_C String_t* _stringLiteral1EEE61617972FA3974C71FBE41B3B9982DA8F278;
IL2CPP_EXTERN_C String_t* _stringLiteral29B575E0966A0693D2D8F7F15CB13D16060F52EC;
IL2CPP_EXTERN_C String_t* _stringLiteral2C248C8016DCE1C0A1219BFC85DB8FF3DEFE279A;
IL2CPP_EXTERN_C String_t* _stringLiteral2E74FF054C8310FCE056CB359DCA68F5C87B9CDA;
IL2CPP_EXTERN_C String_t* _stringLiteral3568BA27E87963F5754445100B1D0E12521BB8FE;
IL2CPP_EXTERN_C String_t* _stringLiteral46247ED5E9EC14400EC37FA4C89C26AC315D2B35;
IL2CPP_EXTERN_C String_t* _stringLiteral54DD1D57ADDB8721B37BAA0153957778D2876D6C;
IL2CPP_EXTERN_C String_t* _stringLiteral68B65A9BB6C0864894430E3B36A206D8F3B25C48;
IL2CPP_EXTERN_C String_t* _stringLiteral6B29A7E2E23BAD776B963D3FC1104D9CC58BFE5A;
IL2CPP_EXTERN_C String_t* _stringLiteral772E9667E7E3B3DE819DF3DC1FFF1D85DF261445;
IL2CPP_EXTERN_C String_t* _stringLiteral7AED43E3257310FC2C5F96C1C0980DF37F557C09;
IL2CPP_EXTERN_C String_t* _stringLiteral7D11E39AD4497FEA6A802C702BDB1619CEAF344D;
IL2CPP_EXTERN_C String_t* _stringLiteral7DBEFC6CD4E1AD8D9CFD6670B1976D88EA855336;
IL2CPP_EXTERN_C String_t* _stringLiteral8D2AD4DAFB4EF8F1DB743A6F900E97FC8D41EEBC;
IL2CPP_EXTERN_C String_t* _stringLiteral8E9B18096FEC56A8223895CEE1E406435E99783B;
IL2CPP_EXTERN_C String_t* _stringLiteral9845E704C6377D55B31D91581AF8383ACE36E871;
IL2CPP_EXTERN_C String_t* _stringLiteral9A124BEF9FEAF7B87504CB4316BCDDFF746F188E;
IL2CPP_EXTERN_C String_t* _stringLiteral9B8E331604FB4228792E2D6847B72782B9C0F539;
IL2CPP_EXTERN_C String_t* _stringLiteral9CFDEC4F0730A635540C578A3E65B7AED5B00F19;
IL2CPP_EXTERN_C String_t* _stringLiteralAA9EA2225534F07F26C01F39EE4DB3C4F742B10A;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralC6410690FDEC5FEA30BC864DD3E90E262C26F17D;
IL2CPP_EXTERN_C String_t* _stringLiteralC7B59E44CF6A7D4928C046D4C6907A9315E38110;
IL2CPP_EXTERN_C String_t* _stringLiteralC9492E2F4F9998EF2D02BE09480EAEB4B85401E6;
IL2CPP_EXTERN_C String_t* _stringLiteralD81C8A7EA4EA5A4BC92B3159AE43F72EE7F6DB21;
IL2CPP_EXTERN_C String_t* _stringLiteralDC1E91EBA187E6079D1DEEE5F30C4C8B5DC9AD71;
IL2CPP_EXTERN_C String_t* _stringLiteralDC247B90EEB07301B67099EF2DB78151B7EAE3C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE84A77E3D066B0D7A58F20BF0ADCE0D46E9D9C28;
IL2CPP_EXTERN_C String_t* _stringLiteralF20BC63A74E5811508D63CE75D03AE0C2E46F3C8;
IL2CPP_EXTERN_C String_t* _stringLiteralF40C59FD620EB85CFE894572CA45F79D5D1CBB9B;
IL2CPP_EXTERN_C String_t* _stringLiteralFDB746CCD97F49964BB5AF0A256323B51C7EED53;
IL2CPP_EXTERN_C String_t* _stringLiteralFE5C38FDDB9974EACD012416E11429EC136C692A;
IL2CPP_EXTERN_C String_t* _stringLiteralFE8461848C7FCD96F77E7B77A70D810A2E1895C6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisSortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C_m82F0C954C0465802943A91E727246946D56AF956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8_m32AE6BCB1B9F29861AAA00EAB8603BEA591770A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710_m808A5384C648E38F30A9543161719E39F6A3ED61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF965333AC4A72A79CD259D606B290356AB37749B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFC11B5145275FFA59DFE825E1CF4E76E01479EE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m23BA0CA50ED3D2B2D9AD476BE1139075A4C70BD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4B1EF8B070BDD7F2FA96536307526800F83FBC61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m545CD6DBA4BCB85CF0E9E04EFECBB702BDF867CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6B3E8DF783FF37DF5C0D0783ECC28CB81D7800D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8_m44BA97AD29CAE69EFAFA406BEC9BC9AB0DC5DFE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D_mBFEE80D7AEF0E476676469BB8C6767053A8C5C47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTilemapCollider2D_t66245B4B99A740FBC2F1EA873E82EE808B57E177_m401465FD86AF40A094A65CA1C995DE017FBEA77E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_mF4C69736AF26C07B7B6DF0FEF81C69F29B5B81B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1536FF1BB49D4CCA174D71D1D474D08CD53BE760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1CB35939B2AF7CCD45EE1A6198F9B7BFDF5905BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m272495EFAD67470B2A2BC3FBBBA7A463ACD22ADA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m96738B846C1581D66034AD5C445C7D1FA3C50ECF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mACB443D71A089820C6C2DBF83849FCF1ECF3BE58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD83344EFEEFE4B81A1881DEC0D23DCED56729953_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m89952A02C0CD6523A678A2BAED73E20062118455_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m05B12629C12596B6D5332C86AFCC5AF47ED6C952_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB443DCE1ED25A515DEB4C735014A551CB89E8405_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m1F618947C9151460E213FA7B7AB79B1980E0E270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m471FCE4311CFB30728E350890B7A90FD5FDD237E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m65880922C2EDC50E1841EB72EC6A0224FDE77934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mAE053CC7BD3B757C344D70B3C6619E9E0A593CAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2875DE16B62D8DF415E19E34D1FE08B8CD509C02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8520B95689012023CC16D9D123CC7EF981F0C046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFDF496834F3F5C3E9810331DF0A87ED05E8D3576_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2045D625ADB5C6D73108B3E4EC952779C4A23EA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3D33EA565508FFE83EEFE70888D48CAA86ED4AF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m727F3C923A41AA32BC9CDB9F7E8784563DA75442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m720AC6190909A40E0276F47714B94116A02221AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m82378840486C9FDAFDAE42CD9E0738428C5EC8C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDD8A3A52561D071E3ACDCF294957F3799DF26B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_mD30BD3A93DAF8B841F2BE37B3780DE390A04085A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct LayerEventSettingU5BU5D_t1A9B422372D5D6281A43B7E1B860EC63598A1815;
struct LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C;
struct LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct List_1U5BU2CU5D_t8F789D376BCF4DBC7C84974697314D3AC7A621CA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<FunkyCode.LightCollider2D>
struct List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LightCollider2DU5BU5D_t2C1D980B99EF203700319B0E755A8A6F70A4380A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LightCollider2DU5BU5D_t2C1D980B99EF203700319B0E755A8A6F70A4380A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<FunkyCode.LightCollision2D>
struct List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<FunkyCode.LightTile>
struct List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<FunkyCode.LightTilemapCollider2D>
struct List_1_t53210D23CC79388549233000764405C28B06BEFA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LightTilemapCollider2DU5BU5D_t27AF88C3DC925BFD01DDD0CB094F6B2F24A29697* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t53210D23CC79388549233000764405C28B06BEFA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LightTilemapCollider2DU5BU5D_t27AF88C3DC925BFD01DDD0CB094F6B2F24A29697* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<FunkyCode.MeshObject>
struct List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MeshObjectU5BU5D_t925C185E4319C808EA533A1ACCEBDC06233C92AB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MeshObjectU5BU5D_t925C185E4319C808EA533A1ACCEBDC06233C92AB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2>
struct List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Polygon2U5BU5D_tB3FC47D2BF1F996FEA9E45FBAF784EF60CE74A55* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Polygon2U5BU5D_tB3FC47D2BF1F996FEA9E45FBAF784EF60CE74A55* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// FunkyCode.Lighting2DMaterial.BumpMask
struct BumpMask_t49876927B265478932B35E71DA5873E621748801  : public RuntimeObject
{
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.BumpMask::normalPixelToLightSprite
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___normalPixelToLightSprite_0;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.BumpMask::normalObjectToLightSprite
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___normalObjectToLightSprite_1;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.BumpMask::bumpedDaySprite
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___bumpedDaySprite_2;
};

// FunkyCode.LightingSettings.Chunks
struct Chunks_t4E49B7B7A566B45E2FF48AB5CE59D6FF42ABFA10  : public RuntimeObject
{
	// System.Boolean FunkyCode.LightingSettings.Chunks::enabled
	bool ___enabled_0;
	// System.Int32 FunkyCode.LightingSettings.Chunks::chunkSize
	int32_t ___chunkSize_1;
};

// FunkyCode.LightingSettings.EventPreset
struct EventPreset_t66A7EA3289F9C1FF587BE9EF2DF55CF81CF65F0A  : public RuntimeObject
{
	// System.String FunkyCode.LightingSettings.EventPreset::name
	String_t* ___name_0;
	// FunkyCode.LightingSettings.EventPresetLayers FunkyCode.LightingSettings.EventPreset::layerSetting
	EventPresetLayers_t2E44C99CDDEEDFA3B19BDF2B6635379F05F24D4A* ___layerSetting_1;
};

// FunkyCode.LightingSettings.EventPresetLayers
struct EventPresetLayers_t2E44C99CDDEEDFA3B19BDF2B6635379F05F24D4A  : public RuntimeObject
{
	// LayerEventSetting[] FunkyCode.LightingSettings.EventPresetLayers::list
	LayerEventSettingU5BU5D_t1A9B422372D5D6281A43B7E1B860EC63598A1815* ___list_0;
};

// LayerEventSetting
struct LayerEventSetting_t6CA000F050E7540EB8666EDEDD02952AB9E05BAC  : public RuntimeObject
{
	// System.Int32 LayerEventSetting::layerID
	int32_t ___layerID_0;
};

// FunkyCode.LightColliderShape
struct LightColliderShape_tD23C84CBA7B2840DDA09A49B9A21D15050F23FE9  : public RuntimeObject
{
	// FunkyCode.LightCollider2D/ShadowType FunkyCode.LightColliderShape::shadowType
	int32_t ___shadowType_0;
	// FunkyCode.LightCollider2D/MaskType FunkyCode.LightColliderShape::maskType
	int32_t ___maskType_1;
	// FunkyCode.LightCollider2D/MaskPivot FunkyCode.LightColliderShape::maskPivot
	int32_t ___maskPivot_2;
	// FunkyCode.LightColliderTransform FunkyCode.LightColliderShape::transform2D
	LightColliderTransform_t5CE8EAB088E35B65A6FB16B4D9C5FE10529D365C* ___transform2D_3;
	// UnityEngine.Transform FunkyCode.LightColliderShape::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_4;
	// FunkyCode.LightShape.Collider2DShape FunkyCode.LightColliderShape::collider2DShape
	Collider2DShape_tAF6ADDE0E774C06B594E23CD3EDD692314EE53F4* ___collider2DShape_5;
	// FunkyCode.LightShape.CompositeCollider2DShape FunkyCode.LightColliderShape::compositeShape
	CompositeCollider2DShape_t1A95207D8A3E361B4694CE001345A12FB611664C* ___compositeShape_6;
	// FunkyCode.LightShape.SpriteShape FunkyCode.LightColliderShape::spriteShape
	SpriteShape_tCCA2A2247D8CB9EF2FE69B47F7FCEEA313CE01E1* ___spriteShape_7;
	// FunkyCode.LightShape.SpritePhysicsShape FunkyCode.LightColliderShape::spritePhysicsShape
	SpritePhysicsShape_t2D07C474C4F4A0D7942EDB4EC4F4CB472F7FC888* ___spritePhysicsShape_8;
	// FunkyCode.LightShape.MeshRendererShape FunkyCode.LightColliderShape::meshShape
	MeshRendererShape_tC193DD208D035762FBE951AAA017FF72DCCC9082* ___meshShape_9;
	// FunkyCode.LightShape.SkinnedMeshRendererShape FunkyCode.LightColliderShape::skinnedMeshShape
	SkinnedMeshRendererShape_t6985EF091F4BBDE9A1AD402910CB1A1998767B80* ___skinnedMeshShape_10;
	// FunkyCode.LightShape.Collider3DShape FunkyCode.LightColliderShape::collider3DShape
	Collider3DShape_t8C4300F45946A263397E81640B1D363EE8760D8B* ___collider3DShape_11;
};

// FunkyCode.LightingMaterial
struct LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE  : public RuntimeObject
{
	// System.String FunkyCode.LightingMaterial::path
	String_t* ___path_0;
	// UnityEngine.Texture FunkyCode.LightingMaterial::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_1;
	// UnityEngine.Material FunkyCode.LightingMaterial::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
};

// FunkyCode.Lighting2DMaterial.Lights
struct Lights_tECCB145250BAC426989E77FB374536421B467FE8  : public RuntimeObject
{
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Lights::pointLight
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___pointLight_0;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Lights::spriteLight
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___spriteLight_1;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Lights::freeFormLight
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___freeFormLight_2;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Lights::freeFormLightEdge
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___freeFormLightEdge_3;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Lights::pointOcclusion
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___pointOcclusion_4;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Lights::lightOcclusion
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___lightOcclusion_5;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Lights::freeformOcclusion
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___freeformOcclusion_6;
};

// FunkyCode.Lighting2DMaterial.Mask
struct Mask_t8B4899F29A477996CF8F6529A7035C5388D309EE  : public RuntimeObject
{
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Mask::mask
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___mask_0;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Mask::maskTranslucency
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___maskTranslucency_1;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Mask::dayMask
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___dayMask_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// FunkyCode.MeshObject
struct MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF  : public RuntimeObject
{
	// UnityEngine.Mesh FunkyCode.MeshObject::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_0;
	// UnityEngine.Vector3[] FunkyCode.MeshObject::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_1;
	// UnityEngine.Vector2[] FunkyCode.MeshObject::uv
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uv_2;
	// System.Int32[] FunkyCode.MeshObject::triangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles_3;
};

// FunkyCode.EventHandling.Object
struct Object_t179F01F942C4F00D02406C0227229D635FBF2CEC  : public RuntimeObject
{
	// System.Collections.Generic.List`1<FunkyCode.LightCollider2D> FunkyCode.EventHandling.Object::listenersCache
	List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* ___listenersCache_0;
	// System.Collections.Generic.List`1<FunkyCode.LightCollision2D> FunkyCode.EventHandling.Object::listenersInLight
	List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* ___listenersInLight_1;
	// System.Collections.Generic.List`1<FunkyCode.LightCollider2D> FunkyCode.EventHandling.Object::listenersInLightColliders
	List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* ___listenersInLightColliders_2;
	// FunkyCode.EventHandling.CollisionEvent2D FunkyCode.EventHandling.Object::collisionEvents
	CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* ___collisionEvents_3;
};

// FunkyCode.SpriteExtension.PhysicsShape
struct PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7  : public RuntimeObject
{
	// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.SpriteExtension.PhysicsShape::polygons
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* ___polygons_0;
	// FunkyCode.MeshObject FunkyCode.SpriteExtension.PhysicsShape::shapeMeshObject
	MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* ___shapeMeshObject_1;
	// UnityEngine.Sprite FunkyCode.SpriteExtension.PhysicsShape::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_2;
};

// FunkyCode.Utilities.Polygon2
struct Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3  : public RuntimeObject
{
	// UnityEngine.Vector2[] FunkyCode.Utilities.Polygon2::points
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___points_0;
};

// FunkyCode.Lighting2DMaterial.Room
struct Room_t9D9FF97811BA8DCE6F0FC2A4D791DD0846D767FD  : public RuntimeObject
{
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Room::roomMask
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___roomMask_0;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Room::roomMultiply
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___roomMultiply_1;
};

// FunkyCode.Lighting2DMaterial.Shadow
struct Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD  : public RuntimeObject
{
	// UnityEngine.Sprite FunkyCode.Lighting2DMaterial.Shadow::penumbraSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___penumbraSprite_0;
	// UnityEngine.Sprite FunkyCode.Lighting2DMaterial.Shadow::penumbraSprite2
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___penumbraSprite2_1;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Shadow::softShadow
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___softShadow_2;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Shadow::softShadowDefault
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___softShadowDefault_3;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Shadow::alphaShadow
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___alphaShadow_4;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Shadow::legacyGPUShadow
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___legacyGPUShadow_5;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Shadow::legacyCPUShadow
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___legacyCPUShadow_6;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Shadow::spriteProjection
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___spriteProjection_7;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Shadow::dayCPUShadow
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___dayCPUShadow_8;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Shadow::spriteShadow
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___spriteShadow_9;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Shadow::depthDayShadow
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___depthDayShadow_10;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Shadow::softDistanceShadow
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___softDistanceShadow_11;
	// FunkyCode.LightingMaterial FunkyCode.Lighting2DMaterial.Shadow::fastShadow
	LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* ___fastShadow_12;
};

// FunkyCode.Rendering.Day.Sorting.SortList
struct SortList_t06AC051DCDD31922C338190E8E262E4032CA216F  : public RuntimeObject
{
	// System.Int32 FunkyCode.Rendering.Day.Sorting.SortList::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_0;
	// FunkyCode.Rendering.Day.Sorting.SortObject[] FunkyCode.Rendering.Day.Sorting.SortList::List
	SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE* ___List_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// FunkyCode.Chunks.TilemapManager
struct TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C  : public RuntimeObject
{
	// FunkyCode.LightTile[] FunkyCode.Chunks.TilemapManager::display
	LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D* ___display_0;
	// System.Collections.Generic.List`1<FunkyCode.LightTile>[,] FunkyCode.Chunks.TilemapManager::maps
	List_1U5BU2CU5D_t8F789D376BCF4DBC7C84974697314D3AC7A621CA* ___maps_2;
	// System.Int32 FunkyCode.Chunks.TilemapManager::distplayCount
	int32_t ___distplayCount_3;
	// System.Collections.Generic.List`1<FunkyCode.LightTile> FunkyCode.Chunks.TilemapManager::tiles
	List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* ___tiles_4;
	// FunkyCode.LightTilemapCollider.Base FunkyCode.Chunks.TilemapManager::tilemapCollider
	Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* ___tilemapCollider_5;
	// System.Boolean FunkyCode.Chunks.TilemapManager::initialized
	bool ___initialized_6;
};

struct TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_StaticFields
{
	// System.Int32 FunkyCode.Chunks.TilemapManager::ChunkSize
	int32_t ___ChunkSize_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<FunkyCode.LightTile>
struct Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<FunkyCode.LightTilemapCollider2D>
struct Enumerator_t103A698C10B736FC92F9DAC6DA9B9E7F8D3EA9C9 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t53210D23CC79388549233000764405C28B06BEFA* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<FunkyCode.Utilities.Polygon2>
struct Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* ____current_3;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>
struct NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// FunkyCode.LightCollision2D
struct LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 
{
	// FunkyCode.Light2D FunkyCode.LightCollision2D::light
	Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* ___light_0;
	// FunkyCode.LightCollider2D FunkyCode.LightCollision2D::collider
	LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* ___collider_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> FunkyCode.LightCollision2D::points
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___points_2;
	// FunkyCode.LightCollision2D/State FunkyCode.LightCollision2D::state
	int32_t ___state_3;
};
// Native definition for P/Invoke marshalling of FunkyCode.LightCollision2D
struct LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7_marshaled_pinvoke
{
	Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* ___light_0;
	LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* ___collider_1;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___points_2;
	int32_t ___state_3;
};
// Native definition for COM marshalling of FunkyCode.LightCollision2D
struct LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7_marshaled_com
{
	Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* ___light_0;
	LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* ___collider_1;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___points_2;
	int32_t ___state_3;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// FunkyCode.Rendering.Day.Sorting.SortObject
struct SortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C 
{
	// System.Single FunkyCode.Rendering.Day.Sorting.SortObject::Distance
	float ___Distance_0;
	// System.Object FunkyCode.Rendering.Day.Sorting.SortObject::LightObject
	RuntimeObject* ___LightObject_1;
};
// Native definition for P/Invoke marshalling of FunkyCode.Rendering.Day.Sorting.SortObject
struct SortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C_marshaled_pinvoke
{
	float ___Distance_0;
	Il2CppIUnknown* ___LightObject_1;
};
// Native definition for COM marshalling of FunkyCode.Rendering.Day.Sorting.SortObject
struct SortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C_marshaled_com
{
	float ___Distance_0;
	Il2CppIUnknown* ___LightObject_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE__padding[48];
	};
};

// System.Collections.Generic.List`1/Enumerator<FunkyCode.LightCollision2D>
struct Enumerator_tE641AA00FCC079FDDA0627B65952706B9B3F894F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 ____current_3;
};

// System.Nullable`1<UnityEngine.Vector2>
struct Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::12EF3FF260A04A59129A712FCB45E4662857B045780B4412F9F42C5EF14FC1CE
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___12EF3FF260A04A59129A712FCB45E4662857B045780B4412F9F42C5EF14FC1CE_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::48C65580A5846846099BDB02754590E5F0D1CA0F89FDCE7944BAC5F986E87B97
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___48C65580A5846846099BDB02754590E5F0D1CA0F89FDCE7944BAC5F986E87B97_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_2;
};

// FunkyCode.EventHandling.Base
struct Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE  : public RuntimeObject
{
};

struct Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields
{
	// UnityEngine.Vector2 FunkyCode.EventHandling.Base::edgeLeft
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___edgeLeft_0;
	// UnityEngine.Vector2 FunkyCode.EventHandling.Base::edgeRight
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___edgeRight_1;
	// UnityEngine.Vector2 FunkyCode.EventHandling.Base::projectionLeft
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___projectionLeft_2;
	// UnityEngine.Vector2 FunkyCode.EventHandling.Base::projectionRight
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___projectionRight_3;
	// FunkyCode.Utilities.Polygon2 FunkyCode.EventHandling.Base::eventPoly
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* ___eventPoly_4;
};

// FunkyCode.LightTilemapCollider.Base
struct Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2  : public RuntimeObject
{
	// FunkyCode.LightTilemapCollider.ShadowType FunkyCode.LightTilemapCollider.Base::shadowType
	int32_t ___shadowType_0;
	// FunkyCode.LightTilemapCollider.MaskType FunkyCode.LightTilemapCollider.Base::maskType
	int32_t ___maskType_1;
	// System.Single FunkyCode.LightTilemapCollider.Base::radius
	float ___radius_2;
	// UnityEngine.Rect FunkyCode.LightTilemapCollider.Base::rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_3;
	// UnityEngine.GameObject FunkyCode.LightTilemapCollider.Base::gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_4;
	// UnityEngine.Transform FunkyCode.LightTilemapCollider.Base::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_5;
	// FunkyCode.TilemapProperties FunkyCode.LightTilemapCollider.Base::properties
	TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* ___properties_6;
	// System.Collections.Generic.List`1<FunkyCode.LightTile> FunkyCode.LightTilemapCollider.Base::mapTiles
	List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* ___mapTiles_7;
	// FunkyCode.Chunks.TilemapManager FunkyCode.LightTilemapCollider.Base::chunkManager
	TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* ___chunkManager_8;
};

// UnityEngine.BoundsInt
struct BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 
{
	// UnityEngine.Vector3Int UnityEngine.BoundsInt::m_Position
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position_0;
	// UnityEngine.Vector3Int UnityEngine.BoundsInt::m_Size
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Size_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Tilemaps.ITilemap
struct ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164  : public RuntimeObject
{
	// UnityEngine.Tilemaps.Tilemap UnityEngine.Tilemaps.ITilemap::m_Tilemap
	Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* ___m_Tilemap_1;
	// System.Boolean UnityEngine.Tilemaps.ITilemap::m_AddToList
	bool ___m_AddToList_2;
	// System.Int32 UnityEngine.Tilemaps.ITilemap::m_RefreshCount
	int32_t ___m_RefreshCount_3;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3Int> UnityEngine.Tilemaps.ITilemap::m_RefreshPos
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___m_RefreshPos_4;
};

struct ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_StaticFields
{
	// UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::s_Instance
	ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___s_Instance_0;
};

// FunkyCode.LightTransform
struct LightTransform_t5531F5CC0B11D9FFAE4C3C130ECE8AA1B674E333  : public RuntimeObject
{
	// System.Boolean FunkyCode.LightTransform::update
	bool ___update_0;
	// UnityEngine.Vector2 FunkyCode.LightTransform::position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_1;
	// System.Single FunkyCode.LightTransform::rotation
	float ___rotation_2;
	// System.Single FunkyCode.LightTransform::size
	float ___size_3;
	// System.Single FunkyCode.LightTransform::spotAngleInner
	float ___spotAngleInner_4;
	// System.Single FunkyCode.LightTransform::spotAngleOuter
	float ___spotAngleOuter_5;
	// System.Single FunkyCode.LightTransform::outerAngle
	float ___outerAngle_6;
	// UnityEngine.Color FunkyCode.LightTransform::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_7;
	// UnityEngine.Sprite FunkyCode.LightTransform::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_8;
	// System.Boolean FunkyCode.LightTransform::flipX
	bool ___flipX_9;
	// System.Boolean FunkyCode.LightTransform::flipY
	bool ___flipY_10;
	// System.Single FunkyCode.LightTransform::normalIntensity
	float ___normalIntensity_11;
	// System.Single FunkyCode.LightTransform::normalDepth
	float ___normalDepth_12;
	// UnityEngine.Rect FunkyCode.LightTransform::WorldRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___WorldRect_13;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// FunkyCode.SpriteTransform
struct SpriteTransform_tA8B00B6C4F4F0A8CB71871036C089CE521BD2888 
{
	// UnityEngine.Vector2 FunkyCode.SpriteTransform::position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_0;
	// UnityEngine.Vector2 FunkyCode.SpriteTransform::scale
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale_1;
	// System.Single FunkyCode.SpriteTransform::rotation
	float ___rotation_2;
	// UnityEngine.Rect FunkyCode.SpriteTransform::uv
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv_3;
};

// UnityEngine.Tilemaps.TileData
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F 
{
	// System.Int32 UnityEngine.Tilemaps.TileData::m_Sprite
	int32_t ___m_Sprite_0;
	// UnityEngine.Color UnityEngine.Tilemaps.TileData::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_1;
	// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.TileData::m_Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform_2;
	// System.Int32 UnityEngine.Tilemaps.TileData::m_GameObject
	int32_t ___m_GameObject_3;
	// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.TileData::m_Flags
	int32_t ___m_Flags_4;
	// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.TileData::m_ColliderType
	int32_t ___m_ColliderType_5;
};

struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_StaticFields
{
	// UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileData::Default
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___Default_6;
};

// FunkyCode.Utilities.VirtualSpriteRenderer
struct VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB  : public RuntimeObject
{
	// UnityEngine.Sprite FunkyCode.Utilities.VirtualSpriteRenderer::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_0;
	// UnityEngine.Color FunkyCode.Utilities.VirtualSpriteRenderer::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	// UnityEngine.Material FunkyCode.Utilities.VirtualSpriteRenderer::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Boolean FunkyCode.Utilities.VirtualSpriteRenderer::flipX
	bool ___flipX_3;
	// System.Boolean FunkyCode.Utilities.VirtualSpriteRenderer::flipY
	bool ___flipY_4;
	// UnityEngine.SpriteDrawMode FunkyCode.Utilities.VirtualSpriteRenderer::drawMode
	int32_t ___drawMode_5;
	// UnityEngine.SpriteTileMode FunkyCode.Utilities.VirtualSpriteRenderer::tileMode
	int32_t ___tileMode_6;
	// UnityEngine.Vector2 FunkyCode.Utilities.VirtualSpriteRenderer::size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size_7;
};

// UnityEngine.BoundsInt/PositionEnumerator
struct PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979 
{
	// UnityEngine.Vector3Int UnityEngine.BoundsInt/PositionEnumerator::_min
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ____min_0;
	// UnityEngine.Vector3Int UnityEngine.BoundsInt/PositionEnumerator::_max
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ____max_1;
	// UnityEngine.Vector3Int UnityEngine.BoundsInt/PositionEnumerator::_current
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ____current_2;
};

// FunkyCode.LightShape.Base
struct Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4  : public RuntimeObject
{
	// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::WorldPolygons
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* ___WorldPolygons_0;
	// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::WorldCache
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* ___WorldCache_1;
	// System.Nullable`1<UnityEngine.Vector2> FunkyCode.LightShape.Base::WorldPoint
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD ___WorldPoint_2;
	// UnityEngine.Rect FunkyCode.LightShape.Base::WorldRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___WorldRect_3;
	// UnityEngine.Rect FunkyCode.LightShape.Base::WorldDayRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___WorldDayRect_4;
	// UnityEngine.Rect FunkyCode.LightShape.Base::IsoWorldRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___IsoWorldRect_5;
	// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::LocalPolygons
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* ___LocalPolygons_6;
	// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::LocalPolygonsCache
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* ___LocalPolygonsCache_7;
	// System.Collections.Generic.List`1<FunkyCode.MeshObject> FunkyCode.LightShape.Base::Meshes
	List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* ___Meshes_8;
	// UnityEngine.Transform FunkyCode.LightShape.Base::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_9;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// FunkyCode.LightTilemapCollider.Hexagon
struct Hexagon_tF485227D12FC1DC72A9D432DFB5CD7ADC867C9AC  : public Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2
{
	// UnityEngine.Tilemaps.Tilemap FunkyCode.LightTilemapCollider.Hexagon::tilemap2D
	Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* ___tilemap2D_9;
};

// FunkyCode.LightTilemapCollider.Isometric
struct Isometric_tFF8D90125CF28DB5D80059E20536A2C185EDFF5E  : public Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2
{
	// System.Boolean FunkyCode.LightTilemapCollider.Isometric::ZasY
	bool ___ZasY_9;
	// UnityEngine.Tilemaps.Tilemap FunkyCode.LightTilemapCollider.Isometric::tilemap2D
	Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* ___tilemap2D_10;
};

// FunkyCode.EventHandling.LightCollider
struct LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B  : public Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE
{
};

struct LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields
{
	// UnityEngine.Vector2[] FunkyCode.EventHandling.LightCollider::removePointsColliding
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___removePointsColliding_5;
	// System.Int32 FunkyCode.EventHandling.LightCollider::removePointsCollidingCount
	int32_t ___removePointsCollidingCount_6;
	// FunkyCode.LightCollision2D[] FunkyCode.EventHandling.LightCollider::removeCollisions
	LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C* ___removeCollisions_7;
	// System.Int32 FunkyCode.EventHandling.LightCollider::removeCollisionsCount
	int32_t ___removeCollisionsCount_8;
};

// FunkyCode.LightTile
struct LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06  : public RuntimeObject
{
	// UnityEngine.Vector3Int FunkyCode.LightTile::gridPosition
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___gridPosition_0;
	// System.Nullable`1<UnityEngine.Vector2> FunkyCode.LightTile::worldPosition
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD ___worldPosition_1;
	// System.Single FunkyCode.LightTile::worldRotation
	float ___worldRotation_2;
	// UnityEngine.Vector2 FunkyCode.LightTile::worldScale
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___worldScale_3;
	// System.Single FunkyCode.LightTile::worldRadius
	float ___worldRadius_4;
	// System.Boolean FunkyCode.LightTile::occluded
	bool ___occluded_5;
	// UnityEngine.Tilemaps.Tile/ColliderType FunkyCode.LightTile::colliderType
	int32_t ___colliderType_6;
	// UnityEngine.Sprite FunkyCode.LightTile::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_7;
	// UnityEngine.Rect FunkyCode.LightTile::uv
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv_8;
	// UnityEngine.Vector2 FunkyCode.LightTile::scale
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale_9;
	// System.Single FunkyCode.LightTile::rotation
	float ___rotation_10;
	// FunkyCode.SpriteMeshObject FunkyCode.LightTile::spriteMeshObject
	SpriteMeshObject_t091413E240336D1284B8D70ED8A08C3A17E9DE23* ___spriteMeshObject_11;
	// FunkyCode.MeshObject FunkyCode.LightTile::shapeMesh
	MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* ___shapeMesh_12;
	// FunkyCode.SpriteExtension.PhysicsShape FunkyCode.LightTile::spritePhysicsShape
	PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7* ___spritePhysicsShape_13;
	// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightTile::spritePhysicsShapePolygons
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* ___spritePhysicsShapePolygons_14;
	// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightTile::localPolygons
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* ___localPolygons_15;
	// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightTile::worldPolygons
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* ___worldPolygons_16;
	// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightTile::worldPolygonsCache
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* ___worldPolygonsCache_17;
};

// FunkyCode.EventHandling.LightTilemap
struct LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4  : public Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE
{
};

struct LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields
{
	// UnityEngine.Vector2[] FunkyCode.EventHandling.LightTilemap::removePointsColliding
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___removePointsColliding_5;
	// System.Int32 FunkyCode.EventHandling.LightTilemap::removePointsCollidingCount
	int32_t ___removePointsCollidingCount_6;
	// FunkyCode.LightCollision2D[] FunkyCode.EventHandling.LightTilemap::removeCollisions
	LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C* ___removeCollisions_7;
	// System.Int32 FunkyCode.EventHandling.LightTilemap::removeCollisionsCount
	int32_t ___removeCollisionsCount_8;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// FunkyCode.LightTilemapCollider.Rectangle
struct Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4  : public Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2
{
	// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightTilemapCollider.Rectangle::compositeColliders
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* ___compositeColliders_9;
	// FunkyCode.LightTilemapCollider2D FunkyCode.LightTilemapCollider.Rectangle::lightTilemapCollider2D
	LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* ___lightTilemapCollider2D_10;
	// UnityEngine.Tilemaps.Tilemap FunkyCode.LightTilemapCollider.Rectangle::tilemap2D
	Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* ___tilemap2D_11;
	// System.Boolean FunkyCode.LightTilemapCollider.Rectangle::shadowOptimization
	bool ___shadowOptimization_12;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// FunkyCode.TilemapProperties
struct TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310  : public RuntimeObject
{
	// UnityEngine.Vector2 FunkyCode.TilemapProperties::cellSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cellSize_0;
	// UnityEngine.Vector2 FunkyCode.TilemapProperties::cellAnchor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cellAnchor_1;
	// UnityEngine.Vector2 FunkyCode.TilemapProperties::cellGap
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cellGap_2;
	// UnityEngine.Vector2 FunkyCode.TilemapProperties::colliderOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___colliderOffset_3;
	// UnityEngine.BoundsInt FunkyCode.TilemapProperties::area
	BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___area_4;
	// UnityEngine.Tilemaps.Tilemap FunkyCode.TilemapProperties::tilemap
	Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* ___tilemap_5;
	// UnityEngine.Grid FunkyCode.TilemapProperties::grid
	Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* ___grid_6;
	// UnityEngine.Transform FunkyCode.TilemapProperties::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_7;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// FunkyCode.LightShape.Collider2DShape
struct Collider2DShape_tAF6ADDE0E774C06B594E23CD3EDD692314EE53F4  : public Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4
{
	// System.Boolean FunkyCode.LightShape.Collider2DShape::edgeCollider2D
	bool ___edgeCollider2D_10;
};

// FunkyCode.LightShape.Collider3DShape
struct Collider3DShape_t8C4300F45946A263397E81640B1D363EE8760D8B  : public Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4
{
	// System.Boolean FunkyCode.LightShape.Collider3DShape::edgeCollider2D
	bool ___edgeCollider2D_10;
};

// FunkyCode.EventHandling.CollisionEvent2D
struct CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25  : public MulticastDelegate_t
{
};

// FunkyCode.LightShape.CompositeCollider2DShape
struct CompositeCollider2DShape_t1A95207D8A3E361B4694CE001345A12FB611664C  : public Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4
{
	// UnityEngine.CompositeCollider2D FunkyCode.LightShape.CompositeCollider2DShape::compositeCollider
	CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* ___compositeCollider_10;
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// FunkyCode.LightShape.MeshRendererShape
struct MeshRendererShape_tC193DD208D035762FBE951AAA017FF72DCCC9082  : public Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4
{
	// UnityEngine.MeshFilter FunkyCode.LightShape.MeshRendererShape::meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter_10;
	// UnityEngine.MeshRenderer FunkyCode.LightShape.MeshRendererShape::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_11;
	// UnityEngine.Mesh FunkyCode.LightShape.MeshRendererShape::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_12;
};

// FunkyCode.LightingSettings.ProjectSettings
struct ProjectSettings_tF1A6266C74517361A17F8055B28EE33E3398665F  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// FunkyCode.LightingSettings.RenderingMode FunkyCode.LightingSettings.ProjectSettings::renderingMode
	int32_t ___renderingMode_4;
	// FunkyCode.LightingSettings.EditorView FunkyCode.LightingSettings.ProjectSettings::editorView
	EditorView_t599C5C5AE6D9722C1D05952454777D9F562DFEF3* ___editorView_5;
	// FunkyCode.LightingSettings.Gizmos FunkyCode.LightingSettings.ProjectSettings::gizmos
	Gizmos_t78439F9F9CC75683F6AEF6C9A01B503778F72C05* ___gizmos_6;
	// FunkyCode.LightingSettings.Chunks FunkyCode.LightingSettings.ProjectSettings::chunks
	Chunks_t4E49B7B7A566B45E2FF48AB5CE59D6FF42ABFA10* ___chunks_7;
	// FunkyCode.LightingSettings.ColorSpace FunkyCode.LightingSettings.ProjectSettings::colorSpace
	int32_t ___colorSpace_8;
	// FunkyCode.LightingSettings.ManagerInternal FunkyCode.LightingSettings.ProjectSettings::managerInternal
	int32_t ___managerInternal_9;
	// FunkyCode.LightingSettings.ManagerInstance FunkyCode.LightingSettings.ProjectSettings::managerInstance
	int32_t ___managerInstance_10;
	// FunkyCode.LightingSettings.ShaderPreview FunkyCode.LightingSettings.ProjectSettings::shaderPreview
	int32_t ___shaderPreview_11;
	// System.Int32 FunkyCode.LightingSettings.ProjectSettings::MaxLightSize
	int32_t ___MaxLightSize_12;
	// FunkyCode.LightingSettings.MaterialOffScreen FunkyCode.LightingSettings.ProjectSettings::materialOffScreen
	int32_t ___materialOffScreen_13;
	// System.Boolean FunkyCode.LightingSettings.ProjectSettings::disable
	bool ___disable_14;
	// FunkyCode.LightingSettings.Profile FunkyCode.LightingSettings.ProjectSettings::profile
	Profile_tAD78BE693E7497B38FC822DC924DCB13A72E1949* ___profile_15;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// FunkyCode.LightShape.SkinnedMeshRendererShape
struct SkinnedMeshRendererShape_t6985EF091F4BBDE9A1AD402910CB1A1998767B80  : public Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4
{
	// UnityEngine.SkinnedMeshRenderer FunkyCode.LightShape.SkinnedMeshRendererShape::skinnedMeshRenderer
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___skinnedMeshRenderer_10;
};

// FunkyCode.LightShape.SpritePhysicsShape
struct SpritePhysicsShape_t2D07C474C4F4A0D7942EDB4EC4F4CB472F7FC888  : public Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4
{
	// UnityEngine.Sprite FunkyCode.LightShape.SpritePhysicsShape::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_10;
	// FunkyCode.SpriteExtension.PhysicsShape FunkyCode.LightShape.SpritePhysicsShape::physicsShape
	PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7* ___physicsShape_11;
	// UnityEngine.SpriteRenderer FunkyCode.LightShape.SpritePhysicsShape::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_12;
};

// FunkyCode.LightShape.SpriteShape
struct SpriteShape_tCCA2A2247D8CB9EF2FE69B47F7FCEEA313CE01E1  : public Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4
{
	// UnityEngine.Sprite FunkyCode.LightShape.SpriteShape::originalSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___originalSprite_10;
	// UnityEngine.SpriteRenderer FunkyCode.LightShape.SpriteShape::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_11;
	// FunkyCode.Utilities.VirtualSpriteRenderer FunkyCode.LightShape.SpriteShape::virtualSpriteRenderer
	VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB* ___virtualSpriteRenderer_12;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Tilemaps.TileBase
struct TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.GridLayout
struct GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.CompositeCollider2D
struct CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// UnityEngine.EdgeCollider2D
struct EdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// UnityEngine.Grid
struct Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE  : public GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B
{
};

// FunkyCode.LightCollider2D
struct LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FunkyCode.LightCollider2D/ShadowType FunkyCode.LightCollider2D::shadowType
	int32_t ___shadowType_4;
	// System.Int32 FunkyCode.LightCollider2D::shadowLayer
	int32_t ___shadowLayer_5;
	// FunkyCode.LightCollider2D/ShadowDistance FunkyCode.LightCollider2D::shadowDistance
	int32_t ___shadowDistance_6;
	// System.Single FunkyCode.LightCollider2D::shadowDistanceMin
	float ___shadowDistanceMin_7;
	// System.Single FunkyCode.LightCollider2D::shadowDistanceMax
	float ___shadowDistanceMax_8;
	// System.Single FunkyCode.LightCollider2D::shadowTranslucency
	float ___shadowTranslucency_9;
	// FunkyCode.LightCollider2D/MaskType FunkyCode.LightCollider2D::maskType
	int32_t ___maskType_10;
	// FunkyCode.LightSettings.MaskLit FunkyCode.LightCollider2D::maskLit
	int32_t ___maskLit_11;
	// FunkyCode.LightCollider2D/MaskPivot FunkyCode.LightCollider2D::maskPivot
	int32_t ___maskPivot_12;
	// System.Int32 FunkyCode.LightCollider2D::maskLayer
	int32_t ___maskLayer_13;
	// System.Single FunkyCode.LightCollider2D::maskLitCustom
	float ___maskLitCustom_14;
	// FunkyCode.LightingSettings.BumpMapMode FunkyCode.LightCollider2D::bumpMapMode
	BumpMapMode_t6A34FC9F18E4D274179FA244CF6CC9300948C080* ___bumpMapMode_15;
	// FunkyCode.EventHandling.CollisionEvent2D FunkyCode.LightCollider2D::collisionEvents
	CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* ___collisionEvents_16;
	// FunkyCode.LightSettings.LightEvent FunkyCode.LightCollider2D::lightOnEnter
	LightEvent_t551CA2B4FEE01D7002F186216C3BE29699A6C1E2* ___lightOnEnter_17;
	// FunkyCode.LightSettings.LightEvent FunkyCode.LightCollider2D::lightOnExit
	LightEvent_t551CA2B4FEE01D7002F186216C3BE29699A6C1E2* ___lightOnExit_18;
	// FunkyCode.LightColliderShape FunkyCode.LightCollider2D::mainShape
	LightColliderShape_tD23C84CBA7B2840DDA09A49B9A21D15050F23FE9* ___mainShape_19;
	// FunkyCode.SpriteMeshObject FunkyCode.LightCollider2D::spriteMeshObject
	SpriteMeshObject_t091413E240336D1284B8D70ED8A08C3A17E9DE23* ___spriteMeshObject_20;
	// System.Int32 FunkyCode.LightCollider2D::listMaskLayer
	int32_t ___listMaskLayer_21;
	// System.Int32 FunkyCode.LightCollider2D::listShadowLayer
	int32_t ___listShadowLayer_22;
};

struct LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F_StaticFields
{
	// System.Collections.Generic.List`1<FunkyCode.LightCollider2D> FunkyCode.LightCollider2D::List
	List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* ___List_23;
	// System.Collections.Generic.List`1<FunkyCode.LightCollider2D> FunkyCode.LightCollider2D::ListEventReceivers
	List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* ___ListEventReceivers_24;
	// FunkyCode.LightColliderLayer`1<FunkyCode.LightCollider2D> FunkyCode.LightCollider2D::layerManagerMask
	LightColliderLayer_1_t6DDAC6C1EA77BF6077014F4781834303481D63FD* ___layerManagerMask_25;
	// FunkyCode.LightColliderLayer`1<FunkyCode.LightCollider2D> FunkyCode.LightCollider2D::layerManagerShadow
	LightColliderLayer_1_t6DDAC6C1EA77BF6077014F4781834303481D63FD* ___layerManagerShadow_26;
};

// FunkyCode.LightTilemapCollider2D
struct LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FunkyCode.LightTilemapCollider.MapType FunkyCode.LightTilemapCollider2D::mapType
	int32_t ___mapType_4;
	// System.Int32 FunkyCode.LightTilemapCollider2D::shadowLayer
	int32_t ___shadowLayer_5;
	// System.Int32 FunkyCode.LightTilemapCollider2D::maskLayer
	int32_t ___maskLayer_6;
	// System.Single FunkyCode.LightTilemapCollider2D::shadowTranslucency
	float ___shadowTranslucency_7;
	// FunkyCode.ShadowTileType FunkyCode.LightTilemapCollider2D::shadowTileType
	int32_t ___shadowTileType_8;
	// FunkyCode.LightingSettings.BumpMapMode FunkyCode.LightTilemapCollider2D::bumpMapMode
	BumpMapMode_t6A34FC9F18E4D274179FA244CF6CC9300948C080* ___bumpMapMode_9;
	// FunkyCode.LightTilemapCollider.Rectangle FunkyCode.LightTilemapCollider2D::rectangle
	Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* ___rectangle_10;
	// FunkyCode.LightTilemapCollider.Isometric FunkyCode.LightTilemapCollider2D::isometric
	Isometric_tFF8D90125CF28DB5D80059E20536A2C185EDFF5E* ___isometric_11;
	// FunkyCode.LightTilemapCollider.Hexagon FunkyCode.LightTilemapCollider2D::hexagon
	Hexagon_tF485227D12FC1DC72A9D432DFB5CD7ADC867C9AC* ___hexagon_12;
	// FunkyCode.SuperTilemapEditorSupport.TilemapCollider2D FunkyCode.LightTilemapCollider2D::superTilemapEditor
	TilemapCollider2D_tFBD8C58BB2F4909D9A8621EE6361DEEA39713293* ___superTilemapEditor_13;
	// FunkyCode.LightTilemapTransform FunkyCode.LightTilemapCollider2D::lightingTransform
	LightTilemapTransform_tD68C51F4D0846371FD7918AEE0DDD7F913AF3D08* ___lightingTransform_14;
	// System.Int32 FunkyCode.LightTilemapCollider2D::listMaskLayer
	int32_t ___listMaskLayer_18;
	// System.Int32 FunkyCode.LightTilemapCollider2D::listCollisionLayer
	int32_t ___listCollisionLayer_19;
};

struct LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D_StaticFields
{
	// System.Collections.Generic.List`1<FunkyCode.LightTilemapCollider2D> FunkyCode.LightTilemapCollider2D::List
	List_1_t53210D23CC79388549233000764405C28B06BEFA* ___List_15;
	// FunkyCode.LightColliderLayer`1<FunkyCode.LightTilemapCollider2D> FunkyCode.LightTilemapCollider2D::layerManagerMask
	LightColliderLayer_1_t93A0EBD611E199715B981091F60A655DA171784E* ___layerManagerMask_16;
	// FunkyCode.LightColliderLayer`1<FunkyCode.LightTilemapCollider2D> FunkyCode.LightTilemapCollider2D::layerManagerCollision
	LightColliderLayer_1_t93A0EBD611E199715B981091F60A655DA171784E* ___layerManagerCollision_17;
};

// FunkyCode.LightingMonoBehaviour
struct LightingMonoBehaviour_t0365A2AB443042E5C7E47878F2A9D9C9C98262E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751  : public GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B
{
};

// UnityEngine.Tilemaps.TilemapCollider2D
struct TilemapCollider2D_t66245B4B99A740FBC2F1EA873E82EE808B57E177  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// FunkyCode.Light2D
struct Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F  : public LightingMonoBehaviour_t0365A2AB443042E5C7E47878F2A9D9C9C98262E7
{
	// FunkyCode.Light2D/LightType FunkyCode.Light2D::lightType
	int32_t ___lightType_4;
	// System.Int32 FunkyCode.Light2D::lightPresetId
	int32_t ___lightPresetId_5;
	// System.Int32 FunkyCode.Light2D::eventPresetId
	int32_t ___eventPresetId_6;
	// System.Int32 FunkyCode.Light2D::lightLayer
	int32_t ___lightLayer_7;
	// System.Int32 FunkyCode.Light2D::occlusionLayer
	int32_t ___occlusionLayer_8;
	// System.Int32 FunkyCode.Light2D::translucentLayer
	int32_t ___translucentLayer_9;
	// System.Int32 FunkyCode.Light2D::translucentPresetId
	int32_t ___translucentPresetId_10;
	// UnityEngine.Color FunkyCode.Light2D::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_11;
	// System.Single FunkyCode.Light2D::size
	float ___size_12;
	// System.Single FunkyCode.Light2D::spotAngleInner
	float ___spotAngleInner_13;
	// System.Single FunkyCode.Light2D::spotAngleOuter
	float ___spotAngleOuter_14;
	// System.Single FunkyCode.Light2D::coreSize
	float ___coreSize_15;
	// System.Single FunkyCode.Light2D::falloff
	float ___falloff_16;
	// System.Single FunkyCode.Light2D::lightStrength
	float ___lightStrength_17;
	// System.Single FunkyCode.Light2D::outerAngle
	float ___outerAngle_18;
	// System.Single FunkyCode.Light2D::lightRadius
	float ___lightRadius_19;
	// System.Single FunkyCode.Light2D::shadowDistanceClose
	float ___shadowDistanceClose_20;
	// System.Single FunkyCode.Light2D::shadowDistanceFar
	float ___shadowDistanceFar_21;
	// FunkyCode.Light2D/MaskTranslucencyQuality FunkyCode.Light2D::maskTranslucencyQuality
	int32_t ___maskTranslucencyQuality_22;
	// System.Single FunkyCode.Light2D::maskTranslucencyStrength
	float ___maskTranslucencyStrength_23;
	// FunkyCode.Light2D/Rotation FunkyCode.Light2D::applyRotation
	int32_t ___applyRotation_24;
	// FunkyCode.LightingSettings.LightingSourceTextureSize FunkyCode.Light2D::textureSize
	int32_t ___textureSize_25;
	// FunkyCode.LightingSettings.MeshMode FunkyCode.Light2D::meshMode
	MeshMode_t0FEDCE32C50D70D1146EF0511EC85F128E2BC573* ___meshMode_26;
	// FunkyCode.Light2D/BumpMap FunkyCode.Light2D::bumpMap
	BumpMap_t95D45DDC5E4DC963F0146FF8DC397D48F1C8515A* ___bumpMap_27;
	// FunkyCode.Light2D/WhenInsideCollider FunkyCode.Light2D::whenInsideCollider
	int32_t ___whenInsideCollider_28;
	// FunkyCode.Light2D/LightSprite FunkyCode.Light2D::lightSprite
	int32_t ___lightSprite_29;
	// UnityEngine.Sprite FunkyCode.Light2D::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_30;
	// System.Boolean FunkyCode.Light2D::spriteFlipX
	bool ___spriteFlipX_31;
	// System.Boolean FunkyCode.Light2D::spriteFlipY
	bool ___spriteFlipY_32;
	// FunkyCode.LightTransform FunkyCode.Light2D::transform2D
	LightTransform_t5531F5CC0B11D9FFAE4C3C130ECE8AA1B674E333* ___transform2D_33;
	// FunkyCode.LightFreeForm FunkyCode.Light2D::freeForm
	LightFreeForm_t43F4A910CC44B2D8A6354833611947554AAD5EA1* ___freeForm_34;
	// System.Single FunkyCode.Light2D::freeFormFalloff
	float ___freeFormFalloff_35;
	// System.Single FunkyCode.Light2D::freeFormPoint
	float ___freeFormPoint_36;
	// System.Single FunkyCode.Light2D::freeFormFalloffStrength
	float ___freeFormFalloffStrength_37;
	// FunkyCode.FreeFormPoints FunkyCode.Light2D::freeFormPoints
	FreeFormPoints_tB954A31D82AE8A6AB8F18ADE273080F5353FD54A* ___freeFormPoints_38;
	// FunkyCode.Light2D/LightEventHandling FunkyCode.Light2D::eventHandling
	LightEventHandling_tB3D09C6487F99BF16F68A4AA563822CC4BC1E5F0* ___eventHandling_39;
	// System.Collections.Generic.List`1<FunkyCode.LightCollider2D> FunkyCode.Light2D::collidersInside
	List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* ___collidersInside_40;
	// System.Collections.Generic.List`1<FunkyCode.LightCollider2D> FunkyCode.Light2D::collidersInsideRemove
	List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* ___collidersInsideRemove_41;
	// System.Boolean FunkyCode.Light2D::inScreen
	bool ___inScreen_43;
	// System.Boolean FunkyCode.Light2D::drawingEnabled
	bool ___drawingEnabled_44;
	// System.Boolean FunkyCode.Light2D::drawingTranslucencyEnabled
	bool ___drawingTranslucencyEnabled_45;
	// FunkyCode.LightBuffer2D FunkyCode.Light2D::buffer
	LightBuffer2D_t2ABE82B6CBEEC0E3802DE572566927504246CD09* ___buffer_46;
};

struct Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F_StaticFields
{
	// System.Collections.Generic.List`1<FunkyCode.Light2D> FunkyCode.Light2D::List
	List_1_t9605206A92A0B872360B64394A5053F7D75CE565* ___List_42;
	// UnityEngine.Sprite FunkyCode.Light2D::defaultSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___defaultSprite_47;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// FunkyCode.Rendering.Day.Sorting.SortObject[]
struct SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE  : public RuntimeArray
{
	ALIGN_FIELD (8) SortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C m_Items[1];

	inline SortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___LightObject_1), (void*)NULL);
	}
	inline SortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___LightObject_1), (void*)NULL);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// LayerEventSetting[]
struct LayerEventSettingU5BU5D_t1A9B422372D5D6281A43B7E1B860EC63598A1815  : public RuntimeArray
{
	ALIGN_FIELD (8) LayerEventSetting_t6CA000F050E7540EB8666EDEDD02952AB9E05BAC* m_Items[1];

	inline LayerEventSetting_t6CA000F050E7540EB8666EDEDD02952AB9E05BAC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerEventSetting_t6CA000F050E7540EB8666EDEDD02952AB9E05BAC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerEventSetting_t6CA000F050E7540EB8666EDEDD02952AB9E05BAC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LayerEventSetting_t6CA000F050E7540EB8666EDEDD02952AB9E05BAC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerEventSetting_t6CA000F050E7540EB8666EDEDD02952AB9E05BAC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerEventSetting_t6CA000F050E7540EB8666EDEDD02952AB9E05BAC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// FunkyCode.LightCollision2D[]
struct LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 m_Items[1];

	inline LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___points_2), (void*)NULL);
		#endif
	}
	inline LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___points_2), (void*)NULL);
		#endif
	}
};
// FunkyCode.LightTile[]
struct LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D  : public RuntimeArray
{
	ALIGN_FIELD (8) LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* m_Items[1];

	inline LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.List`1<FunkyCode.LightTile>[,]
struct List_1U5BU2CU5D_t8F789D376BCF4DBC7C84974697314D3AC7A621CA  : public RuntimeArray
{
	ALIGN_FIELD (8) List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* m_Items[1];

	inline List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Array::Sort<FunkyCode.Rendering.Day.Sorting.SortObject>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisSortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C_m82F0C954C0465802943A91E727246946D56AF956_gshared (SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_gshared (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector2>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_gshared (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FunkyCode.LightCollision2D>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1CB35939B2AF7CCD45EE1A6198F9B7BFDF5905BA_gshared_inline (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<FunkyCode.LightCollision2D>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2045D625ADB5C6D73108B3E4EC952779C4A23EA2_gshared_inline (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<FunkyCode.LightCollision2D>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 List_1_get_Item_m720AC6190909A40E0276F47714B94116A02221AB_gshared (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m471FCE4311CFB30728E350890B7A90FD5FDD237E_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<FunkyCode.LightCollision2D>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m1F618947C9151460E213FA7B7AB79B1980E0E270_gshared (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FunkyCode.LightCollision2D>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD83344EFEEFE4B81A1881DEC0D23DCED56729953_gshared_inline (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FunkyCode.LightCollision2D>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE641AA00FCC079FDDA0627B65952706B9B3F894F List_1_GetEnumerator_m05B12629C12596B6D5332C86AFCC5AF47ED6C952_gshared (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<FunkyCode.LightCollision2D>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFC11B5145275FFA59DFE825E1CF4E76E01479EE7_gshared (Enumerator_tE641AA00FCC079FDDA0627B65952706B9B3F894F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<FunkyCode.LightCollision2D>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 Enumerator_get_Current_m545CD6DBA4BCB85CF0E9E04EFECBB702BDF867CB_gshared_inline (Enumerator_tE641AA00FCC079FDDA0627B65952706B9B3F894F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<FunkyCode.LightCollision2D>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m23BA0CA50ED3D2B2D9AD476BE1139075A4C70BD8_gshared (Enumerator_tE641AA00FCC079FDDA0627B65952706B9B3F894F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FunkyCode.LightCollision2D>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFDF496834F3F5C3E9810331DF0A87ED05E8D3576_gshared (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void FunkyCode.Rendering.Day.Sorting.SortList::set_Count(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SortList_set_Count_m7CEB540F99367D488EA05963142912868C51C06C_inline (SortList_t06AC051DCDD31922C338190E8E262E4032CA216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 FunkyCode.Rendering.Day.Sorting.SortList::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortList_get_Count_m4830DC544F5E80AC711235B1C33AD0A1C48051E6_inline (SortList_t06AC051DCDD31922C338190E8E262E4032CA216F* __this, const RuntimeMethod* method) ;
// System.Void FunkyCode.Rendering.Day.Sorting.SortObject::.ctor(System.Single,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortObject__ctor_mF0EB888694FC4C3CE54B71BA037D0D34D7E71DC0 (SortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C* __this, float ___distance0, RuntimeObject* ___lightObject1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.Generic.IComparer`1<FunkyCode.Rendering.Day.Sorting.SortObject> FunkyCode.Rendering.Day.Sorting.SortObject::Sort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortObject_Sort_mDF57BE001B8432D436C5FC0FF5C804C3F451E8AD (const RuntimeMethod* method) ;
// System.Void System.Array::Sort<FunkyCode.Rendering.Day.Sorting.SortObject>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
inline void Array_Sort_TisSortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C_m82F0C954C0465802943A91E727246946D56AF956 (SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method)
{
	((  void (*) (SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisSortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C_m82F0C954C0465802943A91E727246946D56AF956_gshared)(___array0, ___index1, ___length2, ___comparer3, method);
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.BumpMask::GetNormalMapSpritePixelToLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* BumpMask_GetNormalMapSpritePixelToLight_mE90F3846F03488198C299DDFF85FFF8766633894 (BumpMask_t49876927B265478932B35E71DA5873E621748801* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.BumpMask::GetNormalMapSpriteObjectToLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* BumpMask_GetNormalMapSpriteObjectToLight_m1148AD95F3F3C48E86FC8E6F7B154D7AAE4CB1D4 (BumpMask_t49876927B265478932B35E71DA5873E621748801* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.BumpMask::GetBumpedDaySprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* BumpMask_GetBumpedDaySprite_m475ABB8BB85C78DCAE5C51DA7C0FCE93AFFFE360 (BumpMask_t49876927B265478932B35E71DA5873E621748801* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.LightingMaterial::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737 (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// FunkyCode.LightingMaterial FunkyCode.LightingMaterial::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void FunkyCode.Lighting2DMaterial.Lights::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lights_Reset_m3B3ABD005B6914BB08AEFD210AF38856A7352AED (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Lights::GetPointOcclusion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Lights_GetPointOcclusion_m92652C6A287C86A6FC0147BE6F27105E5CF2879A (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Lights::GetLightOcclusion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Lights_GetLightOcclusion_m29980E5B69BCB46AFF9C4B155CE544D54808231C (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Lights::GetFreeFormOcclusion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Lights_GetFreeFormOcclusion_m43E67EE9D2C36E079F404B4814B5FAB28282CC14 (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Lights::GetPointLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Lights_GetPointLight_m228C552C7438B7991B8028DE14F73F37A990B2A2 (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Lights::GetSpriteLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Lights_GetSpriteLight_m74D202E316584885B0EC270DE08EDCD327E1CE0E (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Lights::GetFreeFormLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Lights_GetFreeFormLight_m370ADCF11639286368FF7B6C44E54871C33319C8 (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Lights::GetFreeFormEdgeLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Lights_GetFreeFormEdgeLight_m769534157EB44C53F7F9129008635731157D285B (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Mask::GetMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Mask_GetMask_m1485BADA04BA4BE522CD3C3D827ACA40874E670E (Mask_t8B4899F29A477996CF8F6529A7035C5388D309EE* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Mask::GetMaskTranslucency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Mask_GetMaskTranslucency_m9F8B50DEEC8D5500443E955A890EA5A2A2201C6A (Mask_t8B4899F29A477996CF8F6529A7035C5388D309EE* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Mask::GetDayMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Mask_GetDayMask_mEE54914AD9BFAFFFAA4C98EF5188893FD675FDAE (Mask_t8B4899F29A477996CF8F6529A7035C5388D309EE* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Room::GetRoomMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Room_GetRoomMask_mCFC35B69A470440EA552742AB944156B5F5DC1DF (Room_t9D9FF97811BA8DCE6F0FC2A4D791DD0846D767FD* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Room::GetRoomMultiply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Room_GetRoomMultiply_mDDF54761C06B50BFEBC4C7C72616516D709E3D73 (Room_t9D9FF97811BA8DCE6F0FC2A4D791DD0846D767FD* __this, const RuntimeMethod* method) ;
// UnityEngine.Sprite FunkyCode.Lighting2DMaterial.Shadow::GetPenumbraSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Shadow_GetPenumbraSprite_m3ABFF0D3F3BB7F5DB559343435F5A7CFECFF8DE3 (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) ;
// UnityEngine.Sprite FunkyCode.Lighting2DMaterial.Shadow::GetPenumbraSprite2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Shadow_GetPenumbraSprite2_m4A18871EF4733F2872F4CB7A6BD0461233BBC7DA (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetSoftShadow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetSoftShadow_m8063E398A3C0489E380A094B2EAEE1AA89FED8A9 (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetSoftDistanceShadow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetSoftDistanceShadow_m835CC8B1D830554BD629CE94D0F45B1FBDA17ED0 (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetLegacyGPUShadow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetLegacyGPUShadow_m413BF57BD2B51EBC123375819906BAF5F5F78AF6 (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetLegacyCPUShadow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetLegacyCPUShadow_mB201001E74DFE46984F744C0997659684C8D5ADD (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetDayCPUShadow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetDayCPUShadow_m9D01C3079CCA5D5E623C241FA6D5FAD6AB0FA66F (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) ;
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetSpriteShadow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetSpriteShadow_m8F1FA52EAE205FCF5EDD3B370D5928082CB4E777 (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) ;
// System.Void FunkyCode.LightingMaterial::SetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightingMaterial_SetTexture_m2B25A8EDB9B3C3D9090E577F87E24D0A1B4701D2 (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_mD30BD3A93DAF8B841F2BE37B3780DE390A04085A (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___path0, method);
}
// System.Int32 System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2>::get_Count()
inline int32_t List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_inline (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<FunkyCode.MeshObject>::.ctor()
inline void List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105 (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2>::GetEnumerator()
inline Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629 (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F (*) (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<FunkyCode.Utilities.Polygon2>::Dispose()
inline void Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD (Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<FunkyCode.Utilities.Polygon2>::get_Current()
inline Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_inline (Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F* __this, const RuntimeMethod* method)
{
	return ((  Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* (*) (Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Mesh FunkyCode.Utilities.PolygonTriangulator2::Triangulate(FunkyCode.Utilities.Polygon2,UnityEngine.Vector2,UnityEngine.Vector2,FunkyCode.Utilities.PolygonTriangulator2/Triangulation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* PolygonTriangulator2_Triangulate_mE4C5F390599AD4BA2D19CECC6531D5F0CCB50D27 (Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* ___polygon0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___UVScale1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___UVOffset2, int32_t ___triangulation3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// FunkyCode.MeshObject FunkyCode.MeshObject::Get(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* MeshObject_Get_m92D15EB001A8D4835EA235E67D87C1789FE792EC (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___meshOrigin0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FunkyCode.MeshObject>::Add(T)
inline void List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_inline (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* __this, MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E*, MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<FunkyCode.Utilities.Polygon2>::MoveNext()
inline bool Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E (Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.Utilities.Polygon2ListCollider2D::CreateFromGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* Polygon2ListCollider2D_CreateFromGameObject_m0926DF491B5ECCC86B1283FC12981CF1AD946816 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.EdgeCollider2D>()
inline EdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710* Component_GetComponent_TisEdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710_m808A5384C648E38F30A9543161719E39F6A3ED61 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  EdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2>::get_Item(System.Int32)
inline Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13 (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* (*) (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void FunkyCode.Utilities.Polygon2::ToWorldSpaceSelfUNIVERSAL(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon2_ToWorldSpaceSelfUNIVERSAL_m1CA0E88F73C6DE678DB80A48A749DF2E772433FE (Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2>::.ctor()
inline void List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// FunkyCode.Utilities.Polygon2 FunkyCode.Utilities.Polygon2::ToWorldSpace(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* Polygon2_ToWorldSpace_m8DC611C0D8C40792013A36AA9B28F570FA2AFCFA (Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2>::Add(T)
inline void List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_inline (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* __this, Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*, Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void FunkyCode.LightShape.Base::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base__ctor_m0B2F128E7F35ECD7DDB068DD4406137B96A749AF (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.Utilities.Polygon2ListCollider3D::CreateFromGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* Polygon2ListCollider3D_CreateFromGameObject_m7585C170B6CA1851BDDF53371D143E4B6A43837D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CompositeCollider2D>()
inline CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* Component_GetComponent_TisCompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8_m32AE6BCB1B9F29861AAA00EAB8603BEA591770A1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.CompositeCollider2D FunkyCode.LightShape.CompositeCollider2DShape::GetCompositeCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* CompositeCollider2DShape_GetCompositeCollider_m1AD27181B29D377638C1B064E17872B69AD62615 (CompositeCollider2DShape_t1A95207D8A3E361B4694CE001345A12FB611664C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.Utilities.Polygon2Collider2D::CreateFromCompositeCollider(UnityEngine.CompositeCollider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* Polygon2Collider2D_CreateFromCompositeCollider_m08D6500541F5206B032F36E50448EE3954B85719 (CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* ___compositeCollider0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// UnityEngine.MeshRenderer FunkyCode.LightShape.MeshRendererShape::GetMeshRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* MeshRendererShape_GetMeshRenderer_mE74E14686A824ACBB11B26352BB3C6F28F7F3DB8 (MeshRendererShape_tC193DD208D035762FBE951AAA017FF72DCCC9082* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_sortingLayerID_m3D7AE74F1B87099810CF969CB4520C85F9AE5F92 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SortingLayer::GetLayerValueFromID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortingLayer_GetLayerValueFromID_mEB8A5234102CD7B2C6158661A931EA120A38707C (int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void FunkyCode.LightShape.Base::ResetLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_ResetLocal_m8CFAD868A9AEC5D1E39453F560037C0BEE6C3549 (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.MeshFilter FunkyCode.LightShape.MeshRendererShape::GetMeshFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* MeshRendererShape_GetMeshFilter_m9D78F4455AE293EE24180450F1CDC72722CD4C65 (MeshRendererShape_tC193DD208D035762FBE951AAA017FF72DCCC9082* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mesh::get_isReadable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.Mesh::get_triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Mesh_get_uv_mA47805C48AB3493FF3727922C43E77880E73519F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<FunkyCode.MeshObject>::get_Count()
inline int32_t List_1_get_Count_m727F3C923A41AA32BC9CDB9F7E8784563DA75442_inline (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<FunkyCode.MeshObject>::get_Item(System.Int32)
inline MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* List_1_get_Item_mDD8A3A52561D071E3ACDCF294957F3799DF26B5D (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* (*) (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void FunkyCode.Utilities.Polygon2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon2__ctor_m330FF437D20FFEA831187CFEC36CD6AA51744F41 (Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* __this, int32_t ___size0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.SkinnedMeshRenderer FunkyCode.LightShape.SkinnedMeshRendererShape::GetSkinnedMeshRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* SkinnedMeshRendererShape_GetSkinnedMeshRenderer_m8746556DBA8551E5EB041E063F6F209B561D480A (SkinnedMeshRendererShape_t6985EF091F4BBDE9A1AD402910CB1A1998767B80* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.SkinnedMeshRenderer::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, const RuntimeMethod* method) ;
// UnityEngine.SpriteRenderer FunkyCode.LightShape.SpritePhysicsShape::GetSpriteRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* SpritePhysicsShape_GetSpriteRenderer_m9B32CCB98C892D44F9ACBC49664489CCE14E1F60 (SpritePhysicsShape_t2D07C474C4F4A0D7942EDB4EC4F4CB472F7FC888* __this, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Sprite FunkyCode.LightShape.SpritePhysicsShape::GetOriginalSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* SpritePhysicsShape_GetOriginalSprite_m9785EB58AAE539A1FBCE7AA6D63BAF9C6AEED4E3 (SpritePhysicsShape_t2D07C474C4F4A0D7942EDB4EC4F4CB472F7FC888* __this, const RuntimeMethod* method) ;
// FunkyCode.SpriteExtension.PhysicsShape FunkyCode.SpriteExtension.PhysicsShapeManager::RequestCustomShape(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7* PhysicsShapeManager_RequestCustomShape_m48A0991FCB30D850BC651A635E408FAD694622C5 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___originalSprite0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SpriteRenderer::get_flipX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SpriteRenderer::get_flipY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRenderer_get_flipY_m2277917491792E562B37BFBF77513E12FFF6F75F (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.Void FunkyCode.Utilities.Polygon2::ToScaleSelf(UnityEngine.Vector2,System.Nullable`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon2_ToScaleSelf_m3E8E98388D9BD81559F36FEACE59B2D7F1E3483D (Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale0, Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD ___center1, const RuntimeMethod* method) ;
// System.Void FunkyCode.Utilities.Polygon2::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon2_Normalize_m3F19E90F7CF12CD4E6796197EF4C034CA9323DCD (Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* __this, const RuntimeMethod* method) ;
// FunkyCode.Utilities.Polygon2 FunkyCode.Utilities.Polygon2::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* Polygon2_Copy_mA7D49F4272D3BE481E3E6D3540E088AF734639E8 (Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* __this, const RuntimeMethod* method) ;
// FunkyCode.SpriteExtension.PhysicsShape FunkyCode.LightShape.SpritePhysicsShape::GetPhysicsShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7* SpritePhysicsShape_GetPhysicsShape_m56316D8AE1C0FD57A0830B90C4032255AD2D97DB (SpritePhysicsShape_t2D07C474C4F4A0D7942EDB4EC4F4CB472F7FC888* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.SpriteExtension.PhysicsShape::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* PhysicsShape_Get_m95FDA0BBE1B03D8E64EEF851440FD6CCBE7C3D1F (PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7* __this, const RuntimeMethod* method) ;
// UnityEngine.SpriteRenderer FunkyCode.LightShape.SpriteShape::GetSpriteRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* SpriteShape_GetSpriteRenderer_mE0F890A8D197EF18F34CBDE50DCB9CC8A4015CD8 (SpriteShape_tCCA2A2247D8CB9EF2FE69B47F7FCEEA313CE01E1* __this, const RuntimeMethod* method) ;
// UnityEngine.SpriteDrawMode UnityEngine.SpriteRenderer::get_drawMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteRenderer_get_drawMode_mDE05B982434BB01801C33432159E662837352AD4 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// UnityEngine.SpriteTileMode UnityEngine.SpriteRenderer::get_tileMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteRenderer_get_tileMode_mA6BD321B76409603000804DECDB92013893D731E (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.SpriteRenderer::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SpriteRenderer_get_size_mBAA19D0D4BA836D0064D60BEE0D4485282DF29EA (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void FunkyCode.Utilities.VirtualSpriteRenderer::Set(UnityEngine.SpriteRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualSpriteRenderer_Set_mB384B4ECC39166B2F9949FEE31EB603B7E483695 (VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB* __this, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer0, const RuntimeMethod* method) ;
// System.Void FunkyCode.SpriteTransform::.ctor(FunkyCode.Utilities.VirtualSpriteRenderer,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteTransform__ctor_m8C5BCCD58E556BDBD2ED704514DB300733E9C91E (SpriteTransform_tA8B00B6C4F4F0A8CB71871036C089CE521BD2888* __this, VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB* ___spriteRenderer0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale2, float ___rotation3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void FunkyCode.Utilities.VirtualSpriteRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualSpriteRenderer__ctor_mBEF46051FFF6C6C12389CD80C28F4EB9D3EC3E4D (VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect FunkyCode.Utilities.Polygon2Helper::GetRect(System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Polygon2Helper_GetRect_mE292804BDE16B09EB4FE2D1E92FF1CDA43D86220 (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* ___polygons0, const RuntimeMethod* method) ;
// UnityEngine.Rect FunkyCode.Utilities.Polygon2Helper::GetDayRect(System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Polygon2Helper_GetDayRect_m385E960907D7BA88395D949BE02C8ECD8E1FF29B (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* ___polygons0, float ___height1, const RuntimeMethod* method) ;
// UnityEngine.Rect FunkyCode.Utilities.Polygon2Helper::GetIsoRect(System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Polygon2Helper_GetIsoRect_m1F22AAADAD3C36076C360B96C556D3DA21B06E1A (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* ___polygons0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
inline bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, const RuntimeMethod*))Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline)(__this, method);
}
// UnityEngine.Rect FunkyCode.LightShape.Base::GetWorldRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Base_GetWorldRect_mDEE006EEC21D17E0AE3B52352DAC5F48046A221A (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(T)
inline void Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73 (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<UnityEngine.Vector2>::get_Value()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7 (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, const RuntimeMethod*))Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<FunkyCode.LightCollider2D>::get_Item(System.Int32)
inline LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* List_1_get_Item_m82378840486C9FDAFDAE42CD9E0738428C5EC8C3 (List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* (*) (List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean FunkyCode.LightCollider2D::InLight(FunkyCode.Light2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LightCollider2D_InLight_m4D3474FA29843664B96BFC70EEB4AAFC14E22E38 (LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* __this, Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* ___light0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightColliderShape::GetPolygonsWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* LightColliderShape_GetPolygonsWorld_mD7422C50A08822CC0470E30DA2F2CFE391D67607 (LightColliderShape_tD23C84CBA7B2840DDA09A49B9A21D15050F23FE9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
inline void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single FunkyCode.Utilities.Vector2Extensions::Atan2(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Extensions_Atan2_m548A3CAE80CDA1FB7AFE893E07F313347420A622 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
inline void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
inline int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<FunkyCode.LightCollision2D>::Add(T)
inline void List_1_Add_m1CB35939B2AF7CCD45EE1A6198F9B7BFDF5905BA_inline (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D*, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7, const RuntimeMethod*))List_1_Add_m1CB35939B2AF7CCD45EE1A6198F9B7BFDF5905BA_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<FunkyCode.LightCollider2D>::get_Count()
inline int32_t List_1_get_Count_m3D33EA565508FFE83EEFE70888D48CAA86ED4AF9_inline (List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// FunkyCode.Utilities.Polygon2 FunkyCode.EventHandling.Base::GetPolygon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* Base_GetPolygon_mD12C9C3FEEDA4AEFAD7FDC77C057647CFCEE2404 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<FunkyCode.LightCollider2D> FunkyCode.LightCollider2D::GetShadowList(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* LightCollider2D_GetShadowList_m0B3D441A38A601F005A614F62AF8C5B82724AAA6 (int32_t ___layer0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<FunkyCode.LightCollision2D>::get_Count()
inline int32_t List_1_get_Count_m2045D625ADB5C6D73108B3E4EC952779C4A23EA2_inline (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D*, const RuntimeMethod*))List_1_get_Count_m2045D625ADB5C6D73108B3E4EC952779C4A23EA2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<FunkyCode.LightCollision2D>::get_Item(System.Int32)
inline LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 List_1_get_Item_m720AC6190909A40E0276F47714B94116A02221AB (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 (*) (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D*, int32_t, const RuntimeMethod*))List_1_get_Item_m720AC6190909A40E0276F47714B94116A02221AB_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, int32_t, const RuntimeMethod*))List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_gshared)(__this, ___index0, method);
}
// System.Boolean FunkyCode.Utilities.Math2D::PointInPoly(UnityEngine.Vector2,FunkyCode.Utilities.Polygon2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Math2D_PointInPoly_mFC54791B078DDA70D69C102018FB55FAA49C99A1 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* ___poly1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Remove(T)
inline bool List_1_Remove_m471FCE4311CFB30728E350890B7A90FD5FDD237E (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))List_1_Remove_m471FCE4311CFB30728E350890B7A90FD5FDD237E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<FunkyCode.LightCollision2D>::Remove(T)
inline bool List_1_Remove_m1F618947C9151460E213FA7B7AB79B1980E0E270 (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D*, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7, const RuntimeMethod*))List_1_Remove_m1F618947C9151460E213FA7B7AB79B1980E0E270_gshared)(__this, ___item0, method);
}
// System.Void FunkyCode.EventHandling.Base::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base__ctor_mD30153DF63C53ED44FE6F1C49EF2ABB8916669D6 (Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<FunkyCode.LightTilemapCollider2D> FunkyCode.LightTilemapCollider2D::GetShadowList(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t53210D23CC79388549233000764405C28B06BEFA* LightTilemapCollider2D_GetShadowList_mBDE9ABC139F0C1F1DD9BD1C58B01CA34B231A413 (int32_t ___layer0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FunkyCode.LightTilemapCollider2D>::GetEnumerator()
inline Enumerator_t103A698C10B736FC92F9DAC6DA9B9E7F8D3EA9C9 List_1_GetEnumerator_mB443DCE1ED25A515DEB4C735014A551CB89E8405 (List_1_t53210D23CC79388549233000764405C28B06BEFA* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t103A698C10B736FC92F9DAC6DA9B9E7F8D3EA9C9 (*) (List_1_t53210D23CC79388549233000764405C28B06BEFA*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<FunkyCode.LightTilemapCollider2D>::Dispose()
inline void Enumerator_Dispose_mF965333AC4A72A79CD259D606B290356AB37749B (Enumerator_t103A698C10B736FC92F9DAC6DA9B9E7F8D3EA9C9* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t103A698C10B736FC92F9DAC6DA9B9E7F8D3EA9C9*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<FunkyCode.LightTilemapCollider2D>::get_Current()
inline LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* Enumerator_get_Current_m6B3E8DF783FF37DF5C0D0783ECC28CB81D7800D0_inline (Enumerator_t103A698C10B736FC92F9DAC6DA9B9E7F8D3EA9C9* __this, const RuntimeMethod* method)
{
	return ((  LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* (*) (Enumerator_t103A698C10B736FC92F9DAC6DA9B9E7F8D3EA9C9*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// FunkyCode.LightTilemapCollider.Base FunkyCode.LightTilemapCollider2D::GetCurrentTilemap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* LightTilemapCollider2D_GetCurrentTilemap_m5F932BB86A69EC845535017923E6CD22E60C9576 (LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* __this, const RuntimeMethod* method) ;
// System.Int32 FunkyCode.Chunks.TilemapManager::GetTiles(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TilemapManager_GetTiles_m1F37CA1F9C72F357657FF18A9D4F002A11E6A5E0 (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___worldRect0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightTile::GetWorldPolygons(FunkyCode.LightTilemapCollider.Base)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* LightTile_GetWorldPolygons_m01069002D6C5DCB8B5034D84EE07EB9380468F09 (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* __this, Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* ___tilemap0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 FunkyCode.LightTile::GetWorldPosition(FunkyCode.LightTilemapCollider.Base)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 LightTile_GetWorldPosition_mFFC4031CCB1CD2D3932A86168740E9F80DEE5BF5 (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* __this, Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* ___tilemap0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Boolean FunkyCode.LightTile::NotInRange(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LightTile_NotInRange_mBF2F0FE2B2624C484640C056077CB2F8A2468CA8 (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, float ___sourceSize1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<FunkyCode.LightTilemapCollider2D>::MoveNext()
inline bool Enumerator_MoveNext_m4B1EF8B070BDD7F2FA96536307526800F83FBC61 (Enumerator_t103A698C10B736FC92F9DAC6DA9B9E7F8D3EA9C9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t103A698C10B736FC92F9DAC6DA9B9E7F8D3EA9C9*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FunkyCode.LightCollision2D>::Clear()
inline void List_1_Clear_mD83344EFEEFE4B81A1881DEC0D23DCED56729953_inline (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D*, const RuntimeMethod*))List_1_Clear_mD83344EFEEFE4B81A1881DEC0D23DCED56729953_gshared_inline)(__this, method);
}
// System.Void FunkyCode.EventHandling.LightCollider::GetCollisions(System.Collections.Generic.List`1<FunkyCode.LightCollision2D>,FunkyCode.Light2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightCollider_GetCollisions_m2B05BFC4DA27C249908443A007F19B5DA27EBE37 (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* ___collisions0, Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* ___lightingSource1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<FunkyCode.LightCollision2D> FunkyCode.EventHandling.LightCollider::RemoveHiddenPoints(System.Collections.Generic.List`1<FunkyCode.LightCollision2D>,FunkyCode.Light2D,FunkyCode.LightingSettings.EventPreset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* LightCollider_RemoveHiddenPoints_m18028C017D3CBED80AFA64423E62DD283E0FF2B6 (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* ___collisions0, Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* ___light1, EventPreset_t66A7EA3289F9C1FF587BE9EF2DF55CF81CF65F0A* ___eventPreset2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<FunkyCode.LightCollision2D> FunkyCode.EventHandling.LightTilemap::RemoveHiddenPoints(System.Collections.Generic.List`1<FunkyCode.LightCollision2D>,FunkyCode.Light2D,FunkyCode.LightingSettings.EventPreset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* LightTilemap_RemoveHiddenPoints_m26299E38481E2E54B0D8E8B86017CE28020A9CE7 (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* ___collisions0, Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* ___light1, EventPreset_t66A7EA3289F9C1FF587BE9EF2DF55CF81CF65F0A* ___eventPreset2, const RuntimeMethod* method) ;
// System.Void FunkyCode.EventHandling.CollisionEvent2D::Invoke(FunkyCode.LightCollision2D)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CollisionEvent2D_Invoke_m5AE37A4322E0C8EC078A512E1EC5E7AD59B7F21D_inline (CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* __this, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 ___collision0, const RuntimeMethod* method) ;
// System.Void FunkyCode.LightCollider2D::CollisionEvent(FunkyCode.LightCollision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightCollider2D_CollisionEvent_m106DB4AF801AC4CECDB11780382D16B2A0E5E6AC (LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* __this, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 ___collision0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FunkyCode.LightCollider2D>::Clear()
inline void List_1_Clear_m272495EFAD67470B2A2BC3FBBBA7A463ACD22ADA_inline (List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FunkyCode.LightCollision2D>::GetEnumerator()
inline Enumerator_tE641AA00FCC079FDDA0627B65952706B9B3F894F List_1_GetEnumerator_m05B12629C12596B6D5332C86AFCC5AF47ED6C952 (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE641AA00FCC079FDDA0627B65952706B9B3F894F (*) (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D*, const RuntimeMethod*))List_1_GetEnumerator_m05B12629C12596B6D5332C86AFCC5AF47ED6C952_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<FunkyCode.LightCollision2D>::Dispose()
inline void Enumerator_Dispose_mFC11B5145275FFA59DFE825E1CF4E76E01479EE7 (Enumerator_tE641AA00FCC079FDDA0627B65952706B9B3F894F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE641AA00FCC079FDDA0627B65952706B9B3F894F*, const RuntimeMethod*))Enumerator_Dispose_mFC11B5145275FFA59DFE825E1CF4E76E01479EE7_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<FunkyCode.LightCollision2D>::get_Current()
inline LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 Enumerator_get_Current_m545CD6DBA4BCB85CF0E9E04EFECBB702BDF867CB_inline (Enumerator_tE641AA00FCC079FDDA0627B65952706B9B3F894F* __this, const RuntimeMethod* method)
{
	return ((  LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 (*) (Enumerator_tE641AA00FCC079FDDA0627B65952706B9B3F894F*, const RuntimeMethod*))Enumerator_get_Current_m545CD6DBA4BCB85CF0E9E04EFECBB702BDF867CB_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<FunkyCode.LightCollider2D>::Add(T)
inline void List_1_Add_m1536FF1BB49D4CCA174D71D1D474D08CD53BE760_inline (List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* __this, LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0*, LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<FunkyCode.LightCollision2D>::MoveNext()
inline bool Enumerator_MoveNext_m23BA0CA50ED3D2B2D9AD476BE1139075A4C70BD8 (Enumerator_tE641AA00FCC079FDDA0627B65952706B9B3F894F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE641AA00FCC079FDDA0627B65952706B9B3F894F*, const RuntimeMethod*))Enumerator_MoveNext_m23BA0CA50ED3D2B2D9AD476BE1139075A4C70BD8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<FunkyCode.LightCollider2D>::Contains(T)
inline bool List_1_Contains_m89952A02C0CD6523A678A2BAED73E20062118455 (List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* __this, LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0*, LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<FunkyCode.LightCollider2D>::Remove(T)
inline bool List_1_Remove_mAE053CC7BD3B757C344D70B3C6619E9E0A593CAE (List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* __this, LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0*, LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<FunkyCode.LightCollider2D>::.ctor()
inline void List_1__ctor_m8520B95689012023CC16D9D123CC7EF981F0C046 (List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<FunkyCode.LightCollision2D>::.ctor()
inline void List_1__ctor_mFDF496834F3F5C3E9810331DF0A87ED05E8D3576 (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D*, const RuntimeMethod*))List_1__ctor_mFDF496834F3F5C3E9810331DF0A87ED05E8D3576_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Tilemaps.Tilemap>()
inline Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* GameObject_GetComponent_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_mF4C69736AF26C07B7B6DF0FEF81C69F29B5B81B8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Grid UnityEngine.Tilemaps.Tilemap::get_layoutGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* Tilemap_get_layoutGrid_m84B3A21E3E9744E83DBD07448DBD8C01CE0E257E (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Grid::get_cellSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Grid_get_cellSize_m5512593532CABA9CFC058123B923AFA483D6003E (Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Grid::get_cellGap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Grid_get_cellGap_m9B12CA3DA5A7AC906A1E1943FABD3E1A523439A1 (Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Tilemaps.Tilemap::get_tileAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Tilemap_get_tileAnchor_mD3C7F2A024DC43019CEB93682307ED41EC3329E4 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FunkyCode.LightTile>::GetEnumerator()
inline Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F (*) (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<FunkyCode.LightTile>::Dispose()
inline void Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C (Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<FunkyCode.LightTile>::get_Current()
inline LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_inline (Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F* __this, const RuntimeMethod* method)
{
	return ((  LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* (*) (Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void FunkyCode.LightTile::ResetWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightTile_ResetWorld_m0521E36AA2E6CA0E283B475C8F8B94BC64B9CFC4 (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<FunkyCode.LightTile>::MoveNext()
inline bool Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3 (Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void FunkyCode.TilemapProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapProperties__ctor_m626D39074CC03E0A949CED75CBA9B1ED50E0D46D (TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FunkyCode.LightTile>::.ctor()
inline void List_1__ctor_m2875DE16B62D8DF415E19E34D1FE08B8CD509C02 (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void FunkyCode.Chunks.TilemapManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapManager__ctor_mC30C31BC8877572720C7CF8B0ED5959470B9C3E4 (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* __this, const RuntimeMethod* method) ;
// System.Void FunkyCode.LightTilemapCollider.Base::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_Initialize_m706B406A6F86B7350095390AE2F5B787A9CFD998 (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) ;
// System.Boolean FunkyCode.LightTilemapCollider.Base::UpdateProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base_UpdateProperties_mC22745424EB9DE120419BD8845C15281D89C675E (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<FunkyCode.LightTile> FunkyCode.LightTilemapCollider.Base::get_MapTiles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FunkyCode.LightTile>::Clear()
inline void List_1_Clear_mACB443D71A089820C6C2DBF83849FCF1ECF3BE58_inline (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.FormatterServices::GetUninitializedObject(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormatterServices_GetUninitializedObject_mA2B57E3C189694129FE2870B8188421DF78468A1 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// UnityEngine.BoundsInt UnityEngine.Tilemaps.Tilemap::get_cellBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 Tilemap_get_cellBounds_m2C1EDCFFD145175A83457B4F7A88CEA037DF8EB9 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) ;
// UnityEngine.BoundsInt/PositionEnumerator UnityEngine.BoundsInt::get_allPositionsWithin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979 BoundsInt_get_allPositionsWithin_mCB3AC6C2877AF182728C238E0FA674C61011B374 (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
// UnityEngine.BoundsInt/PositionEnumerator UnityEngine.BoundsInt/PositionEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979 PositionEnumerator_GetEnumerator_m807AB1779109B8CB87F146953093510E61D8DB6E (PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoundsInt/PositionEnumerator::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionEnumerator_System_IDisposable_Dispose_m47826ADCC63143C39135AB628DC71002A378347A (PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.BoundsInt/PositionEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 PositionEnumerator_get_Current_mD06E8FE52B917BFE51F867A06B183EADFFA5CC2A (PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979* __this, const RuntimeMethod* method) ;
// UnityEngine.Tilemaps.TileBase UnityEngine.Tilemaps.Tilemap::GetTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* Tilemap_GetTile_m8500FBFF853C9E813810929BD29D7A866B516225 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) ;
// System.Void FunkyCode.LightTile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightTile__ctor_m2ED6AA336B8F469FC356A44CB4368527804602EB (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3Int::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.Tilemaps.TileData::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* TileData_get_sprite_m8117B1A4F4A5722F067271A0B9BEB5C1806F90D1 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, const RuntimeMethod* method) ;
// System.Void FunkyCode.LightTile::SetSprite(UnityEngine.Sprite)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LightTile_SetSprite_m7285D1A97F9A07290FEC014B334DEEA6920FA912_inline (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightTile::GetPhysicsShapePolygons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* LightTile_GetPhysicsShapePolygons_mFB8036FDF9C1E8BEAECB6012B9AB703A6A7041DD (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FunkyCode.LightTile>::Add(T)
inline void List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_inline (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* __this, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA*, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean UnityEngine.BoundsInt/PositionEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PositionEnumerator_MoveNext_mB225CE08AF7D18A38E9597E5B3381AE216C2DB0C (PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979* __this, const RuntimeMethod* method) ;
// System.Void FunkyCode.Chunks.TilemapManager::Update(System.Collections.Generic.List`1<FunkyCode.LightTile>,FunkyCode.LightTilemapCollider.Base)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapManager_Update_m877476ABCEF8328780BD30AF2772B962527603A1 (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* __this, List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* ___tiles0, Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* ___tilemapCollider1, const RuntimeMethod* method) ;
// System.Void FunkyCode.LightTilemapCollider.Base::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base__ctor_m356B98FE5A5B282B7B1BFD8045AE9D41ACD1239A (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_get_lossyScale_mFB3D4CF6408D710D607CA1D2AF94B2E4E0B57EB7 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<FunkyCode.LightTilemapCollider2D>()
inline LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* GameObject_GetComponent_TisLightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D_mBFEE80D7AEF0E476676469BB8C6767053A8C5C47 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Tilemaps.TilemapCollider2D>()
inline TilemapCollider2D_t66245B4B99A740FBC2F1EA873E82EE808B57E177* GameObject_GetComponent_TisTilemapCollider2D_t66245B4B99A740FBC2F1EA873E82EE808B57E177_m401465FD86AF40A094A65CA1C995DE017FBEA77E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TilemapCollider2D_t66245B4B99A740FBC2F1EA873E82EE808B57E177* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Collider2D::get_offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Collider2D_get_offset_m6DC45B352DDE28C7B08607BFA3BECEC6E5F31914 (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, const RuntimeMethod* method) ;
// System.Void FunkyCode.LightTilemapCollider.Rectangle::InitializeGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_InitializeGrid_m0CB6BF3BC6AA44A5D4673ED41D861EDE405408EF (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, const RuntimeMethod* method) ;
// System.Void FunkyCode.LightTilemapCollider.Rectangle::InitializeCompositeCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_InitializeCompositeCollider_m75D6EE9FEC2CC8F3F3C67D472AE7656A17A2C8A1 (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2>::Clear()
inline void List_1_Clear_m96738B846C1581D66034AD5C445C7D1FA3C50ECF_inline (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.CompositeCollider2D>()
inline CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* GameObject_GetComponent_TisCompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8_m44BA97AD29CAE69EFAFA406BEC9BC9AB0DC5DFE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.GridLayout::CellToWorld(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GridLayout_CellToWorld_m513467A7565AD77DD66F9032C76AC96BA1DC0105 (GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___cellPosition0, const RuntimeMethod* method) ;
// System.Single FunkyCode.Utilities.Vector2Extensions::Atan2(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Extensions_Atan2_mBE4AB9FA9022AAA1D7F4A5B00D8B2B5FBC1BD924 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, const RuntimeMethod* method) ;
// FunkyCode.LightTile FunkyCode.LightTilemapCollider.Rectangle::GetTileToRefresh(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* Rectangle_GetTileToRefresh_m1820024B6AC81974F3045B46D6E7E9BE6F1F2B90 (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___gridPosition0, const RuntimeMethod* method) ;
// UnityEngine.Tilemaps.ITilemap FunkyCode.LightTilemapCollider.Rectangle::GetITilemap(UnityEngine.Tilemaps.Tilemap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* Rectangle_GetITilemap_mA23471D4BA9C6BC2FFF22A42E990EAC0E36CD2D6 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* ___tilemap0, const RuntimeMethod* method) ;
// System.Void FunkyCode.LightTile::ResetLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightTile_ResetLocal_m0E324801519B73B8296233980756A59E2B76E5DC (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Matrix4x4::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Matrix4x4_get_rotation_m7E2C29FCB2AAFAE4D7B4FBD3563E9EDB53F5A8BB (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.TileData::get_colliderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TileData_get_colliderType_mE24736B2027681E98CE454717A92833CE7E64D55 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<FunkyCode.LightTile>::Remove(T)
inline bool List_1_Remove_m65880922C2EDC50E1841EB72EC6A0224FDE77934 (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* __this, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA*, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void FunkyCode.Light2D::ForceUpdateAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light2D_ForceUpdateAll_mEB191EDD5FF0B7490742EEE1EBCCAC5F9994BA4C (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3Int::op_Equality(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___lhs0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.Vector3Int::op_Addition(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Vector3Int_op_Addition_m263A29CC729DFC6216FEA87255C5BA5496D196D1_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___a0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___b1, const RuntimeMethod* method) ;
// System.Boolean FunkyCode.LightTilemapCollider.Rectangle::GetTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_GetTile_mDBDBD8C7D6733FB7D6D329D381E8146268F60FD7 (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tilemap::GetTransformMatrix(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Tilemap_GetTransformMatrix_mD2D0E0922FF1AB8478FB8ECEE0CD219FB4801D45 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) ;
// FunkyCode.LightingSettings.ProjectSettings FunkyCode.Lighting2D::get_ProjectSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProjectSettings_tF1A6266C74517361A17F8055B28EE33E3398665F* Lighting2D_get_ProjectSettings_m05BDEDB17C8D70E579B4DEBDA2FA481B15478481 (const RuntimeMethod* method) ;
// System.Void FunkyCode.Chunks.TilemapManager::GenerateChunks(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapManager_GenerateChunks_m13A0779E313EC24D98AF66C02F64356B5D1A279E (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___worldRect0, const RuntimeMethod* method) ;
// System.Void FunkyCode.Chunks.TilemapManager::GenerateSimple(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapManager_GenerateSimple_mECB96A8A3404CF150756AFE2E97F747020C75C78 (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___worldRect0, const RuntimeMethod* method) ;
// System.Void FunkyCode.Chunks.TilemapManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapManager_Initialize_m8C33BB538D743CD4A9510121DBEE9139056D92C0 (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int FunkyCode.Chunks.TilemapManager::Transform(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A TilemapManager_Transform_mD14E27E4B14252B818C8EDC35BE15388B75B6216 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::set_x(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::set_y(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FunkyCode.Rendering.Day.Sorting.SortList::set_Count(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortList_set_Count_m7CEB540F99367D488EA05963142912868C51C06C (SortList_t06AC051DCDD31922C338190E8E262E4032CA216F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Count {private set; get;}
		int32_t L_0 = ___value0;
		__this->___U3CCountU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 FunkyCode.Rendering.Day.Sorting.SortList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortList_get_Count_m4830DC544F5E80AC711235B1C33AD0A1C48051E6 (SortList_t06AC051DCDD31922C338190E8E262E4032CA216F* __this, const RuntimeMethod* method) 
{
	{
		// public int Count {private set; get;}
		int32_t L_0 = __this->___U3CCountU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void FunkyCode.Rendering.Day.Sorting.SortList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortList__ctor_mB235543A3B6A39FE3FD62F9067309548EA25ECC4 (SortList_t06AC051DCDD31922C338190E8E262E4032CA216F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public SortObject[] List = new SortObject[1024];
		SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE* L_0 = (SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE*)(SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE*)SZArrayNew(SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->___List_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___List_1), (void*)L_0);
		// public SortList()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Count = 0;
		SortList_set_Count_m7CEB540F99367D488EA05963142912868C51C06C_inline(__this, 0, NULL);
		// for(int i = 0; i < List.Length; i++)
		V_0 = 0;
		goto IL_0037;
	}

IL_0021:
	{
		// List[i] = new SortObject();
		SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE* L_1 = __this->___List_1;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		il2cpp_codegen_initobj(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), sizeof(SortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C));
		// for(int i = 0; i < List.Length; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0037:
	{
		// for(int i = 0; i < List.Length; i++)
		int32_t L_4 = V_0;
		SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE* L_5 = __this->___List_1;
		NullCheck(L_5);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FunkyCode.Rendering.Day.Sorting.SortList::Add(System.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortList_Add_m9E59687F976449EFE55B1F9245B69A0E6E000ED4 (SortList_t06AC051DCDD31922C338190E8E262E4032CA216F* __this, RuntimeObject* ___lightObject0, float ___dist1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5C38FDDB9974EACD012416E11429EC136C692A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (Count < List.Length)
		int32_t L_0;
		L_0 = SortList_get_Count_m4830DC544F5E80AC711235B1C33AD0A1C48051E6_inline(__this, NULL);
		SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE* L_1 = __this->___List_1;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0039;
		}
	}
	{
		// List[Count] = new SortObject(dist, lightObject);
		SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE* L_2 = __this->___List_1;
		int32_t L_3;
		L_3 = SortList_get_Count_m4830DC544F5E80AC711235B1C33AD0A1C48051E6_inline(__this, NULL);
		float L_4 = ___dist1;
		RuntimeObject* L_5 = ___lightObject0;
		SortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C L_6;
		memset((&L_6), 0, sizeof(L_6));
		SortObject__ctor_mF0EB888694FC4C3CE54B71BA037D0D34D7E71DC0((&L_6), L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (SortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C)L_6);
		// Count++;
		int32_t L_7;
		L_7 = SortList_get_Count_m4830DC544F5E80AC711235B1C33AD0A1C48051E6_inline(__this, NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		SortList_set_Count_m7CEB540F99367D488EA05963142912868C51C06C_inline(__this, ((int32_t)il2cpp_codegen_add(L_8, 1)), NULL);
		return;
	}

IL_0039:
	{
		// Debug.LogError("Collider Depth Overhead!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFE5C38FDDB9974EACD012416E11429EC136C692A, NULL);
		// }
		return;
	}
}
// System.Void FunkyCode.Rendering.Day.Sorting.SortList::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortList_Reset_m7AB6718105512DAA816788D3FE9CECC1B37B3974 (SortList_t06AC051DCDD31922C338190E8E262E4032CA216F* __this, const RuntimeMethod* method) 
{
	{
		// Count = 0;
		SortList_set_Count_m7CEB540F99367D488EA05963142912868C51C06C_inline(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void FunkyCode.Rendering.Day.Sorting.SortList::Sort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortList_Sort_m70A2053FDDCFD0189292D0EAA8E8749B9346C0C5 (SortList_t06AC051DCDD31922C338190E8E262E4032CA216F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisSortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C_m82F0C954C0465802943A91E727246946D56AF956_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Array.Sort<SortObject>(List, 0, Count, SortObject.Sort());
		SortObjectU5BU5D_tD10C7F9001A1C4CB358A746A8D90A9247CAFC9DE* L_0 = __this->___List_1;
		int32_t L_1;
		L_1 = SortList_get_Count_m4830DC544F5E80AC711235B1C33AD0A1C48051E6_inline(__this, NULL);
		RuntimeObject* L_2;
		L_2 = SortObject_Sort_mDF57BE001B8432D436C5FC0FF5C804C3F451E8AD(NULL);
		Array_Sort_TisSortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C_m82F0C954C0465802943A91E727246946D56AF956(L_0, 0, L_1, L_2, Array_Sort_TisSortObject_tA564DEA15F697B88212E6152C727F11E5D9FB00C_m82F0C954C0465802943A91E727246946D56AF956_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FunkyCode.Lighting2DMaterial.BumpMask::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BumpMask_Reset_m0DE7F5F8685D8B6C15F85D830C3990FBDA47223F (BumpMask_t49876927B265478932B35E71DA5873E621748801* __this, const RuntimeMethod* method) 
{
	{
		// normalObjectToLightSprite = null;
		__this->___normalObjectToLightSprite_1 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___normalObjectToLightSprite_1), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// normalPixelToLightSprite = null;
		__this->___normalPixelToLightSprite_0 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___normalPixelToLightSprite_0), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// bumpedDaySprite = null;
		__this->___bumpedDaySprite_2 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bumpedDaySprite_2), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// }
		return;
	}
}
// System.Void FunkyCode.Lighting2DMaterial.BumpMask::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BumpMask_Initialize_m2B10940E62AF07F6EE0253CAC51076132DB36167 (BumpMask_t49876927B265478932B35E71DA5873E621748801* __this, const RuntimeMethod* method) 
{
	{
		// GetNormalMapSpritePixelToLight();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = BumpMask_GetNormalMapSpritePixelToLight_mE90F3846F03488198C299DDFF85FFF8766633894(__this, NULL);
		// GetNormalMapSpriteObjectToLight();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = BumpMask_GetNormalMapSpriteObjectToLight_m1148AD95F3F3C48E86FC8E6F7B154D7AAE4CB1D4(__this, NULL);
		// GetBumpedDaySprite();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = BumpMask_GetBumpedDaySprite_m475ABB8BB85C78DCAE5C51DA7C0FCE93AFFFE360(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.BumpMask::GetNormalMapSpritePixelToLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* BumpMask_GetNormalMapSpritePixelToLight_mE90F3846F03488198C299DDFF85FFF8766633894 (BumpMask_t49876927B265478932B35E71DA5873E621748801* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D38C76DB2F4FAE3FAC5A9C6EB4BA532CBC7500E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (normalPixelToLightSprite == null || normalPixelToLightSprite.Get() == null) {
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___normalPixelToLightSprite_0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___normalPixelToLightSprite_0;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// normalPixelToLightSprite = LightingMaterial.Load("Light2D/Internal/BumpMap/PixelToLight");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral0D38C76DB2F4FAE3FAC5A9C6EB4BA532CBC7500E, NULL);
		__this->___normalPixelToLightSprite_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___normalPixelToLightSprite_0), (void*)L_4);
	}

IL_002b:
	{
		// return(normalPixelToLightSprite.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___normalPixelToLightSprite_0;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.BumpMask::GetNormalMapSpriteObjectToLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* BumpMask_GetNormalMapSpriteObjectToLight_m1148AD95F3F3C48E86FC8E6F7B154D7AAE4CB1D4 (BumpMask_t49876927B265478932B35E71DA5873E621748801* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B8E331604FB4228792E2D6847B72782B9C0F539);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (normalObjectToLightSprite== null || normalObjectToLightSprite.Get() == null) {
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___normalObjectToLightSprite_1;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___normalObjectToLightSprite_1;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// normalObjectToLightSprite = LightingMaterial.Load("Light2D/Internal/BumpMap/ObjectToLight");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral9B8E331604FB4228792E2D6847B72782B9C0F539, NULL);
		__this->___normalObjectToLightSprite_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___normalObjectToLightSprite_1), (void*)L_4);
	}

IL_002b:
	{
		// return(normalObjectToLightSprite.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___normalObjectToLightSprite_1;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.BumpMask::GetBumpedDaySprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* BumpMask_GetBumpedDaySprite_m475ABB8BB85C78DCAE5C51DA7C0FCE93AFFFE360 (BumpMask_t49876927B265478932B35E71DA5873E621748801* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD81C8A7EA4EA5A4BC92B3159AE43F72EE7F6DB21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bumpedDaySprite == null || bumpedDaySprite.Get() == null) {
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___bumpedDaySprite_2;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___bumpedDaySprite_2;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// bumpedDaySprite = LightingMaterial.Load("Light2D/Internal/BumpMap/Day");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteralD81C8A7EA4EA5A4BC92B3159AE43F72EE7F6DB21, NULL);
		__this->___bumpedDaySprite_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bumpedDaySprite_2), (void*)L_4);
	}

IL_002b:
	{
		// return(bumpedDaySprite.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___bumpedDaySprite_2;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// System.Void FunkyCode.Lighting2DMaterial.BumpMask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BumpMask__ctor_mF1066ACE5AB455C17AE38A72BB24E9705DCAC689 (BumpMask_t49876927B265478932B35E71DA5873E621748801* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FunkyCode.Lighting2DMaterial.Lights::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lights_Reset_m3B3ABD005B6914BB08AEFD210AF38856A7352AED (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) 
{
	{
		// pointOcclusion = null;
		__this->___pointOcclusion_4 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointOcclusion_4), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// lightOcclusion = null;
		__this->___lightOcclusion_5 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lightOcclusion_5), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// freeformOcclusion = null;
		__this->___freeformOcclusion_6 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___freeformOcclusion_6), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// spriteLight = null;
		__this->___spriteLight_1 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteLight_1), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// pointLight = null;
		__this->___pointLight_0 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointLight_0), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// freeFormLight = null;
		__this->___freeFormLight_2 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___freeFormLight_2), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// freeFormLightEdge = null;
		__this->___freeFormLightEdge_3 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___freeFormLightEdge_3), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// }
		return;
	}
}
// System.Void FunkyCode.Lighting2DMaterial.Lights::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lights_Initialize_mEC849AF9202CEE11557E0CCD897A1F3B159D554A (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) 
{
	{
		// Reset();
		Lights_Reset_m3B3ABD005B6914BB08AEFD210AF38856A7352AED(__this, NULL);
		// GetPointOcclusion();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Lights_GetPointOcclusion_m92652C6A287C86A6FC0147BE6F27105E5CF2879A(__this, NULL);
		// GetLightOcclusion(); // sprite light occlusion
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Lights_GetLightOcclusion_m29980E5B69BCB46AFF9C4B155CE544D54808231C(__this, NULL);
		// GetFreeFormOcclusion();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Lights_GetFreeFormOcclusion_m43E67EE9D2C36E079F404B4814B5FAB28282CC14(__this, NULL);
		// GetPointLight();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Lights_GetPointLight_m228C552C7438B7991B8028DE14F73F37A990B2A2(__this, NULL);
		// GetSpriteLight();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Lights_GetSpriteLight_m74D202E316584885B0EC270DE08EDCD327E1CE0E(__this, NULL);
		// GetFreeFormLight();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Lights_GetFreeFormLight_m370ADCF11639286368FF7B6C44E54871C33319C8(__this, NULL);
		// GetFreeFormEdgeLight();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Lights_GetFreeFormEdgeLight_m769534157EB44C53F7F9129008635731157D285B(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Lights::GetPointLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Lights_GetPointLight_m228C552C7438B7991B8028DE14F73F37A990B2A2 (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE84A77E3D066B0D7A58F20BF0ADCE0D46E9D9C28);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pointLight == null || pointLight.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___pointLight_0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___pointLight_0;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// pointLight = LightingMaterial.Load("Light2D/Internal/Light/PointLight");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteralE84A77E3D066B0D7A58F20BF0ADCE0D46E9D9C28, NULL);
		__this->___pointLight_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointLight_0), (void*)L_4);
	}

IL_002b:
	{
		// return(pointLight.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___pointLight_0;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Lights::GetSpriteLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Lights_GetSpriteLight_m74D202E316584885B0EC270DE08EDCD327E1CE0E (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AED43E3257310FC2C5F96C1C0980DF37F557C09);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spriteLight == null || spriteLight.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___spriteLight_1;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___spriteLight_1;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// spriteLight = LightingMaterial.Load("Light2D/Internal/Light/SpriteLight");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral7AED43E3257310FC2C5F96C1C0980DF37F557C09, NULL);
		__this->___spriteLight_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteLight_1), (void*)L_4);
	}

IL_002b:
	{
		// return(spriteLight.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___spriteLight_1;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Lights::GetFreeFormLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Lights_GetFreeFormLight_m370ADCF11639286368FF7B6C44E54871C33319C8 (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral042F871A028627E0C0614B8CA232A1195BAEF6C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (freeFormLight == null || freeFormLight.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___freeFormLight_2;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___freeFormLight_2;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// freeFormLight = LightingMaterial.Load("Light2D/Internal/Light/FreeFormLight");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral042F871A028627E0C0614B8CA232A1195BAEF6C7, NULL);
		__this->___freeFormLight_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___freeFormLight_2), (void*)L_4);
	}

IL_002b:
	{
		// return(freeFormLight.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___freeFormLight_2;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Lights::GetFreeFormEdgeLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Lights_GetFreeFormEdgeLight_m769534157EB44C53F7F9129008635731157D285B (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05BD3EB4B0E38F9811FF6173E4DB563F3BEDBBF9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (freeFormLightEdge == null || freeFormLightEdge.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___freeFormLightEdge_3;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___freeFormLightEdge_3;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// freeFormLightEdge = LightingMaterial.Load("Light2D/Internal/Light/FreeFormFalloff");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral05BD3EB4B0E38F9811FF6173E4DB563F3BEDBBF9, NULL);
		__this->___freeFormLightEdge_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___freeFormLightEdge_3), (void*)L_4);
	}

IL_002b:
	{
		// return(freeFormLightEdge.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___freeFormLightEdge_3;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Lights::GetLightOcclusion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Lights_GetLightOcclusion_m29980E5B69BCB46AFF9C4B155CE544D54808231C (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3568BA27E87963F5754445100B1D0E12521BB8FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lightOcclusion == null || lightOcclusion.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___lightOcclusion_5;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___lightOcclusion_5;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// lightOcclusion = LightingMaterial.Load("Light2D/Internal/Light/SpriteLightOcclusion");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral3568BA27E87963F5754445100B1D0E12521BB8FE, NULL);
		__this->___lightOcclusion_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lightOcclusion_5), (void*)L_4);
	}

IL_002b:
	{
		// return(lightOcclusion.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___lightOcclusion_5;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Lights::GetPointOcclusion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Lights_GetPointOcclusion_m92652C6A287C86A6FC0147BE6F27105E5CF2879A (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D2AD4DAFB4EF8F1DB743A6F900E97FC8D41EEBC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pointOcclusion == null || pointOcclusion.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___pointOcclusion_4;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___pointOcclusion_4;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// pointOcclusion = LightingMaterial.Load("Light2D/Internal/Light/PointOcclusion");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral8D2AD4DAFB4EF8F1DB743A6F900E97FC8D41EEBC, NULL);
		__this->___pointOcclusion_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointOcclusion_4), (void*)L_4);
	}

IL_002b:
	{
		// return(pointOcclusion.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___pointOcclusion_4;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Lights::GetFreeFormOcclusion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Lights_GetFreeFormOcclusion_m43E67EE9D2C36E079F404B4814B5FAB28282CC14 (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral772E9667E7E3B3DE819DF3DC1FFF1D85DF261445);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (freeformOcclusion == null || freeformOcclusion.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___freeformOcclusion_6;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___freeformOcclusion_6;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// freeformOcclusion = LightingMaterial.Load("Light2D/Internal/Light/FreeFormOcclusion");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral772E9667E7E3B3DE819DF3DC1FFF1D85DF261445, NULL);
		__this->___freeformOcclusion_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___freeformOcclusion_6), (void*)L_4);
	}

IL_002b:
	{
		// return(freeformOcclusion.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___freeformOcclusion_6;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// System.Void FunkyCode.Lighting2DMaterial.Lights::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lights__ctor_mF15F2EFC19A75888C08CDB3C689FFD66345E6F1D (Lights_tECCB145250BAC426989E77FB374536421B467FE8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FunkyCode.Lighting2DMaterial.Mask::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mask_Reset_m22F3A54310C7398C2C8646F223B3E63818E6A8DB (Mask_t8B4899F29A477996CF8F6529A7035C5388D309EE* __this, const RuntimeMethod* method) 
{
	{
		// mask = null;
		__this->___mask_0 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mask_0), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// dayMask = null;
		__this->___dayMask_2 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dayMask_2), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// maskTranslucency = null;
		__this->___maskTranslucency_1 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___maskTranslucency_1), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// }
		return;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Mask::GetMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Mask_GetMask_m1485BADA04BA4BE522CD3C3D827ACA40874E670E (Mask_t8B4899F29A477996CF8F6529A7035C5388D309EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1256B19FCB217438D8AC3048BC752499FC2CA341);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mask == null || mask.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___mask_0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___mask_0;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// mask = LightingMaterial.Load("Light2D/Internal/Mask");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral1256B19FCB217438D8AC3048BC752499FC2CA341, NULL);
		__this->___mask_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mask_0), (void*)L_4);
	}

IL_002b:
	{
		// return(mask.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___mask_0;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Mask::GetMaskTranslucency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Mask_GetMaskTranslucency_m9F8B50DEEC8D5500443E955A890EA5A2A2201C6A (Mask_t8B4899F29A477996CF8F6529A7035C5388D309EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CC020C4425B6477B2EE0BFC6A4A75C22CECDF20);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (maskTranslucency == null || maskTranslucency.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___maskTranslucency_1;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___maskTranslucency_1;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// maskTranslucency = LightingMaterial.Load("Light2D/Internal/MaskTranslucency");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral0CC020C4425B6477B2EE0BFC6A4A75C22CECDF20, NULL);
		__this->___maskTranslucency_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___maskTranslucency_1), (void*)L_4);
	}

IL_002b:
	{
		// return(maskTranslucency.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___maskTranslucency_1;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Mask::GetDayMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Mask_GetDayMask_mEE54914AD9BFAFFFAA4C98EF5188893FD675FDAE (Mask_t8B4899F29A477996CF8F6529A7035C5388D309EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A124BEF9FEAF7B87504CB4316BCDDFF746F188E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dayMask == null || dayMask.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___dayMask_2;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___dayMask_2;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// dayMask = LightingMaterial.Load("Light2D/Internal/DayMask");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral9A124BEF9FEAF7B87504CB4316BCDDFF746F188E, NULL);
		__this->___dayMask_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dayMask_2), (void*)L_4);
	}

IL_002b:
	{
		// return(dayMask.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___dayMask_2;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// System.Void FunkyCode.Lighting2DMaterial.Mask::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mask_Initialize_m3C840B48835A7284B927F13941B3507AEDCA8FAB (Mask_t8B4899F29A477996CF8F6529A7035C5388D309EE* __this, const RuntimeMethod* method) 
{
	{
		// GetMask();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Mask_GetMask_m1485BADA04BA4BE522CD3C3D827ACA40874E670E(__this, NULL);
		// GetMaskTranslucency();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Mask_GetMaskTranslucency_m9F8B50DEEC8D5500443E955A890EA5A2A2201C6A(__this, NULL);
		// GetDayMask();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Mask_GetDayMask_mEE54914AD9BFAFFFAA4C98EF5188893FD675FDAE(__this, NULL);
		// }
		return;
	}
}
// System.Void FunkyCode.Lighting2DMaterial.Mask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mask__ctor_m485935A4EC74182DB4111962148E793FDF6CBB0B (Mask_t8B4899F29A477996CF8F6529A7035C5388D309EE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FunkyCode.Lighting2DMaterial.Room::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_Reset_m35FA64258A40B8B315CD7EDBE8EC0FB046EDC40B (Room_t9D9FF97811BA8DCE6F0FC2A4D791DD0846D767FD* __this, const RuntimeMethod* method) 
{
	{
		// roomMask = null;
		__this->___roomMask_0 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roomMask_0), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// roomMultiply = null;
		__this->___roomMultiply_1 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roomMultiply_1), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// }
		return;
	}
}
// System.Void FunkyCode.Lighting2DMaterial.Room::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_Initialize_m1E08A252265907603113C30D813504EB42981564 (Room_t9D9FF97811BA8DCE6F0FC2A4D791DD0846D767FD* __this, const RuntimeMethod* method) 
{
	{
		// GetRoomMask();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Room_GetRoomMask_mCFC35B69A470440EA552742AB944156B5F5DC1DF(__this, NULL);
		// GetRoomMultiply();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Room_GetRoomMultiply_mDDF54761C06B50BFEBC4C7C72616516D709E3D73(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Room::GetRoomMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Room_GetRoomMask_mCFC35B69A470440EA552742AB944156B5F5DC1DF (Room_t9D9FF97811BA8DCE6F0FC2A4D791DD0846D767FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EEE61617972FA3974C71FBE41B3B9982DA8F278);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (roomMask == null || roomMask.Get() == null) {
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___roomMask_0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___roomMask_0;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// roomMask = LightingMaterial.Load("Light2D/Internal/RoomMask");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral1EEE61617972FA3974C71FBE41B3B9982DA8F278, NULL);
		__this->___roomMask_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roomMask_0), (void*)L_4);
	}

IL_002b:
	{
		// return(roomMask.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___roomMask_0;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Room::GetRoomMultiply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Room_GetRoomMultiply_mDDF54761C06B50BFEBC4C7C72616516D709E3D73 (Room_t9D9FF97811BA8DCE6F0FC2A4D791DD0846D767FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68B65A9BB6C0864894430E3B36A206D8F3B25C48);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (roomMultiply == null ||roomMultiply.Get() == null) {
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___roomMultiply_1;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___roomMultiply_1;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// roomMultiply = LightingMaterial.Load("Light2D/Internal/RoomMultiply");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral68B65A9BB6C0864894430E3B36A206D8F3B25C48, NULL);
		__this->___roomMultiply_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roomMultiply_1), (void*)L_4);
	}

IL_002b:
	{
		// return(roomMultiply.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___roomMultiply_1;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// System.Void FunkyCode.Lighting2DMaterial.Room::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room__ctor_m28F63F54129BC2FC143D20FF3707ED80E7BC040F (Room_t9D9FF97811BA8DCE6F0FC2A4D791DD0846D767FD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FunkyCode.Lighting2DMaterial.Shadow::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shadow_Reset_m9A901AB48B46653880D80717D2A1FF6E20C26274 (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) 
{
	{
		// penumbraSprite = null;
		__this->___penumbraSprite_0 = (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___penumbraSprite_0), (void*)(Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL);
		// softShadow = null;
		__this->___softShadow_2 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___softShadow_2), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// softShadowDefault = null;
		__this->___softShadowDefault_3 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___softShadowDefault_3), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// fastShadow = null;
		__this->___fastShadow_12 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fastShadow_12), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// alphaShadow = null;
		__this->___alphaShadow_4 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___alphaShadow_4), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// legacyGPUShadow = null;
		__this->___legacyGPUShadow_5 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___legacyGPUShadow_5), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// legacyCPUShadow = null;
		__this->___legacyCPUShadow_6 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___legacyCPUShadow_6), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// depthDayShadow = null;
		__this->___depthDayShadow_10 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthDayShadow_10), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// dayCPUShadow = null;
		__this->___dayCPUShadow_8 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dayCPUShadow_8), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// spriteProjection = null;
		__this->___spriteProjection_7 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteProjection_7), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// spriteShadow = null;
		__this->___spriteShadow_9 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteShadow_9), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// softDistanceShadow = null;
		__this->___softDistanceShadow_11 = (LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___softDistanceShadow_11), (void*)(LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE*)NULL);
		// }
		return;
	}
}
// System.Void FunkyCode.Lighting2DMaterial.Shadow::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shadow_Initialize_m715741ED7F42177CFFA43EF5AE96C804D49DCD28 (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) 
{
	{
		// GetPenumbraSprite();
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0;
		L_0 = Shadow_GetPenumbraSprite_m3ABFF0D3F3BB7F5DB559343435F5A7CFECFF8DE3(__this, NULL);
		// GetPenumbraSprite2();
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1;
		L_1 = Shadow_GetPenumbraSprite2_m4A18871EF4733F2872F4CB7A6BD0461233BBC7DA(__this, NULL);
		// GetSoftShadow();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Shadow_GetSoftShadow_m8063E398A3C0489E380A094B2EAEE1AA89FED8A9(__this, NULL);
		// GetSoftDistanceShadow();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Shadow_GetSoftDistanceShadow_m835CC8B1D830554BD629CE94D0F45B1FBDA17ED0(__this, NULL);
		// GetLegacyGPUShadow();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Shadow_GetLegacyGPUShadow_m413BF57BD2B51EBC123375819906BAF5F5F78AF6(__this, NULL);
		// GetLegacyCPUShadow();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Shadow_GetLegacyCPUShadow_mB201001E74DFE46984F744C0997659684C8D5ADD(__this, NULL);
		// GetDayCPUShadow();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Shadow_GetDayCPUShadow_m9D01C3079CCA5D5E623C241FA6D5FAD6AB0FA66F(__this, NULL);
		// GetSpriteShadow();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = Shadow_GetSpriteShadow_m8F1FA52EAE205FCF5EDD3B370D5928082CB4E777(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetDepthDayShadow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetDepthDayShadow_m9F177BC38493CED7D983C39869E760B9F1953A41 (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E74FF054C8310FCE056CB359DCA68F5C87B9CDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (depthDayShadow == null || depthDayShadow.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___depthDayShadow_10;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___depthDayShadow_10;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// depthDayShadow = LightingMaterial.Load("Light2D/Internal/Depth/DayShadow");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral2E74FF054C8310FCE056CB359DCA68F5C87B9CDA, NULL);
		__this->___depthDayShadow_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthDayShadow_10), (void*)L_4);
	}

IL_002b:
	{
		// return(depthDayShadow.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___depthDayShadow_10;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetAlphaShadow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetAlphaShadow_mCB6F7799FC72AFCC9F23C94BC22755D2B1CF4367 (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29B575E0966A0693D2D8F7F15CB13D16060F52EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6410690FDEC5FEA30BC864DD3E90E262C26F17D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (alphaShadow == null || alphaShadow.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___alphaShadow_4;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___alphaShadow_4;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}

IL_001b:
	{
		// alphaShadow = LightingMaterial.Load("Light2D/Internal/AlphaShadow");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteralC6410690FDEC5FEA30BC864DD3E90E262C26F17D, NULL);
		__this->___alphaShadow_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___alphaShadow_4), (void*)L_4);
		// alphaShadow.SetTexture("textures/white");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___alphaShadow_4;
		NullCheck(L_5);
		LightingMaterial_SetTexture_m2B25A8EDB9B3C3D9090E577F87E24D0A1B4701D2(L_5, _stringLiteral29B575E0966A0693D2D8F7F15CB13D16060F52EC, NULL);
	}

IL_003b:
	{
		// return(alphaShadow.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_6 = __this->___alphaShadow_4;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_6, NULL);
		return L_7;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetSoftShadow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetSoftShadow_m8063E398A3C0489E380A094B2EAEE1AA89FED8A9 (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B29A7E2E23BAD776B963D3FC1104D9CC58BFE5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (softShadow == null || softShadow.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___softShadow_2;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___softShadow_2;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// softShadow = LightingMaterial.Load("Light2D/Internal/Shadow/SoftShadow");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral6B29A7E2E23BAD776B963D3FC1104D9CC58BFE5A, NULL);
		__this->___softShadow_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___softShadow_2), (void*)L_4);
	}

IL_002b:
	{
		// return(softShadow.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___softShadow_2;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetSoftShadowDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetSoftShadowDefault_m275EF38AE704EA9784C580A7CAA6EC72EAC37070 (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54DD1D57ADDB8721B37BAA0153957778D2876D6C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (softShadowDefault == null || softShadowDefault.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___softShadowDefault_3;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___softShadowDefault_3;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// softShadowDefault = LightingMaterial.Load("Light2D/Internal/Shadow/SoftDefault");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral54DD1D57ADDB8721B37BAA0153957778D2876D6C, NULL);
		__this->___softShadowDefault_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___softShadowDefault_3), (void*)L_4);
	}

IL_002b:
	{
		// return(softShadowDefault.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___softShadowDefault_3;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetFastShadow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetFastShadow_m91A65E292269B1731F5835B4F439CBB737969E5C (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D11E39AD4497FEA6A802C702BDB1619CEAF344D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (fastShadow == null || fastShadow.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___fastShadow_12;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___fastShadow_12;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// fastShadow = LightingMaterial.Load("Light2D/Internal/Shadow/Fast");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral7D11E39AD4497FEA6A802C702BDB1619CEAF344D, NULL);
		__this->___fastShadow_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fastShadow_12), (void*)L_4);
	}

IL_002b:
	{
		// return(fastShadow.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___fastShadow_12;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetLegacyGPUShadow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetLegacyGPUShadow_m413BF57BD2B51EBC123375819906BAF5F5F78AF6 (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02A37ADB2DD7A80870BEBE5248EAB4D4EB26DD07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (legacyGPUShadow == null || legacyGPUShadow.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___legacyGPUShadow_5;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___legacyGPUShadow_5;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}

IL_001b:
	{
		// legacyGPUShadow = LightingMaterial.Load("Light2D/Internal/Shadow/LegacyGPU");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral02A37ADB2DD7A80870BEBE5248EAB4D4EB26DD07, NULL);
		__this->___legacyGPUShadow_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___legacyGPUShadow_5), (void*)L_4);
		// if (legacyGPUShadow.Get() != null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___legacyGPUShadow_5;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		// legacyGPUShadow.Get().mainTexture = GetPenumbraSprite().texture;
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_8 = __this->___legacyGPUShadow_5;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_8, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10;
		L_10 = Shadow_GetPenumbraSprite_m3ABFF0D3F3BB7F5DB559343435F5A7CFECFF8DE3(__this, NULL);
		NullCheck(L_10);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11;
		L_11 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_10, NULL);
		NullCheck(L_9);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_9, L_11, NULL);
	}

IL_0059:
	{
		// return(legacyGPUShadow.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_12 = __this->___legacyGPUShadow_5;
		NullCheck(L_12);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13;
		L_13 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_12, NULL);
		return L_13;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetSoftDistanceShadow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetSoftDistanceShadow_m835CC8B1D830554BD629CE94D0F45B1FBDA17ED0 (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9492E2F4F9998EF2D02BE09480EAEB4B85401E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (softDistanceShadow == null || softDistanceShadow.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___softDistanceShadow_11;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___softDistanceShadow_11;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}

IL_001b:
	{
		// softDistanceShadow = LightingMaterial.Load("Light2D/Internal/Shadow/SoftDistance");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteralC9492E2F4F9998EF2D02BE09480EAEB4B85401E6, NULL);
		__this->___softDistanceShadow_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___softDistanceShadow_11), (void*)L_4);
		// if (softDistanceShadow.Get() != null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___softDistanceShadow_11;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		// softDistanceShadow.Get().mainTexture = GetPenumbraSprite2().texture;
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_8 = __this->___softDistanceShadow_11;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_8, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10;
		L_10 = Shadow_GetPenumbraSprite2_m4A18871EF4733F2872F4CB7A6BD0461233BBC7DA(__this, NULL);
		NullCheck(L_10);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11;
		L_11 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_10, NULL);
		NullCheck(L_9);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_9, L_11, NULL);
	}

IL_0059:
	{
		// return(softDistanceShadow.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_12 = __this->___softDistanceShadow_11;
		NullCheck(L_12);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13;
		L_13 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_12, NULL);
		return L_13;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetLegacyCPUShadow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetLegacyCPUShadow_mB201001E74DFE46984F744C0997659684C8D5ADD (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF20BC63A74E5811508D63CE75D03AE0C2E46F3C8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (legacyCPUShadow == null || legacyCPUShadow.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___legacyCPUShadow_6;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___legacyCPUShadow_6;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}

IL_001b:
	{
		// legacyCPUShadow = LightingMaterial.Load("Light2D/Internal/Shadow/LegacyCPU");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteralF20BC63A74E5811508D63CE75D03AE0C2E46F3C8, NULL);
		__this->___legacyCPUShadow_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___legacyCPUShadow_6), (void*)L_4);
		// if (legacyCPUShadow.Get() != null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___legacyCPUShadow_6;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		// legacyCPUShadow.Get().mainTexture = GetPenumbraSprite().texture;
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_8 = __this->___legacyCPUShadow_6;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_8, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10;
		L_10 = Shadow_GetPenumbraSprite_m3ABFF0D3F3BB7F5DB559343435F5A7CFECFF8DE3(__this, NULL);
		NullCheck(L_10);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11;
		L_11 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_10, NULL);
		NullCheck(L_9);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_9, L_11, NULL);
	}

IL_0059:
	{
		// return(legacyCPUShadow.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_12 = __this->___legacyCPUShadow_6;
		NullCheck(L_12);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13;
		L_13 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_12, NULL);
		return L_13;
	}
}
// UnityEngine.Sprite FunkyCode.Lighting2DMaterial.Shadow::GetPenumbraSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Shadow_GetPenumbraSprite_m3ABFF0D3F3BB7F5DB559343435F5A7CFECFF8DE3 (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_mD30BD3A93DAF8B841F2BE37B3780DE390A04085A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE8461848C7FCD96F77E7B77A70D810A2E1895C6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (penumbraSprite == null)
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___penumbraSprite_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// penumbraSprite = Resources.Load<Sprite>("textures/penumbra");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2;
		L_2 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_mD30BD3A93DAF8B841F2BE37B3780DE390A04085A(_stringLiteralFE8461848C7FCD96F77E7B77A70D810A2E1895C6, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_mD30BD3A93DAF8B841F2BE37B3780DE390A04085A_RuntimeMethod_var);
		__this->___penumbraSprite_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___penumbraSprite_0), (void*)L_2);
	}

IL_001e:
	{
		// return(penumbraSprite);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___penumbraSprite_0;
		return L_3;
	}
}
// UnityEngine.Sprite FunkyCode.Lighting2DMaterial.Shadow::GetPenumbraSprite2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Shadow_GetPenumbraSprite2_m4A18871EF4733F2872F4CB7A6BD0461233BBC7DA (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_mD30BD3A93DAF8B841F2BE37B3780DE390A04085A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CFDEC4F0730A635540C578A3E65B7AED5B00F19);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (penumbraSprite2 == null)
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___penumbraSprite2_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// penumbraSprite2 = Resources.Load<Sprite>("textures/penumbra2");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2;
		L_2 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_mD30BD3A93DAF8B841F2BE37B3780DE390A04085A(_stringLiteral9CFDEC4F0730A635540C578A3E65B7AED5B00F19, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_mD30BD3A93DAF8B841F2BE37B3780DE390A04085A_RuntimeMethod_var);
		__this->___penumbraSprite2_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___penumbraSprite2_1), (void*)L_2);
	}

IL_001e:
	{
		// return(penumbraSprite2);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___penumbraSprite2_1;
		return L_3;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetDayCPUShadow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetDayCPUShadow_m9D01C3079CCA5D5E623C241FA6D5FAD6AB0FA66F (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DBEFC6CD4E1AD8D9CFD6670B1976D88EA855336);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dayCPUShadow == null || dayCPUShadow.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___dayCPUShadow_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___dayCPUShadow_8;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// dayCPUShadow = LightingMaterial.Load("Light2D/Internal/Day/SoftShadow");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteral7DBEFC6CD4E1AD8D9CFD6670B1976D88EA855336, NULL);
		__this->___dayCPUShadow_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dayCPUShadow_8), (void*)L_4);
	}

IL_002b:
	{
		// return(dayCPUShadow.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___dayCPUShadow_8;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetSpriteShadow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetSpriteShadow_m8F1FA52EAE205FCF5EDD3B370D5928082CB4E777 (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDB746CCD97F49964BB5AF0A256323B51C7EED53);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spriteShadow == null || spriteShadow.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___spriteShadow_9;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___spriteShadow_9;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// spriteShadow = LightingMaterial.Load("Light2D/Internal/SpriteShadow");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteralFDB746CCD97F49964BB5AF0A256323B51C7EED53, NULL);
		__this->___spriteShadow_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteShadow_9), (void*)L_4);
	}

IL_002b:
	{
		// return(spriteShadow.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___spriteShadow_9;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Material FunkyCode.Lighting2DMaterial.Shadow::GetSpriteProjectionMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Shadow_GetSpriteProjectionMaterial_m42C7A101EF1E8B9F3D345AC261A2D3925CF8949C (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF40C59FD620EB85CFE894572CA45F79D5D1CBB9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spriteProjection == null || spriteProjection.Get() == null)
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_0 = __this->___spriteProjection_7;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_1 = __this->___spriteProjection_7;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		// spriteProjection = LightingMaterial.Load("Light2D/Internal/SpriteProjection");
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_4;
		L_4 = LightingMaterial_Load_m7C5F729CBB06D44014D88E3D51F4CB1FA4B7205F(_stringLiteralF40C59FD620EB85CFE894572CA45F79D5D1CBB9B, NULL);
		__this->___spriteProjection_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteProjection_7), (void*)L_4);
	}

IL_002b:
	{
		// return(spriteProjection.Get());
		LightingMaterial_t90DAF570DAC60A19432CB6B5EA11E4C9B028C4FE* L_5 = __this->___spriteProjection_7;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = LightingMaterial_Get_mEAB6060D2B0169282E05ED9201128E43F37F0737(L_5, NULL);
		return L_6;
	}
}
// System.Void FunkyCode.Lighting2DMaterial.Shadow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shadow__ctor_m642893B5B7DAD7AB85105D23935B7D8251BB2BE4 (Shadow_t9E51C46AF044804E822B8F04717B4B82683690BD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<FunkyCode.MeshObject> FunkyCode.LightShape.Collider2DShape::GetMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* Collider2DShape_GetMeshes_m7165891B60A869A46BC1CA727EF45AA8F6CE7F6F (Collider2DShape_tAF6ADDE0E774C06B594E23CD3EDD692314EE53F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* V_0 = NULL;
	Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_2 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_3 = NULL;
	MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* V_4 = NULL;
	{
		// if (Meshes == null)
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
		if (L_0)
		{
			goto IL_008e;
		}
	}
	{
		// List<Polygon2> polygons = GetPolygonsLocal();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_1;
		L_1 = VirtualFuncInvoker0< List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* >::Invoke(7 /* System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsLocal() */, __this);
		V_0 = L_1;
		// if (polygons.Count > 0)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_inline(L_2, List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		// Meshes = new List<MeshObject>();
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_4 = (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E*)il2cpp_codegen_object_new(List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105(L_4, List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8), (void*)L_4);
		// foreach(Polygon2 poly in polygons)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_5 = V_0;
		NullCheck(L_5);
		Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F L_6;
		L_6 = List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629(L_5, List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0080:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD((&V_1), Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0075_1;
			}

IL_002f_1:
			{
				// foreach(Polygon2 poly in polygons)
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_7;
				L_7 = Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_inline((&V_1), Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
				V_2 = L_7;
				// if (poly.points.Length < 3)
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_8 = V_2;
				NullCheck(L_8);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9 = L_8->___points_0;
				NullCheck(L_9);
				if ((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) < ((int32_t)3)))
				{
					goto IL_0075_1;
				}
			}
			{
				// Mesh mesh = PolygonTriangulator2.Triangulate (poly, Vector2.zero, Vector2.zero, PolygonTriangulator2.Triangulation.Advanced);
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_10 = V_2;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
				L_11 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
				L_12 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_13;
				L_13 = PolygonTriangulator2_Triangulate_mE4C5F390599AD4BA2D19CECC6531D5F0CCB50D27(L_10, L_11, L_12, 0, NULL);
				V_3 = L_13;
				// if (mesh)
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_14 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_15;
				L_15 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_14, NULL);
				if (!L_15)
				{
					goto IL_0075_1;
				}
			}
			{
				// MeshObject meshObject = MeshObject.Get(mesh);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16 = V_3;
				MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_17;
				L_17 = MeshObject_Get_m92D15EB001A8D4835EA235E67D87C1789FE792EC(L_16, NULL);
				V_4 = L_17;
				// if (meshObject != null)
				MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_18 = V_4;
				if (!L_18)
				{
					goto IL_0075_1;
				}
			}
			{
				// Meshes.Add(meshObject);
				List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_19 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
				MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_20 = V_4;
				NullCheck(L_19);
				List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_inline(L_19, L_20, List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_RuntimeMethod_var);
			}

IL_0075_1:
			{
				// foreach(Polygon2 poly in polygons)
				bool L_21;
				L_21 = Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E((&V_1), Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_008e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008e:
	{
		// return(Meshes);
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_22 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
		return L_22;
	}
}
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Collider2DShape::GetPolygonsLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* Collider2DShape_GetPolygonsLocal_m9AD40BA2931B5C6A433F3EB9A7B200998B8BE976 (Collider2DShape_tAF6ADDE0E774C06B594E23CD3EDD692314EE53F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710_m808A5384C648E38F30A9543161719E39F6A3ED61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (LocalPolygons != null)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return(LocalPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_1 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		return L_1;
	}

IL_000f:
	{
		// if (transform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return(LocalPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_4 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		return L_4;
	}

IL_0024:
	{
		// LocalPolygons = Polygon2ListCollider2D.CreateFromGameObject(transform.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_7;
		L_7 = Polygon2ListCollider2D_CreateFromGameObject_m0926DF491B5ECCC86B1283FC12981CF1AD946816(L_6, NULL);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6), (void*)L_7);
		// if (LocalPolygons.Count > 0)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_8 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_inline(L_8, List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		// edgeCollider2D = (transform.GetComponent<EdgeCollider2D>() != null);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_10);
		EdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710* L_11;
		L_11 = Component_GetComponent_TisEdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710_m808A5384C648E38F30A9543161719E39F6A3ED61(L_10, Component_GetComponent_TisEdgeCollider2D_tB7A39F2B1345894C40577A62FD62244702DE3710_m808A5384C648E38F30A9543161719E39F6A3ED61_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->___edgeCollider2D_10 = L_12;
	}

IL_005f:
	{
		// return(LocalPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_13 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		return L_13;
	}
}
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Collider2DShape::GetPolygonsWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* Collider2DShape_GetPolygonsWorld_m7A9B52D66416751CB9EC375FADB5F9784D2EB3BB (Collider2DShape_tAF6ADDE0E774C06B594E23CD3EDD692314EE53F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_0 = NULL;
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_1 = NULL;
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F V_5;
	memset((&V_5), 0, sizeof(V_5));
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_6 = NULL;
	{
		// if (WorldPolygons != null)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return(WorldPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_1 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_1;
	}

IL_000f:
	{
		// if (WorldCache != null)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_2 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1;
		if (!L_2)
		{
			goto IL_008f;
		}
	}
	{
		// WorldPolygons = WorldCache;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_3 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1;
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_3);
		// List<Polygon2> list = GetPolygonsLocal();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_4;
		L_4 = VirtualFuncInvoker0< List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* >::Invoke(7 /* System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsLocal() */, __this);
		V_2 = L_4;
		// for(int i = 0; i < list.Count; i++)
		V_3 = 0;
		goto IL_0084;
	}

IL_002e:
	{
		// poly = list[i];
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_7;
		L_7 = List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13(L_5, L_6, List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		V_0 = L_7;
		// wPoly = WorldPolygons[i];
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_8 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_10;
		L_10 = List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13(L_8, L_9, List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		V_1 = L_10;
		// for(int p = 0; p < poly.points.Length; p++)
		V_4 = 0;
		goto IL_0068;
	}

IL_0048:
	{
		// wPoly.points[p] = poly.points[p];
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_11 = V_1;
		NullCheck(L_11);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_12 = L_11->___points_0;
		int32_t L_13 = V_4;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_14 = V_0;
		NullCheck(L_14);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_15 = L_14->___points_0;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_18);
		// for(int p = 0; p < poly.points.Length; p++)
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0068:
	{
		// for(int p = 0; p < poly.points.Length; p++)
		int32_t L_20 = V_4;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_21 = V_0;
		NullCheck(L_21);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_22 = L_21->___points_0;
		NullCheck(L_22);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0048;
		}
	}
	{
		// wPoly.ToWorldSpaceSelfUNIVERSAL(transform);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_23 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_23);
		Polygon2_ToWorldSpaceSelfUNIVERSAL_m1CA0E88F73C6DE678DB80A48A749DF2E772433FE(L_23, L_24, NULL);
		// for(int i = 0; i < list.Count; i++)
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0084:
	{
		// for(int i = 0; i < list.Count; i++)
		int32_t L_26 = V_3;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_inline(L_27, List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_00f7;
	}

IL_008f:
	{
		// WorldPolygons = new List<Polygon2>();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_29 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)il2cpp_codegen_object_new(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F(L_29, List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_29);
		// if (GetPolygonsLocal() != null)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_30;
		L_30 = VirtualFuncInvoker0< List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* >::Invoke(7 /* System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsLocal() */, __this);
		if (!L_30)
		{
			goto IL_00eb;
		}
	}
	{
		// foreach(Polygon2 poly in GetPolygonsLocal())
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_31;
		L_31 = VirtualFuncInvoker0< List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* >::Invoke(7 /* System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsLocal() */, __this);
		NullCheck(L_31);
		Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F L_32;
		L_32 = List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629(L_31, List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		V_5 = L_32;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00dd:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD((&V_5), Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d2_1;
			}

IL_00b1_1:
			{
				// foreach(Polygon2 poly in GetPolygonsLocal())
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_33;
				L_33 = Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_inline((&V_5), Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
				V_6 = L_33;
				// WorldPolygons.Add(poly.ToWorldSpace(transform));
				List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_34 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_35 = V_6;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
				NullCheck(L_35);
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_37;
				L_37 = Polygon2_ToWorldSpace_m8DC611C0D8C40792013A36AA9B28F570FA2AFCFA(L_35, L_36, NULL);
				NullCheck(L_34);
				List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_inline(L_34, L_37, List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var);
			}

IL_00d2_1:
			{
				// foreach(Polygon2 poly in GetPolygonsLocal())
				bool L_38;
				L_38 = Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E((&V_5), Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_00b1_1;
				}
			}
			{
				goto IL_00eb;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00eb:
	{
		// WorldCache = WorldPolygons;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_39 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1), (void*)L_39);
	}

IL_00f7:
	{
		// return(WorldPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_40 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_40;
	}
}
// System.Void FunkyCode.LightShape.Collider2DShape::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider2DShape__ctor_mEACF7C045DDB58661EA61C695ECBCA191A1BFA92 (Collider2DShape_tAF6ADDE0E774C06B594E23CD3EDD692314EE53F4* __this, const RuntimeMethod* method) 
{
	{
		Base__ctor_m0B2F128E7F35ECD7DDB068DD4406137B96A749AF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<FunkyCode.MeshObject> FunkyCode.LightShape.Collider3DShape::GetMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* Collider3DShape_GetMeshes_mEA49D1A8BB4CBA1095E8B802D1F5F61F6069CBAA (Collider3DShape_t8C4300F45946A263397E81640B1D363EE8760D8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* V_0 = NULL;
	Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_2 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_3 = NULL;
	MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* V_4 = NULL;
	{
		// if (Meshes == null) {
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
		if (L_0)
		{
			goto IL_0093;
		}
	}
	{
		// List<Polygon2> polygons = GetPolygonsLocal();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_1;
		L_1 = VirtualFuncInvoker0< List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* >::Invoke(7 /* System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsLocal() */, __this);
		V_0 = L_1;
		// if (polygons == null) {
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return(null);
		return (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E*)NULL;
	}

IL_0017:
	{
		// if (polygons.Count > 0) {
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_inline(L_3, List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		// Meshes = new List<MeshObject>();
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_5 = (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E*)il2cpp_codegen_object_new(List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105(L_5, List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8), (void*)L_5);
		// foreach(Polygon2 poly in polygons) {
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_6 = V_0;
		NullCheck(L_6);
		Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F L_7;
		L_7 = List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629(L_6, List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0085:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD((&V_1), Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007a_1;
			}

IL_0034_1:
			{
				// foreach(Polygon2 poly in polygons) {
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_8;
				L_8 = Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_inline((&V_1), Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
				V_2 = L_8;
				// if (poly.points.Length < 3) {
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_9 = V_2;
				NullCheck(L_9);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = L_9->___points_0;
				NullCheck(L_10);
				if ((((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))) < ((int32_t)3)))
				{
					goto IL_007a_1;
				}
			}
			{
				// Mesh mesh = PolygonTriangulator2.Triangulate (poly, Vector2.zero, Vector2.zero, PolygonTriangulator2.Triangulation.Advanced);
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_11 = V_2;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
				L_12 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
				L_13 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_14;
				L_14 = PolygonTriangulator2_Triangulate_mE4C5F390599AD4BA2D19CECC6531D5F0CCB50D27(L_11, L_12, L_13, 0, NULL);
				V_3 = L_14;
				// if (mesh) {
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_15 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_16;
				L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
				if (!L_16)
				{
					goto IL_007a_1;
				}
			}
			{
				// MeshObject meshObject = MeshObject.Get(mesh);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_17 = V_3;
				MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_18;
				L_18 = MeshObject_Get_m92D15EB001A8D4835EA235E67D87C1789FE792EC(L_17, NULL);
				V_4 = L_18;
				// if (meshObject != null) {
				MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_19 = V_4;
				if (!L_19)
				{
					goto IL_007a_1;
				}
			}
			{
				// Meshes.Add(meshObject);
				List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_20 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
				MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_21 = V_4;
				NullCheck(L_20);
				List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_inline(L_20, L_21, List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_RuntimeMethod_var);
			}

IL_007a_1:
			{
				// foreach(Polygon2 poly in polygons) {
				bool L_22;
				L_22 = Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E((&V_1), Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0034_1;
				}
			}
			{
				goto IL_0093;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0093:
	{
		// return(Meshes);
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_23 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
		return L_23;
	}
}
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Collider3DShape::GetPolygonsLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* Collider3DShape_GetPolygonsLocal_m2996A3EC78A06D30BAF0B690B621D8465222E490 (Collider3DShape_t8C4300F45946A263397E81640B1D363EE8760D8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (LocalPolygons != null) {
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return(LocalPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_1 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		return L_1;
	}

IL_000f:
	{
		// if (transform == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return(LocalPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_4 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		return L_4;
	}

IL_0024:
	{
		// LocalPolygons = Polygon2ListCollider3D.CreateFromGameObject(transform.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_7;
		L_7 = Polygon2ListCollider3D_CreateFromGameObject_m7585C170B6CA1851BDDF53371D143E4B6A43837D(L_6, NULL);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6), (void*)L_7);
		// return(LocalPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_8 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		return L_8;
	}
}
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Collider3DShape::GetPolygonsWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* Collider3DShape_GetPolygonsWorld_m497CEBF4A088D0F5BD424D342B0C0E3B57D1CDE4 (Collider3DShape_t8C4300F45946A263397E81640B1D363EE8760D8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_1 = NULL;
	{
		// if (WorldPolygons != null) {
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return(WorldPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_1 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_1;
	}

IL_000f:
	{
		// WorldPolygons = new List<Polygon2>();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_2 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)il2cpp_codegen_object_new(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F(L_2, List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_2);
		// if (GetPolygonsLocal() != null) {
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_3;
		L_3 = VirtualFuncInvoker0< List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* >::Invoke(7 /* System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsLocal() */, __this);
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		// foreach(Polygon2 poly in GetPolygonsLocal()) {
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_4;
		L_4 = VirtualFuncInvoker0< List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* >::Invoke(7 /* System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsLocal() */, __this);
		NullCheck(L_4);
		Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F L_5;
		L_5 = List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629(L_4, List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD((&V_0), Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004f_1;
			}

IL_0030_1:
			{
				// foreach(Polygon2 poly in GetPolygonsLocal()) {
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_6;
				L_6 = Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_inline((&V_0), Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
				V_1 = L_6;
				// WorldPolygons.Add(poly.ToWorldSpace(transform));
				List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_7 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_8 = V_1;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
				NullCheck(L_8);
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_10;
				L_10 = Polygon2_ToWorldSpace_m8DC611C0D8C40792013A36AA9B28F570FA2AFCFA(L_8, L_9, NULL);
				NullCheck(L_7);
				List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_inline(L_7, L_10, List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var);
			}

IL_004f_1:
			{
				// foreach(Polygon2 poly in GetPolygonsLocal()) {
				bool L_11;
				L_11 = Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E((&V_0), Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0030_1;
				}
			}
			{
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		// return(WorldPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_12 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_12;
	}
}
// System.Void FunkyCode.LightShape.Collider3DShape::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider3DShape__ctor_mBECB428310192F9F2C341A7A199A28726856E6F2 (Collider3DShape_t8C4300F45946A263397E81640B1D363EE8760D8B* __this, const RuntimeMethod* method) 
{
	{
		Base__ctor_m0B2F128E7F35ECD7DDB068DD4406137B96A749AF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.CompositeCollider2D FunkyCode.LightShape.CompositeCollider2DShape::GetCompositeCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* CompositeCollider2DShape_GetCompositeCollider_m1AD27181B29D377638C1B064E17872B69AD62615 (CompositeCollider2DShape_t1A95207D8A3E361B4694CE001345A12FB611664C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8_m32AE6BCB1B9F29861AAA00EAB8603BEA591770A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (compositeCollider == null) {
		CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* L_0 = __this->___compositeCollider_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// compositeCollider = transform.GetComponent<CompositeCollider2D>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_2);
		CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* L_3;
		L_3 = Component_GetComponent_TisCompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8_m32AE6BCB1B9F29861AAA00EAB8603BEA591770A1(L_2, Component_GetComponent_TisCompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8_m32AE6BCB1B9F29861AAA00EAB8603BEA591770A1_RuntimeMethod_var);
		__this->___compositeCollider_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___compositeCollider_10), (void*)L_3);
	}

IL_001f:
	{
		// return(compositeCollider);
		CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* L_4 = __this->___compositeCollider_10;
		return L_4;
	}
}
// System.Collections.Generic.List`1<FunkyCode.MeshObject> FunkyCode.LightShape.CompositeCollider2DShape::GetMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* CompositeCollider2DShape_GetMeshes_m244C476748CF968D3D261D67F8A4F678F65ED594 (CompositeCollider2DShape_t1A95207D8A3E361B4694CE001345A12FB611664C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* V_0 = NULL;
	Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_2 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_3 = NULL;
	MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* V_4 = NULL;
	{
		// if (Meshes == null) {
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
		if (L_0)
		{
			goto IL_008e;
		}
	}
	{
		// List<Polygon2> polygons = GetPolygonsLocal();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_1;
		L_1 = VirtualFuncInvoker0< List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* >::Invoke(7 /* System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsLocal() */, __this);
		V_0 = L_1;
		// if (polygons.Count > 0) {
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_inline(L_2, List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		// Meshes = new List<MeshObject>();
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_4 = (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E*)il2cpp_codegen_object_new(List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105(L_4, List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8), (void*)L_4);
		// foreach(Polygon2 poly in polygons) {
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_5 = V_0;
		NullCheck(L_5);
		Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F L_6;
		L_6 = List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629(L_5, List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0080:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD((&V_1), Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0075_1;
			}

IL_002f_1:
			{
				// foreach(Polygon2 poly in polygons) {
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_7;
				L_7 = Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_inline((&V_1), Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
				V_2 = L_7;
				// if (poly.points.Length < 3) {
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_8 = V_2;
				NullCheck(L_8);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9 = L_8->___points_0;
				NullCheck(L_9);
				if ((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) < ((int32_t)3)))
				{
					goto IL_0075_1;
				}
			}
			{
				// Mesh mesh = PolygonTriangulator2.Triangulate (poly, Vector2.zero, Vector2.zero, PolygonTriangulator2.Triangulation.Advanced);
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_10 = V_2;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
				L_11 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
				L_12 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_13;
				L_13 = PolygonTriangulator2_Triangulate_mE4C5F390599AD4BA2D19CECC6531D5F0CCB50D27(L_10, L_11, L_12, 0, NULL);
				V_3 = L_13;
				// if (mesh) {
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_14 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_15;
				L_15 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_14, NULL);
				if (!L_15)
				{
					goto IL_0075_1;
				}
			}
			{
				// MeshObject meshObject = MeshObject.Get(mesh);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16 = V_3;
				MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_17;
				L_17 = MeshObject_Get_m92D15EB001A8D4835EA235E67D87C1789FE792EC(L_16, NULL);
				V_4 = L_17;
				// if (meshObject != null) {
				MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_18 = V_4;
				if (!L_18)
				{
					goto IL_0075_1;
				}
			}
			{
				// Meshes.Add(meshObject);
				List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_19 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
				MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_20 = V_4;
				NullCheck(L_19);
				List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_inline(L_19, L_20, List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_RuntimeMethod_var);
			}

IL_0075_1:
			{
				// foreach(Polygon2 poly in polygons) {
				bool L_21;
				L_21 = Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E((&V_1), Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_008e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008e:
	{
		// return(Meshes);
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_22 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
		return L_22;
	}
}
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.CompositeCollider2DShape::GetPolygonsWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* CompositeCollider2DShape_GetPolygonsWorld_m4EF2E20592A02C7A53F9D198D84E97ECC7674738 (CompositeCollider2DShape_t1A95207D8A3E361B4694CE001345A12FB611664C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F V_5;
	memset((&V_5), 0, sizeof(V_5));
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_6 = NULL;
	{
		// if (WorldPolygons != null) {
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return(WorldPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_1 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_1;
	}

IL_000f:
	{
		// if (WorldCache != null) {
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_2 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1;
		if (!L_2)
		{
			goto IL_00d0;
		}
	}
	{
		// WorldPolygons = WorldCache;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_3 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1;
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_3);
		// List<Polygon2> list = GetPolygonsLocal();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_4;
		L_4 = VirtualFuncInvoker0< List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* >::Invoke(7 /* System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsLocal() */, __this);
		V_2 = L_4;
		// for(int i = 0; i < list.Count; i++) {
		V_3 = 0;
		goto IL_00c2;
	}

IL_0034:
	{
		// poly = list[i];
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_7;
		L_7 = List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13(L_5, L_6, List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		V_0 = L_7;
		// for(int p = 0; p < poly.points.Length; p++) {
		V_4 = 0;
		goto IL_009b;
	}

IL_0041:
	{
		// point = poly.points[p];
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_8 = V_0;
		NullCheck(L_8);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9 = L_8->___points_0;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = L_12;
		// WorldPolygons[i].points[p].x = point.x;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_13 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_15;
		L_15 = List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13(L_13, L_14, List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		NullCheck(L_15);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_16 = L_15->___points_0;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_1;
		float L_19 = L_18.___x_0;
		((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___x_0 = L_19;
		// WorldPolygons[i].points[p].y = point.y;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_20 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_22;
		L_22 = List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13(L_20, L_21, List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		NullCheck(L_22);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_23 = L_22->___points_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_1;
		float L_26 = L_25.___y_1;
		((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___y_1 = L_26;
		// for(int p = 0; p < poly.points.Length; p++) {
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_009b:
	{
		// for(int p = 0; p < poly.points.Length; p++) {
		int32_t L_28 = V_4;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_29 = V_0;
		NullCheck(L_29);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_30 = L_29->___points_0;
		NullCheck(L_30);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0041;
		}
	}
	{
		// WorldPolygons[i].ToWorldSpaceSelfUNIVERSAL(transform);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_31 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		int32_t L_32 = V_3;
		NullCheck(L_31);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_33;
		L_33 = List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13(L_31, L_32, List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_33);
		Polygon2_ToWorldSpaceSelfUNIVERSAL_m1CA0E88F73C6DE678DB80A48A749DF2E772433FE(L_33, L_34, NULL);
		// for(int i = 0; i < list.Count; i++) {
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00c2:
	{
		// for(int i = 0; i < list.Count; i++) {
		int32_t L_36 = V_3;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_inline(L_37, List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_0130;
	}

IL_00d0:
	{
		// WorldPolygons = new List<Polygon2>();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_39 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)il2cpp_codegen_object_new(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F(L_39, List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_39);
		// foreach(Polygon2 poly in GetPolygonsLocal()) {
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_40;
		L_40 = VirtualFuncInvoker0< List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* >::Invoke(7 /* System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsLocal() */, __this);
		NullCheck(L_40);
		Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F L_41;
		L_41 = List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629(L_40, List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		V_5 = L_41;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0116:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD((&V_5), Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_010b_1;
			}

IL_00ea_1:
			{
				// foreach(Polygon2 poly in GetPolygonsLocal()) {
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_42;
				L_42 = Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_inline((&V_5), Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
				V_6 = L_42;
				// WorldPolygons.Add(poly.ToWorldSpace(transform));
				List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_43 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_44 = V_6;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
				NullCheck(L_44);
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_46;
				L_46 = Polygon2_ToWorldSpace_m8DC611C0D8C40792013A36AA9B28F570FA2AFCFA(L_44, L_45, NULL);
				NullCheck(L_43);
				List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_inline(L_43, L_46, List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var);
			}

IL_010b_1:
			{
				// foreach(Polygon2 poly in GetPolygonsLocal()) {
				bool L_47;
				L_47 = Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E((&V_5), Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
				if (L_47)
				{
					goto IL_00ea_1;
				}
			}
			{
				goto IL_0124;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0124:
	{
		// WorldCache = WorldPolygons;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_48 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1), (void*)L_48);
	}

IL_0130:
	{
		// return(WorldPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_49 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_49;
	}
}
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.CompositeCollider2DShape::GetPolygonsLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* CompositeCollider2DShape_GetPolygonsLocal_m2E07ABE265C0AEE6E8924572C7B3C4D3E311CE8F (CompositeCollider2DShape_t1A95207D8A3E361B4694CE001345A12FB611664C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Polygon2Collider2D_tA3B1D29DF1F185806590CD6F430CF75FD909CF66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C3CE03CEDB9C0F6B4207E4C62000FEC423A4C29);
		s_Il2CppMethodInitialized = true;
	}
	CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* V_0 = NULL;
	{
		// if (LocalPolygons != null) {
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return(LocalPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_1 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		return L_1;
	}

IL_000f:
	{
		// CompositeCollider2D compositeCollider = GetCompositeCollider();
		CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* L_2;
		L_2 = CompositeCollider2DShape_GetCompositeCollider_m1AD27181B29D377638C1B064E17872B69AD62615(__this, NULL);
		V_0 = L_2;
		// LocalPolygons = Polygon2Collider2D.CreateFromCompositeCollider(compositeCollider);
		CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Polygon2Collider2D_tA3B1D29DF1F185806590CD6F430CF75FD909CF66_il2cpp_TypeInfo_var);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_4;
		L_4 = Polygon2Collider2D_CreateFromCompositeCollider_m08D6500541F5206B032F36E50448EE3954B85719(L_3, NULL);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6), (void*)L_4);
		// if (LocalPolygons.Count <= 0) {
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_5 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_inline(L_5, List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		// Debug.LogWarning("SmartLighting2D: LightingCollider2D object is missing CompositeCollider2D Component", transform.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral1C3CE03CEDB9C0F6B4207E4C62000FEC423A4C29, L_8, NULL);
	}

IL_0045:
	{
		// return(LocalPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_9 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		return L_9;
	}
}
// System.Void FunkyCode.LightShape.CompositeCollider2DShape::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeCollider2DShape__ctor_mEC82863871E4BD8BAAAA6FAC0D146D707FE8B5B1 (CompositeCollider2DShape_t1A95207D8A3E361B4694CE001345A12FB611664C* __this, const RuntimeMethod* method) 
{
	{
		Base__ctor_m0B2F128E7F35ECD7DDB068DD4406137B96A749AF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Mesh FunkyCode.LightShape.MeshRendererShape::get_Mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshRendererShape_get_Mesh_m451AD9E4873D9DA0C34278EB1744614C8EB36DB6 (MeshRendererShape_tC193DD208D035762FBE951AAA017FF72DCCC9082* __this, const RuntimeMethod* method) 
{
	{
		// public Mesh Mesh => mesh;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___mesh_12;
		return L_0;
	}
}
// System.Int32 FunkyCode.LightShape.MeshRendererShape::GetSortingLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshRendererShape_GetSortingLayer_mAE69804D1476B7BEB8FDFB8358EE3C90CE46259D (MeshRendererShape_tC193DD208D035762FBE951AAA017FF72DCCC9082* __this, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.SortingLayer.GetLayerValueFromID(GetMeshRenderer().sortingLayerID);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = MeshRendererShape_GetMeshRenderer_mE74E14686A824ACBB11B26352BB3C6F28F7F3DB8(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Renderer_get_sortingLayerID_m3D7AE74F1B87099810CF969CB4520C85F9AE5F92(L_0, NULL);
		int32_t L_2;
		L_2 = SortingLayer_GetLayerValueFromID_mEB8A5234102CD7B2C6158661A931EA120A38707C(L_1, NULL);
		return L_2;
	}
}
// System.Int32 FunkyCode.LightShape.MeshRendererShape::GetSortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshRendererShape_GetSortingOrder_mEF7E7E4A47EAEE5A63686F898FB03574DADB065C (MeshRendererShape_tC193DD208D035762FBE951AAA017FF72DCCC9082* __this, const RuntimeMethod* method) 
{
	{
		// return GetMeshRenderer().sortingOrder;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = MeshRendererShape_GetMeshRenderer_mE74E14686A824ACBB11B26352BB3C6F28F7F3DB8(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA(L_0, NULL);
		return L_1;
	}
}
// System.Void FunkyCode.LightShape.MeshRendererShape::ResetLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshRendererShape_ResetLocal_m2612D7A7A7839E78CF2BD4267E9D7F37B37BAA44 (MeshRendererShape_tC193DD208D035762FBE951AAA017FF72DCCC9082* __this, const RuntimeMethod* method) 
{
	{
		// base.ResetLocal();
		Base_ResetLocal_m8CFAD868A9AEC5D1E39453F560037C0BEE6C3549(__this, NULL);
		// mesh = null;
		__this->___mesh_12 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_12), (void*)(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL);
		// Meshes = null;
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8 = (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8), (void*)(List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E*)NULL);
		// }
		return;
	}
}
// UnityEngine.MeshFilter FunkyCode.LightShape.MeshRendererShape::GetMeshFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* MeshRendererShape_GetMeshFilter_m9D78F4455AE293EE24180450F1CDC72722CD4C65 (MeshRendererShape_tC193DD208D035762FBE951AAA017FF72DCCC9082* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!meshFilter && transform)
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->___meshFilter_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// meshFilter = transform.GetComponent<MeshFilter>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_4);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_5;
		L_5 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(L_4, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		__this->___meshFilter_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshFilter_10), (void*)L_5);
	}

IL_002b:
	{
		// return meshFilter;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_6 = __this->___meshFilter_10;
		return L_6;
	}
}
// UnityEngine.MeshRenderer FunkyCode.LightShape.MeshRendererShape::GetMeshRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* MeshRendererShape_GetMeshRenderer_mE74E14686A824ACBB11B26352BB3C6F28F7F3DB8 (MeshRendererShape_tC193DD208D035762FBE951AAA017FF72DCCC9082* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!meshRenderer && transform)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___meshRenderer_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// meshRenderer = transform.GetComponent<MeshRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_4);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5;
		L_5 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_4, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->___meshRenderer_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer_11), (void*)L_5);
	}

IL_002b:
	{
		// return meshRenderer;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_6 = __this->___meshRenderer_11;
		return L_6;
	}
}
// System.Collections.Generic.List`1<FunkyCode.MeshObject> FunkyCode.LightShape.MeshRendererShape::GetMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* MeshRendererShape_GetMeshes_mA57262A4895FB72BE02B02180823736C13C55ECC (MeshRendererShape_tC193DD208D035762FBE951AAA017FF72DCCC9082* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1132B207B4DB3036C424089107B143E1FB581C61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC1E91EBA187E6079D1DEEE5F30C4C8B5DC9AD71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC247B90EEB07301B67099EF2DB78151B7EAE3C1);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_0 = NULL;
	int32_t V_1 = 0;
	MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* V_2 = NULL;
	{
		// if (Meshes == null)
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
		if (L_0)
		{
			goto IL_00ef;
		}
	}
	{
		// var meshFilter = GetMeshFilter();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_1;
		L_1 = MeshRendererShape_GetMeshFilter_m9D78F4455AE293EE24180450F1CDC72722CD4C65(__this, NULL);
		V_0 = L_1;
		// if (meshFilter)
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_00ef;
		}
	}
	{
		// mesh = meshFilter.sharedMesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_4 = V_0;
		NullCheck(L_4);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5;
		L_5 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_4, NULL);
		__this->___mesh_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_12), (void*)L_5);
		// if (!mesh.isReadable)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = __this->___mesh_12;
		NullCheck(L_6);
		bool L_7;
		L_7 = Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0(L_6, NULL);
		if (L_7)
		{
			goto IL_00bc;
		}
	}
	{
		// Debug.LogError("SL2D: the mesh you are using is not readable (vert "+mesh.vertices.Length+", tris "+mesh.triangles.Length+", uv " + mesh.uv.Length + ")", transform.gameObject);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralDC247B90EEB07301B67099EF2DB78151B7EAE3C1);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDC247B90EEB07301B67099EF2DB78151B7EAE3C1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_11 = __this->___mesh_12;
		NullCheck(L_11);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12;
		L_12 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_11, NULL);
		NullCheck(L_12);
		V_1 = ((int32_t)(((RuntimeArray*)L_12)->max_length));
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_10;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralDC1E91EBA187E6079D1DEEE5F30C4C8B5DC9AD71);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDC1E91EBA187E6079D1DEEE5F30C4C8B5DC9AD71);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16 = __this->___mesh_12;
		NullCheck(L_16);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17;
		L_17 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_16, NULL);
		NullCheck(L_17);
		V_1 = ((int32_t)(((RuntimeArray*)L_17)->max_length));
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_15;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral1132B207B4DB3036C424089107B143E1FB581C61);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1132B207B4DB3036C424089107B143E1FB581C61);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_21 = __this->___mesh_12;
		NullCheck(L_21);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_22;
		L_22 = Mesh_get_uv_mA47805C48AB3493FF3727922C43E77880E73519F(L_21, NULL);
		NullCheck(L_22);
		V_1 = ((int32_t)(((RuntimeArray*)L_22)->max_length));
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_20;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_25;
		L_25 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(L_25, L_27, NULL);
	}

IL_00bc:
	{
		// if (mesh)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_28 = __this->___mesh_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_28, NULL);
		if (!L_29)
		{
			goto IL_00ef;
		}
	}
	{
		// Meshes = new List<MeshObject>();
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_30 = (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E*)il2cpp_codegen_object_new(List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105(L_30, List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8), (void*)L_30);
		// var meshObject = MeshObject.Get(mesh);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_31 = __this->___mesh_12;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_32;
		L_32 = MeshObject_Get_m92D15EB001A8D4835EA235E67D87C1789FE792EC(L_31, NULL);
		V_2 = L_32;
		// if (meshObject != null)
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_33 = V_2;
		if (!L_33)
		{
			goto IL_00ef;
		}
	}
	{
		// Meshes.Add(meshObject);
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_34 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_35 = V_2;
		NullCheck(L_34);
		List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_inline(L_34, L_35, List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_RuntimeMethod_var);
	}

IL_00ef:
	{
		// return(Meshes);
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_36 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
		return L_36;
	}
}
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.MeshRendererShape::GetPolygonsWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* MeshRendererShape_GetPolygonsWorld_mF9EA621090514EE26F1A6E19CA8EDD92156CBE47 (MeshRendererShape_tC193DD208D035762FBE951AAA017FF72DCCC9082* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m727F3C923A41AA32BC9CDB9F7E8784563DA75442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDD8A3A52561D071E3ACDCF294957F3799DF26B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46247ED5E9EC14400EC37FA4C89C26AC315D2B35);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* V_0 = NULL;
	MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// if (WorldPolygons != null)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return(WorldPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_1 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_1;
	}

IL_000f:
	{
		// var meshes = GetMeshes();
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_2;
		L_2 = VirtualFuncInvoker0< List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* >::Invoke(6 /* System.Collections.Generic.List`1<FunkyCode.MeshObject> FunkyCode.LightShape.Base::GetMeshes() */, __this);
		V_0 = L_2;
		// if (meshes == null)
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_3 = V_0;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		// WorldPolygons = new List<Polygon2>();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_4 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)il2cpp_codegen_object_new(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F(L_4, List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_4);
		// return(WorldPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_5 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_5;
	}

IL_002b:
	{
		// if (meshes.Count < 1)
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m727F3C923A41AA32BC9CDB9F7E8784563DA75442_inline(L_6, List_1_get_Count_m727F3C923A41AA32BC9CDB9F7E8784563DA75442_RuntimeMethod_var);
		if ((((int32_t)L_7) >= ((int32_t)1)))
		{
			goto IL_005b;
		}
	}
	{
		// WorldPolygons = new List<Polygon2>();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_8 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)il2cpp_codegen_object_new(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F(L_8, List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_8);
		// Debug.LogError("SL2D: no meshes found", transform.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteral46247ED5E9EC14400EC37FA4C89C26AC315D2B35, L_10, NULL);
		// return(WorldPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_11 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_11;
	}

IL_005b:
	{
		// var meshObject = meshes[0];
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_12 = V_0;
		NullCheck(L_12);
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_13;
		L_13 = List_1_get_Item_mDD8A3A52561D071E3ACDCF294957F3799DF26B5D(L_12, 0, List_1_get_Item_mDD8A3A52561D071E3ACDCF294957F3799DF26B5D_RuntimeMethod_var);
		V_1 = L_13;
		// if (meshObject == null)
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_14 = V_1;
		if (L_14)
		{
			goto IL_0078;
		}
	}
	{
		// WorldPolygons = new List<Polygon2>();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_15 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)il2cpp_codegen_object_new(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F(L_15, List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_15);
		// return WorldPolygons;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_16 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_16;
	}

IL_0078:
	{
		// if (WorldCache == null)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_17 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1;
		if (L_17)
		{
			goto IL_0174;
		}
	}
	{
		// WorldPolygons = new List<Polygon2>();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_18 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)il2cpp_codegen_object_new(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F(L_18, List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_18);
		// for (int i = 0; i < meshObject.triangles.GetLength (0); i = i + 3)
		V_6 = 0;
		goto IL_0150;
	}

IL_0096:
	{
		// vecA = transform.TransformPoint(meshObject.vertices [meshObject.triangles [i]]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_20 = V_1;
		NullCheck(L_20);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = L_20->___vertices_1;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_22 = V_1;
		NullCheck(L_22);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = L_22->___triangles_3;
		int32_t L_24 = V_6;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_21);
		int32_t L_27 = L_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_19, L_28, NULL);
		V_2 = L_29;
		// vecB = transform.TransformPoint(meshObject.vertices [meshObject.triangles [i + 1]]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_31 = V_1;
		NullCheck(L_31);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = L_31->___vertices_1;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_33 = V_1;
		NullCheck(L_33);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = L_33->___triangles_3;
		int32_t L_35 = V_6;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_32);
		int32_t L_38 = L_37;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_30, L_39, NULL);
		V_3 = L_40;
		// vecC = transform.TransformPoint(meshObject.vertices [meshObject.triangles [i + 2]]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_42 = V_1;
		NullCheck(L_42);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_43 = L_42->___vertices_1;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_44 = V_1;
		NullCheck(L_44);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = L_44->___triangles_3;
		int32_t L_46 = V_6;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 2));
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_43);
		int32_t L_49 = L_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_41, L_50, NULL);
		V_4 = L_51;
		// poly = new Polygon2(3);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_52 = (Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3*)il2cpp_codegen_object_new(Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		Polygon2__ctor_m330FF437D20FFEA831187CFEC36CD6AA51744F41(L_52, 3, NULL);
		V_5 = L_52;
		// poly.points[0] = vecA;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_53 = V_5;
		NullCheck(L_53);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_54 = L_53->___points_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56;
		L_56 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_55, NULL);
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_56);
		// poly.points[1] = vecB;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_57 = V_5;
		NullCheck(L_57);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_58 = L_57->___points_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		L_60 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_59, NULL);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_60);
		// poly.points[2] = vecC;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_61 = V_5;
		NullCheck(L_61);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_62 = L_61->___points_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64;
		L_64 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_63, NULL);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_64);
		// WorldPolygons.Add(poly);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_65 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_66 = V_5;
		NullCheck(L_65);
		List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_inline(L_65, L_66, List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var);
		// for (int i = 0; i < meshObject.triangles.GetLength (0); i = i + 3)
		int32_t L_67 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_67, 3));
	}

IL_0150:
	{
		// for (int i = 0; i < meshObject.triangles.GetLength (0); i = i + 3)
		int32_t L_68 = V_6;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_69 = V_1;
		NullCheck(L_69);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = L_69->___triangles_3;
		NullCheck((RuntimeArray*)L_70);
		int32_t L_71;
		L_71 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_70, 0, NULL);
		if ((((int32_t)L_68) < ((int32_t)L_71)))
		{
			goto IL_0096;
		}
	}
	{
		// WorldCache = WorldPolygons;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_72 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1), (void*)L_72);
		goto IL_02b0;
	}

IL_0174:
	{
		// int count = 0;
		V_7 = 0;
		// WorldPolygons = WorldCache;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_73 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1;
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_73);
		// for (int i = 0; i < meshObject.triangles.GetLength (0); i = i + 3)
		V_8 = 0;
		goto IL_029d;
	}

IL_018b:
	{
		// vecA = transform.TransformPoint(meshObject.vertices [meshObject.triangles [i]]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_75 = V_1;
		NullCheck(L_75);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_76 = L_75->___vertices_1;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_77 = V_1;
		NullCheck(L_77);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = L_77->___triangles_3;
		int32_t L_79 = V_8;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		int32_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_76);
		int32_t L_82 = L_81;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_74, L_83, NULL);
		V_2 = L_84;
		// vecB = transform.TransformPoint(meshObject.vertices [meshObject.triangles [i + 1]]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_86 = V_1;
		NullCheck(L_86);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_87 = L_86->___vertices_1;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_88 = V_1;
		NullCheck(L_88);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = L_88->___triangles_3;
		int32_t L_90 = V_8;
		NullCheck(L_89);
		int32_t L_91 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		int32_t L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_87);
		int32_t L_93 = L_92;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_85, L_94, NULL);
		V_3 = L_95;
		// vecC = transform.TransformPoint(meshObject.vertices [meshObject.triangles [i + 2]]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_97 = V_1;
		NullCheck(L_97);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_98 = L_97->___vertices_1;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_99 = V_1;
		NullCheck(L_99);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = L_99->___triangles_3;
		int32_t L_101 = V_8;
		NullCheck(L_100);
		int32_t L_102 = ((int32_t)il2cpp_codegen_add(L_101, 2));
		int32_t L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		NullCheck(L_98);
		int32_t L_104 = L_103;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_96);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_96, L_105, NULL);
		V_4 = L_106;
		// poly = WorldPolygons[count];
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_107 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		int32_t L_108 = V_7;
		NullCheck(L_107);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_109;
		L_109 = List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13(L_107, L_108, List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		V_5 = L_109;
		// poly.points[0].x = vecA.x;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_110 = V_5;
		NullCheck(L_110);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_111 = L_110->___points_0;
		NullCheck(L_111);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = V_2;
		float L_113 = L_112.___x_2;
		((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___x_0 = L_113;
		// poly.points[0].y = vecA.y;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_114 = V_5;
		NullCheck(L_114);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_115 = L_114->___points_0;
		NullCheck(L_115);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = V_2;
		float L_117 = L_116.___y_3;
		((L_115)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___y_1 = L_117;
		// poly.points[1].x = vecB.x;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_118 = V_5;
		NullCheck(L_118);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_119 = L_118->___points_0;
		NullCheck(L_119);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = V_3;
		float L_121 = L_120.___x_2;
		((L_119)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___x_0 = L_121;
		// poly.points[1].y = vecB.y;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_122 = V_5;
		NullCheck(L_122);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_123 = L_122->___points_0;
		NullCheck(L_123);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = V_3;
		float L_125 = L_124.___y_3;
		((L_123)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___y_1 = L_125;
		// poly.points[2].x = vecC.x;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_126 = V_5;
		NullCheck(L_126);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_127 = L_126->___points_0;
		NullCheck(L_127);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128 = V_4;
		float L_129 = L_128.___x_2;
		((L_127)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___x_0 = L_129;
		// poly.points[2].y = vecC.y;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_130 = V_5;
		NullCheck(L_130);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_131 = L_130->___points_0;
		NullCheck(L_131);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = V_4;
		float L_133 = L_132.___y_3;
		((L_131)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___y_1 = L_133;
		// count += 1;
		int32_t L_134 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_134, 1));
		// for (int i = 0; i < meshObject.triangles.GetLength (0); i = i + 3)
		int32_t L_135 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_135, 3));
	}

IL_029d:
	{
		// for (int i = 0; i < meshObject.triangles.GetLength (0); i = i + 3)
		int32_t L_136 = V_8;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_137 = V_1;
		NullCheck(L_137);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = L_137->___triangles_3;
		NullCheck((RuntimeArray*)L_138);
		int32_t L_139;
		L_139 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_138, 0, NULL);
		if ((((int32_t)L_136) < ((int32_t)L_139)))
		{
			goto IL_018b;
		}
	}

IL_02b0:
	{
		// return WorldPolygons;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_140 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_140;
	}
}
// System.Void FunkyCode.LightShape.MeshRendererShape::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshRendererShape__ctor_m3DAE65E17094315877DBAC68B11C9B8AA66F1AE3 (MeshRendererShape_tC193DD208D035762FBE951AAA017FF72DCCC9082* __this, const RuntimeMethod* method) 
{
	{
		Base__ctor_m0B2F128E7F35ECD7DDB068DD4406137B96A749AF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.SkinnedMeshRenderer FunkyCode.LightShape.SkinnedMeshRendererShape::GetSkinnedMeshRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* SkinnedMeshRendererShape_GetSkinnedMeshRenderer_m8746556DBA8551E5EB041E063F6F209B561D480A (SkinnedMeshRendererShape_t6985EF091F4BBDE9A1AD402910CB1A1998767B80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!skinnedMeshRenderer && transform)
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_0 = __this->___skinnedMeshRenderer_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// skinnedMeshRenderer = transform.GetComponent<SkinnedMeshRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_4);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_5;
		L_5 = Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0(L_4, Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0_RuntimeMethod_var);
		__this->___skinnedMeshRenderer_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___skinnedMeshRenderer_10), (void*)L_5);
	}

IL_002b:
	{
		// return skinnedMeshRenderer;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_6 = __this->___skinnedMeshRenderer_10;
		return L_6;
	}
}
// System.Collections.Generic.List`1<FunkyCode.MeshObject> FunkyCode.LightShape.SkinnedMeshRendererShape::GetMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* SkinnedMeshRendererShape_GetMeshes_mA71C802925AE0924B3706439C058618AEBDF2E74 (SkinnedMeshRendererShape_t6985EF091F4BBDE9A1AD402910CB1A1998767B80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_0 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_1 = NULL;
	MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* V_2 = NULL;
	{
		// if (Meshes == null)
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
		if (L_0)
		{
			goto IL_0047;
		}
	}
	{
		// var renderer = GetSkinnedMeshRenderer();
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_1;
		L_1 = SkinnedMeshRendererShape_GetSkinnedMeshRenderer_m8746556DBA8551E5EB041E063F6F209B561D480A(__this, NULL);
		V_0 = L_1;
		// if (renderer)
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		// var mesh = renderer.sharedMesh;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_4 = V_0;
		NullCheck(L_4);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5;
		L_5 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_4, NULL);
		V_1 = L_5;
		// if (mesh)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// Meshes = new List<MeshObject>();
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_8 = (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E*)il2cpp_codegen_object_new(List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105(L_8, List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8), (void*)L_8);
		// var meshObject = MeshObject.Get(mesh);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = V_1;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_10;
		L_10 = MeshObject_Get_m92D15EB001A8D4835EA235E67D87C1789FE792EC(L_9, NULL);
		V_2 = L_10;
		// if (meshObject != null)
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		// Meshes.Add(meshObject);
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_12 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_13 = V_2;
		NullCheck(L_12);
		List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_inline(L_12, L_13, List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_RuntimeMethod_var);
	}

IL_0047:
	{
		// return Meshes;
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_14 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
		return L_14;
	}
}
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.SkinnedMeshRendererShape::GetPolygonsWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* SkinnedMeshRendererShape_GetPolygonsWorld_m46C5C8EC4FB8B11F2BB25D9E79849C7E798EBAA3 (SkinnedMeshRendererShape_t6985EF091F4BBDE9A1AD402910CB1A1998767B80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDD8A3A52561D071E3ACDCF294957F3799DF26B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* V_0 = NULL;
	MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// if (WorldPolygons != null)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return WorldPolygons;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_1 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_1;
	}

IL_000f:
	{
		// var meshes = GetMeshes();
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_2;
		L_2 = VirtualFuncInvoker0< List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* >::Invoke(6 /* System.Collections.Generic.List`1<FunkyCode.MeshObject> FunkyCode.LightShape.Base::GetMeshes() */, __this);
		V_0 = L_2;
		// if (meshes == null)
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_3 = V_0;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		// WorldPolygons = new List<Polygon2>();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_4 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)il2cpp_codegen_object_new(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F(L_4, List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_4);
		// return WorldPolygons;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_5 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_5;
	}

IL_002b:
	{
		// var meshObject = meshes[0];
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_6 = V_0;
		NullCheck(L_6);
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_7;
		L_7 = List_1_get_Item_mDD8A3A52561D071E3ACDCF294957F3799DF26B5D(L_6, 0, List_1_get_Item_mDD8A3A52561D071E3ACDCF294957F3799DF26B5D_RuntimeMethod_var);
		V_1 = L_7;
		// if (meshObject == null)
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_8 = V_1;
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		// WorldPolygons = new List<Polygon2>();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_9 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)il2cpp_codegen_object_new(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F(L_9, List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_9);
		// return WorldPolygons;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_10 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_10;
	}

IL_0048:
	{
		// if (WorldCache == null)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_11 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1;
		if (L_11)
		{
			goto IL_0144;
		}
	}
	{
		// WorldPolygons = new List<Polygon2>();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_12 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)il2cpp_codegen_object_new(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F(L_12, List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_12);
		// for (int i = 0; i < meshObject.triangles.GetLength (0); i = i + 3)
		V_6 = 0;
		goto IL_0120;
	}

IL_0066:
	{
		// vecA = transform.TransformPoint(meshObject.vertices [meshObject.triangles [i]]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_14 = V_1;
		NullCheck(L_14);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = L_14->___vertices_1;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_16 = V_1;
		NullCheck(L_16);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_16->___triangles_3;
		int32_t L_18 = V_6;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_15);
		int32_t L_21 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_13, L_22, NULL);
		V_2 = L_23;
		// vecB = transform.TransformPoint(meshObject.vertices [meshObject.triangles [i + 1]]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_25 = V_1;
		NullCheck(L_25);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = L_25->___vertices_1;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_27 = V_1;
		NullCheck(L_27);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_27->___triangles_3;
		int32_t L_29 = V_6;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_26);
		int32_t L_32 = L_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_24, L_33, NULL);
		V_3 = L_34;
		// vecC = transform.TransformPoint(meshObject.vertices [meshObject.triangles [i + 2]]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_36 = V_1;
		NullCheck(L_36);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_37 = L_36->___vertices_1;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_38 = V_1;
		NullCheck(L_38);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = L_38->___triangles_3;
		int32_t L_40 = V_6;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(L_40, 2));
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_37);
		int32_t L_43 = L_42;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_35, L_44, NULL);
		V_4 = L_45;
		// poly = new Polygon2(3);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_46 = (Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3*)il2cpp_codegen_object_new(Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		Polygon2__ctor_m330FF437D20FFEA831187CFEC36CD6AA51744F41(L_46, 3, NULL);
		V_5 = L_46;
		// poly.points[0] = vecA;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_47 = V_5;
		NullCheck(L_47);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_48 = L_47->___points_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_49, NULL);
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_50);
		// poly.points[1] = vecB;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_51 = V_5;
		NullCheck(L_51);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_52 = L_51->___points_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		L_54 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_53, NULL);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_54);
		// poly.points[2] = vecC;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_55 = V_5;
		NullCheck(L_55);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_56 = L_55->___points_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_57, NULL);
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_58);
		// WorldPolygons.Add(poly);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_59 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_60 = V_5;
		NullCheck(L_59);
		List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_inline(L_59, L_60, List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var);
		// for (int i = 0; i < meshObject.triangles.GetLength (0); i = i + 3)
		int32_t L_61 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_61, 3));
	}

IL_0120:
	{
		// for (int i = 0; i < meshObject.triangles.GetLength (0); i = i + 3)
		int32_t L_62 = V_6;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_63 = V_1;
		NullCheck(L_63);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = L_63->___triangles_3;
		NullCheck((RuntimeArray*)L_64);
		int32_t L_65;
		L_65 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_64, 0, NULL);
		if ((((int32_t)L_62) < ((int32_t)L_65)))
		{
			goto IL_0066;
		}
	}
	{
		// WorldCache = WorldPolygons;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_66 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1), (void*)L_66);
		goto IL_0280;
	}

IL_0144:
	{
		// int count = 0;
		V_7 = 0;
		// WorldPolygons = WorldCache;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_67 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1;
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_67);
		// for (int i = 0; i < meshObject.triangles.GetLength (0); i = i + 3)
		V_8 = 0;
		goto IL_026d;
	}

IL_015b:
	{
		// vecA = transform.TransformPoint(meshObject.vertices [meshObject.triangles [i]]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_69 = V_1;
		NullCheck(L_69);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_70 = L_69->___vertices_1;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_71 = V_1;
		NullCheck(L_71);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = L_71->___triangles_3;
		int32_t L_73 = V_8;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		int32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_70);
		int32_t L_76 = L_75;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_68, L_77, NULL);
		V_2 = L_78;
		// vecB = transform.TransformPoint(meshObject.vertices [meshObject.triangles [i + 1]]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_80 = V_1;
		NullCheck(L_80);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_81 = L_80->___vertices_1;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_82 = V_1;
		NullCheck(L_82);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = L_82->___triangles_3;
		int32_t L_84 = V_8;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		int32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_81);
		int32_t L_87 = L_86;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_79);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_79, L_88, NULL);
		V_3 = L_89;
		// vecC = transform.TransformPoint(meshObject.vertices [meshObject.triangles [i + 2]]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_91 = V_1;
		NullCheck(L_91);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_92 = L_91->___vertices_1;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_93 = V_1;
		NullCheck(L_93);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = L_93->___triangles_3;
		int32_t L_95 = V_8;
		NullCheck(L_94);
		int32_t L_96 = ((int32_t)il2cpp_codegen_add(L_95, 2));
		int32_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_92);
		int32_t L_98 = L_97;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_90);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_90, L_99, NULL);
		V_4 = L_100;
		// poly = WorldPolygons[count];
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_101 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_103;
		L_103 = List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13(L_101, L_102, List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		V_5 = L_103;
		// poly.points[0].x = vecA.x;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_104 = V_5;
		NullCheck(L_104);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_105 = L_104->___points_0;
		NullCheck(L_105);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = V_2;
		float L_107 = L_106.___x_2;
		((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___x_0 = L_107;
		// poly.points[0].y = vecA.y;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_108 = V_5;
		NullCheck(L_108);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_109 = L_108->___points_0;
		NullCheck(L_109);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = V_2;
		float L_111 = L_110.___y_3;
		((L_109)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___y_1 = L_111;
		// poly.points[1].x = vecB.x;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_112 = V_5;
		NullCheck(L_112);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_113 = L_112->___points_0;
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = V_3;
		float L_115 = L_114.___x_2;
		((L_113)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___x_0 = L_115;
		// poly.points[1].y = vecB.y;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_116 = V_5;
		NullCheck(L_116);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_117 = L_116->___points_0;
		NullCheck(L_117);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = V_3;
		float L_119 = L_118.___y_3;
		((L_117)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___y_1 = L_119;
		// poly.points[2].x = vecC.x;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_120 = V_5;
		NullCheck(L_120);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_121 = L_120->___points_0;
		NullCheck(L_121);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122 = V_4;
		float L_123 = L_122.___x_2;
		((L_121)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___x_0 = L_123;
		// poly.points[2].y = vecC.y;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_124 = V_5;
		NullCheck(L_124);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_125 = L_124->___points_0;
		NullCheck(L_125);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = V_4;
		float L_127 = L_126.___y_3;
		((L_125)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___y_1 = L_127;
		// count += 1;
		int32_t L_128 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_128, 1));
		// for (int i = 0; i < meshObject.triangles.GetLength (0); i = i + 3)
		int32_t L_129 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_129, 3));
	}

IL_026d:
	{
		// for (int i = 0; i < meshObject.triangles.GetLength (0); i = i + 3)
		int32_t L_130 = V_8;
		MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_131 = V_1;
		NullCheck(L_131);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = L_131->___triangles_3;
		NullCheck((RuntimeArray*)L_132);
		int32_t L_133;
		L_133 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_132, 0, NULL);
		if ((((int32_t)L_130) < ((int32_t)L_133)))
		{
			goto IL_015b;
		}
	}

IL_0280:
	{
		// return WorldPolygons;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_134 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_134;
	}
}
// System.Void FunkyCode.LightShape.SkinnedMeshRendererShape::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRendererShape__ctor_m1D1DBAD0206D5E193705EE8323724933025EE20E (SkinnedMeshRendererShape_t6985EF091F4BBDE9A1AD402910CB1A1998767B80* __this, const RuntimeMethod* method) 
{
	{
		Base__ctor_m0B2F128E7F35ECD7DDB068DD4406137B96A749AF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FunkyCode.LightShape.SpritePhysicsShape::ResetLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpritePhysicsShape_ResetLocal_m06AFEDCFF2B6637277A44A5903EFD6B0609D6C9F (SpritePhysicsShape_t2D07C474C4F4A0D7942EDB4EC4F4CB472F7FC888* __this, const RuntimeMethod* method) 
{
	{
		// LocalPolygonsCache = LocalPolygons;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygonsCache_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygonsCache_7), (void*)L_0);
		// base.ResetLocal();
		Base_ResetLocal_m8CFAD868A9AEC5D1E39453F560037C0BEE6C3549(__this, NULL);
		// physicsShape = null;
		__this->___physicsShape_11 = (PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___physicsShape_11), (void*)(PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7*)NULL);
		// sprite = null;
		__this->___sprite_10 = (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sprite_10), (void*)(Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL);
		// }
		return;
	}
}
// UnityEngine.Sprite FunkyCode.LightShape.SpritePhysicsShape::GetOriginalSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* SpritePhysicsShape_GetOriginalSprite_m9785EB58AAE539A1FBCE7AA6D63BAF9C6AEED4E3 (SpritePhysicsShape_t2D07C474C4F4A0D7942EDB4EC4F4CB472F7FC888* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sprite == null)
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___sprite_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// GetSpriteRenderer();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = SpritePhysicsShape_GetSpriteRenderer_m9B32CCB98C892D44F9ACBC49664489CCE14E1F60(__this, NULL);
		// if (spriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___spriteRenderer_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// sprite = spriteRenderer.sprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___spriteRenderer_12;
		NullCheck(L_5);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6;
		L_6 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_5, NULL);
		__this->___sprite_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sprite_10), (void*)L_6);
	}

IL_0034:
	{
		// return(sprite);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___sprite_10;
		return L_7;
	}
}
// UnityEngine.SpriteRenderer FunkyCode.LightShape.SpritePhysicsShape::GetSpriteRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* SpritePhysicsShape_GetSpriteRenderer_m9B32CCB98C892D44F9ACBC49664489CCE14E1F60 (SpritePhysicsShape_t2D07C474C4F4A0D7942EDB4EC4F4CB472F7FC888* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___spriteRenderer_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return(spriteRenderer);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___spriteRenderer_12;
		return L_2;
	}

IL_0015:
	{
		// if (transform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// return(spriteRenderer);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___spriteRenderer_12;
		return L_5;
	}

IL_002a:
	{
		// if (spriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___spriteRenderer_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// spriteRenderer = transform.GetComponent<SpriteRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_8, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_12 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_12), (void*)L_9);
	}

IL_0049:
	{
		// return(spriteRenderer);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___spriteRenderer_12;
		return L_10;
	}
}
// FunkyCode.SpriteExtension.PhysicsShape FunkyCode.LightShape.SpritePhysicsShape::GetPhysicsShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7* SpritePhysicsShape_GetPhysicsShape_m56316D8AE1C0FD57A0830B90C4032255AD2D97DB (SpritePhysicsShape_t2D07C474C4F4A0D7942EDB4EC4F4CB472F7FC888* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhysicsShapeManager_t330075DFA7A54C2D406B6417F60E25398974635F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// if (physicsShape == null)
		PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7* L_0 = __this->___physicsShape_11;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// Sprite sprite = GetOriginalSprite();
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1;
		L_1 = SpritePhysicsShape_GetOriginalSprite_m9785EB58AAE539A1FBCE7AA6D63BAF9C6AEED4E3(__this, NULL);
		V_0 = L_1;
		// if (sprite != null)
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// physicsShape = SpriteExtension.PhysicsShapeManager.RequestCustomShape(sprite);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(PhysicsShapeManager_t330075DFA7A54C2D406B6417F60E25398974635F_il2cpp_TypeInfo_var);
		PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7* L_5;
		L_5 = PhysicsShapeManager_RequestCustomShape_m48A0991FCB30D850BC651A635E408FAD694622C5(L_4, NULL);
		__this->___physicsShape_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___physicsShape_11), (void*)L_5);
	}

IL_0024:
	{
		// return(physicsShape);
		PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7* L_6 = __this->___physicsShape_11;
		return L_6;
	}
}
// System.Collections.Generic.List`1<FunkyCode.MeshObject> FunkyCode.LightShape.SpritePhysicsShape::GetMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* SpritePhysicsShape_GetMeshes_mD5F26058A2C352151B28D901A033BB45A75F038D (SpritePhysicsShape_t2D07C474C4F4A0D7942EDB4EC4F4CB472F7FC888* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* V_0 = NULL;
	Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_2 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_3 = NULL;
	MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* V_4 = NULL;
	{
		// if (Meshes == null)
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
		if (L_0)
		{
			goto IL_008e;
		}
	}
	{
		// List<Polygon2> polygons = GetPolygonsLocal();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_1;
		L_1 = VirtualFuncInvoker0< List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* >::Invoke(7 /* System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsLocal() */, __this);
		V_0 = L_1;
		// if (polygons.Count > 0)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_inline(L_2, List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		// Meshes = new List<MeshObject>();
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_4 = (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E*)il2cpp_codegen_object_new(List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105(L_4, List_1__ctor_m6B4F83A5A7870B35B4A2B00AD9CCF23990656105_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8), (void*)L_4);
		// foreach(Polygon2 poly in polygons)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_5 = V_0;
		NullCheck(L_5);
		Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F L_6;
		L_6 = List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629(L_5, List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0080:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD((&V_1), Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0075_1;
			}

IL_002f_1:
			{
				// foreach(Polygon2 poly in polygons)
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_7;
				L_7 = Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_inline((&V_1), Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
				V_2 = L_7;
				// if (poly.points.Length < 3)
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_8 = V_2;
				NullCheck(L_8);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9 = L_8->___points_0;
				NullCheck(L_9);
				if ((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) < ((int32_t)3)))
				{
					goto IL_0075_1;
				}
			}
			{
				// Mesh mesh = PolygonTriangulator2.Triangulate (poly, Vector2.zero, Vector2.zero, PolygonTriangulator2.Triangulation.Advanced);
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_10 = V_2;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
				L_11 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
				L_12 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_13;
				L_13 = PolygonTriangulator2_Triangulate_mE4C5F390599AD4BA2D19CECC6531D5F0CCB50D27(L_10, L_11, L_12, 0, NULL);
				V_3 = L_13;
				// if (mesh)
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_14 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_15;
				L_15 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_14, NULL);
				if (!L_15)
				{
					goto IL_0075_1;
				}
			}
			{
				// MeshObject meshObject = MeshObject.Get(mesh);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16 = V_3;
				MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_17;
				L_17 = MeshObject_Get_m92D15EB001A8D4835EA235E67D87C1789FE792EC(L_16, NULL);
				V_4 = L_17;
				// if (meshObject != null)
				MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_18 = V_4;
				if (!L_18)
				{
					goto IL_0075_1;
				}
			}
			{
				// Meshes.Add(meshObject);
				List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_19 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
				MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF* L_20 = V_4;
				NullCheck(L_19);
				List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_inline(L_19, L_20, List_1_Add_m5257654E7584D5341F635B88A79A73C5BDA08DD0_RuntimeMethod_var);
			}

IL_0075_1:
			{
				// foreach(Polygon2 poly in polygons)
				bool L_21;
				L_21 = Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E((&V_1), Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_008e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008e:
	{
		// return(Meshes);
		List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* L_22 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___Meshes_8;
		return L_22;
	}
}
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.SpritePhysicsShape::GetPolygonsWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* SpritePhysicsShape_GetPolygonsWorld_m4B9977801F9255312FA54607995362EC0B0669E4 (SpritePhysicsShape_t2D07C474C4F4A0D7942EDB4EC4F4CB472F7FC888* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* V_1 = NULL;
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_2 = NULL;
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_3 = NULL;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_8;
	memset((&V_8), 0, sizeof(V_8));
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_9 = NULL;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* V_10 = NULL;
	Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	{
		// if (WorldPolygons != null)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return(WorldPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_1 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_1;
	}

IL_000f:
	{
		// Vector2 scale = new Vector2();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// List<Polygon2> localPolygons = GetPolygonsLocal();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_2;
		L_2 = VirtualFuncInvoker0< List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* >::Invoke(7 /* System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsLocal() */, __this);
		V_1 = L_2;
		// if (WorldCache != null)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_3 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1;
		if (!L_3)
		{
			goto IL_013b;
		}
	}
	{
		// WorldPolygons = WorldCache;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_4 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1;
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_4);
		// SpriteRenderer spriteRenderer = GetSpriteRenderer();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5;
		L_5 = SpritePhysicsShape_GetSpriteRenderer_m9B32CCB98C892D44F9ACBC49664489CCE14E1F60(__this, NULL);
		V_4 = L_5;
		// for(int i = 0; i < localPolygons.Count; i++)
		V_5 = 0;
		goto IL_0129;
	}

IL_0045:
	{
		// poly = localPolygons[i];
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_6 = V_1;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_8;
		L_8 = List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13(L_6, L_7, List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		V_2 = L_8;
		// wPoly = WorldPolygons[i];
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_9 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_11;
		L_11 = List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13(L_9, L_10, List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		V_3 = L_11;
		// bool invert = false;
		V_6 = (bool)0;
		// for(int p = 0; p < poly.points.Length; p++)
		V_7 = 0;
		goto IL_0084;
	}

IL_0064:
	{
		// wPoly.points[p] = poly.points[p];
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_12 = V_3;
		NullCheck(L_12);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13 = L_12->___points_0;
		int32_t L_14 = V_7;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_15 = V_2;
		NullCheck(L_15);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_16 = L_15->___points_0;
		int32_t L_17 = V_7;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_19);
		// for(int p = 0; p < poly.points.Length; p++)
		int32_t L_20 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0084:
	{
		// for(int p = 0; p < poly.points.Length; p++)
		int32_t L_21 = V_7;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_22 = V_2;
		NullCheck(L_22);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_23 = L_22->___points_0;
		NullCheck(L_23);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0064;
		}
	}
	{
		// if (spriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_010d;
		}
	}
	{
		// if (spriteRenderer.flipX || spriteRenderer.flipY)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_26 = V_4;
		NullCheck(L_26);
		bool L_27;
		L_27 = SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76(L_26, NULL);
		if (L_27)
		{
			goto IL_00ac;
		}
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_28 = V_4;
		NullCheck(L_28);
		bool L_29;
		L_29 = SpriteRenderer_get_flipY_m2277917491792E562B37BFBF77513E12FFF6F75F(L_28, NULL);
		if (!L_29)
		{
			goto IL_010d;
		}
	}

IL_00ac:
	{
		// scale.x = 1;
		(&V_0)->___x_0 = (1.0f);
		// scale.y = 1;
		(&V_0)->___y_1 = (1.0f);
		// if (spriteRenderer.flipX)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_30 = V_4;
		NullCheck(L_30);
		bool L_31;
		L_31 = SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76(L_30, NULL);
		if (!L_31)
		{
			goto IL_00e0;
		}
	}
	{
		// scale.x = -1;
		(&V_0)->___x_0 = (-1.0f);
		// invert = !invert;
		bool L_32 = V_6;
		V_6 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (spriteRenderer.flipY)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_33 = V_4;
		NullCheck(L_33);
		bool L_34;
		L_34 = SpriteRenderer_get_flipY_m2277917491792E562B37BFBF77513E12FFF6F75F(L_33, NULL);
		if (!L_34)
		{
			goto IL_00fc;
		}
	}
	{
		// scale.y = -1;
		(&V_0)->___y_1 = (-1.0f);
		// invert = !invert;
		bool L_35 = V_6;
		V_6 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
	}

IL_00fc:
	{
		// wPoly.ToScaleSelf(scale);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_36 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_0;
		il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_38 = V_8;
		NullCheck(L_36);
		Polygon2_ToScaleSelf_m3E8E98388D9BD81559F36FEACE59B2D7F1E3483D(L_36, L_37, L_38, NULL);
	}

IL_010d:
	{
		// wPoly.ToWorldSpaceSelfUNIVERSAL(transform);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_39 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_39);
		Polygon2_ToWorldSpaceSelfUNIVERSAL_m1CA0E88F73C6DE678DB80A48A749DF2E772433FE(L_39, L_40, NULL);
		// if (invert)
		bool L_41 = V_6;
		if (!L_41)
		{
			goto IL_0123;
		}
	}
	{
		// wPoly.Normalize();
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_42 = V_3;
		NullCheck(L_42);
		Polygon2_Normalize_m3F19E90F7CF12CD4E6796197EF4C034CA9323DCD(L_42, NULL);
	}

IL_0123:
	{
		// for(int i = 0; i < localPolygons.Count; i++)
		int32_t L_43 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_0129:
	{
		// for(int i = 0; i < localPolygons.Count; i++)
		int32_t L_44 = V_5;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_45 = V_1;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_inline(L_45, List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0045;
		}
	}
	{
		goto IL_0237;
	}

IL_013b:
	{
		// WorldPolygons = new List<Polygon2>();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_47 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)il2cpp_codegen_object_new(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F(L_47, List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_47);
		// SpriteRenderer spriteRenderer = GetSpriteRenderer();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_48;
		L_48 = SpritePhysicsShape_GetSpriteRenderer_m9B32CCB98C892D44F9ACBC49664489CCE14E1F60(__this, NULL);
		V_10 = L_48;
		// foreach(Polygon2 poly in localPolygons)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_49 = V_1;
		NullCheck(L_49);
		Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F L_50;
		L_50 = List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629(L_49, List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		V_11 = L_50;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_021d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD((&V_11), Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_020f_1;
			}

IL_015b_1:
			{
				// foreach(Polygon2 poly in localPolygons)
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_51;
				L_51 = Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_inline((&V_11), Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
				// polygon = poly.Copy();
				NullCheck(L_51);
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_52;
				L_52 = Polygon2_Copy_mA7D49F4272D3BE481E3E6D3540E088AF734639E8(L_51, NULL);
				V_9 = L_52;
				// bool invert = false;
				V_12 = (bool)0;
				// if (spriteRenderer != null)
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = V_10;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_54;
				L_54 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_53, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_54)
				{
					goto IL_01ea_1;
				}
			}
			{
				// if (spriteRenderer.flipX || spriteRenderer.flipY)
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_55 = V_10;
				NullCheck(L_55);
				bool L_56;
				L_56 = SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76(L_55, NULL);
				if (L_56)
				{
					goto IL_0188_1;
				}
			}
			{
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_57 = V_10;
				NullCheck(L_57);
				bool L_58;
				L_58 = SpriteRenderer_get_flipY_m2277917491792E562B37BFBF77513E12FFF6F75F(L_57, NULL);
				if (!L_58)
				{
					goto IL_01ea_1;
				}
			}

IL_0188_1:
			{
				// scale.x = 1;
				(&V_0)->___x_0 = (1.0f);
				// scale.y = 1;
				(&V_0)->___y_1 = (1.0f);
				// if (spriteRenderer.flipX)
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_59 = V_10;
				NullCheck(L_59);
				bool L_60;
				L_60 = SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76(L_59, NULL);
				if (!L_60)
				{
					goto IL_01bc_1;
				}
			}
			{
				// scale.x = -1;
				(&V_0)->___x_0 = (-1.0f);
				// invert = !invert;
				bool L_61 = V_12;
				V_12 = (bool)((((int32_t)L_61) == ((int32_t)0))? 1 : 0);
			}

IL_01bc_1:
			{
				// if (spriteRenderer.flipY)
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_62 = V_10;
				NullCheck(L_62);
				bool L_63;
				L_63 = SpriteRenderer_get_flipY_m2277917491792E562B37BFBF77513E12FFF6F75F(L_62, NULL);
				if (!L_63)
				{
					goto IL_01d8_1;
				}
			}
			{
				// scale.y = -1;
				(&V_0)->___y_1 = (-1.0f);
				// invert = !invert;
				bool L_64 = V_12;
				V_12 = (bool)((((int32_t)L_64) == ((int32_t)0))? 1 : 0);
			}

IL_01d8_1:
			{
				// polygon.ToScaleSelf(scale);
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_65 = V_9;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66 = V_0;
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
				Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_67 = V_8;
				NullCheck(L_65);
				Polygon2_ToScaleSelf_m3E8E98388D9BD81559F36FEACE59B2D7F1E3483D(L_65, L_66, L_67, NULL);
			}

IL_01ea_1:
			{
				// polygon.ToWorldSpaceSelfUNIVERSAL(transform);
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_68 = V_9;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
				NullCheck(L_68);
				Polygon2_ToWorldSpaceSelfUNIVERSAL_m1CA0E88F73C6DE678DB80A48A749DF2E772433FE(L_68, L_69, NULL);
				// if (invert)
				bool L_70 = V_12;
				if (!L_70)
				{
					goto IL_0202_1;
				}
			}
			{
				// polygon.Normalize();
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_71 = V_9;
				NullCheck(L_71);
				Polygon2_Normalize_m3F19E90F7CF12CD4E6796197EF4C034CA9323DCD(L_71, NULL);
			}

IL_0202_1:
			{
				// WorldPolygons.Add(polygon);
				List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_72 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_73 = V_9;
				NullCheck(L_72);
				List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_inline(L_72, L_73, List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var);
			}

IL_020f_1:
			{
				// foreach(Polygon2 poly in localPolygons)
				bool L_74;
				L_74 = Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E((&V_11), Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
				if (L_74)
				{
					goto IL_015b_1;
				}
			}
			{
				goto IL_022b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_022b:
	{
		// WorldCache = WorldPolygons;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_75 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1), (void*)L_75);
	}

IL_0237:
	{
		// return(WorldPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_76 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_76;
	}
}
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.SpritePhysicsShape::GetPolygonsLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* SpritePhysicsShape_GetPolygonsLocal_m00BDC1C4821FFC2472A1032B506871F999C3AD20 (SpritePhysicsShape_t2D07C474C4F4A0D7942EDB4EC4F4CB472F7FC888* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (LocalPolygons != null)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return(LocalPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_1 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		return L_1;
	}

IL_000f:
	{
		// physicsShape = GetPhysicsShape();
		PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7* L_2;
		L_2 = SpritePhysicsShape_GetPhysicsShape_m56316D8AE1C0FD57A0830B90C4032255AD2D97DB(__this, NULL);
		__this->___physicsShape_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___physicsShape_11), (void*)L_2);
		// if (physicsShape != null)
		PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7* L_3 = __this->___physicsShape_11;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// LocalPolygons = physicsShape.Get();
		PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7* L_4 = __this->___physicsShape_11;
		NullCheck(L_4);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_5;
		L_5 = PhysicsShape_Get_m95FDA0BBE1B03D8E64EEF851440FD6CCBE7C3D1F(L_4, NULL);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6), (void*)L_5);
	}

IL_0034:
	{
		// if (LocalPolygons == null)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_6 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		if (L_6)
		{
			goto IL_0047;
		}
	}
	{
		// LocalPolygons = new List<Polygon2>();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_7 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)il2cpp_codegen_object_new(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F(L_7, List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6), (void*)L_7);
	}

IL_0047:
	{
		// return(LocalPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_8 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		return L_8;
	}
}
// System.Void FunkyCode.LightShape.SpritePhysicsShape::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpritePhysicsShape__ctor_m39B170D4563065B053F9E40FC3849F6FACC1A9DC (SpritePhysicsShape_t2D07C474C4F4A0D7942EDB4EC4F4CB472F7FC888* __this, const RuntimeMethod* method) 
{
	{
		Base__ctor_m0B2F128E7F35ECD7DDB068DD4406137B96A749AF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 FunkyCode.LightShape.SpriteShape::GetSortingLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteShape_GetSortingLayer_mC7443FC0D292A0678473EC0794AEB0EBB29C6F07 (SpriteShape_tCCA2A2247D8CB9EF2FE69B47F7FCEEA313CE01E1* __this, const RuntimeMethod* method) 
{
	{
		// return(UnityEngine.SortingLayer.GetLayerValueFromID(GetSpriteRenderer().sortingLayerID));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = SpriteShape_GetSpriteRenderer_mE0F890A8D197EF18F34CBDE50DCB9CC8A4015CD8(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Renderer_get_sortingLayerID_m3D7AE74F1B87099810CF969CB4520C85F9AE5F92(L_0, NULL);
		int32_t L_2;
		L_2 = SortingLayer_GetLayerValueFromID_mEB8A5234102CD7B2C6158661A931EA120A38707C(L_1, NULL);
		return L_2;
	}
}
// System.Int32 FunkyCode.LightShape.SpriteShape::GetSortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteShape_GetSortingOrder_m3275D82B54B79FC157DCF0E1D12D1D45F1C37F93 (SpriteShape_tCCA2A2247D8CB9EF2FE69B47F7FCEEA313CE01E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* V_0 = NULL;
	{
		// SpriteRenderer spriteRenderer = GetSpriteRenderer();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = SpriteShape_GetSpriteRenderer_mE0F890A8D197EF18F34CBDE50DCB9CC8A4015CD8(__this, NULL);
		V_0 = L_0;
		// if (spriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return(spriteRenderer.sortingOrder);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA(L_3, NULL);
		return L_4;
	}

IL_0017:
	{
		// return(0);
		return 0;
	}
}
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.SpriteShape::GetPolygonsLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* SpriteShape_GetPolygonsLocal_mF8EF77B58EEEA55BAC74520BE1A92ED9BC7796CC (SpriteShape_tCCA2A2247D8CB9EF2FE69B47F7FCEEA313CE01E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E9B18096FEC56A8223895CEE1E406435E99783B);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_4 = NULL;
	float V_5 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_15;
	memset((&V_15), 0, sizeof(V_15));
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	{
		// if (LocalPolygons == null)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		if (L_0)
		{
			goto IL_03bc;
		}
	}
	{
		// LocalPolygons = new List<Polygon2>();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_1 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)il2cpp_codegen_object_new(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F(L_1, List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6), (void*)L_1);
		// if (spriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___spriteRenderer_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// Debug.LogWarning("Light Collider 2D: Cannot access sprite renderer (Sprite Shape Local)", transform.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral8E9B18096FEC56A8223895CEE1E406435E99783B, L_5, NULL);
		// return(LocalPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_6 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		return L_6;
	}

IL_0040:
	{
		// if (spriteRenderer.drawMode == SpriteDrawMode.Tiled && spriteRenderer.tileMode == SpriteTileMode.Continuous)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___spriteRenderer_11;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SpriteRenderer_get_drawMode_mDE05B982434BB01801C33432159E662837352AD4(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_01db;
		}
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___spriteRenderer_11;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = SpriteRenderer_get_tileMode_mA6BD321B76409603000804DECDB92013893D731E(L_9, NULL);
		if (L_10)
		{
			goto IL_01db;
		}
	}
	{
		// float rot = transform.eulerAngles.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_11, NULL);
		float L_13 = L_12.___z_4;
		V_5 = L_13;
		// Vector2 size = transform.localScale * spriteRenderer.size * 0.5f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_15, NULL);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_17 = __this->___spriteRenderer_11;
		NullCheck(L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = SpriteRenderer_get_size_mBAA19D0D4BA836D0064D60BEE0D4485282DF29EA(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_16, L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_19, (0.5f), NULL);
		V_6 = L_20;
		// Vector2 pos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_21, NULL);
		V_7 = L_22;
		// rot = rot * Mathf.Deg2Rad + Mathf.PI;
		float L_23 = V_5;
		V_5 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_23, (0.0174532924f))), (3.14159274f)));
		// float rectAngle = Mathf.Atan2(size.y, size.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_6;
		float L_25 = L_24.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_6;
		float L_27 = L_26.___x_0;
		float L_28;
		L_28 = atan2f(L_25, L_27);
		V_8 = L_28;
		// float dist = Mathf.Sqrt(size.x * size.x + size.y * size.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_6;
		float L_30 = L_29.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_6;
		float L_32 = L_31.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_6;
		float L_34 = L_33.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_6;
		float L_36 = L_35.___y_1;
		float L_37;
		L_37 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_30, L_32)), ((float)il2cpp_codegen_multiply(L_34, L_36)))));
		V_9 = L_37;
		// v1 = new Vector2(pos.x + Mathf.Cos(rectAngle + rot) * dist, pos.y + Mathf.Sin(rectAngle + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_7;
		float L_39 = L_38.___x_0;
		float L_40 = V_8;
		float L_41 = V_5;
		float L_42;
		L_42 = cosf(((float)il2cpp_codegen_add(L_40, L_41)));
		float L_43 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = V_7;
		float L_45 = L_44.___y_1;
		float L_46 = V_8;
		float L_47 = V_5;
		float L_48;
		L_48 = sinf(((float)il2cpp_codegen_add(L_46, L_47)));
		float L_49 = V_9;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_add(L_39, ((float)il2cpp_codegen_multiply(L_42, L_43)))), ((float)il2cpp_codegen_add(L_45, ((float)il2cpp_codegen_multiply(L_48, L_49)))), NULL);
		// v2 = new Vector2(pos.x + Mathf.Cos(-rectAngle + rot) * dist, pos.y + Mathf.Sin(-rectAngle + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50 = V_7;
		float L_51 = L_50.___x_0;
		float L_52 = V_8;
		float L_53 = V_5;
		float L_54;
		L_54 = cosf(((float)il2cpp_codegen_add(((-L_52)), L_53)));
		float L_55 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = V_7;
		float L_57 = L_56.___y_1;
		float L_58 = V_8;
		float L_59 = V_5;
		float L_60;
		L_60 = sinf(((float)il2cpp_codegen_add(((-L_58)), L_59)));
		float L_61 = V_9;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_add(L_51, ((float)il2cpp_codegen_multiply(L_54, L_55)))), ((float)il2cpp_codegen_add(L_57, ((float)il2cpp_codegen_multiply(L_60, L_61)))), NULL);
		// v3 = new Vector2(pos.x + Mathf.Cos(rectAngle + Mathf.PI + rot) * dist, pos.y + Mathf.Sin(rectAngle + Mathf.PI + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_7;
		float L_63 = L_62.___x_0;
		float L_64 = V_8;
		float L_65 = V_5;
		float L_66;
		L_66 = cosf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_64, (3.14159274f))), L_65)));
		float L_67 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68 = V_7;
		float L_69 = L_68.___y_1;
		float L_70 = V_8;
		float L_71 = V_5;
		float L_72;
		L_72 = sinf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_70, (3.14159274f))), L_71)));
		float L_73 = V_9;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), ((float)il2cpp_codegen_add(L_63, ((float)il2cpp_codegen_multiply(L_66, L_67)))), ((float)il2cpp_codegen_add(L_69, ((float)il2cpp_codegen_multiply(L_72, L_73)))), NULL);
		// v4 = new Vector2(pos.x + Mathf.Cos(-rectAngle + Mathf.PI + rot) * dist, pos.y + Mathf.Sin(-rectAngle + Mathf.PI + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74 = V_7;
		float L_75 = L_74.___x_0;
		float L_76 = V_8;
		float L_77 = V_5;
		float L_78;
		L_78 = cosf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((-L_76)), (3.14159274f))), L_77)));
		float L_79 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80 = V_7;
		float L_81 = L_80.___y_1;
		float L_82 = V_8;
		float L_83 = V_5;
		float L_84;
		L_84 = sinf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((-L_82)), (3.14159274f))), L_83)));
		float L_85 = V_9;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), ((float)il2cpp_codegen_add(L_75, ((float)il2cpp_codegen_multiply(L_78, L_79)))), ((float)il2cpp_codegen_add(L_81, ((float)il2cpp_codegen_multiply(L_84, L_85)))), NULL);
		goto IL_036f;
	}

IL_01db:
	{
		// virtualSpriteRenderer.Set(spriteRenderer);
		VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB* L_86 = __this->___virtualSpriteRenderer_12;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_87 = __this->___spriteRenderer_11;
		NullCheck(L_86);
		VirtualSpriteRenderer_Set_mB384B4ECC39166B2F9949FEE31EB603B7E483695(L_86, L_87, NULL);
		// Vector2 position = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89;
		L_89 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_88, NULL);
		V_10 = L_89;
		// Vector2 scale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_90);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_90, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92;
		L_92 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_91, NULL);
		V_11 = L_92;
		// float rotation = transform.eulerAngles.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_93);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_93, NULL);
		float L_95 = L_94.___z_4;
		V_12 = L_95;
		// SpriteTransform spriteTransform = new SpriteTransform(virtualSpriteRenderer, position, scale, rotation);
		VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB* L_96 = __this->___virtualSpriteRenderer_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_97 = V_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98 = V_11;
		float L_99 = V_12;
		SpriteTransform_tA8B00B6C4F4F0A8CB71871036C089CE521BD2888 L_100;
		memset((&L_100), 0, sizeof(L_100));
		SpriteTransform__ctor_m8C5BCCD58E556BDBD2ED704514DB300733E9C91E((&L_100), L_96, L_97, L_98, L_99, /*hidden argument*/NULL);
		// float rot = spriteTransform.rotation;
		SpriteTransform_tA8B00B6C4F4F0A8CB71871036C089CE521BD2888 L_101 = L_100;
		float L_102 = L_101.___rotation_2;
		V_13 = L_102;
		// Vector2 size = spriteTransform.scale;
		SpriteTransform_tA8B00B6C4F4F0A8CB71871036C089CE521BD2888 L_103 = L_101;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104 = L_103.___scale_1;
		V_14 = L_104;
		// Vector2 pos = spriteTransform.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_105 = L_103.___position_0;
		V_15 = L_105;
		// rot = rot * Mathf.Deg2Rad + Mathf.PI;
		float L_106 = V_13;
		V_13 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_106, (0.0174532924f))), (3.14159274f)));
		// float rectAngle = Mathf.Atan2(size.y, size.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_107 = V_14;
		float L_108 = L_107.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109 = V_14;
		float L_110 = L_109.___x_0;
		float L_111;
		L_111 = atan2f(L_108, L_110);
		V_16 = L_111;
		// float dist = Mathf.Sqrt(size.x * size.x + size.y * size.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_112 = V_14;
		float L_113 = L_112.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_114 = V_14;
		float L_115 = L_114.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_116 = V_14;
		float L_117 = L_116.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118 = V_14;
		float L_119 = L_118.___y_1;
		float L_120;
		L_120 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_113, L_115)), ((float)il2cpp_codegen_multiply(L_117, L_119)))));
		V_17 = L_120;
		// v1 = new Vector2(pos.x + Mathf.Cos(rectAngle + rot) * dist, pos.y + Mathf.Sin(rectAngle + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_121 = V_15;
		float L_122 = L_121.___x_0;
		float L_123 = V_16;
		float L_124 = V_13;
		float L_125;
		L_125 = cosf(((float)il2cpp_codegen_add(L_123, L_124)));
		float L_126 = V_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_127 = V_15;
		float L_128 = L_127.___y_1;
		float L_129 = V_16;
		float L_130 = V_13;
		float L_131;
		L_131 = sinf(((float)il2cpp_codegen_add(L_129, L_130)));
		float L_132 = V_17;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_add(L_122, ((float)il2cpp_codegen_multiply(L_125, L_126)))), ((float)il2cpp_codegen_add(L_128, ((float)il2cpp_codegen_multiply(L_131, L_132)))), NULL);
		// v2 = new Vector2(pos.x + Mathf.Cos(-rectAngle + rot) * dist, pos.y + Mathf.Sin(-rectAngle + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_133 = V_15;
		float L_134 = L_133.___x_0;
		float L_135 = V_16;
		float L_136 = V_13;
		float L_137;
		L_137 = cosf(((float)il2cpp_codegen_add(((-L_135)), L_136)));
		float L_138 = V_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_139 = V_15;
		float L_140 = L_139.___y_1;
		float L_141 = V_16;
		float L_142 = V_13;
		float L_143;
		L_143 = sinf(((float)il2cpp_codegen_add(((-L_141)), L_142)));
		float L_144 = V_17;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_add(L_134, ((float)il2cpp_codegen_multiply(L_137, L_138)))), ((float)il2cpp_codegen_add(L_140, ((float)il2cpp_codegen_multiply(L_143, L_144)))), NULL);
		// v3 = new Vector2(pos.x + Mathf.Cos(rectAngle + Mathf.PI + rot) * dist, pos.y + Mathf.Sin(rectAngle + Mathf.PI + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_145 = V_15;
		float L_146 = L_145.___x_0;
		float L_147 = V_16;
		float L_148 = V_13;
		float L_149;
		L_149 = cosf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_147, (3.14159274f))), L_148)));
		float L_150 = V_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_151 = V_15;
		float L_152 = L_151.___y_1;
		float L_153 = V_16;
		float L_154 = V_13;
		float L_155;
		L_155 = sinf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_153, (3.14159274f))), L_154)));
		float L_156 = V_17;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), ((float)il2cpp_codegen_add(L_146, ((float)il2cpp_codegen_multiply(L_149, L_150)))), ((float)il2cpp_codegen_add(L_152, ((float)il2cpp_codegen_multiply(L_155, L_156)))), NULL);
		// v4 = new Vector2(pos.x + Mathf.Cos(-rectAngle + Mathf.PI + rot) * dist, pos.y + Mathf.Sin(-rectAngle + Mathf.PI + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_157 = V_15;
		float L_158 = L_157.___x_0;
		float L_159 = V_16;
		float L_160 = V_13;
		float L_161;
		L_161 = cosf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((-L_159)), (3.14159274f))), L_160)));
		float L_162 = V_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_163 = V_15;
		float L_164 = L_163.___y_1;
		float L_165 = V_16;
		float L_166 = V_13;
		float L_167;
		L_167 = sinf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((-L_165)), (3.14159274f))), L_166)));
		float L_168 = V_17;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), ((float)il2cpp_codegen_add(L_158, ((float)il2cpp_codegen_multiply(L_161, L_162)))), ((float)il2cpp_codegen_add(L_164, ((float)il2cpp_codegen_multiply(L_167, L_168)))), NULL);
	}

IL_036f:
	{
		// Polygon2 polygon = new Polygon2(4);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_169 = (Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3*)il2cpp_codegen_object_new(Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3_il2cpp_TypeInfo_var);
		NullCheck(L_169);
		Polygon2__ctor_m330FF437D20FFEA831187CFEC36CD6AA51744F41(L_169, 4, NULL);
		V_4 = L_169;
		// polygon.points[0] = v1;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_170 = V_4;
		NullCheck(L_170);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_171 = L_170->___points_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_172 = V_0;
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_172);
		// polygon.points[1] = v2;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_173 = V_4;
		NullCheck(L_173);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_174 = L_173->___points_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_175 = V_1;
		NullCheck(L_174);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_175);
		// polygon.points[2] = v3;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_176 = V_4;
		NullCheck(L_176);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_177 = L_176->___points_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_178 = V_2;
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_178);
		// polygon.points[3] = v4;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_179 = V_4;
		NullCheck(L_179);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_180 = L_179->___points_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_181 = V_3;
		NullCheck(L_180);
		(L_180)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_181);
		// LocalPolygons.Add(polygon);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_182 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_183 = V_4;
		NullCheck(L_182);
		List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_inline(L_182, L_183, List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var);
	}

IL_03bc:
	{
		// return(LocalPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_184 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___LocalPolygons_6;
		return L_184;
	}
}
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.SpriteShape::GetPolygonsWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* SpriteShape_GetPolygonsWorld_m83C1C587E35A29753F7908BBA787160BCB2045BF (SpriteShape_tCCA2A2247D8CB9EF2FE69B47F7FCEEA313CE01E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C248C8016DCE1C0A1219BFC85DB8FF3DEFE279A);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_4 = NULL;
	float V_5 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_15;
	memset((&V_15), 0, sizeof(V_15));
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_18;
	memset((&V_18), 0, sizeof(V_18));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_19;
	memset((&V_19), 0, sizeof(V_19));
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_23;
	memset((&V_23), 0, sizeof(V_23));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_24;
	memset((&V_24), 0, sizeof(V_24));
	float V_25 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_26;
	memset((&V_26), 0, sizeof(V_26));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_27;
	memset((&V_27), 0, sizeof(V_27));
	float V_28 = 0.0f;
	float V_29 = 0.0f;
	float V_30 = 0.0f;
	{
		// if (WorldPolygons == null)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_0 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		if (L_0)
		{
			goto IL_0765;
		}
	}
	{
		// if (WorldCache == null)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_1 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1;
		if (L_1)
		{
			goto IL_03df;
		}
	}
	{
		// WorldPolygons = new List<Polygon2>();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_2 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)il2cpp_codegen_object_new(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F(L_2, List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_2);
		// if (spriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___spriteRenderer_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		// Debug.LogWarning("Light Collider 2D: Cannot access sprite renderer (Sprite Shape)", transform.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral2C248C8016DCE1C0A1219BFC85DB8FF3DEFE279A, L_6, NULL);
		// return(null);
		return (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)NULL;
	}

IL_0046:
	{
		// if (spriteRenderer.drawMode == SpriteDrawMode.Tiled && spriteRenderer.tileMode == SpriteTileMode.Continuous)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___spriteRenderer_11;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SpriteRenderer_get_drawMode_mDE05B982434BB01801C33432159E662837352AD4(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_01e7;
		}
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___spriteRenderer_11;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = SpriteRenderer_get_tileMode_mA6BD321B76409603000804DECDB92013893D731E(L_9, NULL);
		if (L_10)
		{
			goto IL_01e7;
		}
	}
	{
		// float rot = transform.eulerAngles.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_11, NULL);
		float L_13 = L_12.___z_4;
		V_5 = L_13;
		// Vector2 size = transform.lossyScale * spriteRenderer.size * 0.5f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_15, NULL);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_17 = __this->___spriteRenderer_11;
		NullCheck(L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = SpriteRenderer_get_size_mBAA19D0D4BA836D0064D60BEE0D4485282DF29EA(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_16, L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_19, (0.5f), NULL);
		V_6 = L_20;
		// Vector2 pos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_22, NULL);
		V_7 = L_23;
		// rot = rot * Mathf.Deg2Rad + Mathf.PI;
		float L_24 = V_5;
		V_5 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_24, (0.0174532924f))), (3.14159274f)));
		// float rectAngle = Mathf.Atan2(size.y, size.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_6;
		float L_26 = L_25.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_6;
		float L_28 = L_27.___x_0;
		float L_29;
		L_29 = atan2f(L_26, L_28);
		V_8 = L_29;
		// float dist = Mathf.Sqrt(size.x * size.x + size.y * size.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_6;
		float L_31 = L_30.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_6;
		float L_33 = L_32.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_6;
		float L_35 = L_34.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_6;
		float L_37 = L_36.___y_1;
		float L_38;
		L_38 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_31, L_33)), ((float)il2cpp_codegen_multiply(L_35, L_37)))));
		V_9 = L_38;
		// v1 = new Vector2(pos.x + Mathf.Cos(rectAngle + rot) * dist, pos.y + Mathf.Sin(rectAngle + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_7;
		float L_40 = L_39.___x_0;
		float L_41 = V_8;
		float L_42 = V_5;
		float L_43;
		L_43 = cosf(((float)il2cpp_codegen_add(L_41, L_42)));
		float L_44 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = V_7;
		float L_46 = L_45.___y_1;
		float L_47 = V_8;
		float L_48 = V_5;
		float L_49;
		L_49 = sinf(((float)il2cpp_codegen_add(L_47, L_48)));
		float L_50 = V_9;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_add(L_40, ((float)il2cpp_codegen_multiply(L_43, L_44)))), ((float)il2cpp_codegen_add(L_46, ((float)il2cpp_codegen_multiply(L_49, L_50)))), NULL);
		// v2 = new Vector2(pos.x + Mathf.Cos(-rectAngle + rot) * dist, pos.y + Mathf.Sin(-rectAngle + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_7;
		float L_52 = L_51.___x_0;
		float L_53 = V_8;
		float L_54 = V_5;
		float L_55;
		L_55 = cosf(((float)il2cpp_codegen_add(((-L_53)), L_54)));
		float L_56 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = V_7;
		float L_58 = L_57.___y_1;
		float L_59 = V_8;
		float L_60 = V_5;
		float L_61;
		L_61 = sinf(((float)il2cpp_codegen_add(((-L_59)), L_60)));
		float L_62 = V_9;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_add(L_52, ((float)il2cpp_codegen_multiply(L_55, L_56)))), ((float)il2cpp_codegen_add(L_58, ((float)il2cpp_codegen_multiply(L_61, L_62)))), NULL);
		// v3 = new Vector2(pos.x + Mathf.Cos(rectAngle + Mathf.PI + rot) * dist, pos.y + Mathf.Sin(rectAngle + Mathf.PI + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = V_7;
		float L_64 = L_63.___x_0;
		float L_65 = V_8;
		float L_66 = V_5;
		float L_67;
		L_67 = cosf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_65, (3.14159274f))), L_66)));
		float L_68 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_7;
		float L_70 = L_69.___y_1;
		float L_71 = V_8;
		float L_72 = V_5;
		float L_73;
		L_73 = sinf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_71, (3.14159274f))), L_72)));
		float L_74 = V_9;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), ((float)il2cpp_codegen_add(L_64, ((float)il2cpp_codegen_multiply(L_67, L_68)))), ((float)il2cpp_codegen_add(L_70, ((float)il2cpp_codegen_multiply(L_73, L_74)))), NULL);
		// v4 = new Vector2(pos.x + Mathf.Cos(-rectAngle + Mathf.PI + rot) * dist, pos.y + Mathf.Sin(-rectAngle + Mathf.PI + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75 = V_7;
		float L_76 = L_75.___x_0;
		float L_77 = V_8;
		float L_78 = V_5;
		float L_79;
		L_79 = cosf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((-L_77)), (3.14159274f))), L_78)));
		float L_80 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81 = V_7;
		float L_82 = L_81.___y_1;
		float L_83 = V_8;
		float L_84 = V_5;
		float L_85;
		L_85 = sinf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((-L_83)), (3.14159274f))), L_84)));
		float L_86 = V_9;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), ((float)il2cpp_codegen_add(L_76, ((float)il2cpp_codegen_multiply(L_79, L_80)))), ((float)il2cpp_codegen_add(L_82, ((float)il2cpp_codegen_multiply(L_85, L_86)))), NULL);
		goto IL_038d;
	}

IL_01e7:
	{
		// virtualSpriteRenderer.Set(spriteRenderer);
		VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB* L_87 = __this->___virtualSpriteRenderer_12;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___spriteRenderer_11;
		NullCheck(L_87);
		VirtualSpriteRenderer_Set_mB384B4ECC39166B2F9949FEE31EB603B7E483695(L_87, L_88, NULL);
		// Vector2 position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_89);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_89, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_91;
		L_91 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_90, NULL);
		V_10 = L_91;
		// Vector2 scale = transform.lossyScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_92);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_92, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_94;
		L_94 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_93, NULL);
		V_11 = L_94;
		// float rotation = transform.eulerAngles.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_95);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_95, NULL);
		float L_97 = L_96.___z_4;
		V_12 = L_97;
		// SpriteTransform spriteTransform = new SpriteTransform(virtualSpriteRenderer, position, scale, rotation);
		VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB* L_98 = __this->___virtualSpriteRenderer_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_100 = V_11;
		float L_101 = V_12;
		SpriteTransform_tA8B00B6C4F4F0A8CB71871036C089CE521BD2888 L_102;
		memset((&L_102), 0, sizeof(L_102));
		SpriteTransform__ctor_m8C5BCCD58E556BDBD2ED704514DB300733E9C91E((&L_102), L_98, L_99, L_100, L_101, /*hidden argument*/NULL);
		// float rot = spriteTransform.rotation;
		SpriteTransform_tA8B00B6C4F4F0A8CB71871036C089CE521BD2888 L_103 = L_102;
		float L_104 = L_103.___rotation_2;
		V_13 = L_104;
		// Vector2 size = spriteTransform.scale;
		SpriteTransform_tA8B00B6C4F4F0A8CB71871036C089CE521BD2888 L_105 = L_103;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_106 = L_105.___scale_1;
		V_14 = L_106;
		// Vector2 pos = spriteTransform.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_107 = L_105.___position_0;
		V_15 = L_107;
		// rot = rot * Mathf.Deg2Rad + Mathf.PI;
		float L_108 = V_13;
		V_13 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_108, (0.0174532924f))), (3.14159274f)));
		// float rectAngle = Mathf.Atan2(size.y, size.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109 = V_14;
		float L_110 = L_109.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_111 = V_14;
		float L_112 = L_111.___x_0;
		float L_113;
		L_113 = atan2f(L_110, L_112);
		V_16 = L_113;
		// float dist = Mathf.Sqrt(size.x * size.x + size.y * size.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_114 = V_14;
		float L_115 = L_114.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_116 = V_14;
		float L_117 = L_116.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118 = V_14;
		float L_119 = L_118.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_120 = V_14;
		float L_121 = L_120.___y_1;
		float L_122;
		L_122 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_115, L_117)), ((float)il2cpp_codegen_multiply(L_119, L_121)))));
		V_17 = L_122;
		// v1 = new Vector2(pos.x + Mathf.Cos(rectAngle + rot) * dist, pos.y + Mathf.Sin(rectAngle + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_123 = V_15;
		float L_124 = L_123.___x_0;
		float L_125 = V_16;
		float L_126 = V_13;
		float L_127;
		L_127 = cosf(((float)il2cpp_codegen_add(L_125, L_126)));
		float L_128 = V_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_129 = V_15;
		float L_130 = L_129.___y_1;
		float L_131 = V_16;
		float L_132 = V_13;
		float L_133;
		L_133 = sinf(((float)il2cpp_codegen_add(L_131, L_132)));
		float L_134 = V_17;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_add(L_124, ((float)il2cpp_codegen_multiply(L_127, L_128)))), ((float)il2cpp_codegen_add(L_130, ((float)il2cpp_codegen_multiply(L_133, L_134)))), NULL);
		// v2 = new Vector2(pos.x + Mathf.Cos(-rectAngle + rot) * dist, pos.y + Mathf.Sin(-rectAngle + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_135 = V_15;
		float L_136 = L_135.___x_0;
		float L_137 = V_16;
		float L_138 = V_13;
		float L_139;
		L_139 = cosf(((float)il2cpp_codegen_add(((-L_137)), L_138)));
		float L_140 = V_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_141 = V_15;
		float L_142 = L_141.___y_1;
		float L_143 = V_16;
		float L_144 = V_13;
		float L_145;
		L_145 = sinf(((float)il2cpp_codegen_add(((-L_143)), L_144)));
		float L_146 = V_17;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_add(L_136, ((float)il2cpp_codegen_multiply(L_139, L_140)))), ((float)il2cpp_codegen_add(L_142, ((float)il2cpp_codegen_multiply(L_145, L_146)))), NULL);
		// v3 = new Vector2(pos.x + Mathf.Cos(rectAngle + Mathf.PI + rot) * dist, pos.y + Mathf.Sin(rectAngle + Mathf.PI + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_147 = V_15;
		float L_148 = L_147.___x_0;
		float L_149 = V_16;
		float L_150 = V_13;
		float L_151;
		L_151 = cosf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_149, (3.14159274f))), L_150)));
		float L_152 = V_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_153 = V_15;
		float L_154 = L_153.___y_1;
		float L_155 = V_16;
		float L_156 = V_13;
		float L_157;
		L_157 = sinf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_155, (3.14159274f))), L_156)));
		float L_158 = V_17;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), ((float)il2cpp_codegen_add(L_148, ((float)il2cpp_codegen_multiply(L_151, L_152)))), ((float)il2cpp_codegen_add(L_154, ((float)il2cpp_codegen_multiply(L_157, L_158)))), NULL);
		// v4 = new Vector2(pos.x + Mathf.Cos(-rectAngle + Mathf.PI + rot) * dist, pos.y + Mathf.Sin(-rectAngle + Mathf.PI + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_159 = V_15;
		float L_160 = L_159.___x_0;
		float L_161 = V_16;
		float L_162 = V_13;
		float L_163;
		L_163 = cosf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((-L_161)), (3.14159274f))), L_162)));
		float L_164 = V_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_165 = V_15;
		float L_166 = L_165.___y_1;
		float L_167 = V_16;
		float L_168 = V_13;
		float L_169;
		L_169 = sinf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((-L_167)), (3.14159274f))), L_168)));
		float L_170 = V_17;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), ((float)il2cpp_codegen_add(L_160, ((float)il2cpp_codegen_multiply(L_163, L_164)))), ((float)il2cpp_codegen_add(L_166, ((float)il2cpp_codegen_multiply(L_169, L_170)))), NULL);
		// WorldCache = WorldPolygons;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_171 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1 = L_171;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1), (void*)L_171);
	}

IL_038d:
	{
		// Polygon2 polygon = new Polygon2(4);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_172 = (Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3*)il2cpp_codegen_object_new(Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3_il2cpp_TypeInfo_var);
		NullCheck(L_172);
		Polygon2__ctor_m330FF437D20FFEA831187CFEC36CD6AA51744F41(L_172, 4, NULL);
		V_4 = L_172;
		// polygon.points[0] = v1;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_173 = V_4;
		NullCheck(L_173);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_174 = L_173->___points_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_175 = V_0;
		NullCheck(L_174);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_175);
		// polygon.points[1] = v2;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_176 = V_4;
		NullCheck(L_176);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_177 = L_176->___points_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_178 = V_1;
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_178);
		// polygon.points[2] = v3;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_179 = V_4;
		NullCheck(L_179);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_180 = L_179->___points_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_181 = V_2;
		NullCheck(L_180);
		(L_180)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_181);
		// polygon.points[3] = v4;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_182 = V_4;
		NullCheck(L_182);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_183 = L_182->___points_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_184 = V_3;
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_184);
		// WorldPolygons.Add(polygon);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_185 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_186 = V_4;
		NullCheck(L_185);
		List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_inline(L_185, L_186, List_1_Add_mAFBF358D11B50F1057174CBD0B521CBF67A98583_RuntimeMethod_var);
		goto IL_0765;
	}

IL_03df:
	{
		// WorldPolygons = WorldCache;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_187 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldCache_1;
		((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0 = L_187;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0), (void*)L_187);
		// if (spriteRenderer.drawMode == SpriteDrawMode.Tiled && spriteRenderer.tileMode == SpriteTileMode.Continuous) {
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_188 = __this->___spriteRenderer_11;
		NullCheck(L_188);
		int32_t L_189;
		L_189 = SpriteRenderer_get_drawMode_mDE05B982434BB01801C33432159E662837352AD4(L_188, NULL);
		if ((!(((uint32_t)L_189) == ((uint32_t)2))))
		{
			goto IL_058c;
		}
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_190 = __this->___spriteRenderer_11;
		NullCheck(L_190);
		int32_t L_191;
		L_191 = SpriteRenderer_get_tileMode_mA6BD321B76409603000804DECDB92013893D731E(L_190, NULL);
		if (L_191)
		{
			goto IL_058c;
		}
	}
	{
		// Vector2 size = transform.lossyScale * spriteRenderer.size * 0.5f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_192 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_192);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193;
		L_193 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_192, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_194;
		L_194 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_193, NULL);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_195 = __this->___spriteRenderer_11;
		NullCheck(L_195);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_196;
		L_196 = SpriteRenderer_get_size_mBAA19D0D4BA836D0064D60BEE0D4485282DF29EA(L_195, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_197;
		L_197 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_194, L_196, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_198;
		L_198 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_197, (0.5f), NULL);
		V_18 = L_198;
		// Vector2 pos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_199 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_199);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_200;
		L_200 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_199, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_201;
		L_201 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_200, NULL);
		V_19 = L_201;
		// float rot = transform.eulerAngles.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_202 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_202);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_203;
		L_203 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_202, NULL);
		float L_204 = L_203.___z_4;
		V_20 = L_204;
		// rot = rot * Mathf.Deg2Rad + Mathf.PI;
		float L_205 = V_20;
		V_20 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_205, (0.0174532924f))), (3.14159274f)));
		// float rectAngle = Mathf.Atan2(size.y, size.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_206 = V_18;
		float L_207 = L_206.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_208 = V_18;
		float L_209 = L_208.___x_0;
		float L_210;
		L_210 = atan2f(L_207, L_209);
		V_21 = L_210;
		// float dist = Mathf.Sqrt(size.x * size.x + size.y * size.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_211 = V_18;
		float L_212 = L_211.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_213 = V_18;
		float L_214 = L_213.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_215 = V_18;
		float L_216 = L_215.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_217 = V_18;
		float L_218 = L_217.___y_1;
		float L_219;
		L_219 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_212, L_214)), ((float)il2cpp_codegen_multiply(L_216, L_218)))));
		V_22 = L_219;
		// v1 = new Vector2(pos.x + Mathf.Cos(rectAngle + rot) * dist, pos.y + Mathf.Sin(rectAngle + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_220 = V_19;
		float L_221 = L_220.___x_0;
		float L_222 = V_21;
		float L_223 = V_20;
		float L_224;
		L_224 = cosf(((float)il2cpp_codegen_add(L_222, L_223)));
		float L_225 = V_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_226 = V_19;
		float L_227 = L_226.___y_1;
		float L_228 = V_21;
		float L_229 = V_20;
		float L_230;
		L_230 = sinf(((float)il2cpp_codegen_add(L_228, L_229)));
		float L_231 = V_22;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_add(L_221, ((float)il2cpp_codegen_multiply(L_224, L_225)))), ((float)il2cpp_codegen_add(L_227, ((float)il2cpp_codegen_multiply(L_230, L_231)))), NULL);
		// v2 = new Vector2(pos.x + Mathf.Cos(-rectAngle + rot) * dist, pos.y + Mathf.Sin(-rectAngle + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_232 = V_19;
		float L_233 = L_232.___x_0;
		float L_234 = V_21;
		float L_235 = V_20;
		float L_236;
		L_236 = cosf(((float)il2cpp_codegen_add(((-L_234)), L_235)));
		float L_237 = V_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_238 = V_19;
		float L_239 = L_238.___y_1;
		float L_240 = V_21;
		float L_241 = V_20;
		float L_242;
		L_242 = sinf(((float)il2cpp_codegen_add(((-L_240)), L_241)));
		float L_243 = V_22;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_add(L_233, ((float)il2cpp_codegen_multiply(L_236, L_237)))), ((float)il2cpp_codegen_add(L_239, ((float)il2cpp_codegen_multiply(L_242, L_243)))), NULL);
		// v3 = new Vector2(pos.x + Mathf.Cos(rectAngle + Mathf.PI + rot) * dist, pos.y + Mathf.Sin(rectAngle + Mathf.PI + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_244 = V_19;
		float L_245 = L_244.___x_0;
		float L_246 = V_21;
		float L_247 = V_20;
		float L_248;
		L_248 = cosf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_246, (3.14159274f))), L_247)));
		float L_249 = V_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_250 = V_19;
		float L_251 = L_250.___y_1;
		float L_252 = V_21;
		float L_253 = V_20;
		float L_254;
		L_254 = sinf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_252, (3.14159274f))), L_253)));
		float L_255 = V_22;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), ((float)il2cpp_codegen_add(L_245, ((float)il2cpp_codegen_multiply(L_248, L_249)))), ((float)il2cpp_codegen_add(L_251, ((float)il2cpp_codegen_multiply(L_254, L_255)))), NULL);
		// v4 = new Vector2(pos.x + Mathf.Cos(-rectAngle + Mathf.PI + rot) * dist, pos.y + Mathf.Sin(-rectAngle + Mathf.PI + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_256 = V_19;
		float L_257 = L_256.___x_0;
		float L_258 = V_21;
		float L_259 = V_20;
		float L_260;
		L_260 = cosf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((-L_258)), (3.14159274f))), L_259)));
		float L_261 = V_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_262 = V_19;
		float L_263 = L_262.___y_1;
		float L_264 = V_21;
		float L_265 = V_20;
		float L_266;
		L_266 = sinf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((-L_264)), (3.14159274f))), L_265)));
		float L_267 = V_22;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), ((float)il2cpp_codegen_add(L_257, ((float)il2cpp_codegen_multiply(L_260, L_261)))), ((float)il2cpp_codegen_add(L_263, ((float)il2cpp_codegen_multiply(L_266, L_267)))), NULL);
		goto IL_0726;
	}

IL_058c:
	{
		// virtualSpriteRenderer.Set(spriteRenderer);
		VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB* L_268 = __this->___virtualSpriteRenderer_12;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_269 = __this->___spriteRenderer_11;
		NullCheck(L_268);
		VirtualSpriteRenderer_Set_mB384B4ECC39166B2F9949FEE31EB603B7E483695(L_268, L_269, NULL);
		// Vector2 position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_270 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_270);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_271;
		L_271 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_270, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_272;
		L_272 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_271, NULL);
		V_23 = L_272;
		// Vector2 scale = transform.lossyScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_273 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_273);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_274;
		L_274 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_273, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_275;
		L_275 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_274, NULL);
		V_24 = L_275;
		// float rotation = transform.eulerAngles.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_276 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_276);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_277;
		L_277 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_276, NULL);
		float L_278 = L_277.___z_4;
		V_25 = L_278;
		// SpriteTransform spriteTransform = new SpriteTransform(virtualSpriteRenderer, position, scale, rotation);
		VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB* L_279 = __this->___virtualSpriteRenderer_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_280 = V_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_281 = V_24;
		float L_282 = V_25;
		SpriteTransform_tA8B00B6C4F4F0A8CB71871036C089CE521BD2888 L_283;
		memset((&L_283), 0, sizeof(L_283));
		SpriteTransform__ctor_m8C5BCCD58E556BDBD2ED704514DB300733E9C91E((&L_283), L_279, L_280, L_281, L_282, /*hidden argument*/NULL);
		// Vector2 size = spriteTransform.scale;
		SpriteTransform_tA8B00B6C4F4F0A8CB71871036C089CE521BD2888 L_284 = L_283;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_285 = L_284.___scale_1;
		V_26 = L_285;
		// Vector2 pos = spriteTransform.position;
		SpriteTransform_tA8B00B6C4F4F0A8CB71871036C089CE521BD2888 L_286 = L_284;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_287 = L_286.___position_0;
		V_27 = L_287;
		// float rot = spriteTransform.rotation;
		float L_288 = L_286.___rotation_2;
		V_28 = L_288;
		// rot = rot * Mathf.Deg2Rad + Mathf.PI;
		float L_289 = V_28;
		V_28 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_289, (0.0174532924f))), (3.14159274f)));
		// float rectAngle = Mathf.Atan2(size.y, size.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_290 = V_26;
		float L_291 = L_290.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_292 = V_26;
		float L_293 = L_292.___x_0;
		float L_294;
		L_294 = atan2f(L_291, L_293);
		V_29 = L_294;
		// float dist = Mathf.Sqrt(size.x * size.x + size.y * size.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_295 = V_26;
		float L_296 = L_295.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_297 = V_26;
		float L_298 = L_297.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_299 = V_26;
		float L_300 = L_299.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_301 = V_26;
		float L_302 = L_301.___y_1;
		float L_303;
		L_303 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_296, L_298)), ((float)il2cpp_codegen_multiply(L_300, L_302)))));
		V_30 = L_303;
		// v1 = new Vector2(pos.x + Mathf.Cos(rectAngle + rot) * dist, pos.y + Mathf.Sin(rectAngle + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_304 = V_27;
		float L_305 = L_304.___x_0;
		float L_306 = V_29;
		float L_307 = V_28;
		float L_308;
		L_308 = cosf(((float)il2cpp_codegen_add(L_306, L_307)));
		float L_309 = V_30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_310 = V_27;
		float L_311 = L_310.___y_1;
		float L_312 = V_29;
		float L_313 = V_28;
		float L_314;
		L_314 = sinf(((float)il2cpp_codegen_add(L_312, L_313)));
		float L_315 = V_30;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_add(L_305, ((float)il2cpp_codegen_multiply(L_308, L_309)))), ((float)il2cpp_codegen_add(L_311, ((float)il2cpp_codegen_multiply(L_314, L_315)))), NULL);
		// v2 = new Vector2(pos.x + Mathf.Cos(-rectAngle + rot) * dist, pos.y + Mathf.Sin(-rectAngle + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_316 = V_27;
		float L_317 = L_316.___x_0;
		float L_318 = V_29;
		float L_319 = V_28;
		float L_320;
		L_320 = cosf(((float)il2cpp_codegen_add(((-L_318)), L_319)));
		float L_321 = V_30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_322 = V_27;
		float L_323 = L_322.___y_1;
		float L_324 = V_29;
		float L_325 = V_28;
		float L_326;
		L_326 = sinf(((float)il2cpp_codegen_add(((-L_324)), L_325)));
		float L_327 = V_30;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_add(L_317, ((float)il2cpp_codegen_multiply(L_320, L_321)))), ((float)il2cpp_codegen_add(L_323, ((float)il2cpp_codegen_multiply(L_326, L_327)))), NULL);
		// v3 = new Vector2(pos.x + Mathf.Cos(rectAngle + Mathf.PI + rot) * dist, pos.y + Mathf.Sin(rectAngle + Mathf.PI + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_328 = V_27;
		float L_329 = L_328.___x_0;
		float L_330 = V_29;
		float L_331 = V_28;
		float L_332;
		L_332 = cosf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_330, (3.14159274f))), L_331)));
		float L_333 = V_30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_334 = V_27;
		float L_335 = L_334.___y_1;
		float L_336 = V_29;
		float L_337 = V_28;
		float L_338;
		L_338 = sinf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_336, (3.14159274f))), L_337)));
		float L_339 = V_30;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), ((float)il2cpp_codegen_add(L_329, ((float)il2cpp_codegen_multiply(L_332, L_333)))), ((float)il2cpp_codegen_add(L_335, ((float)il2cpp_codegen_multiply(L_338, L_339)))), NULL);
		// v4 = new Vector2(pos.x + Mathf.Cos(-rectAngle + Mathf.PI + rot) * dist, pos.y + Mathf.Sin(-rectAngle + Mathf.PI + rot) * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_340 = V_27;
		float L_341 = L_340.___x_0;
		float L_342 = V_29;
		float L_343 = V_28;
		float L_344;
		L_344 = cosf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((-L_342)), (3.14159274f))), L_343)));
		float L_345 = V_30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_346 = V_27;
		float L_347 = L_346.___y_1;
		float L_348 = V_29;
		float L_349 = V_28;
		float L_350;
		L_350 = sinf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((-L_348)), (3.14159274f))), L_349)));
		float L_351 = V_30;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), ((float)il2cpp_codegen_add(L_341, ((float)il2cpp_codegen_multiply(L_344, L_345)))), ((float)il2cpp_codegen_add(L_347, ((float)il2cpp_codegen_multiply(L_350, L_351)))), NULL);
	}

IL_0726:
	{
		// Polygon2 polygon = WorldPolygons[0];
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_352 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		NullCheck(L_352);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_353;
		L_353 = List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13(L_352, 0, List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		// polygon.points[0] = v1;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_354 = L_353;
		NullCheck(L_354);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_355 = L_354->___points_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_356 = V_0;
		NullCheck(L_355);
		(L_355)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_356);
		// polygon.points[1] = v2;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_357 = L_354;
		NullCheck(L_357);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_358 = L_357->___points_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_359 = V_1;
		NullCheck(L_358);
		(L_358)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_359);
		// polygon.points[2] = v3;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_360 = L_357;
		NullCheck(L_360);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_361 = L_360->___points_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_362 = V_2;
		NullCheck(L_361);
		(L_361)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_362);
		// polygon.points[3] = v4;
		NullCheck(L_360);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_363 = L_360->___points_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_364 = V_3;
		NullCheck(L_363);
		(L_363)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_364);
	}

IL_0765:
	{
		// return(WorldPolygons);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_365 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___WorldPolygons_0;
		return L_365;
	}
}
// System.Void FunkyCode.LightShape.SpriteShape::ResetLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteShape_ResetLocal_m35DB3A5C91F21EAE58B26A8D7680EDCFCC28271D (SpriteShape_tCCA2A2247D8CB9EF2FE69B47F7FCEEA313CE01E1* __this, const RuntimeMethod* method) 
{
	{
		// base.ResetLocal();
		Base_ResetLocal_m8CFAD868A9AEC5D1E39453F560037C0BEE6C3549(__this, NULL);
		// originalSprite = null;
		__this->___originalSprite_10 = (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalSprite_10), (void*)(Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL);
		// }
		return;
	}
}
// UnityEngine.SpriteRenderer FunkyCode.LightShape.SpriteShape::GetSpriteRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* SpriteShape_GetSpriteRenderer_mE0F890A8D197EF18F34CBDE50DCB9CC8A4015CD8 (SpriteShape_tCCA2A2247D8CB9EF2FE69B47F7FCEEA313CE01E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___spriteRenderer_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return(spriteRenderer);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___spriteRenderer_11;
		return L_2;
	}

IL_0015:
	{
		// if (transform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// return(spriteRenderer);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___spriteRenderer_11;
		return L_5;
	}

IL_002a:
	{
		// if (spriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___spriteRenderer_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// spriteRenderer = transform.GetComponent<SpriteRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ((Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4*)__this)->___transform_9;
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_8, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_11), (void*)L_9);
	}

IL_0049:
	{
		// return(spriteRenderer);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___spriteRenderer_11;
		return L_10;
	}
}
// UnityEngine.Sprite FunkyCode.LightShape.SpriteShape::GetOriginalSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* SpriteShape_GetOriginalSprite_m393F8A2C736F1F7054242C3D491EA03D8E0656E4 (SpriteShape_tCCA2A2247D8CB9EF2FE69B47F7FCEEA313CE01E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (originalSprite == null)
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___originalSprite_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// GetSpriteRenderer();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = SpriteShape_GetSpriteRenderer_mE0F890A8D197EF18F34CBDE50DCB9CC8A4015CD8(__this, NULL);
		// if (spriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___spriteRenderer_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// originalSprite = spriteRenderer.sprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___spriteRenderer_11;
		NullCheck(L_5);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6;
		L_6 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_5, NULL);
		__this->___originalSprite_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalSprite_10), (void*)L_6);
	}

IL_0034:
	{
		// return(originalSprite);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___originalSprite_10;
		return L_7;
	}
}
// System.Void FunkyCode.LightShape.SpriteShape::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteShape__ctor_m44659C6FFC7A3B09C2A79705FF3C6A443643677E (SpriteShape_tCCA2A2247D8CB9EF2FE69B47F7FCEEA313CE01E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private VirtualSpriteRenderer virtualSpriteRenderer = new VirtualSpriteRenderer();
		VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB* L_0 = (VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB*)il2cpp_codegen_object_new(VirtualSpriteRenderer_t52A311FB81D556994CADCA068A9485DE59903CDB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		VirtualSpriteRenderer__ctor_mBEF46051FFF6C6C12389CD80C28F4EB9D3EC3E4D(L_0, NULL);
		__this->___virtualSpriteRenderer_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___virtualSpriteRenderer_12), (void*)L_0);
		Base__ctor_m0B2F128E7F35ECD7DDB068DD4406137B96A749AF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 FunkyCode.LightShape.Base::GetSortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Base_GetSortingOrder_mC2007409047B66E909876E829E16735F06B6C152 (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, const RuntimeMethod* method) 
{
	{
		// public virtual int GetSortingOrder() => 0;
		return 0;
	}
}
// System.Int32 FunkyCode.LightShape.Base::GetSortingLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Base_GetSortingLayer_mD5847E7C382F29FE89B1BCF77F34001FD6347D21 (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, const RuntimeMethod* method) 
{
	{
		// public virtual int GetSortingLayer() => 0;
		return 0;
	}
}
// System.Collections.Generic.List`1<FunkyCode.MeshObject> FunkyCode.LightShape.Base::GetMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E* Base_GetMeshes_m13E4B0FDE5527AB3D3187C6C9D28CBDF94D7C136 (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, const RuntimeMethod* method) 
{
	{
		// public virtual List<MeshObject> GetMeshes() => null;
		return (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E*)NULL;
	}
}
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* Base_GetPolygonsLocal_m28B3CAC3757FA5AFBB3E8422EA3DCA76BD4A596F (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, const RuntimeMethod* method) 
{
	{
		// public virtual List<Polygon2> GetPolygonsLocal() => null;
		return (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)NULL;
	}
}
// System.Void FunkyCode.LightShape.Base::SetTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_SetTransform_m081D4205298F87FD733A032BC8C73F3B4D5F81A9 (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) 
{
	{
		// this.transform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___transform0;
		__this->___transform_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transform_9), (void*)L_0);
		// }
		return;
	}
}
// System.Void FunkyCode.LightShape.Base::ResetLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_ResetLocal_m8CFAD868A9AEC5D1E39453F560037C0BEE6C3549 (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, const RuntimeMethod* method) 
{
	{
		// Meshes = null;
		__this->___Meshes_8 = (List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Meshes_8), (void*)(List_1_t97B45DDEF7D531F32A09A201FD4A08FB289CEB1E*)NULL);
		// LocalPolygons = null;
		__this->___LocalPolygons_6 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LocalPolygons_6), (void*)(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)NULL);
		// WorldPolygons = null;
		__this->___WorldPolygons_0 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WorldPolygons_0), (void*)(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)NULL);
		// WorldCache = null;
		__this->___WorldCache_1 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WorldCache_1), (void*)(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)NULL);
		// ResetWorld();
		VirtualActionInvoker0::Invoke(10 /* System.Void FunkyCode.LightShape.Base::ResetWorld() */, __this);
		// }
		return;
	}
}
// System.Void FunkyCode.LightShape.Base::ResetWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_ResetWorld_m1D0308D3F3A6C8528F968163DD0664576CB082A3 (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, const RuntimeMethod* method) 
{
	{
		// WorldPolygons = null;
		__this->___WorldPolygons_0 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WorldPolygons_0), (void*)(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)NULL);
		// WorldRect = new Rect();
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&__this->___WorldRect_3);
		il2cpp_codegen_initobj(L_0, sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		// WorldDayRect = new Rect();
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_1 = (&__this->___WorldDayRect_4);
		il2cpp_codegen_initobj(L_1, sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		// IsoWorldRect = new Rect();
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_2 = (&__this->___IsoWorldRect_5);
		il2cpp_codegen_initobj(L_2, sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		// WorldPoint = null;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_3 = (&__this->___WorldPoint_2);
		il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		// }
		return;
	}
}
// UnityEngine.Rect FunkyCode.LightShape.Base::GetWorldRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Base_GetWorldRect_mDEE006EEC21D17E0AE3B52352DAC5F48046A221A (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, const RuntimeMethod* method) 
{
	{
		// if (WorldRect.width < 0.01f)
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&__this->___WorldRect_3);
		float L_1;
		L_1 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_0, NULL);
		if ((!(((float)L_1) < ((float)(0.00999999978f)))))
		{
			goto IL_0023;
		}
	}
	{
		// WorldRect = Polygon2Helper.GetRect(GetPolygonsWorld());
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_2;
		L_2 = VirtualFuncInvoker0< List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* >::Invoke(8 /* System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsWorld() */, __this);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = Polygon2Helper_GetRect_mE292804BDE16B09EB4FE2D1E92FF1CDA43D86220(L_2, NULL);
		__this->___WorldRect_3 = L_3;
	}

IL_0023:
	{
		// return WorldRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4 = __this->___WorldRect_3;
		return L_4;
	}
}
// UnityEngine.Rect FunkyCode.LightShape.Base::GetDayRect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Base_GetDayRect_mB77C53530F5A85B08022351840C993728CB2C642 (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, float ___shadowDistance0, const RuntimeMethod* method) 
{
	{
		// if (WorldDayRect.width < 0.01f)
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&__this->___WorldDayRect_4);
		float L_1;
		L_1 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_0, NULL);
		if ((!(((float)L_1) < ((float)(0.00999999978f)))))
		{
			goto IL_0024;
		}
	}
	{
		// WorldDayRect = Polygon2Helper.GetDayRect(GetPolygonsWorld(), shadowDistance);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_2;
		L_2 = VirtualFuncInvoker0< List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* >::Invoke(8 /* System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsWorld() */, __this);
		float L_3 = ___shadowDistance0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = Polygon2Helper_GetDayRect_m385E960907D7BA88395D949BE02C8ECD8E1FF29B(L_2, L_3, NULL);
		__this->___WorldDayRect_4 = L_4;
	}

IL_0024:
	{
		// return WorldRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = __this->___WorldRect_3;
		return L_5;
	}
}
// UnityEngine.Rect FunkyCode.LightShape.Base::GetIsoWorldRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Base_GetIsoWorldRect_mAD251DCFF30BEC3F7CAE9E6714BAF784E80F59FE (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, const RuntimeMethod* method) 
{
	{
		// if (IsoWorldRect.width < 0.01f)
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&__this->___IsoWorldRect_5);
		float L_1;
		L_1 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_0, NULL);
		if ((!(((float)L_1) < ((float)(0.00999999978f)))))
		{
			goto IL_0023;
		}
	}
	{
		// IsoWorldRect = Polygon2Helper.GetIsoRect(GetPolygonsWorld());
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_2;
		L_2 = VirtualFuncInvoker0< List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* >::Invoke(8 /* System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsWorld() */, __this);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = Polygon2Helper_GetIsoRect_m1F22AAADAD3C36076C360B96C556D3DA21B06E1A(L_2, NULL);
		__this->___IsoWorldRect_5 = L_3;
	}

IL_0023:
	{
		// return IsoWorldRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4 = __this->___IsoWorldRect_5;
		return L_4;
	}
}
// UnityEngine.Vector2 FunkyCode.LightShape.Base::GetPivotPoint_ShapeCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Base_GetPivotPoint_ShapeCenter_m1B3AADC7E57430FFBBB6856EEC59C1BAC1F06C03 (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (WorldPoint == null)
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_0 = (&__this->___WorldPoint_2);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline(L_0, Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		// WorldPoint = GetWorldRect().center;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = Base_GetWorldRect_mDEE006EEC21D17E0AE3B52352DAC5F48046A221A(__this, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C((&V_0), NULL);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		__this->___WorldPoint_2 = L_4;
	}

IL_0026:
	{
		// return WorldPoint.Value;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_5 = (&__this->___WorldPoint_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7(L_5, Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		return L_6;
	}
}
// UnityEngine.Vector2 FunkyCode.LightShape.Base::GetPivotPoint_TransformCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Base_GetPivotPoint_TransformCenter_mD5D9D797A640227AA3C3D996AF690605FA7D077C (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WorldPoint == null)
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_0 = (&__this->___WorldPoint_2);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline(L_0, Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		// WorldPoint = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___transform_9;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		__this->___WorldPoint_2 = L_5;
	}

IL_0028:
	{
		// return WorldPoint.Value;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_6 = (&__this->___WorldPoint_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7(L_6, Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		return L_7;
	}
}
// UnityEngine.Vector2 FunkyCode.LightShape.Base::GetPivotPoint_LowestY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Base_GetPivotPoint_LowestY_m2A044AA9F78960373CD40119B44F0FF4DDAB80A8 (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_2 = NULL;
	int32_t V_3 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (WorldPoint == null)
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_0 = (&__this->___WorldPoint_2);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline(L_0, Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0087;
		}
	}
	{
		// var polys = GetPolygonsWorld();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_2;
		L_2 = VirtualFuncInvoker0< List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* >::Invoke(8 /* System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightShape.Base::GetPolygonsWorld() */, __this);
		// var lowestPoint = new Vector2(0, 999999);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.0f), (999999.0f), NULL);
		// foreach(var poly in polys)
		NullCheck(L_2);
		Enumerator_tCAAFB572A3E4A82CE1F6376C9FBC9D78B245AC5F L_3;
		L_3 = List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629(L_2, List_1_GetEnumerator_m3B587154BCB88AED28EEBB0C721B9B308D112629_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD((&V_1), Enumerator_Dispose_m23D2AE32249BE507BEF4CA5F96DBBFDCF1FF00FD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0062_1;
			}

IL_002c_1:
			{
				// foreach(var poly in polys)
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_4;
				L_4 = Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_inline((&V_1), Enumerator_get_Current_m62EC4A0E2B3DB4E2596752E7CB3CA1ACA2580F44_RuntimeMethod_var);
				// foreach(var p in poly.points)
				NullCheck(L_4);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = L_4->___points_0;
				V_2 = L_5;
				V_3 = 0;
				goto IL_005c_1;
			}

IL_003d_1:
			{
				// foreach(var p in poly.points)
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = V_2;
				int32_t L_7 = V_3;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				V_4 = L_9;
				// if (p.y < lowestPoint.y)
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_4;
				float L_11 = L_10.___y_1;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
				float L_13 = L_12.___y_1;
				if ((!(((float)L_11) < ((float)L_13))))
				{
					goto IL_0058_1;
				}
			}
			{
				// lowestPoint = p;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_4;
				V_0 = L_14;
			}

IL_0058_1:
			{
				int32_t L_15 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_005c_1:
			{
				// foreach(var p in poly.points)
				int32_t L_16 = V_3;
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_17 = V_2;
				NullCheck(L_17);
				if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
				{
					goto IL_003d_1;
				}
			}

IL_0062_1:
			{
				// foreach(var poly in polys)
				bool L_18;
				L_18 = Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E((&V_1), Enumerator_MoveNext_m301D78ADF73D9654DF68FC3B1F6CB9B231F8252E_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_002c_1;
				}
			}
			{
				goto IL_007b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007b:
	{
		// WorldPoint = lowestPoint;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_0;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_20;
		memset((&L_20), 0, sizeof(L_20));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_20), L_19, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		__this->___WorldPoint_2 = L_20;
	}

IL_0087:
	{
		// return WorldPoint.Value;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_21 = (&__this->___WorldPoint_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7(L_21, Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		return L_22;
	}
}
// System.Void FunkyCode.LightShape.Base::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base__ctor_m0B2F128E7F35ECD7DDB068DD4406137B96A749AF (Base_tAFF90F44F49BE8B8AE0AEBD0513B156EF7B98EB4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// FunkyCode.Utilities.Polygon2 FunkyCode.EventHandling.Base::GetPolygon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* Base_GetPolygon_mD12C9C3FEEDA4AEFAD7FDC77C057647CFCEE2404 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (eventPoly == null) {
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_0 = ((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___eventPoly_4;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// eventPoly = new Polygon2(4);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_1 = (Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3*)il2cpp_codegen_object_new(Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Polygon2__ctor_m330FF437D20FFEA831187CFEC36CD6AA51744F41(L_1, 4, NULL);
		((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___eventPoly_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___eventPoly_4), (void*)L_1);
	}

IL_0012:
	{
		// return(eventPoly);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_2 = ((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___eventPoly_4;
		return L_2;
	}
}
// System.Void FunkyCode.EventHandling.Base::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base__ctor_mD30153DF63C53ED44FE6F1C49EF2ABB8916669D6 (Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CollisionEvent2D_Invoke_m5AE37A4322E0C8EC078A512E1EC5E7AD59B7F21D_Multicast(CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* __this, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 ___collision0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* currentDelegate = reinterpret_cast<CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___collision0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CollisionEvent2D_Invoke_m5AE37A4322E0C8EC078A512E1EC5E7AD59B7F21D_OpenInst(CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* __this, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 ___collision0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___collision0, method);
}
void CollisionEvent2D_Invoke_m5AE37A4322E0C8EC078A512E1EC5E7AD59B7F21D_OpenStatic(CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* __this, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 ___collision0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___collision0, method);
}
void CollisionEvent2D_Invoke_m5AE37A4322E0C8EC078A512E1EC5E7AD59B7F21D_OpenStaticInvoker(CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* __this, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 ___collision0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 >::Invoke(__this->___method_ptr_0, method, NULL, ___collision0);
}
void CollisionEvent2D_Invoke_m5AE37A4322E0C8EC078A512E1EC5E7AD59B7F21D_ClosedStaticInvoker(CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* __this, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 ___collision0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___collision0);
}
// System.Void FunkyCode.EventHandling.CollisionEvent2D::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvent2D__ctor_mD6CC063AD36F685176446F8A560978AB4E989C73 (CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CollisionEvent2D_Invoke_m5AE37A4322E0C8EC078A512E1EC5E7AD59B7F21D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CollisionEvent2D_Invoke_m5AE37A4322E0C8EC078A512E1EC5E7AD59B7F21D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CollisionEvent2D_Invoke_m5AE37A4322E0C8EC078A512E1EC5E7AD59B7F21D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CollisionEvent2D_Invoke_m5AE37A4322E0C8EC078A512E1EC5E7AD59B7F21D_Multicast;
}
// System.Void FunkyCode.EventHandling.CollisionEvent2D::Invoke(FunkyCode.LightCollision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvent2D_Invoke_m5AE37A4322E0C8EC078A512E1EC5E7AD59B7F21D (CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* __this, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 ___collision0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___collision0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult FunkyCode.EventHandling.CollisionEvent2D::BeginInvoke(FunkyCode.LightCollision2D,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollisionEvent2D_BeginInvoke_m1EF33B47A851797AD8D48654A5D3C6FF4C52EFDF (CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* __this, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 ___collision0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7_il2cpp_TypeInfo_var, &___collision0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void FunkyCode.EventHandling.CollisionEvent2D::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvent2D_EndInvoke_mB20CFCA0AD2F26DF6DCB281DB37F7044C1F7B54A (CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FunkyCode.EventHandling.LightCollider::GetCollisions(System.Collections.Generic.List`1<FunkyCode.LightCollision2D>,FunkyCode.Light2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightCollider_GetCollisions_m2B05BFC4DA27C249908443A007F19B5DA27EBE37 (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* ___collisions0, Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* ___lightingSource1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1CB35939B2AF7CCD45EE1A6198F9B7BFDF5905BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3D33EA565508FFE83EEFE70888D48CAA86ED4AF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m82378840486C9FDAFDAE42CD9E0738428C5EC8C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* V_0 = NULL;
	int32_t V_1 = 0;
	LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* V_2 = NULL;
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* V_3 = NULL;
	LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_5 = NULL;
	int32_t V_6 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	{
		// var colliderList = LightCollider2D.ListEventReceivers;
		il2cpp_codegen_runtime_class_init_inline(LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F_il2cpp_TypeInfo_var);
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_0 = ((LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F_il2cpp_TypeInfo_var))->___ListEventReceivers_24;
		V_0 = L_0;
		// for(int i = 0; i < colliderList.Count; i++)
		V_1 = 0;
		goto IL_0175;
	}

IL_000d:
	{
		// var id = colliderList[i];
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_3;
		L_3 = List_1_get_Item_m82378840486C9FDAFDAE42CD9E0738428C5EC8C3(L_1, L_2, List_1_get_Item_m82378840486C9FDAFDAE42CD9E0738428C5EC8C3_RuntimeMethod_var);
		V_2 = L_3;
		// if (id.mainShape.shadowType == LightCollider2D.ShadowType.None)
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_4 = V_2;
		NullCheck(L_4);
		LightColliderShape_tD23C84CBA7B2840DDA09A49B9A21D15050F23FE9* L_5 = L_4->___mainShape_19;
		NullCheck(L_5);
		int32_t L_6 = L_5->___shadowType_0;
		if (!L_6)
		{
			goto IL_0171;
		}
	}
	{
		// if (!id.InLight(lightingSource))
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_7 = V_2;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_8 = ___lightingSource1;
		NullCheck(L_7);
		bool L_9;
		L_9 = LightCollider2D_InLight_m4D3474FA29843664B96BFC70EEB4AAFC14E22E38(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0171;
		}
	}
	{
		// var polygons = id.mainShape.GetPolygonsWorld();
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_10 = V_2;
		NullCheck(L_10);
		LightColliderShape_tD23C84CBA7B2840DDA09A49B9A21D15050F23FE9* L_11 = L_10->___mainShape_19;
		NullCheck(L_11);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_12;
		L_12 = LightColliderShape_GetPolygonsWorld_mD7422C50A08822CC0470E30DA2F2CFE391D67607(L_11, NULL);
		V_3 = L_12;
		// if (polygons.Count < 1)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_13 = V_3;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_inline(L_13, List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)1)))
		{
			goto IL_0171;
		}
	}
	{
		// var polygon = polygons[0];
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_15 = V_3;
		NullCheck(L_15);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_16;
		L_16 = List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13(L_15, 0, List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		// var collision = new LightCollision2D();
		il2cpp_codegen_initobj((&V_4), sizeof(LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7));
		// collision.light = lightingSource;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_17 = ___lightingSource1;
		(&V_4)->___light_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_4)->___light_0), (void*)L_17);
		// collision.collider = id;
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_18 = V_2;
		(&V_4)->___collider_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_4)->___collider_1), (void*)L_18);
		// collision.points = new List<Vector2>();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_19 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F(L_19, List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		(&V_4)->___points_2 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_4)->___points_2), (void*)L_19);
		// foreach(var point in polygon.points)
		NullCheck(L_16);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_20 = L_16->___points_0;
		V_5 = L_20;
		V_6 = 0;
		goto IL_014f;
	}

IL_0083:
	{
		// foreach(var point in polygon.points)
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_21 = V_5;
		int32_t L_22 = V_6;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		// var p = point;
		V_7 = L_24;
		// p.x -= lightingSource.transform.position.x;
		float* L_25 = (&(&V_7)->___x_0);
		float* L_26 = L_25;
		float L_27 = *((float*)L_26);
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_28 = ___lightingSource1;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		float L_31 = L_30.___x_2;
		*((float*)L_26) = (float)((float)il2cpp_codegen_subtract(L_27, L_31));
		// p.y -= lightingSource.transform.position.y;
		float* L_32 = (&(&V_7)->___y_1);
		float* L_33 = L_32;
		float L_34 = *((float*)L_33);
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_35 = ___lightingSource1;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		float L_38 = L_37.___y_3;
		*((float*)L_33) = (float)((float)il2cpp_codegen_subtract(L_34, L_38));
		// if (p.magnitude < lightingSource.size)
		float L_39;
		L_39 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_7), NULL);
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_40 = ___lightingSource1;
		NullCheck(L_40);
		float L_41 = L_40->___size_12;
		if ((!(((float)L_39) < ((float)L_41))))
		{
			goto IL_0149;
		}
	}
	{
		// float direction = p.Atan2(Vector2.zero) * Mathf.Rad2Deg;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		L_43 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		float L_44;
		L_44 = Vector2Extensions_Atan2_m548A3CAE80CDA1FB7AFE893E07F313347420A622(L_42, L_43, NULL);
		V_8 = ((float)il2cpp_codegen_multiply(L_44, (57.2957802f)));
		// if (lightingSource.applyRotation != Light2D.Rotation.Disabled)
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_45 = ___lightingSource1;
		NullCheck(L_45);
		int32_t L_46 = L_45->___applyRotation_24;
		if (!L_46)
		{
			goto IL_00ff;
		}
	}
	{
		// direction -= lightingSource.transform2D.rotation;
		float L_47 = V_8;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_48 = ___lightingSource1;
		NullCheck(L_48);
		LightTransform_t5531F5CC0B11D9FFAE4C3C130ECE8AA1B674E333* L_49 = L_48->___transform2D_33;
		NullCheck(L_49);
		float L_50 = L_49->___rotation_2;
		V_8 = ((float)il2cpp_codegen_subtract(L_47, L_50));
	}

IL_00ff:
	{
		// direction = (direction + 1080 - 90) % 360;
		float L_51 = V_8;
		V_8 = (fmodf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_51, (1080.0f))), (90.0f))), (360.0f)));
		// if (direction <= lightingSource.spotAngleInner / 2 || direction >= 360 - lightingSource.spotAngleInner / 2)
		float L_52 = V_8;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_53 = ___lightingSource1;
		NullCheck(L_53);
		float L_54 = L_53->___spotAngleInner_13;
		if ((((float)L_52) <= ((float)((float)(L_54/(2.0f))))))
		{
			goto IL_013b;
		}
	}
	{
		float L_55 = V_8;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_56 = ___lightingSource1;
		NullCheck(L_56);
		float L_57 = L_56->___spotAngleInner_13;
		if ((!(((float)L_55) >= ((float)((float)il2cpp_codegen_subtract((360.0f), ((float)(L_57/(2.0f)))))))))
		{
			goto IL_0149;
		}
	}

IL_013b:
	{
		// collision.points.Add(p);
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_58 = V_4;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_59 = L_58.___points_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = V_7;
		NullCheck(L_59);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_59, L_60, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
	}

IL_0149:
	{
		int32_t L_61 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_014f:
	{
		// foreach(var point in polygon.points)
		int32_t L_62 = V_6;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_63 = V_5;
		NullCheck(L_63);
		if ((((int32_t)L_62) < ((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length)))))
		{
			goto IL_0083;
		}
	}
	{
		// if (collision.points.Count > 0)
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_64 = V_4;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_65 = L_64.___points_2;
		NullCheck(L_65);
		int32_t L_66;
		L_66 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_65, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		if ((((int32_t)L_66) <= ((int32_t)0)))
		{
			goto IL_0171;
		}
	}
	{
		// collisions.Add(collision);
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_67 = ___collisions0;
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_68 = V_4;
		NullCheck(L_67);
		List_1_Add_m1CB35939B2AF7CCD45EE1A6198F9B7BFDF5905BA_inline(L_67, L_68, List_1_Add_m1CB35939B2AF7CCD45EE1A6198F9B7BFDF5905BA_RuntimeMethod_var);
	}

IL_0171:
	{
		// for(int i = 0; i < colliderList.Count; i++)
		int32_t L_69 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_0175:
	{
		// for(int i = 0; i < colliderList.Count; i++)
		int32_t L_70 = V_1;
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_71 = V_0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = List_1_get_Count_m3D33EA565508FFE83EEFE70888D48CAA86ED4AF9_inline(L_71, List_1_get_Count_m3D33EA565508FFE83EEFE70888D48CAA86ED4AF9_RuntimeMethod_var);
		if ((((int32_t)L_70) < ((int32_t)L_72)))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<FunkyCode.LightCollision2D> FunkyCode.EventHandling.LightCollider::RemoveHiddenPoints(System.Collections.Generic.List`1<FunkyCode.LightCollision2D>,FunkyCode.Light2D,FunkyCode.LightingSettings.EventPreset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* LightCollider_RemoveHiddenPoints_m18028C017D3CBED80AFA64423E62DD283E0FF2B6 (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* ___collisions0, Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* ___light1, EventPreset_t66A7EA3289F9C1FF587BE9EF2DF55CF81CF65F0A* ___eventPreset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m1F618947C9151460E213FA7B7AB79B1980E0E270_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m471FCE4311CFB30728E350890B7A90FD5FDD237E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2045D625ADB5C6D73108B3E4EC952779C4A23EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3D33EA565508FFE83EEFE70888D48CAA86ED4AF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m720AC6190909A40E0276F47714B94116A02221AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m82378840486C9FDAFDAE42CD9E0738428C5EC8C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math2D_tB73A97540B11E23BE741C52B51A3BEB43BB6FFE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_3 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* V_10 = NULL;
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* V_11 = NULL;
	int32_t V_12 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_17;
	memset((&V_17), 0, sizeof(V_17));
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_23;
	memset((&V_23), 0, sizeof(V_23));
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	{
		// float lightSize = Mathf.Sqrt(light.size * light.size + light.size * light.size);
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_0 = ___light1;
		NullCheck(L_0);
		float L_1 = L_0->___size_12;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_2 = ___light1;
		NullCheck(L_2);
		float L_3 = L_2->___size_12;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_4 = ___light1;
		NullCheck(L_4);
		float L_5 = L_4->___size_12;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_6 = ___light1;
		NullCheck(L_6);
		float L_7 = L_6->___size_12;
		float L_8;
		L_8 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))));
		V_0 = L_8;
		// Polygon2 testPolygon = GetPolygon();
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_9;
		L_9 = Base_GetPolygon_mD12C9C3FEEDA4AEFAD7FDC77C057647CFCEE2404(NULL);
		V_3 = L_9;
		// Vector2 lightPosition = - light.transform.position;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_10 = ___light1;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_13, NULL);
		V_4 = L_14;
		// for(int iid = 0; iid < eventPreset.layerSetting.list.Length; iid++)
		V_6 = 0;
		goto IL_03bc;
	}

IL_0046:
	{
		// int layerId = eventPreset.layerSetting.list[iid].layerID;
		EventPreset_t66A7EA3289F9C1FF587BE9EF2DF55CF81CF65F0A* L_15 = ___eventPreset2;
		NullCheck(L_15);
		EventPresetLayers_t2E44C99CDDEEDFA3B19BDF2B6635379F05F24D4A* L_16 = L_15->___layerSetting_1;
		NullCheck(L_16);
		LayerEventSettingU5BU5D_t1A9B422372D5D6281A43B7E1B860EC63598A1815* L_17 = L_16->___list_0;
		int32_t L_18 = V_6;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		LayerEventSetting_t6CA000F050E7540EB8666EDEDD02952AB9E05BAC* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		int32_t L_21 = L_20->___layerID_0;
		// var colliderList = LightCollider2D.GetShadowList(layerId);
		il2cpp_codegen_runtime_class_init_inline(LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F_il2cpp_TypeInfo_var);
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_22;
		L_22 = LightCollider2D_GetShadowList_m0B3D441A38A601F005A614F62AF8C5B82724AAA6(L_21, NULL);
		V_7 = L_22;
		// int colliderCount = colliderList.Count;
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_23 = V_7;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_m3D33EA565508FFE83EEFE70888D48CAA86ED4AF9_inline(L_23, List_1_get_Count_m3D33EA565508FFE83EEFE70888D48CAA86ED4AF9_RuntimeMethod_var);
		V_8 = L_24;
		// for(int ci = 0; ci < colliderCount; ci++)
		V_9 = 0;
		goto IL_03ad;
	}

IL_0071:
	{
		// var id = colliderList[ci];
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_25 = V_7;
		int32_t L_26 = V_9;
		NullCheck(L_25);
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_27;
		L_27 = List_1_get_Item_m82378840486C9FDAFDAE42CD9E0738428C5EC8C3(L_25, L_26, List_1_get_Item_m82378840486C9FDAFDAE42CD9E0738428C5EC8C3_RuntimeMethod_var);
		V_10 = L_27;
		// if (!id.InLight(light))
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_28 = V_10;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_29 = ___light1;
		NullCheck(L_28);
		bool L_30;
		L_30 = LightCollider2D_InLight_m4D3474FA29843664B96BFC70EEB4AAFC14E22E38(L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_03a7;
		}
	}
	{
		// if (id.mainShape.shadowType == LightCollider2D.ShadowType.None)
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_31 = V_10;
		NullCheck(L_31);
		LightColliderShape_tD23C84CBA7B2840DDA09A49B9A21D15050F23FE9* L_32 = L_31->___mainShape_19;
		NullCheck(L_32);
		int32_t L_33 = L_32->___shadowType_0;
		if (!L_33)
		{
			goto IL_03a7;
		}
	}
	{
		// var polygons = id.mainShape.GetPolygonsWorld();
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_34 = V_10;
		NullCheck(L_34);
		LightColliderShape_tD23C84CBA7B2840DDA09A49B9A21D15050F23FE9* L_35 = L_34->___mainShape_19;
		NullCheck(L_35);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_36;
		L_36 = LightColliderShape_GetPolygonsWorld_mD7422C50A08822CC0470E30DA2F2CFE391D67607(L_35, NULL);
		V_11 = L_36;
		// if (polygons.Count < 1)
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_37 = V_11;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_inline(L_37, List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		if ((((int32_t)L_38) < ((int32_t)1)))
		{
			goto IL_03a7;
		}
	}
	{
		// removePointsCollidingCount = 0;
		il2cpp_codegen_runtime_class_init_inline(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var);
		((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removePointsCollidingCount_6 = 0;
		// removeCollisionsCount = 0;
		((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removeCollisionsCount_8 = 0;
		// for(int i = 0; i < polygons.Count; i++)
		V_12 = 0;
		goto IL_0399;
	}

IL_00c9:
	{
		// var pointsList = polygons[i].points;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_39 = V_11;
		int32_t L_40 = V_12;
		NullCheck(L_39);
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_41;
		L_41 = List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13(L_39, L_40, List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		NullCheck(L_41);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_42 = L_41->___points_0;
		V_13 = L_42;
		// int pointsCount = pointsList.Length;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_43 = V_13;
		NullCheck(L_43);
		V_14 = ((int32_t)(((RuntimeArray*)L_43)->max_length));
		// for(int x = 0; x < pointsCount; x++)
		V_15 = 0;
		goto IL_038a;
	}

IL_00e7:
	{
		// next = (x + 1) % pointsCount;
		int32_t L_44 = V_15;
		int32_t L_45 = V_14;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_44, 1))%L_45));
		// var left = pointsList[x];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_46 = V_13;
		int32_t L_47 = V_15;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_16 = L_49;
		// var right = pointsList[next];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_50 = V_13;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_17 = L_53;
		// edgeLeft.x = left.x + lightPosition.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = V_16;
		float L_55 = L_54.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = V_4;
		float L_57 = L_56.___x_0;
		(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeLeft_0)->___x_0 = ((float)il2cpp_codegen_add(L_55, L_57));
		// edgeLeft.y = left.y + lightPosition.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = V_16;
		float L_59 = L_58.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = V_4;
		float L_61 = L_60.___y_1;
		(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeLeft_0)->___y_1 = ((float)il2cpp_codegen_add(L_59, L_61));
		// edgeRight.x = right.x + lightPosition.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_17;
		float L_63 = L_62.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = V_4;
		float L_65 = L_64.___x_0;
		(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeRight_1)->___x_0 = ((float)il2cpp_codegen_add(L_63, L_65));
		// edgeRight.y = right.y + lightPosition.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66 = V_17;
		float L_67 = L_66.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68 = V_4;
		float L_69 = L_68.___y_1;
		(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeRight_1)->___y_1 = ((float)il2cpp_codegen_add(L_67, L_69));
		// rotLeft = (float)System.Math.Atan2 (edgeLeft.y, edgeLeft.x);
		float L_70 = (&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeLeft_0)->___y_1;
		float L_71 = (&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeLeft_0)->___x_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_72;
		L_72 = atan2(((double)L_70), ((double)L_71));
		V_1 = ((float)L_72);
		// rotRight = (float)System.Math.Atan2 (edgeRight.y, edgeRight.x);
		float L_73 = (&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeRight_1)->___y_1;
		float L_74 = (&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeRight_1)->___x_0;
		double L_75;
		L_75 = atan2(((double)L_73), ((double)L_74));
		V_2 = ((float)L_75);
		// projectionLeft.x = edgeLeft.x + (float)System.Math.Cos(rotLeft) * lightSize;
		float L_76 = (&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeLeft_0)->___x_0;
		float L_77 = V_1;
		double L_78;
		L_78 = cos(((double)L_77));
		float L_79 = V_0;
		(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___projectionLeft_2)->___x_0 = ((float)il2cpp_codegen_add(L_76, ((float)il2cpp_codegen_multiply(((float)L_78), L_79))));
		// projectionLeft.y = edgeLeft.y + (float)System.Math.Sin(rotLeft) * lightSize;
		float L_80 = (&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeLeft_0)->___y_1;
		float L_81 = V_1;
		double L_82;
		L_82 = sin(((double)L_81));
		float L_83 = V_0;
		(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___projectionLeft_2)->___y_1 = ((float)il2cpp_codegen_add(L_80, ((float)il2cpp_codegen_multiply(((float)L_82), L_83))));
		// projectionRight.x = edgeRight.x + (float)System.Math.Cos(rotRight) * lightSize;
		float L_84 = (&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeRight_1)->___x_0;
		float L_85 = V_2;
		double L_86;
		L_86 = cos(((double)L_85));
		float L_87 = V_0;
		(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___projectionRight_3)->___x_0 = ((float)il2cpp_codegen_add(L_84, ((float)il2cpp_codegen_multiply(((float)L_86), L_87))));
		// projectionRight.y = edgeRight.y + (float)System.Math.Sin(rotRight) * lightSize;
		float L_88 = (&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeRight_1)->___y_1;
		float L_89 = V_2;
		double L_90;
		L_90 = sin(((double)L_89));
		float L_91 = V_0;
		(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___projectionRight_3)->___y_1 = ((float)il2cpp_codegen_add(L_88, ((float)il2cpp_codegen_multiply(((float)L_90), L_91))));
		// testPolygon.points[0] = projectionLeft;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_92 = V_3;
		NullCheck(L_92);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_93 = L_92->___points_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_94 = ((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___projectionLeft_2;
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_94);
		// testPolygon.points[1] = projectionRight;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_95 = V_3;
		NullCheck(L_95);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_96 = L_95->___points_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_97 = ((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___projectionRight_3;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_97);
		// testPolygon.points[2] = edgeRight;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_98 = V_3;
		NullCheck(L_98);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_99 = L_98->___points_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_100 = ((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeRight_1;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_100);
		// testPolygon.points[3] = edgeLeft;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_101 = V_3;
		NullCheck(L_101);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_102 = L_101->___points_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_103 = ((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeLeft_0;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_103);
		// float collisionCount = collisions.Count;
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_104 = ___collisions0;
		NullCheck(L_104);
		int32_t L_105;
		L_105 = List_1_get_Count_m2045D625ADB5C6D73108B3E4EC952779C4A23EA2_inline(L_104, List_1_get_Count_m2045D625ADB5C6D73108B3E4EC952779C4A23EA2_RuntimeMethod_var);
		V_18 = ((float)L_105);
		// for(int c = 0; c < collisionCount; c++)
		V_19 = 0;
		goto IL_034d;
	}

IL_0275:
	{
		// var col = collisions[c];
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_106 = ___collisions0;
		int32_t L_107 = V_19;
		NullCheck(L_106);
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_108;
		L_108 = List_1_get_Item_m720AC6190909A40E0276F47714B94116A02221AB(L_106, L_107, List_1_get_Item_m720AC6190909A40E0276F47714B94116A02221AB_RuntimeMethod_var);
		V_20 = L_108;
		// if (col.collider == id)
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_109 = V_20;
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_110 = L_109.___collider_1;
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_111 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_112;
		L_112 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_110, L_111, NULL);
		if (L_112)
		{
			goto IL_0347;
		}
	}
	{
		// int pCount = col.points.Count;
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_113 = V_20;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_114 = L_113.___points_2;
		NullCheck(L_114);
		int32_t L_115;
		L_115 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_114, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		V_21 = L_115;
		// for(int p = 0; p < pCount; p++)
		V_22 = 0;
		goto IL_02e2;
	}

IL_02a5:
	{
		// var point = col.points[p];
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_116 = V_20;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_117 = L_116.___points_2;
		int32_t L_118 = V_22;
		NullCheck(L_117);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_119;
		L_119 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_117, L_118, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		V_23 = L_119;
		// if (Math2D.PointInPoly(point, testPolygon))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_120 = V_23;
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_121 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math2D_tB73A97540B11E23BE741C52B51A3BEB43BB6FFE6_il2cpp_TypeInfo_var);
		bool L_122;
		L_122 = Math2D_PointInPoly_mFC54791B078DDA70D69C102018FB55FAA49C99A1(L_120, L_121, NULL);
		if (!L_122)
		{
			goto IL_02dc;
		}
	}
	{
		// removePointsColliding[removePointsCollidingCount] = point;
		il2cpp_codegen_runtime_class_init_inline(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_123 = ((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removePointsColliding_5;
		int32_t L_124 = ((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removePointsCollidingCount_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_125 = V_23;
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(L_124), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_125);
		// removePointsCollidingCount++;
		int32_t L_126 = ((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removePointsCollidingCount_6;
		((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removePointsCollidingCount_6 = ((int32_t)il2cpp_codegen_add(L_126, 1));
	}

IL_02dc:
	{
		// for(int p = 0; p < pCount; p++)
		int32_t L_127 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_127, 1));
	}

IL_02e2:
	{
		// for(int p = 0; p < pCount; p++)
		int32_t L_128 = V_22;
		int32_t L_129 = V_21;
		if ((((int32_t)L_128) < ((int32_t)L_129)))
		{
			goto IL_02a5;
		}
	}
	{
		// for(int p = 0; p < removePointsCollidingCount; p++)
		V_24 = 0;
		goto IL_030c;
	}

IL_02ed:
	{
		// col.points.Remove(removePointsColliding[p]);
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_130 = V_20;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_131 = L_130.___points_2;
		il2cpp_codegen_runtime_class_init_inline(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_132 = ((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removePointsColliding_5;
		int32_t L_133 = V_24;
		NullCheck(L_132);
		int32_t L_134 = L_133;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_135 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_131);
		bool L_136;
		L_136 = List_1_Remove_m471FCE4311CFB30728E350890B7A90FD5FDD237E(L_131, L_135, List_1_Remove_m471FCE4311CFB30728E350890B7A90FD5FDD237E_RuntimeMethod_var);
		// for(int p = 0; p < removePointsCollidingCount; p++)
		int32_t L_137 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_137, 1));
	}

IL_030c:
	{
		// for(int p = 0; p < removePointsCollidingCount; p++)
		int32_t L_138 = V_24;
		il2cpp_codegen_runtime_class_init_inline(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var);
		int32_t L_139 = ((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removePointsCollidingCount_6;
		if ((((int32_t)L_138) < ((int32_t)L_139)))
		{
			goto IL_02ed;
		}
	}
	{
		// removePointsCollidingCount = 0;
		il2cpp_codegen_runtime_class_init_inline(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var);
		((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removePointsCollidingCount_6 = 0;
		// if (col.points.Count < 1)
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_140 = V_20;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_141 = L_140.___points_2;
		NullCheck(L_141);
		int32_t L_142;
		L_142 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_141, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		if ((((int32_t)L_142) >= ((int32_t)1)))
		{
			goto IL_0347;
		}
	}
	{
		// removeCollisions[removeCollisionsCount] = col;
		il2cpp_codegen_runtime_class_init_inline(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var);
		LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C* L_143 = ((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removeCollisions_7;
		int32_t L_144 = ((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removeCollisionsCount_8;
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_145 = V_20;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(L_144), (LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7)L_145);
		// removeCollisionsCount ++;
		int32_t L_146 = ((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removeCollisionsCount_8;
		((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removeCollisionsCount_8 = ((int32_t)il2cpp_codegen_add(L_146, 1));
	}

IL_0347:
	{
		// for(int c = 0; c < collisionCount; c++)
		int32_t L_147 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_147, 1));
	}

IL_034d:
	{
		// for(int c = 0; c < collisionCount; c++)
		int32_t L_148 = V_19;
		float L_149 = V_18;
		if ((((float)((float)L_148)) < ((float)L_149)))
		{
			goto IL_0275;
		}
	}
	{
		// for(int p = 0; p < removeCollisionsCount; p++)
		V_25 = 0;
		goto IL_0375;
	}

IL_035c:
	{
		// collisions.Remove(removeCollisions[p]);
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_150 = ___collisions0;
		il2cpp_codegen_runtime_class_init_inline(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var);
		LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C* L_151 = ((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removeCollisions_7;
		int32_t L_152 = V_25;
		NullCheck(L_151);
		int32_t L_153 = L_152;
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_154 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_150);
		bool L_155;
		L_155 = List_1_Remove_m1F618947C9151460E213FA7B7AB79B1980E0E270(L_150, L_154, List_1_Remove_m1F618947C9151460E213FA7B7AB79B1980E0E270_RuntimeMethod_var);
		// for(int p = 0; p < removeCollisionsCount; p++)
		int32_t L_156 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_156, 1));
	}

IL_0375:
	{
		// for(int p = 0; p < removeCollisionsCount; p++)
		int32_t L_157 = V_25;
		il2cpp_codegen_runtime_class_init_inline(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var);
		int32_t L_158 = ((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removeCollisionsCount_8;
		if ((((int32_t)L_157) < ((int32_t)L_158)))
		{
			goto IL_035c;
		}
	}
	{
		// removeCollisionsCount = 0;
		il2cpp_codegen_runtime_class_init_inline(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var);
		((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removeCollisionsCount_8 = 0;
		// for(int x = 0; x < pointsCount; x++)
		int32_t L_159 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_159, 1));
	}

IL_038a:
	{
		// for(int x = 0; x < pointsCount; x++)
		int32_t L_160 = V_15;
		int32_t L_161 = V_14;
		if ((((int32_t)L_160) < ((int32_t)L_161)))
		{
			goto IL_00e7;
		}
	}
	{
		// for(int i = 0; i < polygons.Count; i++)
		int32_t L_162 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_162, 1));
	}

IL_0399:
	{
		// for(int i = 0; i < polygons.Count; i++)
		int32_t L_163 = V_12;
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_164 = V_11;
		NullCheck(L_164);
		int32_t L_165;
		L_165 = List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_inline(L_164, List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		if ((((int32_t)L_163) < ((int32_t)L_165)))
		{
			goto IL_00c9;
		}
	}

IL_03a7:
	{
		// for(int ci = 0; ci < colliderCount; ci++)
		int32_t L_166 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_166, 1));
	}

IL_03ad:
	{
		// for(int ci = 0; ci < colliderCount; ci++)
		int32_t L_167 = V_9;
		int32_t L_168 = V_8;
		if ((((int32_t)L_167) < ((int32_t)L_168)))
		{
			goto IL_0071;
		}
	}
	{
		// for(int iid = 0; iid < eventPreset.layerSetting.list.Length; iid++)
		int32_t L_169 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_169, 1));
	}

IL_03bc:
	{
		// for(int iid = 0; iid < eventPreset.layerSetting.list.Length; iid++)
		int32_t L_170 = V_6;
		EventPreset_t66A7EA3289F9C1FF587BE9EF2DF55CF81CF65F0A* L_171 = ___eventPreset2;
		NullCheck(L_171);
		EventPresetLayers_t2E44C99CDDEEDFA3B19BDF2B6635379F05F24D4A* L_172 = L_171->___layerSetting_1;
		NullCheck(L_172);
		LayerEventSettingU5BU5D_t1A9B422372D5D6281A43B7E1B860EC63598A1815* L_173 = L_172->___list_0;
		NullCheck(L_173);
		if ((((int32_t)L_170) < ((int32_t)((int32_t)(((RuntimeArray*)L_173)->max_length)))))
		{
			goto IL_0046;
		}
	}
	{
		// return(collisions);
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_174 = ___collisions0;
		return L_174;
	}
}
// System.Void FunkyCode.EventHandling.LightCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightCollider__ctor_m89727A014328492C577C799652E814C2F94D4633 (LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B* __this, const RuntimeMethod* method) 
{
	{
		Base__ctor_mD30153DF63C53ED44FE6F1C49EF2ABB8916669D6(__this, NULL);
		return;
	}
}
// System.Void FunkyCode.EventHandling.LightCollider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightCollider__cctor_mF61A12005903CE6EC1CC80289BEA0AE42FE67F75 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector2[] removePointsColliding = new Vector2[100];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removePointsColliding_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removePointsColliding_5), (void*)L_0);
		// public static int removePointsCollidingCount = 0;
		((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removePointsCollidingCount_6 = 0;
		// public static LightCollision2D[] removeCollisions = new LightCollision2D[100];
		LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C* L_1 = (LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C*)(LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C*)SZArrayNew(LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removeCollisions_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removeCollisions_7), (void*)L_1);
		// public static int removeCollisionsCount = 0;
		((LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_StaticFields*)il2cpp_codegen_static_fields_for(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var))->___removeCollisionsCount_8 = 0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<FunkyCode.LightCollision2D> FunkyCode.EventHandling.LightTilemap::RemoveHiddenPoints(System.Collections.Generic.List`1<FunkyCode.LightCollision2D>,FunkyCode.Light2D,FunkyCode.LightingSettings.EventPreset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* LightTilemap_RemoveHiddenPoints_m26299E38481E2E54B0D8E8B86017CE28020A9CE7 (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* ___collisions0, Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* ___light1, EventPreset_t66A7EA3289F9C1FF587BE9EF2DF55CF81CF65F0A* ___eventPreset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF965333AC4A72A79CD259D606B290356AB37749B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4B1EF8B070BDD7F2FA96536307526800F83FBC61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6B3E8DF783FF37DF5C0D0783ECC28CB81D7800D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB443DCE1ED25A515DEB4C735014A551CB89E8405_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m1F618947C9151460E213FA7B7AB79B1980E0E270_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m471FCE4311CFB30728E350890B7A90FD5FDD237E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2045D625ADB5C6D73108B3E4EC952779C4A23EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m720AC6190909A40E0276F47714B94116A02221AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math2D_tB73A97540B11E23BE741C52B51A3BEB43BB6FFE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* V_3 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Enumerator_t103A698C10B736FC92F9DAC6DA9B9E7F8D3EA9C9 V_7;
	memset((&V_7), 0, sizeof(V_7));
	LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* V_8 = NULL;
	Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* V_12 = NULL;
	List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* V_13 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_17 = NULL;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_20;
	memset((&V_20), 0, sizeof(V_20));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_21;
	memset((&V_21), 0, sizeof(V_21));
	float V_22 = 0.0f;
	int32_t V_23 = 0;
	LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 V_24;
	memset((&V_24), 0, sizeof(V_24));
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_27;
	memset((&V_27), 0, sizeof(V_27));
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	{
		// float lightSizeSquared = Mathf.Sqrt(light.size * light.size + light.size * light.size);
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_0 = ___light1;
		NullCheck(L_0);
		float L_1 = L_0->___size_12;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_2 = ___light1;
		NullCheck(L_2);
		float L_3 = L_2->___size_12;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_4 = ___light1;
		NullCheck(L_4);
		float L_5 = L_4->___size_12;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_6 = ___light1;
		NullCheck(L_6);
		float L_7 = L_6->___size_12;
		float L_8;
		L_8 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))));
		V_0 = L_8;
		// Polygon2 testPolygon = GetPolygon();
		Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_9;
		L_9 = Base_GetPolygon_mD12C9C3FEEDA4AEFAD7FDC77C057647CFCEE2404(NULL);
		V_3 = L_9;
		// Vector2 lightPosition = - light.transform.position;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_10 = ___light1;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_13, NULL);
		V_4 = L_14;
		// for(int iid = 0; iid < eventPreset.layerSetting.list.Length; iid++)
		V_6 = 0;
		goto IL_0439;
	}

IL_0046:
	{
		// int layerId = eventPreset.layerSetting.list[iid].layerID;
		EventPreset_t66A7EA3289F9C1FF587BE9EF2DF55CF81CF65F0A* L_15 = ___eventPreset2;
		NullCheck(L_15);
		EventPresetLayers_t2E44C99CDDEEDFA3B19BDF2B6635379F05F24D4A* L_16 = L_15->___layerSetting_1;
		NullCheck(L_16);
		LayerEventSettingU5BU5D_t1A9B422372D5D6281A43B7E1B860EC63598A1815* L_17 = L_16->___list_0;
		int32_t L_18 = V_6;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		LayerEventSetting_t6CA000F050E7540EB8666EDEDD02952AB9E05BAC* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		int32_t L_21 = L_20->___layerID_0;
		// var tilemapColliderList = LightTilemapCollider2D.GetShadowList(layerId);
		il2cpp_codegen_runtime_class_init_inline(LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D_il2cpp_TypeInfo_var);
		List_1_t53210D23CC79388549233000764405C28B06BEFA* L_22;
		L_22 = LightTilemapCollider2D_GetShadowList_mBDE9ABC139F0C1F1DD9BD1C58B01CA34B231A413(L_21, NULL);
		// foreach(var id in tilemapColliderList)
		NullCheck(L_22);
		Enumerator_t103A698C10B736FC92F9DAC6DA9B9E7F8D3EA9C9 L_23;
		L_23 = List_1_GetEnumerator_mB443DCE1ED25A515DEB4C735014A551CB89E8405(L_22, List_1_GetEnumerator_mB443DCE1ED25A515DEB4C735014A551CB89E8405_RuntimeMethod_var);
		V_7 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0425:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF965333AC4A72A79CD259D606B290356AB37749B((&V_7), Enumerator_Dispose_mF965333AC4A72A79CD259D606B290356AB37749B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0417_1;
			}

IL_006a_1:
			{
				// foreach(var id in tilemapColliderList)
				LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* L_24;
				L_24 = Enumerator_get_Current_m6B3E8DF783FF37DF5C0D0783ECC28CB81D7800D0_inline((&V_7), Enumerator_get_Current_m6B3E8DF783FF37DF5C0D0783ECC28CB81D7800D0_RuntimeMethod_var);
				V_8 = L_24;
				// var tilemapCollider = id.GetCurrentTilemap();
				LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* L_25 = V_8;
				NullCheck(L_25);
				Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* L_26;
				L_26 = LightTilemapCollider2D_GetCurrentTilemap_m5F932BB86A69EC845535017923E6CD22E60C9576(L_25, NULL);
				V_9 = L_26;
				// int count = tilemapCollider.chunkManager.GetTiles(light.transform2D.WorldRect);
				Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* L_27 = V_9;
				NullCheck(L_27);
				TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* L_28 = L_27->___chunkManager_8;
				Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_29 = ___light1;
				NullCheck(L_29);
				LightTransform_t5531F5CC0B11D9FFAE4C3C130ECE8AA1B674E333* L_30 = L_29->___transform2D_33;
				NullCheck(L_30);
				Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_31 = L_30->___WorldRect_13;
				NullCheck(L_28);
				int32_t L_32;
				L_32 = TilemapManager_GetTiles_m1F37CA1F9C72F357657FF18A9D4F002A11E6A5E0(L_28, L_31, NULL);
				V_10 = L_32;
				// for(int t = 0; t < count; t++)
				V_11 = 0;
				goto IL_040e_1;
			}

IL_009d_1:
			{
				// var tile = tilemapCollider.chunkManager.display[t];
				Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* L_33 = V_9;
				NullCheck(L_33);
				TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* L_34 = L_33->___chunkManager_8;
				NullCheck(L_34);
				LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D* L_35 = L_34->___display_0;
				int32_t L_36 = V_11;
				NullCheck(L_35);
				int32_t L_37 = L_36;
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
				V_12 = L_38;
				// if (tile.occluded)
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_39 = V_12;
				NullCheck(L_39);
				bool L_40 = L_39->___occluded_5;
				if (L_40)
				{
					goto IL_0408_1;
				}
			}
			{
				// switch(id.shadowTileType)
				LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* L_41 = V_8;
				NullCheck(L_41);
				int32_t L_42 = L_41->___shadowTileType_8;
				V_15 = L_42;
				int32_t L_43 = V_15;
				if (!L_43)
				{
					goto IL_00d8_1;
				}
			}
			{
				int32_t L_44 = V_15;
				if ((!(((uint32_t)L_44) == ((uint32_t)1))))
				{
					goto IL_00d8_1;
				}
			}
			{
				// if (tile.colliderType == UnityEngine.Tilemaps.Tile.ColliderType.None)
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_45 = V_12;
				NullCheck(L_45);
				int32_t L_46 = L_45->___colliderType_6;
				if (!L_46)
				{
					goto IL_0408_1;
				}
			}

IL_00d8_1:
			{
				// var polygons = tile.GetWorldPolygons(tilemapCollider);
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_47 = V_12;
				Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* L_48 = V_9;
				NullCheck(L_47);
				List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_49;
				L_49 = LightTile_GetWorldPolygons_m01069002D6C5DCB8B5034D84EE07EB9380468F09(L_47, L_48, NULL);
				V_13 = L_49;
				// if (polygons.Count < 1)
				List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_50 = V_13;
				NullCheck(L_50);
				int32_t L_51;
				L_51 = List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_inline(L_50, List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
				if ((((int32_t)L_51) < ((int32_t)1)))
				{
					goto IL_0408_1;
				}
			}
			{
				// Vector2 tilePosition = tile.GetWorldPosition(tilemapCollider) + lightPosition;
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_52 = V_12;
				Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* L_53 = V_9;
				NullCheck(L_52);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
				L_54 = LightTile_GetWorldPosition_mFFC4031CCB1CD2D3932A86168740E9F80DEE5BF5(L_52, L_53, NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = V_4;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56;
				L_56 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_54, L_55, NULL);
				V_14 = L_56;
				// if (tile.NotInRange(tilePosition, light.size))
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_57 = V_12;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = V_14;
				Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_59 = ___light1;
				NullCheck(L_59);
				float L_60 = L_59->___size_12;
				NullCheck(L_57);
				bool L_61;
				L_61 = LightTile_NotInRange_mBF2F0FE2B2624C484640C056077CB2F8A2468CA8(L_57, L_58, L_60, NULL);
				if (L_61)
				{
					goto IL_0408_1;
				}
			}
			{
				// removePointsCollidingCount = 0;
				il2cpp_codegen_runtime_class_init_inline(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var);
				((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removePointsCollidingCount_6 = 0;
				// removeCollisionsCount = 0;
				((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removeCollisionsCount_8 = 0;
				// for(int i = 0; i < polygons.Count; i++)
				V_16 = 0;
				goto IL_03fa_1;
			}

IL_012a_1:
			{
				// Vector2[] pointsList = polygons[i].points;
				List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_62 = V_13;
				int32_t L_63 = V_16;
				NullCheck(L_62);
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_64;
				L_64 = List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13(L_62, L_63, List_1_get_Item_m1B3EE1329454F9C0F48B2EF585192B5652B6CD13_RuntimeMethod_var);
				NullCheck(L_64);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_65 = L_64->___points_0;
				V_17 = L_65;
				// int pointsCount = pointsList.Length;
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_66 = V_17;
				NullCheck(L_66);
				V_18 = ((int32_t)(((RuntimeArray*)L_66)->max_length));
				// for(int x = 0; x < pointsCount; x++)
				V_19 = 0;
				goto IL_03eb_1;
			}

IL_0148_1:
			{
				// next = (x + 1) % pointsCount;
				int32_t L_67 = V_19;
				int32_t L_68 = V_18;
				V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_67, 1))%L_68));
				// Vector2 left = pointsList[x];
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_69 = V_17;
				int32_t L_70 = V_19;
				NullCheck(L_69);
				int32_t L_71 = L_70;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
				V_20 = L_72;
				// Vector2 right = pointsList[next];
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_73 = V_17;
				int32_t L_74 = V_5;
				NullCheck(L_73);
				int32_t L_75 = L_74;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
				V_21 = L_76;
				// edgeLeft.x = left.x + lightPosition.x;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = V_20;
				float L_78 = L_77.___x_0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_4;
				float L_80 = L_79.___x_0;
				(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeLeft_0)->___x_0 = ((float)il2cpp_codegen_add(L_78, L_80));
				// edgeLeft.y = left.y + lightPosition.y;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81 = V_20;
				float L_82 = L_81.___y_1;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83 = V_4;
				float L_84 = L_83.___y_1;
				(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeLeft_0)->___y_1 = ((float)il2cpp_codegen_add(L_82, L_84));
				// edgeRight.x = right.x + lightPosition.x;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_85 = V_21;
				float L_86 = L_85.___x_0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87 = V_4;
				float L_88 = L_87.___x_0;
				(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeRight_1)->___x_0 = ((float)il2cpp_codegen_add(L_86, L_88));
				// edgeRight.y = right.y + lightPosition.y;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_21;
				float L_90 = L_89.___y_1;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_91 = V_4;
				float L_92 = L_91.___y_1;
				(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeRight_1)->___y_1 = ((float)il2cpp_codegen_add(L_90, L_92));
				// rotLeft = (float)System.Math.Atan2 (edgeLeft.y, edgeLeft.x);
				float L_93 = (&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeLeft_0)->___y_1;
				float L_94 = (&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeLeft_0)->___x_0;
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				double L_95;
				L_95 = atan2(((double)L_93), ((double)L_94));
				V_1 = ((float)L_95);
				// rotRight = (float)System.Math.Atan2 (edgeRight.y, edgeRight.x);
				float L_96 = (&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeRight_1)->___y_1;
				float L_97 = (&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeRight_1)->___x_0;
				double L_98;
				L_98 = atan2(((double)L_96), ((double)L_97));
				V_2 = ((float)L_98);
				// projectionLeft.x = edgeLeft.x + (float)System.Math.Cos(rotLeft) * lightSizeSquared;
				float L_99 = (&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeLeft_0)->___x_0;
				float L_100 = V_1;
				double L_101;
				L_101 = cos(((double)L_100));
				float L_102 = V_0;
				(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___projectionLeft_2)->___x_0 = ((float)il2cpp_codegen_add(L_99, ((float)il2cpp_codegen_multiply(((float)L_101), L_102))));
				// projectionLeft.y = edgeLeft.y + (float)System.Math.Sin(rotLeft) * lightSizeSquared;
				float L_103 = (&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeLeft_0)->___y_1;
				float L_104 = V_1;
				double L_105;
				L_105 = sin(((double)L_104));
				float L_106 = V_0;
				(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___projectionLeft_2)->___y_1 = ((float)il2cpp_codegen_add(L_103, ((float)il2cpp_codegen_multiply(((float)L_105), L_106))));
				// projectionRight.x = edgeRight.x + (float)System.Math.Cos(rotRight) * lightSizeSquared;
				float L_107 = (&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeRight_1)->___x_0;
				float L_108 = V_2;
				double L_109;
				L_109 = cos(((double)L_108));
				float L_110 = V_0;
				(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___projectionRight_3)->___x_0 = ((float)il2cpp_codegen_add(L_107, ((float)il2cpp_codegen_multiply(((float)L_109), L_110))));
				// projectionRight.y = edgeRight.y + (float)System.Math.Sin(rotRight) * lightSizeSquared;
				float L_111 = (&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeRight_1)->___y_1;
				float L_112 = V_2;
				double L_113;
				L_113 = sin(((double)L_112));
				float L_114 = V_0;
				(&((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___projectionRight_3)->___y_1 = ((float)il2cpp_codegen_add(L_111, ((float)il2cpp_codegen_multiply(((float)L_113), L_114))));
				// testPolygon.points[0] = projectionLeft;
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_115 = V_3;
				NullCheck(L_115);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_116 = L_115->___points_0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_117 = ((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___projectionLeft_2;
				NullCheck(L_116);
				(L_116)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_117);
				// testPolygon.points[1] = projectionRight;
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_118 = V_3;
				NullCheck(L_118);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_119 = L_118->___points_0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_120 = ((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___projectionRight_3;
				NullCheck(L_119);
				(L_119)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_120);
				// testPolygon.points[2] = edgeRight;
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_121 = V_3;
				NullCheck(L_121);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_122 = L_121->___points_0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_123 = ((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeRight_1;
				NullCheck(L_122);
				(L_122)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_123);
				// testPolygon.points[3] = edgeLeft;
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_124 = V_3;
				NullCheck(L_124);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_125 = L_124->___points_0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_126 = ((Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_StaticFields*)il2cpp_codegen_static_fields_for(Base_tA4884847722902D7F60AC5BFFA05E7C897FD75FE_il2cpp_TypeInfo_var))->___edgeLeft_0;
				NullCheck(L_125);
				(L_125)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_126);
				// float collisionCount = collisions.Count;
				List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_127 = ___collisions0;
				NullCheck(L_127);
				int32_t L_128;
				L_128 = List_1_get_Count_m2045D625ADB5C6D73108B3E4EC952779C4A23EA2_inline(L_127, List_1_get_Count_m2045D625ADB5C6D73108B3E4EC952779C4A23EA2_RuntimeMethod_var);
				V_22 = ((float)L_128);
				// for(int c = 0; c < collisionCount; c++)
				V_23 = 0;
				goto IL_03ae_1;
			}

IL_02d6_1:
			{
				// var col = collisions[c];
				List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_129 = ___collisions0;
				int32_t L_130 = V_23;
				NullCheck(L_129);
				LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_131;
				L_131 = List_1_get_Item_m720AC6190909A40E0276F47714B94116A02221AB(L_129, L_130, List_1_get_Item_m720AC6190909A40E0276F47714B94116A02221AB_RuntimeMethod_var);
				V_24 = L_131;
				// if (col.collider == id)
				LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_132 = V_24;
				LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_133 = L_132.___collider_1;
				LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* L_134 = V_8;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_135;
				L_135 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_133, L_134, NULL);
				if (L_135)
				{
					goto IL_03a8_1;
				}
			}
			{
				// int pCount = col.points.Count;
				LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_136 = V_24;
				List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_137 = L_136.___points_2;
				NullCheck(L_137);
				int32_t L_138;
				L_138 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_137, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
				V_25 = L_138;
				// for(int p = 0; p < pCount; p++)
				V_26 = 0;
				goto IL_0343_1;
			}

IL_0306_1:
			{
				// Vector2 point = col.points[p];
				LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_139 = V_24;
				List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_140 = L_139.___points_2;
				int32_t L_141 = V_26;
				NullCheck(L_140);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_142;
				L_142 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_140, L_141, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
				V_27 = L_142;
				// if (Math2D.PointInPoly(point, testPolygon))
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_143 = V_27;
				Polygon2_t4F7BAD902DC18688C662147715607358AF78BCA3* L_144 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Math2D_tB73A97540B11E23BE741C52B51A3BEB43BB6FFE6_il2cpp_TypeInfo_var);
				bool L_145;
				L_145 = Math2D_PointInPoly_mFC54791B078DDA70D69C102018FB55FAA49C99A1(L_143, L_144, NULL);
				if (!L_145)
				{
					goto IL_033d_1;
				}
			}
			{
				// removePointsColliding[removePointsCollidingCount] = point;
				il2cpp_codegen_runtime_class_init_inline(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_146 = ((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removePointsColliding_5;
				int32_t L_147 = ((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removePointsCollidingCount_6;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_148 = V_27;
				NullCheck(L_146);
				(L_146)->SetAt(static_cast<il2cpp_array_size_t>(L_147), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_148);
				// removePointsCollidingCount++;
				int32_t L_149 = ((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removePointsCollidingCount_6;
				((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removePointsCollidingCount_6 = ((int32_t)il2cpp_codegen_add(L_149, 1));
			}

IL_033d_1:
			{
				// for(int p = 0; p < pCount; p++)
				int32_t L_150 = V_26;
				V_26 = ((int32_t)il2cpp_codegen_add(L_150, 1));
			}

IL_0343_1:
			{
				// for(int p = 0; p < pCount; p++)
				int32_t L_151 = V_26;
				int32_t L_152 = V_25;
				if ((((int32_t)L_151) < ((int32_t)L_152)))
				{
					goto IL_0306_1;
				}
			}
			{
				// for(int p = 0; p < removePointsCollidingCount; p++)
				V_28 = 0;
				goto IL_036d_1;
			}

IL_034e_1:
			{
				// col.points.Remove(removePointsColliding[p]);
				LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_153 = V_24;
				List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_154 = L_153.___points_2;
				il2cpp_codegen_runtime_class_init_inline(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_155 = ((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removePointsColliding_5;
				int32_t L_156 = V_28;
				NullCheck(L_155);
				int32_t L_157 = L_156;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
				NullCheck(L_154);
				bool L_159;
				L_159 = List_1_Remove_m471FCE4311CFB30728E350890B7A90FD5FDD237E(L_154, L_158, List_1_Remove_m471FCE4311CFB30728E350890B7A90FD5FDD237E_RuntimeMethod_var);
				// for(int p = 0; p < removePointsCollidingCount; p++)
				int32_t L_160 = V_28;
				V_28 = ((int32_t)il2cpp_codegen_add(L_160, 1));
			}

IL_036d_1:
			{
				// for(int p = 0; p < removePointsCollidingCount; p++)
				int32_t L_161 = V_28;
				il2cpp_codegen_runtime_class_init_inline(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var);
				int32_t L_162 = ((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removePointsCollidingCount_6;
				if ((((int32_t)L_161) < ((int32_t)L_162)))
				{
					goto IL_034e_1;
				}
			}
			{
				// removePointsCollidingCount = 0;
				il2cpp_codegen_runtime_class_init_inline(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var);
				((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removePointsCollidingCount_6 = 0;
				// if (col.points.Count < 1)
				LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_163 = V_24;
				List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_164 = L_163.___points_2;
				NullCheck(L_164);
				int32_t L_165;
				L_165 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_164, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
				if ((((int32_t)L_165) >= ((int32_t)1)))
				{
					goto IL_03a8_1;
				}
			}
			{
				// removeCollisions[removeCollisionsCount] = col;
				il2cpp_codegen_runtime_class_init_inline(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var);
				LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C* L_166 = ((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removeCollisions_7;
				int32_t L_167 = ((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removeCollisionsCount_8;
				LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_168 = V_24;
				NullCheck(L_166);
				(L_166)->SetAt(static_cast<il2cpp_array_size_t>(L_167), (LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7)L_168);
				// removeCollisionsCount ++;
				int32_t L_169 = ((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removeCollisionsCount_8;
				((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removeCollisionsCount_8 = ((int32_t)il2cpp_codegen_add(L_169, 1));
			}

IL_03a8_1:
			{
				// for(int c = 0; c < collisionCount; c++)
				int32_t L_170 = V_23;
				V_23 = ((int32_t)il2cpp_codegen_add(L_170, 1));
			}

IL_03ae_1:
			{
				// for(int c = 0; c < collisionCount; c++)
				int32_t L_171 = V_23;
				float L_172 = V_22;
				if ((((float)((float)L_171)) < ((float)L_172)))
				{
					goto IL_02d6_1;
				}
			}
			{
				// for(int p = 0; p < removeCollisionsCount; p++)
				V_29 = 0;
				goto IL_03d6_1;
			}

IL_03bd_1:
			{
				// collisions.Remove(removeCollisions[p]);
				List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_173 = ___collisions0;
				il2cpp_codegen_runtime_class_init_inline(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var);
				LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C* L_174 = ((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removeCollisions_7;
				int32_t L_175 = V_29;
				NullCheck(L_174);
				int32_t L_176 = L_175;
				LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_177 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
				NullCheck(L_173);
				bool L_178;
				L_178 = List_1_Remove_m1F618947C9151460E213FA7B7AB79B1980E0E270(L_173, L_177, List_1_Remove_m1F618947C9151460E213FA7B7AB79B1980E0E270_RuntimeMethod_var);
				// for(int p = 0; p < removeCollisionsCount; p++)
				int32_t L_179 = V_29;
				V_29 = ((int32_t)il2cpp_codegen_add(L_179, 1));
			}

IL_03d6_1:
			{
				// for(int p = 0; p < removeCollisionsCount; p++)
				int32_t L_180 = V_29;
				il2cpp_codegen_runtime_class_init_inline(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var);
				int32_t L_181 = ((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removeCollisionsCount_8;
				if ((((int32_t)L_180) < ((int32_t)L_181)))
				{
					goto IL_03bd_1;
				}
			}
			{
				// removeCollisionsCount = 0;
				il2cpp_codegen_runtime_class_init_inline(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var);
				((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removeCollisionsCount_8 = 0;
				// for(int x = 0; x < pointsCount; x++)
				int32_t L_182 = V_19;
				V_19 = ((int32_t)il2cpp_codegen_add(L_182, 1));
			}

IL_03eb_1:
			{
				// for(int x = 0; x < pointsCount; x++)
				int32_t L_183 = V_19;
				int32_t L_184 = V_18;
				if ((((int32_t)L_183) < ((int32_t)L_184)))
				{
					goto IL_0148_1;
				}
			}
			{
				// for(int i = 0; i < polygons.Count; i++)
				int32_t L_185 = V_16;
				V_16 = ((int32_t)il2cpp_codegen_add(L_185, 1));
			}

IL_03fa_1:
			{
				// for(int i = 0; i < polygons.Count; i++)
				int32_t L_186 = V_16;
				List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_187 = V_13;
				NullCheck(L_187);
				int32_t L_188;
				L_188 = List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_inline(L_187, List_1_get_Count_m3F4981EBF2D17C83FA9139DB860EC569F490F057_RuntimeMethod_var);
				if ((((int32_t)L_186) < ((int32_t)L_188)))
				{
					goto IL_012a_1;
				}
			}

IL_0408_1:
			{
				// for(int t = 0; t < count; t++)
				int32_t L_189 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_189, 1));
			}

IL_040e_1:
			{
				// for(int t = 0; t < count; t++)
				int32_t L_190 = V_11;
				int32_t L_191 = V_10;
				if ((((int32_t)L_190) < ((int32_t)L_191)))
				{
					goto IL_009d_1;
				}
			}

IL_0417_1:
			{
				// foreach(var id in tilemapColliderList)
				bool L_192;
				L_192 = Enumerator_MoveNext_m4B1EF8B070BDD7F2FA96536307526800F83FBC61((&V_7), Enumerator_MoveNext_m4B1EF8B070BDD7F2FA96536307526800F83FBC61_RuntimeMethod_var);
				if (L_192)
				{
					goto IL_006a_1;
				}
			}
			{
				goto IL_0433;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0433:
	{
		// for(int iid = 0; iid < eventPreset.layerSetting.list.Length; iid++)
		int32_t L_193 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_193, 1));
	}

IL_0439:
	{
		// for(int iid = 0; iid < eventPreset.layerSetting.list.Length; iid++)
		int32_t L_194 = V_6;
		EventPreset_t66A7EA3289F9C1FF587BE9EF2DF55CF81CF65F0A* L_195 = ___eventPreset2;
		NullCheck(L_195);
		EventPresetLayers_t2E44C99CDDEEDFA3B19BDF2B6635379F05F24D4A* L_196 = L_195->___layerSetting_1;
		NullCheck(L_196);
		LayerEventSettingU5BU5D_t1A9B422372D5D6281A43B7E1B860EC63598A1815* L_197 = L_196->___list_0;
		NullCheck(L_197);
		if ((((int32_t)L_194) < ((int32_t)((int32_t)(((RuntimeArray*)L_197)->max_length)))))
		{
			goto IL_0046;
		}
	}
	{
		// return(collisions);
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_198 = ___collisions0;
		return L_198;
	}
}
// System.Void FunkyCode.EventHandling.LightTilemap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightTilemap__ctor_m8B16A48580D3EFD8DCAC40D067D3D05A4640E987 (LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4* __this, const RuntimeMethod* method) 
{
	{
		Base__ctor_mD30153DF63C53ED44FE6F1C49EF2ABB8916669D6(__this, NULL);
		return;
	}
}
// System.Void FunkyCode.EventHandling.LightTilemap::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightTilemap__cctor_m9671E66148638343C23726D62265DDCE9D2F04F4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector2[] removePointsColliding = new Vector2[100];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removePointsColliding_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removePointsColliding_5), (void*)L_0);
		// public static int removePointsCollidingCount = 0;
		((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removePointsCollidingCount_6 = 0;
		// public static LightCollision2D[] removeCollisions = new LightCollision2D[100];
		LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C* L_1 = (LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C*)(LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C*)SZArrayNew(LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removeCollisions_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removeCollisions_7), (void*)L_1);
		// public static int removeCollisionsCount = 0;
		((LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_StaticFields*)il2cpp_codegen_static_fields_for(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var))->___removeCollisionsCount_8 = 0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FunkyCode.EventHandling.Object::add_collisionEvents(FunkyCode.EventHandling.CollisionEvent2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_add_collisionEvents_mC6288F7C966B34ACD4FA7D3F4468D9F95CC51316 (Object_t179F01F942C4F00D02406C0227229D635FBF2CEC* __this, CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* V_0 = NULL;
	CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* V_1 = NULL;
	CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* V_2 = NULL;
	{
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_0 = __this->___collisionEvents_3;
		V_0 = L_0;
	}

IL_0007:
	{
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_1 = V_0;
		V_1 = L_1;
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_2 = V_1;
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25*)CastclassSealed((RuntimeObject*)L_4, CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25_il2cpp_TypeInfo_var));
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25** L_5 = (&__this->___collisionEvents_3);
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_6 = V_2;
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_7 = V_1;
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_8;
		L_8 = InterlockedCompareExchangeImpl<CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25*>(L_5, L_6, L_7);
		V_0 = L_8;
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_9 = V_0;
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_10 = V_1;
		if ((!(((RuntimeObject*)(CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25*)L_9) == ((RuntimeObject*)(CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FunkyCode.EventHandling.Object::remove_collisionEvents(FunkyCode.EventHandling.CollisionEvent2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_remove_collisionEvents_m6ABAF12FACCEF708C5F51D0E29924C6435E46465 (Object_t179F01F942C4F00D02406C0227229D635FBF2CEC* __this, CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* V_0 = NULL;
	CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* V_1 = NULL;
	CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* V_2 = NULL;
	{
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_0 = __this->___collisionEvents_3;
		V_0 = L_0;
	}

IL_0007:
	{
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_1 = V_0;
		V_1 = L_1;
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_2 = V_1;
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25*)CastclassSealed((RuntimeObject*)L_4, CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25_il2cpp_TypeInfo_var));
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25** L_5 = (&__this->___collisionEvents_3);
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_6 = V_2;
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_7 = V_1;
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_8;
		L_8 = InterlockedCompareExchangeImpl<CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25*>(L_5, L_6, L_7);
		V_0 = L_8;
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_9 = V_0;
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_10 = V_1;
		if ((!(((RuntimeObject*)(CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25*)L_9) == ((RuntimeObject*)(CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FunkyCode.EventHandling.Object::Update(FunkyCode.Light2D,FunkyCode.LightingSettings.EventPreset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Update_m9F3641844E3E8642915B7A72C6E51B13196A6964 (Object_t179F01F942C4F00D02406C0227229D635FBF2CEC* __this, Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* ___light0, EventPreset_t66A7EA3289F9C1FF587BE9EF2DF55CF81CF65F0A* ___eventPreset1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC11B5145275FFA59DFE825E1CF4E76E01479EE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m23BA0CA50ED3D2B2D9AD476BE1139075A4C70BD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m545CD6DBA4BCB85CF0E9E04EFECBB702BDF867CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1536FF1BB49D4CCA174D71D1D474D08CD53BE760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m272495EFAD67470B2A2BC3FBBBA7A463ACD22ADA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD83344EFEEFE4B81A1881DEC0D23DCED56729953_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m89952A02C0CD6523A678A2BAED73E20062118455_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m05B12629C12596B6D5332C86AFCC5AF47ED6C952_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mAE053CC7BD3B757C344D70B3C6619E9E0A593CAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2045D625ADB5C6D73108B3E4EC952779C4A23EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3D33EA565508FFE83EEFE70888D48CAA86ED4AF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m720AC6190909A40E0276F47714B94116A02221AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m82378840486C9FDAFDAE42CD9E0738428C5EC8C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* V_1 = NULL;
	LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_tE641AA00FCC079FDDA0627B65952706B9B3F894F V_3;
	memset((&V_3), 0, sizeof(V_3));
	LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* V_6 = NULL;
	LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 V_9;
	memset((&V_9), 0, sizeof(V_9));
	CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* G_B4_0 = NULL;
	CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* G_B3_0 = NULL;
	CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* G_B18_0 = NULL;
	CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* G_B17_0 = NULL;
	CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* G_B28_0 = NULL;
	CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* G_B27_0 = NULL;
	{
		// listenersInLight.Clear();
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_0 = __this->___listenersInLight_1;
		NullCheck(L_0);
		List_1_Clear_mD83344EFEEFE4B81A1881DEC0D23DCED56729953_inline(L_0, List_1_Clear_mD83344EFEEFE4B81A1881DEC0D23DCED56729953_RuntimeMethod_var);
		// LightCollider.GetCollisions(listenersInLight, light);
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_1 = __this->___listenersInLight_1;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_2 = ___light0;
		il2cpp_codegen_runtime_class_init_inline(LightCollider_t58BA7CC3E3783DD26F10A9F27A549649E230708B_il2cpp_TypeInfo_var);
		LightCollider_GetCollisions_m2B05BFC4DA27C249908443A007F19B5DA27EBE37(L_1, L_2, NULL);
		// LightCollider.RemoveHiddenPoints(listenersInLight, light, eventPreset);
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_3 = __this->___listenersInLight_1;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_4 = ___light0;
		EventPreset_t66A7EA3289F9C1FF587BE9EF2DF55CF81CF65F0A* L_5 = ___eventPreset1;
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_6;
		L_6 = LightCollider_RemoveHiddenPoints_m18028C017D3CBED80AFA64423E62DD283E0FF2B6(L_3, L_4, L_5, NULL);
		// LightTilemap.RemoveHiddenPoints(listenersInLight, light, eventPreset);
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_7 = __this->___listenersInLight_1;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_8 = ___light0;
		EventPreset_t66A7EA3289F9C1FF587BE9EF2DF55CF81CF65F0A* L_9 = ___eventPreset1;
		il2cpp_codegen_runtime_class_init_inline(LightTilemap_tD3D393E237F94213FB3AE6DD08F356BF1675FDE4_il2cpp_TypeInfo_var);
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_10;
		L_10 = LightTilemap_RemoveHiddenPoints_m26299E38481E2E54B0D8E8B86017CE28020A9CE7(L_7, L_8, L_9, NULL);
		// if (listenersInLight.Count < 1)
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_11 = __this->___listenersInLight_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m2045D625ADB5C6D73108B3E4EC952779C4A23EA2_inline(L_11, List_1_get_Count_m2045D625ADB5C6D73108B3E4EC952779C4A23EA2_RuntimeMethod_var);
		if ((((int32_t)L_12) >= ((int32_t)1)))
		{
			goto IL_00b1;
		}
	}
	{
		// for(int i = 0; i < listenersCache.Count; i++)
		V_0 = 0;
		goto IL_0097;
	}

IL_0045:
	{
		// var collider = listenersCache[i];
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_13 = __this->___listenersCache_0;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_15;
		L_15 = List_1_get_Item_m82378840486C9FDAFDAE42CD9E0738428C5EC8C3(L_13, L_14, List_1_get_Item_m82378840486C9FDAFDAE42CD9E0738428C5EC8C3_RuntimeMethod_var);
		V_1 = L_15;
		// var collision = new LightCollision2D();
		il2cpp_codegen_initobj((&V_2), sizeof(LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7));
		// collision.light = light;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_16 = ___light0;
		(&V_2)->___light_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___light_0), (void*)L_16);
		// collision.collider = collider;
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_17 = V_1;
		(&V_2)->___collider_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___collider_1), (void*)L_17);
		// collision.points = null;
		(&V_2)->___points_2 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___points_2), (void*)(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)NULL);
		// collision.state = LightCollision2D.State.OnCollisionExit;
		(&V_2)->___state_3 = 2;
		// collisionEvents?.Invoke(collision);
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_18 = __this->___collisionEvents_3;
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_19 = L_18;
		G_B3_0 = L_19;
		if (L_19)
		{
			G_B4_0 = L_19;
			goto IL_0086;
		}
	}
	{
		goto IL_008c;
	}

IL_0086:
	{
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_20 = V_2;
		NullCheck(G_B4_0);
		CollisionEvent2D_Invoke_m5AE37A4322E0C8EC078A512E1EC5E7AD59B7F21D_inline(G_B4_0, L_20, NULL);
	}

IL_008c:
	{
		// collider.CollisionEvent(collision);
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_21 = V_1;
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_22 = V_2;
		NullCheck(L_21);
		LightCollider2D_CollisionEvent_m106DB4AF801AC4CECDB11780382D16B2A0E5E6AC(L_21, L_22, NULL);
		// for(int i = 0; i < listenersCache.Count; i++)
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0097:
	{
		// for(int i = 0; i < listenersCache.Count; i++)
		int32_t L_24 = V_0;
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_25 = __this->___listenersCache_0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m3D33EA565508FFE83EEFE70888D48CAA86ED4AF9_inline(L_25, List_1_get_Count_m3D33EA565508FFE83EEFE70888D48CAA86ED4AF9_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0045;
		}
	}
	{
		// listenersCache.Clear();
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_27 = __this->___listenersCache_0;
		NullCheck(L_27);
		List_1_Clear_m272495EFAD67470B2A2BC3FBBBA7A463ACD22ADA_inline(L_27, List_1_Clear_m272495EFAD67470B2A2BC3FBBBA7A463ACD22ADA_RuntimeMethod_var);
		// return;
		return;
	}

IL_00b1:
	{
		// listenersInLightColliders.Clear();
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_28 = __this->___listenersInLightColliders_2;
		NullCheck(L_28);
		List_1_Clear_m272495EFAD67470B2A2BC3FBBBA7A463ACD22ADA_inline(L_28, List_1_Clear_m272495EFAD67470B2A2BC3FBBBA7A463ACD22ADA_RuntimeMethod_var);
		// foreach(var collision in listenersInLight)
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_29 = __this->___listenersInLight_1;
		NullCheck(L_29);
		Enumerator_tE641AA00FCC079FDDA0627B65952706B9B3F894F L_30;
		L_30 = List_1_GetEnumerator_m05B12629C12596B6D5332C86AFCC5AF47ED6C952(L_29, List_1_GetEnumerator_m05B12629C12596B6D5332C86AFCC5AF47ED6C952_RuntimeMethod_var);
		V_3 = L_30;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC11B5145275FFA59DFE825E1CF4E76E01479EE7((&V_3), Enumerator_Dispose_mFC11B5145275FFA59DFE825E1CF4E76E01479EE7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e5_1;
			}

IL_00ca_1:
			{
				// foreach(var collision in listenersInLight)
				LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_31;
				L_31 = Enumerator_get_Current_m545CD6DBA4BCB85CF0E9E04EFECBB702BDF867CB_inline((&V_3), Enumerator_get_Current_m545CD6DBA4BCB85CF0E9E04EFECBB702BDF867CB_RuntimeMethod_var);
				V_4 = L_31;
				// listenersInLightColliders.Add(collision.collider);
				List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_32 = __this->___listenersInLightColliders_2;
				LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_33 = V_4;
				LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_34 = L_33.___collider_1;
				NullCheck(L_32);
				List_1_Add_m1536FF1BB49D4CCA174D71D1D474D08CD53BE760_inline(L_32, L_34, List_1_Add_m1536FF1BB49D4CCA174D71D1D474D08CD53BE760_RuntimeMethod_var);
			}

IL_00e5_1:
			{
				// foreach(var collision in listenersInLight)
				bool L_35;
				L_35 = Enumerator_MoveNext_m23BA0CA50ED3D2B2D9AD476BE1139075A4C70BD8((&V_3), Enumerator_MoveNext_m23BA0CA50ED3D2B2D9AD476BE1139075A4C70BD8_RuntimeMethod_var);
				if (L_35)
				{
					goto IL_00ca_1;
				}
			}
			{
				goto IL_00fe;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fe:
	{
		// for(int i = 0; i < listenersCache.Count; i++)
		V_5 = 0;
		goto IL_017a;
	}

IL_0103:
	{
		// var collider = listenersCache[i];
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_36 = __this->___listenersCache_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_38;
		L_38 = List_1_get_Item_m82378840486C9FDAFDAE42CD9E0738428C5EC8C3(L_36, L_37, List_1_get_Item_m82378840486C9FDAFDAE42CD9E0738428C5EC8C3_RuntimeMethod_var);
		V_6 = L_38;
		// if (!listenersInLightColliders.Contains(collider))
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_39 = __this->___listenersInLightColliders_2;
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_40 = V_6;
		NullCheck(L_39);
		bool L_41;
		L_41 = List_1_Contains_m89952A02C0CD6523A678A2BAED73E20062118455(L_39, L_40, List_1_Contains_m89952A02C0CD6523A678A2BAED73E20062118455_RuntimeMethod_var);
		if (L_41)
		{
			goto IL_0174;
		}
	}
	{
		// var collision = new LightCollision2D();
		il2cpp_codegen_initobj((&V_7), sizeof(LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7));
		// collision.light = light;
		Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F* L_42 = ___light0;
		(&V_7)->___light_0 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_7)->___light_0), (void*)L_42);
		// collision.collider = collider;
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_43 = V_6;
		(&V_7)->___collider_1 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_7)->___collider_1), (void*)L_43);
		// collision.points = null;
		(&V_7)->___points_2 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_7)->___points_2), (void*)(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)NULL);
		// collision.state = LightCollision2D.State.OnCollisionExit;
		(&V_7)->___state_3 = 2;
		// collider.CollisionEvent(collision);
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_44 = V_6;
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_45 = V_7;
		NullCheck(L_44);
		LightCollider2D_CollisionEvent_m106DB4AF801AC4CECDB11780382D16B2A0E5E6AC(L_44, L_45, NULL);
		// collisionEvents?.Invoke(collision);
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_46 = __this->___collisionEvents_3;
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_47 = L_46;
		G_B17_0 = L_47;
		if (L_47)
		{
			G_B18_0 = L_47;
			goto IL_015f;
		}
	}
	{
		goto IL_0166;
	}

IL_015f:
	{
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_48 = V_7;
		NullCheck(G_B18_0);
		CollisionEvent2D_Invoke_m5AE37A4322E0C8EC078A512E1EC5E7AD59B7F21D_inline(G_B18_0, L_48, NULL);
	}

IL_0166:
	{
		// listenersCache.Remove(collider);
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_49 = __this->___listenersCache_0;
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_50 = V_6;
		NullCheck(L_49);
		bool L_51;
		L_51 = List_1_Remove_mAE053CC7BD3B757C344D70B3C6619E9E0A593CAE(L_49, L_50, List_1_Remove_mAE053CC7BD3B757C344D70B3C6619E9E0A593CAE_RuntimeMethod_var);
	}

IL_0174:
	{
		// for(int i = 0; i < listenersCache.Count; i++)
		int32_t L_52 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_017a:
	{
		// for(int i = 0; i < listenersCache.Count; i++)
		int32_t L_53 = V_5;
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_54 = __this->___listenersCache_0;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m3D33EA565508FFE83EEFE70888D48CAA86ED4AF9_inline(L_54, List_1_get_Count_m3D33EA565508FFE83EEFE70888D48CAA86ED4AF9_RuntimeMethod_var);
		if ((((int32_t)L_53) < ((int32_t)L_55)))
		{
			goto IL_0103;
		}
	}
	{
		// for(int i = 0; i < listenersInLight.Count; i++)
		V_8 = 0;
		goto IL_01ff;
	}

IL_0191:
	{
		// var collision = listenersInLight[i];
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_56 = __this->___listenersInLight_1;
		int32_t L_57 = V_8;
		NullCheck(L_56);
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_58;
		L_58 = List_1_get_Item_m720AC6190909A40E0276F47714B94116A02221AB(L_56, L_57, List_1_get_Item_m720AC6190909A40E0276F47714B94116A02221AB_RuntimeMethod_var);
		V_9 = L_58;
		// if (listenersCache.Contains(collision.collider))
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_59 = __this->___listenersCache_0;
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_60 = V_9;
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_61 = L_60.___collider_1;
		NullCheck(L_59);
		bool L_62;
		L_62 = List_1_Contains_m89952A02C0CD6523A678A2BAED73E20062118455(L_59, L_61, List_1_Contains_m89952A02C0CD6523A678A2BAED73E20062118455_RuntimeMethod_var);
		if (!L_62)
		{
			goto IL_01be;
		}
	}
	{
		// collision.state = LightCollision2D.State.OnCollision;
		(&V_9)->___state_3 = 0;
		goto IL_01d8;
	}

IL_01be:
	{
		// collision.state = LightCollision2D.State.OnCollisionEnter;
		(&V_9)->___state_3 = 1;
		// listenersCache.Add(collision.collider);
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_63 = __this->___listenersCache_0;
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_64 = V_9;
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_65 = L_64.___collider_1;
		NullCheck(L_63);
		List_1_Add_m1536FF1BB49D4CCA174D71D1D474D08CD53BE760_inline(L_63, L_65, List_1_Add_m1536FF1BB49D4CCA174D71D1D474D08CD53BE760_RuntimeMethod_var);
	}

IL_01d8:
	{
		// collision.collider.CollisionEvent(collision);
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_66 = V_9;
		LightCollider2D_t688A060C13931424F94C4BC856A0EFC9B32ED95F* L_67 = L_66.___collider_1;
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_68 = V_9;
		NullCheck(L_67);
		LightCollider2D_CollisionEvent_m106DB4AF801AC4CECDB11780382D16B2A0E5E6AC(L_67, L_68, NULL);
		// collisionEvents?.Invoke(collision);
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_69 = __this->___collisionEvents_3;
		CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* L_70 = L_69;
		G_B27_0 = L_70;
		if (L_70)
		{
			G_B28_0 = L_70;
			goto IL_01f2;
		}
	}
	{
		goto IL_01f9;
	}

IL_01f2:
	{
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_71 = V_9;
		NullCheck(G_B28_0);
		CollisionEvent2D_Invoke_m5AE37A4322E0C8EC078A512E1EC5E7AD59B7F21D_inline(G_B28_0, L_71, NULL);
	}

IL_01f9:
	{
		// for(int i = 0; i < listenersInLight.Count; i++)
		int32_t L_72 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_01ff:
	{
		// for(int i = 0; i < listenersInLight.Count; i++)
		int32_t L_73 = V_8;
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_74 = __this->___listenersInLight_1;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = List_1_get_Count_m2045D625ADB5C6D73108B3E4EC952779C4A23EA2_inline(L_74, List_1_get_Count_m2045D625ADB5C6D73108B3E4EC952779C4A23EA2_RuntimeMethod_var);
		if ((((int32_t)L_73) < ((int32_t)L_75)))
		{
			goto IL_0191;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FunkyCode.EventHandling.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m111777A0F7128300569C67A5DC853D35F43DF666 (Object_t179F01F942C4F00D02406C0227229D635FBF2CEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8520B95689012023CC16D9D123CC7EF981F0C046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFDF496834F3F5C3E9810331DF0A87ED05E8D3576_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<LightCollider2D> listenersCache = new List<LightCollider2D>();
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_0 = (List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0*)il2cpp_codegen_object_new(List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8520B95689012023CC16D9D123CC7EF981F0C046(L_0, List_1__ctor_m8520B95689012023CC16D9D123CC7EF981F0C046_RuntimeMethod_var);
		__this->___listenersCache_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listenersCache_0), (void*)L_0);
		// public List<LightCollision2D> listenersInLight = new List<LightCollision2D>();
		List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* L_1 = (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D*)il2cpp_codegen_object_new(List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mFDF496834F3F5C3E9810331DF0A87ED05E8D3576(L_1, List_1__ctor_mFDF496834F3F5C3E9810331DF0A87ED05E8D3576_RuntimeMethod_var);
		__this->___listenersInLight_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listenersInLight_1), (void*)L_1);
		// public List<LightCollider2D> listenersInLightColliders = new List<LightCollider2D>();
		List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0* L_2 = (List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0*)il2cpp_codegen_object_new(List_1_t7D57EF64EF5EA5C3924A173891F4B6C5A6C808B0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m8520B95689012023CC16D9D123CC7EF981F0C046(L_2, List_1__ctor_m8520B95689012023CC16D9D123CC7EF981F0C046_RuntimeMethod_var);
		__this->___listenersInLightColliders_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listenersInLightColliders_2), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<FunkyCode.LightTile> FunkyCode.LightTilemapCollider.Base::get_MapTiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6 (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) 
{
	{
		// public List<LightTile> MapTiles => mapTiles;
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_0 = __this->___mapTiles_7;
		return L_0;
	}
}
// System.Boolean FunkyCode.LightTilemapCollider.Base::ShadowsDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base_ShadowsDisabled_mA40FEB6D771841663E0C64A3757C0F67F03E3D46 (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) 
{
	{
		// return(shadowType == ShadowType.None);
		int32_t L_0 = __this->___shadowType_0;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean FunkyCode.LightTilemapCollider.Base::MasksDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base_MasksDisabled_mC3AB58F42B3CA63E7238191C4771E5A2EB51EC1E (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) 
{
	{
		// return(maskType == MaskType.None);
		int32_t L_0 = __this->___maskType_1;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Vector2 FunkyCode.LightTilemapCollider.Base::TileWorldPosition(FunkyCode.LightTile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Base_TileWorldPosition_m641B3CFE6358B301B971B342B602FF4D99146FED (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* ___tile0, const RuntimeMethod* method) 
{
	{
		// return(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_0;
	}
}
// System.Single FunkyCode.LightTilemapCollider.Base::TileWorldRotation(FunkyCode.LightTile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Base_TileWorldRotation_mB1B7EB3D44BA84659D50353498C228AA72D16B3C (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* ___tile0, const RuntimeMethod* method) 
{
	{
		// return(0);
		return (0.0f);
	}
}
// UnityEngine.Vector2 FunkyCode.LightTilemapCollider.Base::TileWorldScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Base_TileWorldScale_m60C51404A4ACDBAD2F2AB4F26D816E2365639FD4 (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) 
{
	{
		// return(Vector2.one);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		return L_0;
	}
}
// FunkyCode.LightTilemapCollider.MapType FunkyCode.LightTilemapCollider.Base::TilemapType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Base_TilemapType_mAE203DCD9BE87C89E1C4AF181BA68828EF1ABFE0 (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) 
{
	{
		// return(MapType.UnityRectangle);
		return (int32_t)(0);
	}
}
// FunkyCode.TilemapProperties FunkyCode.LightTilemapCollider.Base::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* Base_get_Properties_mE9ADFC96DEFA696120855F2F0922C45D57A2B25A (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) 
{
	{
		// get => properties;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_0 = __this->___properties_6;
		return L_0;
	}
}
// System.Boolean FunkyCode.LightTilemapCollider.Base::IsPhysicsShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base_IsPhysicsShape_mD8249B92F7F078708409003D87C67CF20D10766C (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) 
{
	{
		// return(false);
		return (bool)0;
	}
}
// System.Void FunkyCode.LightTilemapCollider.Base::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_Initialize_m706B406A6F86B7350095390AE2F5B787A9CFD998 (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) 
{
	{
		// radius = -1;
		__this->___radius_2 = (-1.0f);
		// }
		return;
	}
}
// System.Void FunkyCode.LightTilemapCollider.Base::SetGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_SetGameObject_mA0FA838A271DD7E0423B88FE569DB12A8E621F98 (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	{
		// this.gameObject = gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		__this->___gameObject_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObject_4), (void*)L_0);
		// this.transform = gameObject.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___gameObject0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		__this->___transform_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transform_5), (void*)L_2);
		// properties.transform = gameObject.transform;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_3 = __this->___properties_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___gameObject0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_3);
		L_3->___transform_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___transform_7), (void*)L_5);
		// }
		return;
	}
}
// System.Boolean FunkyCode.LightTilemapCollider.Base::UpdateProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base_UpdateProperties_mC22745424EB9DE120419BD8845C15281D89C675E (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_mF4C69736AF26C07B7B6DF0FEF81C69F29B5B81B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA9EA2225534F07F26C01F39EE4DB3C4F742B10A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// properties.tilemap = gameObject.GetComponent<Tilemap>();
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_0 = __this->___properties_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___gameObject_4;
		NullCheck(L_1);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_2;
		L_2 = GameObject_GetComponent_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_mF4C69736AF26C07B7B6DF0FEF81C69F29B5B81B8(L_1, GameObject_GetComponent_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_mF4C69736AF26C07B7B6DF0FEF81C69F29B5B81B8_RuntimeMethod_var);
		NullCheck(L_0);
		L_0->___tilemap_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___tilemap_5), (void*)L_2);
		// if (properties.tilemap == null) {
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_3 = __this->___properties_6;
		NullCheck(L_3);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_4 = L_3->___tilemap_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// return(false);
		return (bool)0;
	}

IL_002b:
	{
		// properties.grid = properties.tilemap.layoutGrid;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_6 = __this->___properties_6;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_7 = __this->___properties_6;
		NullCheck(L_7);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_8 = L_7->___tilemap_5;
		NullCheck(L_8);
		Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* L_9;
		L_9 = Tilemap_get_layoutGrid_m84B3A21E3E9744E83DBD07448DBD8C01CE0E257E(L_8, NULL);
		NullCheck(L_6);
		L_6->___grid_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___grid_6), (void*)L_9);
		// if (properties.grid == null) {
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_10 = __this->___properties_6;
		NullCheck(L_10);
		Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* L_11 = L_10->___grid_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		// Debug.LogError("Lighting 2D Error: Lighting Tilemap Collider is missing Grid", gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___gameObject_4;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteralAA9EA2225534F07F26C01F39EE4DB3C4F742B10A, L_13, NULL);
		// return(false);
		return (bool)0;
	}

IL_006b:
	{
		// properties.cellSize = properties.grid.cellSize;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_14 = __this->___properties_6;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_15 = __this->___properties_6;
		NullCheck(L_15);
		Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* L_16 = L_15->___grid_6;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Grid_get_cellSize_m5512593532CABA9CFC058123B923AFA483D6003E(L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_17, NULL);
		NullCheck(L_14);
		L_14->___cellSize_0 = L_18;
		// properties.cellGap = properties.grid.cellGap;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_19 = __this->___properties_6;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_20 = __this->___properties_6;
		NullCheck(L_20);
		Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* L_21 = L_20->___grid_6;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Grid_get_cellGap_m9B12CA3DA5A7AC906A1E1943FABD3E1A523439A1(L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_22, NULL);
		NullCheck(L_19);
		L_19->___cellGap_2 = L_23;
		// properties.cellAnchor = properties.tilemap.tileAnchor;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_24 = __this->___properties_6;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_25 = __this->___properties_6;
		NullCheck(L_25);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_26 = L_25->___tilemap_5;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Tilemap_get_tileAnchor_mD3C7F2A024DC43019CEB93682307ED41EC3329E4(L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_27, NULL);
		NullCheck(L_24);
		L_24->___cellAnchor_1 = L_28;
		// return(true);
		return (bool)1;
	}
}
// System.Void FunkyCode.LightTilemapCollider.Base::ResetWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_ResetWorld_mD68AEB137A13A1BCD7C7BC079608618FD92DCFB8 (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// rect = new Rect();
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&__this->___rect_3);
		il2cpp_codegen_initobj(L_0, sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		// foreach(LightTile tile in mapTiles) {
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_1 = __this->___mapTiles_7;
		NullCheck(L_1);
		Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F L_2;
		L_2 = List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B(L_1, List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C((&V_0), Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_001a_1:
			{
				// foreach(LightTile tile in mapTiles) {
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_3;
				L_3 = Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_inline((&V_0), Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_RuntimeMethod_var);
				// tile.ResetWorld();
				NullCheck(L_3);
				LightTile_ResetWorld_m0521E36AA2E6CA0E283B475C8F8B94BC64B9CFC4(L_3, NULL);
			}

IL_0026_1:
			{
				// foreach(LightTile tile in mapTiles) {
				bool L_4;
				L_4 = Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3((&V_0), Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		// }
		return;
	}
}
// UnityEngine.Rect FunkyCode.LightTilemapCollider.Base::GetRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Base_GetRect_mDB55D054120FFB0D14A610145998509A6A808B68 (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (rect.width < 0.1f) {
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&__this->___rect_3);
		float L_1;
		L_1 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_0, NULL);
		if ((!(((float)L_1) < ((float)(0.100000001f)))))
		{
			goto IL_00d4;
		}
	}
	{
		// float minX = 100000;
		V_0 = (100000.0f);
		// float minY = 100000;
		V_1 = (100000.0f);
		// float maxX = -100000;
		V_2 = (-100000.0f);
		// float maxY = -100000;
		V_3 = (-100000.0f);
		// foreach(LightTile tile in mapTiles) {
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_2 = __this->___mapTiles_7;
		NullCheck(L_2);
		Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F L_3;
		L_3 = List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B(L_2, List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B_RuntimeMethod_var);
		V_4 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0092:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C((&V_4), Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0087_1;
			}

IL_003c_1:
			{
				// foreach(LightTile tile in mapTiles) {
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_4;
				L_4 = Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_inline((&V_4), Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_RuntimeMethod_var);
				// Vector2 id = tile.GetWorldPosition(this);
				NullCheck(L_4);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
				L_5 = LightTile_GetWorldPosition_mFFC4031CCB1CD2D3932A86168740E9F80DEE5BF5(L_4, __this, NULL);
				V_5 = L_5;
				// minX = Mathf.Min(minX, (float)id.x);
				float L_6 = V_0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_5;
				float L_8 = L_7.___x_0;
				float L_9;
				L_9 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_6, ((float)L_8), NULL);
				V_0 = L_9;
				// minY = Mathf.Min(minY, (float)id.y);
				float L_10 = V_1;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_5;
				float L_12 = L_11.___y_1;
				float L_13;
				L_13 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_10, ((float)L_12), NULL);
				V_1 = L_13;
				// maxX = Mathf.Max(maxX, (float)id.x);
				float L_14 = V_2;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_5;
				float L_16 = L_15.___x_0;
				float L_17;
				L_17 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_14, ((float)L_16), NULL);
				V_2 = L_17;
				// maxY = Mathf.Max(maxY, (float)id.y);
				float L_18 = V_3;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_5;
				float L_20 = L_19.___y_1;
				float L_21;
				L_21 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_18, ((float)L_20), NULL);
				V_3 = L_21;
			}

IL_0087_1:
			{
				// foreach(LightTile tile in mapTiles) {
				bool L_22;
				L_22 = Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3((&V_4), Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_003c_1;
				}
			}
			{
				goto IL_00a0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a0:
	{
		// rect.x = minX;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_23 = (&__this->___rect_3);
		float L_24 = V_0;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_23, L_24, NULL);
		// rect.y = minY;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_25 = (&__this->___rect_3);
		float L_26 = V_1;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_25, L_26, NULL);
		// rect.width = maxX - minX;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_27 = (&__this->___rect_3);
		float L_28 = V_2;
		float L_29 = V_0;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_27, ((float)il2cpp_codegen_subtract(L_28, L_29)), NULL);
		// rect.height = maxY - minY;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_30 = (&__this->___rect_3);
		float L_31 = V_3;
		float L_32 = V_1;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_30, ((float)il2cpp_codegen_subtract(L_31, L_32)), NULL);
	}

IL_00d4:
	{
		// return(rect);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_33 = __this->___rect_3;
		return L_33;
	}
}
// System.Single FunkyCode.LightTilemapCollider.Base::GetRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Base_GetRadius_mC1B247FC727A75BA2FE23F70EEBE94F3B8918C39 (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (radius < 0) {
		float L_0 = __this->___radius_2;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		// foreach(LightTile tile in mapTiles) {
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_1 = __this->___mapTiles_7;
		NullCheck(L_1);
		Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F L_2;
		L_2 = List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B(L_1, List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C((&V_0), Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0055_1;
			}

IL_001b_1:
			{
				// foreach(LightTile tile in mapTiles) {
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_3;
				L_3 = Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_inline((&V_0), Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_RuntimeMethod_var);
				// Vector2 id = tile.GetWorldPosition(this);
				NullCheck(L_3);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
				L_4 = LightTile_GetWorldPosition_mFFC4031CCB1CD2D3932A86168740E9F80DEE5BF5(L_3, __this, NULL);
				V_1 = L_4;
				// radius = Mathf.Max(radius, Vector2.Distance(id, gameObject.transform.position));
				float L_5 = __this->___radius_2;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_1;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___gameObject_4;
				NullCheck(L_7);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
				L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
				NullCheck(L_8);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
				L_10 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_9, NULL);
				float L_11;
				L_11 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_6, L_10, NULL);
				float L_12;
				L_12 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_5, L_11, NULL);
				__this->___radius_2 = L_12;
			}

IL_0055_1:
			{
				// foreach(LightTile tile in mapTiles) {
				bool L_13;
				L_13 = Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3((&V_0), Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// return(radius);
		float L_14 = __this->___radius_2;
		return L_14;
	}
}
// System.Void FunkyCode.LightTilemapCollider.Base::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base__ctor_m356B98FE5A5B282B7B1BFD8045AE9D41ACD1239A (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2875DE16B62D8DF415E19E34D1FE08B8CD509C02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ShadowType shadowType = ShadowType.Grid;
		__this->___shadowType_0 = 1;
		// public MaskType maskType = MaskType.Sprite;
		__this->___maskType_1 = 2;
		// private float radius = -1;
		__this->___radius_2 = (-1.0f);
		// protected TilemapProperties properties = new TilemapProperties();
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_0 = (TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310*)il2cpp_codegen_object_new(TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TilemapProperties__ctor_m626D39074CC03E0A949CED75CBA9B1ED50E0D46D(L_0, NULL);
		__this->___properties_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___properties_6), (void*)L_0);
		// private List<LightTile> mapTiles = new List<LightTile>();
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_1 = (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA*)il2cpp_codegen_object_new(List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m2875DE16B62D8DF415E19E34D1FE08B8CD509C02(L_1, List_1__ctor_m2875DE16B62D8DF415E19E34D1FE08B8CD509C02_RuntimeMethod_var);
		__this->___mapTiles_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mapTiles_7), (void*)L_1);
		// public Chunks.TilemapManager chunkManager = new Chunks.TilemapManager();
		TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* L_2 = (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C*)il2cpp_codegen_object_new(TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TilemapManager__ctor_mC30C31BC8877572720C7CF8B0ED5959470B9C3E4(L_2, NULL);
		__this->___chunkManager_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chunkManager_8), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// FunkyCode.LightTilemapCollider.MapType FunkyCode.LightTilemapCollider.Hexagon::TilemapType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hexagon_TilemapType_m26C2D0C1FBED1EA69F8C812E559FB9A9A3E9DD3F (Hexagon_tF485227D12FC1DC72A9D432DFB5CD7ADC867C9AC* __this, const RuntimeMethod* method) 
{
	{
		// return(MapType.UnityHexagon);
		return (int32_t)(2);
	}
}
// System.Void FunkyCode.LightTilemapCollider.Hexagon::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_Initialize_mDC9C89DA7C426ED0A9C8C7CFFE1070DCC1CA6D35 (Hexagon_tF485227D12FC1DC72A9D432DFB5CD7ADC867C9AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mACB443D71A089820C6C2DBF83849FCF1ECF3BE58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B59E44CF6A7D4928C046D4C6907A9315E38110);
		s_Il2CppMethodInitialized = true;
	}
	ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* V_0 = NULL;
	PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979 V_1;
	memset((&V_1), 0, sizeof(V_1));
	BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 V_2;
	memset((&V_2), 0, sizeof(V_2));
	PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_4;
	memset((&V_4), 0, sizeof(V_4));
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_5;
	memset((&V_5), 0, sizeof(V_5));
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_6 = NULL;
	LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* V_7 = NULL;
	{
		// base.Initialize();
		Base_Initialize_m706B406A6F86B7350095390AE2F5B787A9CFD998(__this, NULL);
		// if (UpdateProperties() == false) {
		bool L_0;
		L_0 = Base_UpdateProperties_mC22745424EB9DE120419BD8845C15281D89C675E(__this, NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// MapTiles.Clear();
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_1;
		L_1 = Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline(__this, NULL);
		NullCheck(L_1);
		List_1_Clear_mACB443D71A089820C6C2DBF83849FCF1ECF3BE58_inline(L_1, List_1_Clear_mACB443D71A089820C6C2DBF83849FCF1ECF3BE58_RuntimeMethod_var);
		// tilemap2D = properties.tilemap;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_2 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_2);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_3 = L_2->___tilemap_5;
		__this->___tilemap2D_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tilemap2D_9), (void*)L_3);
		// ITilemap tilemap = (ITilemap) FormatterServices.GetUninitializedObject(typeof(ITilemap));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = FormatterServices_GetUninitializedObject_mA2B57E3C189694129FE2870B8188421DF78468A1(L_5, NULL);
		V_0 = ((ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*)CastclassClass((RuntimeObject*)L_6, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var));
		// typeof(ITilemap).GetField("m_Tilemap", BindingFlags.NonPublic | BindingFlags.Instance).SetValue(tilemap, tilemap2D);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(L_8);
		FieldInfo_t* L_9;
		L_9 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(82 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_8, _stringLiteralC7B59E44CF6A7D4928C046D4C6907A9315E38110, ((int32_t)36));
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_10 = V_0;
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_11 = __this->___tilemap2D_9;
		NullCheck(L_9);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_9, L_10, L_11, NULL);
		// foreach (Vector3Int position in tilemap2D.cellBounds.allPositionsWithin) {
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_12 = __this->___tilemap2D_9;
		NullCheck(L_12);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_13;
		L_13 = Tilemap_get_cellBounds_m2C1EDCFFD145175A83457B4F7A88CEA037DF8EB9(L_12, NULL);
		V_2 = L_13;
		PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979 L_14;
		L_14 = BoundsInt_get_allPositionsWithin_mCB3AC6C2877AF182728C238E0FA674C61011B374((&V_2), NULL);
		V_3 = L_14;
		PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979 L_15;
		L_15 = PositionEnumerator_GetEnumerator_m807AB1779109B8CB87F146953093510E61D8DB6E((&V_3), NULL);
		V_1 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0109:
			{// begin finally (depth: 1)
				PositionEnumerator_System_IDisposable_Dispose_m47826ADCC63143C39135AB628DC71002A378347A((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00fb_1;
			}

IL_0080_1:
			{
				// foreach (Vector3Int position in tilemap2D.cellBounds.allPositionsWithin) {
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_16;
				L_16 = PositionEnumerator_get_Current_mD06E8FE52B917BFE51F867A06B183EADFFA5CC2A((&V_1), NULL);
				V_4 = L_16;
				// TileData tileData = new TileData();
				il2cpp_codegen_initobj((&V_5), sizeof(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F));
				// TileBase tilebase = tilemap2D.GetTile(position);
				Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_17 = __this->___tilemap2D_9;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_18 = V_4;
				NullCheck(L_17);
				TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_19;
				L_19 = Tilemap_GetTile_m8500FBFF853C9E813810929BD29D7A866B516225(L_17, L_18, NULL);
				V_6 = L_19;
				// if (tilebase != null) {
				TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_20 = V_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_21;
				L_21 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_21)
				{
					goto IL_00fb_1;
				}
			}
			{
				// tilebase.GetTileData(position, tilemap, ref tileData);
				TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_22 = V_6;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_23 = V_4;
				ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_24 = V_0;
				NullCheck(L_22);
				VirtualActionInvoker3< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* >::Invoke(5 /* System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */, L_22, L_23, L_24, (&V_5));
				// LightTile lightTile = new LightTile();
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_25 = (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06*)il2cpp_codegen_object_new(LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06_il2cpp_TypeInfo_var);
				NullCheck(L_25);
				LightTile__ctor_m2ED6AA336B8F469FC356A44CB4368527804602EB(L_25, NULL);
				V_7 = L_25;
				// lightTile.gridPosition = new Vector3Int(position.x, position.y, 0);
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_26 = V_7;
				int32_t L_27;
				L_27 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&V_4), NULL);
				int32_t L_28;
				L_28 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&V_4), NULL);
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_29;
				memset((&L_29), 0, sizeof(L_29));
				Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_29), L_27, L_28, 0, /*hidden argument*/NULL);
				NullCheck(L_26);
				L_26->___gridPosition_0 = L_29;
				// lightTile.SetSprite(tileData.sprite);
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_30 = V_7;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_31;
				L_31 = TileData_get_sprite_m8117B1A4F4A5722F067271A0B9BEB5C1806F90D1((&V_5), NULL);
				NullCheck(L_30);
				LightTile_SetSprite_m7285D1A97F9A07290FEC014B334DEEA6920FA912_inline(L_30, L_31, NULL);
				// lightTile.GetPhysicsShapePolygons();
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_32 = V_7;
				NullCheck(L_32);
				List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_33;
				L_33 = LightTile_GetPhysicsShapePolygons_mFB8036FDF9C1E8BEAECB6012B9AB703A6A7041DD(L_32, NULL);
				// MapTiles.Add(lightTile);
				List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_34;
				L_34 = Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline(__this, NULL);
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_35 = V_7;
				NullCheck(L_34);
				List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_inline(L_34, L_35, List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_RuntimeMethod_var);
			}

IL_00fb_1:
			{
				// foreach (Vector3Int position in tilemap2D.cellBounds.allPositionsWithin) {
				bool L_36;
				L_36 = PositionEnumerator_MoveNext_mB225CE08AF7D18A38E9597E5B3381AE216C2DB0C((&V_1), NULL);
				if (L_36)
				{
					goto IL_0080_1;
				}
			}
			{
				goto IL_0117;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0117:
	{
		// chunkManager.Update(MapTiles, this);
		TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* L_37 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___chunkManager_8;
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_38;
		L_38 = Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline(__this, NULL);
		NullCheck(L_37);
		TilemapManager_Update_m877476ABCEF8328780BD30AF2772B962527603A1(L_37, L_38, __this, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 FunkyCode.LightTilemapCollider.Hexagon::TileWorldPosition(FunkyCode.LightTile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Hexagon_TileWorldPosition_mEE7ED92059914CCBD2F8A4BE4D6B5918D892FB40 (Hexagon_tF485227D12FC1DC72A9D432DFB5CD7ADC867C9AC* __this, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* ___tile0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 resultPosition = properties.transform.position;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_0 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0->___transform_7;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		// Vector2 tilePosition = new Vector2(tile.gridPosition.x + tile.gridPosition.y / 2, tile.gridPosition.y);
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_4 = ___tile0;
		NullCheck(L_4);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_5 = (&L_4->___gridPosition_0);
		int32_t L_6;
		L_6 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline(L_5, NULL);
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_7 = ___tile0;
		NullCheck(L_7);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_8 = (&L_7->___gridPosition_0);
		int32_t L_9;
		L_9 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline(L_8, NULL);
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_10 = ___tile0;
		NullCheck(L_10);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_11 = (&L_10->___gridPosition_0);
		int32_t L_12;
		L_12 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline(L_11, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)((int32_t)il2cpp_codegen_add(L_6, ((int32_t)(L_9/2))))), ((float)L_12), NULL);
		// tilePosition.x += properties.cellAnchor.x;
		float* L_13 = (&(&V_0)->___x_0);
		float* L_14 = L_13;
		float L_15 = *((float*)L_14);
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_16 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&L_16->___cellAnchor_1);
		float L_18 = L_17->___x_0;
		*((float*)L_14) = (float)((float)il2cpp_codegen_add(L_15, L_18));
		// tilePosition.y += properties.cellAnchor.y;
		float* L_19 = (&(&V_0)->___y_1);
		float* L_20 = L_19;
		float L_21 = *((float*)L_20);
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_22 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = (&L_22->___cellAnchor_1);
		float L_24 = L_23->___y_1;
		*((float*)L_20) = (float)((float)il2cpp_codegen_add(L_21, L_24));
		// tilePosition.x = tilePosition.x + tilePosition.y * -0.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_0;
		float L_26 = L_25.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_0;
		float L_28 = L_27.___y_1;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_add(L_26, ((float)il2cpp_codegen_multiply(L_28, (-0.5f)))));
		// tilePosition.y = tilePosition.y * 0.75f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_0;
		float L_30 = L_29.___y_1;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_multiply(L_30, (0.75f)));
		// tilePosition.x *= properties.transform.lossyScale.x;
		float* L_31 = (&(&V_0)->___x_0);
		float* L_32 = L_31;
		float L_33 = *((float*)L_32);
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_34 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = L_34->___transform_7;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_35, NULL);
		float L_37 = L_36.___x_2;
		*((float*)L_32) = (float)((float)il2cpp_codegen_multiply(L_33, L_37));
		// tilePosition.y *= properties.transform.lossyScale.y;
		float* L_38 = (&(&V_0)->___y_1);
		float* L_39 = L_38;
		float L_40 = *((float*)L_39);
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_41 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = L_41->___transform_7;
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_42, NULL);
		float L_44 = L_43.___y_3;
		*((float*)L_39) = (float)((float)il2cpp_codegen_multiply(L_40, L_44));
		// resultPosition += tilePosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_3, L_45, NULL);
		// return(resultPosition);
		return L_46;
	}
}
// System.Single FunkyCode.LightTilemapCollider.Hexagon::TileWorldRotation(FunkyCode.LightTile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Hexagon_TileWorldRotation_mF2C806ECB4A07518A571626F5B91CB0A961D64FB (Hexagon_tF485227D12FC1DC72A9D432DFB5CD7ADC867C9AC* __this, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* ___tile0, const RuntimeMethod* method) 
{
	{
		// float worldRotation = tilemap2D.transform.eulerAngles.z;
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_0 = __this->___tilemap2D_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_1, NULL);
		float L_3 = L_2.___z_4;
		// return(worldRotation);
		return L_3;
	}
}
// UnityEngine.Vector2 FunkyCode.LightTilemapCollider.Hexagon::TileWorldScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Hexagon_TileWorldScale_mF08C257ECCCC32D6B7CFC67076E81717546F7E9F (Hexagon_tF485227D12FC1DC72A9D432DFB5CD7ADC867C9AC* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 scale = new Vector2();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// scale.x = properties.cellSize.x * properties.transform.lossyScale.x;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_0 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&L_0->___cellSize_0);
		float L_2 = L_1->___x_0;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_3 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___transform_7;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_4, NULL);
		float L_6 = L_5.___x_2;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_multiply(L_2, L_6));
		// scale.y = properties.cellSize.y * properties.transform.lossyScale.y;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_7 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&L_7->___cellSize_0);
		float L_9 = L_8->___y_1;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_10 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = L_10->___transform_7;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_11, NULL);
		float L_13 = L_12.___y_3;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_multiply(L_9, L_13));
		// return(scale);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		return L_14;
	}
}
// System.Void FunkyCode.LightTilemapCollider.Hexagon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon__ctor_m85E0DE8DB60A6691FD441203CB0F1E744BDEBD99 (Hexagon_tF485227D12FC1DC72A9D432DFB5CD7ADC867C9AC* __this, const RuntimeMethod* method) 
{
	{
		Base__ctor_m356B98FE5A5B282B7B1BFD8045AE9D41ACD1239A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// FunkyCode.LightTilemapCollider.MapType FunkyCode.LightTilemapCollider.Isometric::TilemapType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Isometric_TilemapType_m285384133298F969BA3CE93139A2300DF4B126BE (Isometric_tFF8D90125CF28DB5D80059E20536A2C185EDFF5E* __this, const RuntimeMethod* method) 
{
	{
		// return(MapType.UnityIsometric);
		return (int32_t)(1);
	}
}
// System.Void FunkyCode.LightTilemapCollider.Isometric::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isometric_Initialize_mA6B240AC239C0AC39C6689B7CD905876478174CD (Isometric_tFF8D90125CF28DB5D80059E20536A2C185EDFF5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mACB443D71A089820C6C2DBF83849FCF1ECF3BE58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B59E44CF6A7D4928C046D4C6907A9315E38110);
		s_Il2CppMethodInitialized = true;
	}
	ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* V_0 = NULL;
	PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979 V_1;
	memset((&V_1), 0, sizeof(V_1));
	BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 V_2;
	memset((&V_2), 0, sizeof(V_2));
	PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_4;
	memset((&V_4), 0, sizeof(V_4));
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_5;
	memset((&V_5), 0, sizeof(V_5));
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_6 = NULL;
	LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* V_7 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// base.Initialize();
		Base_Initialize_m706B406A6F86B7350095390AE2F5B787A9CFD998(__this, NULL);
		// if (!UpdateProperties()) {
		bool L_0;
		L_0 = Base_UpdateProperties_mC22745424EB9DE120419BD8845C15281D89C675E(__this, NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// MapTiles.Clear();
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_1;
		L_1 = Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline(__this, NULL);
		NullCheck(L_1);
		List_1_Clear_mACB443D71A089820C6C2DBF83849FCF1ECF3BE58_inline(L_1, List_1_Clear_mACB443D71A089820C6C2DBF83849FCF1ECF3BE58_RuntimeMethod_var);
		// tilemap2D = properties.tilemap;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_2 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_2);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_3 = L_2->___tilemap_5;
		__this->___tilemap2D_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tilemap2D_10), (void*)L_3);
		// ITilemap tilemap = (ITilemap) FormatterServices.GetUninitializedObject(typeof(ITilemap));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = FormatterServices_GetUninitializedObject_mA2B57E3C189694129FE2870B8188421DF78468A1(L_5, NULL);
		V_0 = ((ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*)CastclassClass((RuntimeObject*)L_6, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var));
		// typeof(ITilemap).GetField("m_Tilemap", BindingFlags.NonPublic | BindingFlags.Instance).SetValue(tilemap, tilemap2D);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(L_8);
		FieldInfo_t* L_9;
		L_9 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(82 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_8, _stringLiteralC7B59E44CF6A7D4928C046D4C6907A9315E38110, ((int32_t)36));
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_10 = V_0;
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_11 = __this->___tilemap2D_10;
		NullCheck(L_9);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_9, L_10, L_11, NULL);
		// foreach (Vector3Int position in tilemap2D.cellBounds.allPositionsWithin)
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_12 = __this->___tilemap2D_10;
		NullCheck(L_12);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_13;
		L_13 = Tilemap_get_cellBounds_m2C1EDCFFD145175A83457B4F7A88CEA037DF8EB9(L_12, NULL);
		V_2 = L_13;
		PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979 L_14;
		L_14 = BoundsInt_get_allPositionsWithin_mCB3AC6C2877AF182728C238E0FA674C61011B374((&V_2), NULL);
		V_3 = L_14;
		PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979 L_15;
		L_15 = PositionEnumerator_GetEnumerator_m807AB1779109B8CB87F146953093510E61D8DB6E((&V_3), NULL);
		V_1 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012f:
			{// begin finally (depth: 1)
				PositionEnumerator_System_IDisposable_Dispose_m47826ADCC63143C39135AB628DC71002A378347A((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0121_1;
			}

IL_0083_1:
			{
				// foreach (Vector3Int position in tilemap2D.cellBounds.allPositionsWithin)
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_16;
				L_16 = PositionEnumerator_get_Current_mD06E8FE52B917BFE51F867A06B183EADFFA5CC2A((&V_1), NULL);
				V_4 = L_16;
				// TileData tileData = new TileData();
				il2cpp_codegen_initobj((&V_5), sizeof(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F));
				// TileBase tilebase = tilemap2D.GetTile(position);
				Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_17 = __this->___tilemap2D_10;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_18 = V_4;
				NullCheck(L_17);
				TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_19;
				L_19 = Tilemap_GetTile_m8500FBFF853C9E813810929BD29D7A866B516225(L_17, L_18, NULL);
				V_6 = L_19;
				// if (tilebase != null) {
				TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_20 = V_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_21;
				L_21 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_21)
				{
					goto IL_0121_1;
				}
			}
			{
				// tilebase.GetTileData(position, tilemap, ref tileData);
				TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_22 = V_6;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_23 = V_4;
				ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_24 = V_0;
				NullCheck(L_22);
				VirtualActionInvoker3< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* >::Invoke(5 /* System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */, L_22, L_23, L_24, (&V_5));
				// LightTile lightTile = new LightTile();
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_25 = (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06*)il2cpp_codegen_object_new(LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06_il2cpp_TypeInfo_var);
				NullCheck(L_25);
				LightTile__ctor_m2ED6AA336B8F469FC356A44CB4368527804602EB(L_25, NULL);
				V_7 = L_25;
				// lightTile.gridPosition = new Vector3Int(position.x, position.y, position.z);
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_26 = V_7;
				int32_t L_27;
				L_27 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&V_4), NULL);
				int32_t L_28;
				L_28 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&V_4), NULL);
				int32_t L_29;
				L_29 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&V_4), NULL);
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_30;
				memset((&L_30), 0, sizeof(L_30));
				Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_30), L_27, L_28, L_29, /*hidden argument*/NULL);
				NullCheck(L_26);
				L_26->___gridPosition_0 = L_30;
				// lightTile.scale = tilemap.GetTransformMatrix(position).lossyScale;
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_31 = V_7;
				ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_32 = V_0;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_33 = V_4;
				NullCheck(L_32);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_34;
				L_34 = VirtualFuncInvoker1< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(4 /* UnityEngine.Matrix4x4 UnityEngine.Tilemaps.ITilemap::GetTransformMatrix(UnityEngine.Vector3Int) */, L_32, L_33);
				V_8 = L_34;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
				L_35 = Matrix4x4_get_lossyScale_mFB3D4CF6408D710D607CA1D2AF94B2E4E0B57EB7((&V_8), NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
				L_36 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_35, NULL);
				NullCheck(L_31);
				L_31->___scale_9 = L_36;
				// lightTile.SetSprite(tileData.sprite);
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_37 = V_7;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_38;
				L_38 = TileData_get_sprite_m8117B1A4F4A5722F067271A0B9BEB5C1806F90D1((&V_5), NULL);
				NullCheck(L_37);
				LightTile_SetSprite_m7285D1A97F9A07290FEC014B334DEEA6920FA912_inline(L_37, L_38, NULL);
				// lightTile.GetPhysicsShapePolygons();
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_39 = V_7;
				NullCheck(L_39);
				List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_40;
				L_40 = LightTile_GetPhysicsShapePolygons_mFB8036FDF9C1E8BEAECB6012B9AB703A6A7041DD(L_39, NULL);
				// MapTiles.Add(lightTile);
				List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_41;
				L_41 = Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline(__this, NULL);
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_42 = V_7;
				NullCheck(L_41);
				List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_inline(L_41, L_42, List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_RuntimeMethod_var);
			}

IL_0121_1:
			{
				// foreach (Vector3Int position in tilemap2D.cellBounds.allPositionsWithin)
				bool L_43;
				L_43 = PositionEnumerator_MoveNext_mB225CE08AF7D18A38E9597E5B3381AE216C2DB0C((&V_1), NULL);
				if (L_43)
				{
					goto IL_0083_1;
				}
			}
			{
				goto IL_013d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013d:
	{
		// chunkManager.Update(MapTiles, this);
		TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* L_44 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___chunkManager_8;
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_45;
		L_45 = Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline(__this, NULL);
		NullCheck(L_44);
		TilemapManager_Update_m877476ABCEF8328780BD30AF2772B962527603A1(L_44, L_45, __this, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 FunkyCode.LightTilemapCollider.Isometric::TileWorldPosition(FunkyCode.LightTile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Isometric_TileWorldPosition_mB539F8853B983F35027A62D42FE8AA2EA2B4857B (Isometric_tFF8D90125CF28DB5D80059E20536A2C185EDFF5E* __this, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* ___tile0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 tilemapOffset = properties.transform.position;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_0 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0->___transform_7;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		// Vector2 tileOffset = new Vector2(tile.gridPosition.x, tile.gridPosition.y);
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_4 = ___tile0;
		NullCheck(L_4);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_5 = (&L_4->___gridPosition_0);
		int32_t L_6;
		L_6 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline(L_5, NULL);
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_7 = ___tile0;
		NullCheck(L_7);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_8 = (&L_7->___gridPosition_0);
		int32_t L_9;
		L_9 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline(L_8, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)L_6), ((float)L_9), NULL);
		// tileOffset.x += properties.cellAnchor.x;
		float* L_10 = (&(&V_0)->___x_0);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_13 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&L_13->___cellAnchor_1);
		float L_15 = L_14->___x_0;
		*((float*)L_11) = (float)((float)il2cpp_codegen_add(L_12, L_15));
		// tileOffset.y += properties.cellAnchor.y;
		float* L_16 = (&(&V_0)->___y_1);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_19 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (&L_19->___cellAnchor_1);
		float L_21 = L_20->___y_1;
		*((float*)L_17) = (float)((float)il2cpp_codegen_add(L_18, L_21));
		// tileOffset.x += properties.cellGap.x * tile.gridPosition.x;
		float* L_22 = (&(&V_0)->___x_0);
		float* L_23 = L_22;
		float L_24 = *((float*)L_23);
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_25 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_26 = (&L_25->___cellGap_2);
		float L_27 = L_26->___x_0;
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_28 = ___tile0;
		NullCheck(L_28);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_29 = (&L_28->___gridPosition_0);
		int32_t L_30;
		L_30 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline(L_29, NULL);
		*((float*)L_23) = (float)((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(L_27, ((float)L_30)))));
		// tileOffset.y += properties.cellGap.y * tile.gridPosition.y;
		float* L_31 = (&(&V_0)->___y_1);
		float* L_32 = L_31;
		float L_33 = *((float*)L_32);
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_34 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_34);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = (&L_34->___cellGap_2);
		float L_36 = L_35->___y_1;
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_37 = ___tile0;
		NullCheck(L_37);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_38 = (&L_37->___gridPosition_0);
		int32_t L_39;
		L_39 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline(L_38, NULL);
		*((float*)L_32) = (float)((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(L_36, ((float)L_39)))));
		// Vector2 tilePosition = tilemapOffset;
		V_1 = L_3;
		// tilePosition.x += tileOffset.x * 0.5f;
		float* L_40 = (&(&V_1)->___x_0);
		float* L_41 = L_40;
		float L_42 = *((float*)L_41);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = V_0;
		float L_44 = L_43.___x_0;
		*((float*)L_41) = (float)((float)il2cpp_codegen_add(L_42, ((float)il2cpp_codegen_multiply(L_44, (0.5f)))));
		// tilePosition.x += tileOffset.y * -0.5f;
		float* L_45 = (&(&V_1)->___x_0);
		float* L_46 = L_45;
		float L_47 = *((float*)L_46);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = V_0;
		float L_49 = L_48.___y_1;
		*((float*)L_46) = (float)((float)il2cpp_codegen_add(L_47, ((float)il2cpp_codegen_multiply(L_49, (-0.5f)))));
		// tilePosition.x *= properties.cellSize.x;
		float* L_50 = (&(&V_1)->___x_0);
		float* L_51 = L_50;
		float L_52 = *((float*)L_51);
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_53 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_53);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_54 = (&L_53->___cellSize_0);
		float L_55 = L_54->___x_0;
		*((float*)L_51) = (float)((float)il2cpp_codegen_multiply(L_52, L_55));
		// tilePosition.y += tileOffset.x * 0.5f * properties.cellSize.y;
		float* L_56 = (&(&V_1)->___y_1);
		float* L_57 = L_56;
		float L_58 = *((float*)L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_0;
		float L_60 = L_59.___x_0;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_61 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_61);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_62 = (&L_61->___cellSize_0);
		float L_63 = L_62->___y_1;
		*((float*)L_57) = (float)((float)il2cpp_codegen_add(L_58, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_60, (0.5f))), L_63))));
		// tilePosition.y += tileOffset.y * 0.5f * properties.cellSize.y;
		float* L_64 = (&(&V_1)->___y_1);
		float* L_65 = L_64;
		float L_66 = *((float*)L_65);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = V_0;
		float L_68 = L_67.___y_1;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_69 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_70 = (&L_69->___cellSize_0);
		float L_71 = L_70->___y_1;
		*((float*)L_65) = (float)((float)il2cpp_codegen_add(L_66, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_68, (0.5f))), L_71))));
		// if (ZasY) {
		bool L_72 = __this->___ZasY_9;
		if (!L_72)
		{
			goto IL_0179;
		}
	}
	{
		// tilePosition.y += tile.gridPosition.z * 0.25f;
		float* L_73 = (&(&V_1)->___y_1);
		float* L_74 = L_73;
		float L_75 = *((float*)L_74);
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_76 = ___tile0;
		NullCheck(L_76);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_77 = (&L_76->___gridPosition_0);
		int32_t L_78;
		L_78 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline(L_77, NULL);
		*((float*)L_74) = (float)((float)il2cpp_codegen_add(L_75, ((float)il2cpp_codegen_multiply(((float)L_78), (0.25f)))));
	}

IL_0179:
	{
		// tilePosition.x *= properties.transform.lossyScale.x;
		float* L_79 = (&(&V_1)->___x_0);
		float* L_80 = L_79;
		float L_81 = *((float*)L_80);
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_82 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_82);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83 = L_82->___transform_7;
		NullCheck(L_83);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_83, NULL);
		float L_85 = L_84.___x_2;
		*((float*)L_80) = (float)((float)il2cpp_codegen_multiply(L_81, L_85));
		// tilePosition.y *= properties.transform.lossyScale.y;
		float* L_86 = (&(&V_1)->___y_1);
		float* L_87 = L_86;
		float L_88 = *((float*)L_87);
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_89 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_89);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90 = L_89->___transform_7;
		NullCheck(L_90);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_90, NULL);
		float L_92 = L_91.___y_3;
		*((float*)L_87) = (float)((float)il2cpp_codegen_multiply(L_88, L_92));
		// return(tilePosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_93 = V_1;
		return L_93;
	}
}
// System.Single FunkyCode.LightTilemapCollider.Isometric::TileWorldRotation(FunkyCode.LightTile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Isometric_TileWorldRotation_mEE37406CA5F7296606C789B5F64F7B680FD9AE37 (Isometric_tFF8D90125CF28DB5D80059E20536A2C185EDFF5E* __this, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* ___tile0, const RuntimeMethod* method) 
{
	{
		// float worldRotation = tilemap2D.transform.eulerAngles.z;
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_0 = __this->___tilemap2D_10;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_1, NULL);
		float L_3 = L_2.___z_4;
		// return(worldRotation);
		return L_3;
	}
}
// UnityEngine.Vector2 FunkyCode.LightTilemapCollider.Isometric::TileWorldScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Isometric_TileWorldScale_m68AB1E307B7B1E42F5FE0D826DFC3E75A227D2A4 (Isometric_tFF8D90125CF28DB5D80059E20536A2C185EDFF5E* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 scale = new Vector2();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// scale.x = properties.transform.lossyScale.x; //properties.cellSize.x *
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_0 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0->___transform_7;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_1, NULL);
		float L_3 = L_2.___x_2;
		(&V_0)->___x_0 = L_3;
		// scale.y = properties.transform.lossyScale.y; // properties.cellSize.y *
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_4 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4->___transform_7;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_5, NULL);
		float L_7 = L_6.___y_3;
		(&V_0)->___y_1 = L_7;
		// return(scale);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		return L_8;
	}
}
// System.Boolean FunkyCode.LightTilemapCollider.Isometric::IsPhysicsShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Isometric_IsPhysicsShape_mD3D0DCEF95EAD629E91FF894DD2ABB0A44F64EE2 (Isometric_tFF8D90125CF28DB5D80059E20536A2C185EDFF5E* __this, const RuntimeMethod* method) 
{
	{
		// if (maskType == MaskType.SpritePhysicsShape) {
		int32_t L_0 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___maskType_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_000b;
		}
	}
	{
		// return(true);
		return (bool)1;
	}

IL_000b:
	{
		// if (shadowType == ShadowType.SpritePhysicsShape) {
		int32_t L_1 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___shadowType_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		// return(true);
		return (bool)1;
	}

IL_0016:
	{
		// return(false);
		return (bool)0;
	}
}
// System.Void FunkyCode.LightTilemapCollider.Isometric::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isometric__ctor_mE6A3926648613253E594601DE441AD85A5CD0F2E (Isometric_tFF8D90125CF28DB5D80059E20536A2C185EDFF5E* __this, const RuntimeMethod* method) 
{
	{
		Base__ctor_m356B98FE5A5B282B7B1BFD8045AE9D41ACD1239A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// FunkyCode.LightTilemapCollider.MapType FunkyCode.LightTilemapCollider.Rectangle::TilemapType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_TilemapType_mE0A7F377138337A2D74FF4849DDF7E7E93D85837 (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, const RuntimeMethod* method) 
{
	{
		// return(MapType.UnityRectangle);
		return (int32_t)(0);
	}
}
// UnityEngine.Tilemaps.ITilemap FunkyCode.LightTilemapCollider.Rectangle::GetITilemap(UnityEngine.Tilemaps.Tilemap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* Rectangle_GetITilemap_mA23471D4BA9C6BC2FFF22A42E990EAC0E36CD2D6 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* ___tilemap0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B59E44CF6A7D4928C046D4C6907A9315E38110);
		s_Il2CppMethodInitialized = true;
	}
	ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* V_0 = NULL;
	{
		// ITilemap iTilemap = (ITilemap) FormatterServices.GetUninitializedObject(typeof(ITilemap));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = FormatterServices_GetUninitializedObject_mA2B57E3C189694129FE2870B8188421DF78468A1(L_1, NULL);
		V_0 = ((ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*)CastclassClass((RuntimeObject*)L_2, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var));
		// typeof(ITilemap).GetField("m_Tilemap", BindingFlags.NonPublic | BindingFlags.Instance).SetValue(iTilemap, tilemap);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck(L_4);
		FieldInfo_t* L_5;
		L_5 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(82 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_4, _stringLiteralC7B59E44CF6A7D4928C046D4C6907A9315E38110, ((int32_t)36));
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_6 = V_0;
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_7 = ___tilemap0;
		NullCheck(L_5);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_5, L_6, L_7, NULL);
		// return iTilemap;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_8 = V_0;
		return L_8;
	}
}
// System.Boolean FunkyCode.LightTilemapCollider.Rectangle::IsPhysicsShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_IsPhysicsShape_m95BEC503C142A9B02EFF5B88036D7C99C93F40DB (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, const RuntimeMethod* method) 
{
	{
		// if (maskType == MaskType.SpritePhysicsShape)
		int32_t L_0 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___maskType_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_000b;
		}
	}
	{
		// return(true);
		return (bool)1;
	}

IL_000b:
	{
		// if (shadowType == ShadowType.SpritePhysicsShape)
		int32_t L_1 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___shadowType_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		// return(true);
		return (bool)1;
	}

IL_0016:
	{
		// return(false);
		return (bool)0;
	}
}
// System.Void FunkyCode.LightTilemapCollider.Rectangle::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_Initialize_m3BFF2E0DFECB2FACDE9D75BDA6A3CE08A6F53BE3 (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D_mBFEE80D7AEF0E476676469BB8C6767053A8C5C47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTilemapCollider2D_t66245B4B99A740FBC2F1EA873E82EE808B57E177_m401465FD86AF40A094A65CA1C995DE017FBEA77E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TilemapCollider2D_t66245B4B99A740FBC2F1EA873E82EE808B57E177* V_0 = NULL;
	{
		// base.Initialize();
		Base_Initialize_m706B406A6F86B7350095390AE2F5B787A9CFD998(__this, NULL);
		// if (!UpdateProperties())
		bool L_0;
		L_0 = Base_UpdateProperties_mC22745424EB9DE120419BD8845C15281D89C675E(__this, NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// lightTilemapCollider2D = gameObject.GetComponent<LightTilemapCollider2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___gameObject_4;
		NullCheck(L_1);
		LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* L_2;
		L_2 = GameObject_GetComponent_TisLightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D_mBFEE80D7AEF0E476676469BB8C6767053A8C5C47(L_1, GameObject_GetComponent_TisLightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D_mBFEE80D7AEF0E476676469BB8C6767053A8C5C47_RuntimeMethod_var);
		__this->___lightTilemapCollider2D_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lightTilemapCollider2D_10), (void*)L_2);
		// TilemapCollider2D tilemapCollider = gameObject.GetComponent<TilemapCollider2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___gameObject_4;
		NullCheck(L_3);
		TilemapCollider2D_t66245B4B99A740FBC2F1EA873E82EE808B57E177* L_4;
		L_4 = GameObject_GetComponent_TisTilemapCollider2D_t66245B4B99A740FBC2F1EA873E82EE808B57E177_m401465FD86AF40A094A65CA1C995DE017FBEA77E(L_3, GameObject_GetComponent_TisTilemapCollider2D_t66245B4B99A740FBC2F1EA873E82EE808B57E177_m401465FD86AF40A094A65CA1C995DE017FBEA77E_RuntimeMethod_var);
		V_0 = L_4;
		// if (tilemapCollider != null) {
		TilemapCollider2D_t66245B4B99A740FBC2F1EA873E82EE808B57E177* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// properties.colliderOffset = tilemapCollider.offset;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_7 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		TilemapCollider2D_t66245B4B99A740FBC2F1EA873E82EE808B57E177* L_8 = V_0;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Collider2D_get_offset_m6DC45B352DDE28C7B08607BFA3BECEC6E5F31914(L_8, NULL);
		NullCheck(L_7);
		L_7->___colliderOffset_3 = L_9;
	}

IL_0046:
	{
		// properties.cellAnchor += properties.colliderOffset;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_10 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_11 = L_10;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = L_11->___cellAnchor_1;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_13 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = L_13->___colliderOffset_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_12, L_14, NULL);
		NullCheck(L_11);
		L_11->___cellAnchor_1 = L_15;
		// InitializeGrid();
		Rectangle_InitializeGrid_m0CB6BF3BC6AA44A5D4673ED41D861EDE405408EF(__this, NULL);
		// InitializeCompositeCollider();
		Rectangle_InitializeCompositeCollider_m75D6EE9FEC2CC8F3F3C67D472AE7656A17A2C8A1(__this, NULL);
		// chunkManager.Update(MapTiles, this);
		TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* L_16 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___chunkManager_8;
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_17;
		L_17 = Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline(__this, NULL);
		NullCheck(L_16);
		TilemapManager_Update_m877476ABCEF8328780BD30AF2772B962527603A1(L_16, L_17, __this, NULL);
		// }
		return;
	}
}
// System.Void FunkyCode.LightTilemapCollider.Rectangle::InitializeCompositeCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_InitializeCompositeCollider_m75D6EE9FEC2CC8F3F3C67D472AE7656A17A2C8A1 (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8_m44BA97AD29CAE69EFAFA406BEC9BC9AB0DC5DFE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m96738B846C1581D66034AD5C445C7D1FA3C50ECF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Polygon2Collider2D_tA3B1D29DF1F185806590CD6F430CF75FD909CF66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* V_0 = NULL;
	{
		// compositeColliders.Clear();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_0 = __this->___compositeColliders_9;
		NullCheck(L_0);
		List_1_Clear_m96738B846C1581D66034AD5C445C7D1FA3C50ECF_inline(L_0, List_1_Clear_m96738B846C1581D66034AD5C445C7D1FA3C50ECF_RuntimeMethod_var);
		// CompositeCollider2D compositeCollider2D = gameObject.GetComponent<CompositeCollider2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___gameObject_4;
		NullCheck(L_1);
		CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* L_2;
		L_2 = GameObject_GetComponent_TisCompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8_m44BA97AD29CAE69EFAFA406BEC9BC9AB0DC5DFE0(L_1, GameObject_GetComponent_TisCompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8_m44BA97AD29CAE69EFAFA406BEC9BC9AB0DC5DFE0_RuntimeMethod_var);
		V_0 = L_2;
		// if (compositeCollider2D != null) {
		CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// compositeColliders = Polygon2Collider2D.CreateFromCompositeCollider(compositeCollider2D);
		CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Polygon2Collider2D_tA3B1D29DF1F185806590CD6F430CF75FD909CF66_il2cpp_TypeInfo_var);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_6;
		L_6 = Polygon2Collider2D_CreateFromCompositeCollider_m08D6500541F5206B032F36E50448EE3954B85719(L_5, NULL);
		__this->___compositeColliders_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___compositeColliders_9), (void*)L_6);
	}

IL_002c:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 FunkyCode.LightTilemapCollider.Rectangle::TileWorldPosition(FunkyCode.LightTile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rectangle_TileWorldPosition_m0647BC520D1FCEBF085A9C36E9AD9374EB0A4507 (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* ___tile0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector2 position = tilemap2D.CellToWorld(tile.gridPosition);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_0 = __this->___tilemap2D_11;
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_1 = ___tile0;
		NullCheck(L_1);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_2 = L_1->___gridPosition_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = GridLayout_CellToWorld_m513467A7565AD77DD66F9032C76AC96BA1DC0105(L_0, L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		V_0 = L_4;
		// float rotation = properties.cellAnchor.Atan2() + tilemap2D.transform.eulerAngles.z * Mathf.Deg2Rad;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_5 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = L_5->___cellAnchor_1;
		float L_7;
		L_7 = Vector2Extensions_Atan2_mBE4AB9FA9022AAA1D7F4A5B00D8B2B5FBC1BD924(L_6, NULL);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_8 = __this->___tilemap2D_11;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_9, NULL);
		// float sizeX = properties.cellAnchor.x * tilemap2D.transform.localScale.x;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_11 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&L_11->___cellAnchor_1);
		float L_13 = L_12->___x_0;
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_14 = __this->___tilemap2D_11;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_15, NULL);
		float L_17 = L_16.___x_2;
		V_1 = ((float)il2cpp_codegen_multiply(L_13, L_17));
		// float sizeY = properties.cellAnchor.y * tilemap2D.transform.localScale.y;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_18 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&L_18->___cellAnchor_1);
		float L_20 = L_19->___y_1;
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_21 = __this->___tilemap2D_11;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_22, NULL);
		float L_24 = L_23.___y_3;
		V_2 = ((float)il2cpp_codegen_multiply(L_20, L_24));
		// float distance = Mathf.Sqrt(sizeX * sizeX + sizeY * sizeY);
		float L_25 = V_1;
		float L_26 = V_1;
		float L_27 = V_2;
		float L_28 = V_2;
		float L_29;
		L_29 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_25, L_26)), ((float)il2cpp_codegen_multiply(L_27, L_28)))));
		// position.x += properties.grid.cellSize.x - 1;
		float* L_30 = (&(&V_0)->___x_0);
		float* L_31 = L_30;
		float L_32 = *((float*)L_31);
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_33 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_33);
		Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* L_34 = L_33->___grid_6;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Grid_get_cellSize_m5512593532CABA9CFC058123B923AFA483D6003E(L_34, NULL);
		float L_36 = L_35.___x_2;
		*((float*)L_31) = (float)((float)il2cpp_codegen_add(L_32, ((float)il2cpp_codegen_subtract(L_36, (1.0f)))));
		// position.y += properties.grid.cellSize.y - 1;
		float* L_37 = (&(&V_0)->___y_1);
		float* L_38 = L_37;
		float L_39 = *((float*)L_38);
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_40 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_40);
		Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* L_41 = L_40->___grid_6;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Grid_get_cellSize_m5512593532CABA9CFC058123B923AFA483D6003E(L_41, NULL);
		float L_43 = L_42.___y_3;
		*((float*)L_38) = (float)((float)il2cpp_codegen_add(L_39, ((float)il2cpp_codegen_subtract(L_43, (1.0f)))));
		// position.x += sizeX;
		float* L_44 = (&(&V_0)->___x_0);
		float* L_45 = L_44;
		float L_46 = *((float*)L_45);
		float L_47 = V_1;
		*((float*)L_45) = (float)((float)il2cpp_codegen_add(L_46, L_47));
		// position.y += sizeY;
		float* L_48 = (&(&V_0)->___y_1);
		float* L_49 = L_48;
		float L_50 = *((float*)L_49);
		float L_51 = V_2;
		*((float*)L_49) = (float)((float)il2cpp_codegen_add(L_50, L_51));
		// return(position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_0;
		return L_52;
	}
}
// System.Single FunkyCode.LightTilemapCollider.Rectangle::TileWorldRotation(FunkyCode.LightTile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rectangle_TileWorldRotation_m190463119D3D8F1A437EDD78FA2DD5E6C8687023 (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* ___tile0, const RuntimeMethod* method) 
{
	{
		// float worldRotation = tilemap2D.transform.eulerAngles.z;
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_0 = __this->___tilemap2D_11;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_1, NULL);
		float L_3 = L_2.___z_4;
		// return(worldRotation);
		return L_3;
	}
}
// UnityEngine.Vector2 FunkyCode.LightTilemapCollider.Rectangle::TileWorldScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rectangle_TileWorldScale_m3D6F71DCA15439C19177C680D1177F25E5214E34 (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Transform transform = properties.transform;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_0 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0->___transform_7;
		V_0 = L_1;
		// Vector2 scale = Vector2.one;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		V_1 = L_2;
		// scale.x *= transform.lossyScale.x;
		float* L_3 = (&(&V_1)->___x_0);
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_6, NULL);
		float L_8 = L_7.___x_2;
		*((float*)L_4) = (float)((float)il2cpp_codegen_multiply(L_5, L_8));
		// scale.y *= transform.lossyScale.y;
		float* L_9 = (&(&V_1)->___y_1);
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_0;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_12, NULL);
		float L_14 = L_13.___y_3;
		*((float*)L_10) = (float)((float)il2cpp_codegen_multiply(L_11, L_14));
		// bool isGrid = false;
		// if (isGrid) {
		if (!0)
		{
			goto IL_0077;
		}
	}
	{
		// scale.x *= properties.cellSize.x;
		float* L_15 = (&(&V_1)->___x_0);
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_18 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&L_18->___cellSize_0);
		float L_20 = L_19->___x_0;
		*((float*)L_16) = (float)((float)il2cpp_codegen_multiply(L_17, L_20));
		// scale.y *= properties.cellSize.y;
		float* L_21 = (&(&V_1)->___y_1);
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_24 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = (&L_24->___cellSize_0);
		float L_26 = L_25->___y_1;
		*((float*)L_22) = (float)((float)il2cpp_codegen_multiply(L_23, L_26));
	}

IL_0077:
	{
		// return(scale);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_1;
		return L_27;
	}
}
// System.Void FunkyCode.LightTilemapCollider.Rectangle::RefreshTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_RefreshTile_m3A3A7C777F681ADB4D78C79F5D009062AFC455B4 (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___positionInt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m65880922C2EDC50E1841EB72EC6A0224FDE77934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* V_0 = NULL;
	ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* V_1 = NULL;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_2 = NULL;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_3;
	memset((&V_3), 0, sizeof(V_3));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* V_6 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// LightTile refreshTile = GetTileToRefresh(positionInt);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___positionInt0;
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_1;
		L_1 = Rectangle_GetTileToRefresh_m1820024B6AC81974F3045B46D6E7E9BE6F1F2B90(__this, L_0, NULL);
		V_0 = L_1;
		// ITilemap tilemap = GetITilemap(tilemap2D);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_2 = __this->___tilemap2D_11;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_3;
		L_3 = Rectangle_GetITilemap_mA23471D4BA9C6BC2FFF22A42E990EAC0E36CD2D6(L_2, NULL);
		V_1 = L_3;
		// TileBase tilebase = tilemap.GetTile(positionInt);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_4 = V_1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5 = ___positionInt0;
		NullCheck(L_4);
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_6;
		L_6 = VirtualFuncInvoker1< TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(5 /* UnityEngine.Tilemaps.TileBase UnityEngine.Tilemaps.ITilemap::GetTile(UnityEngine.Vector3Int) */, L_4, L_5);
		V_2 = L_6;
		// TileData tileData = new TileData();
		il2cpp_codegen_initobj((&V_3), sizeof(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F));
		// if (refreshTile != null)
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_7 = V_0;
		if (!L_7)
		{
			goto IL_00c2;
		}
	}
	{
		// if (tilebase != null)
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_8 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_00a6;
		}
	}
	{
		// tilebase.GetTileData(positionInt, tilemap, ref tileData);
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_10 = V_2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_11 = ___positionInt0;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_12 = V_1;
		NullCheck(L_10);
		VirtualActionInvoker3< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* >::Invoke(5 /* System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */, L_10, L_11, L_12, (&V_3));
		// Matrix4x4 matrix = tilemap.GetTransformMatrix(positionInt);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_13 = V_1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_14 = ___positionInt0;
		NullCheck(L_13);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15;
		L_15 = VirtualFuncInvoker1< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(4 /* UnityEngine.Matrix4x4 UnityEngine.Tilemaps.ITilemap::GetTransformMatrix(UnityEngine.Vector3Int) */, L_13, L_14);
		V_4 = L_15;
		// refreshTile.ResetLocal();
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_16 = V_0;
		NullCheck(L_16);
		LightTile_ResetLocal_m0E324801519B73B8296233980756A59E2B76E5DC(L_16, NULL);
		// refreshTile.rotation = matrix.rotation.eulerAngles.z;
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_17 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Matrix4x4_get_rotation_m7E2C29FCB2AAFAE4D7B4FBD3563E9EDB53F5A8BB((&V_4), NULL);
		V_5 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_5), NULL);
		float L_20 = L_19.___z_4;
		NullCheck(L_17);
		L_17->___rotation_10 = L_20;
		// refreshTile.scale = matrix.lossyScale;
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Matrix4x4_get_lossyScale_mFB3D4CF6408D710D607CA1D2AF94B2E4E0B57EB7((&V_4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_22, NULL);
		NullCheck(L_21);
		L_21->___scale_9 = L_23;
		// refreshTile.SetSprite(tileData.sprite);
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_24 = V_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_25;
		L_25 = TileData_get_sprite_m8117B1A4F4A5722F067271A0B9BEB5C1806F90D1((&V_3), NULL);
		NullCheck(L_24);
		LightTile_SetSprite_m7285D1A97F9A07290FEC014B334DEEA6920FA912_inline(L_24, L_25, NULL);
		// refreshTile.GetPhysicsShapePolygons();
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_26 = V_0;
		NullCheck(L_26);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_27;
		L_27 = LightTile_GetPhysicsShapePolygons_mFB8036FDF9C1E8BEAECB6012B9AB703A6A7041DD(L_26, NULL);
		// refreshTile.occluded = false;
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_28 = V_0;
		NullCheck(L_28);
		L_28->___occluded_5 = (bool)0;
		// refreshTile.colliderType = tileData.colliderType;
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_29 = V_0;
		int32_t L_30;
		L_30 = TileData_get_colliderType_mE24736B2027681E98CE454717A92833CE7E64D55((&V_3), NULL);
		NullCheck(L_29);
		L_29->___colliderType_6 = L_30;
		goto IL_015a;
	}

IL_00a6:
	{
		// lightTilemapCollider2D.rectangle.MapTiles.Remove(refreshTile);
		LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* L_31 = __this->___lightTilemapCollider2D_10;
		NullCheck(L_31);
		Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* L_32 = L_31->___rectangle_10;
		NullCheck(L_32);
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_33;
		L_33 = Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline(L_32, NULL);
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_34 = V_0;
		NullCheck(L_33);
		bool L_35;
		L_35 = List_1_Remove_m65880922C2EDC50E1841EB72EC6A0224FDE77934(L_33, L_34, List_1_Remove_m65880922C2EDC50E1841EB72EC6A0224FDE77934_RuntimeMethod_var);
		goto IL_015a;
	}

IL_00c2:
	{
		// if (tilebase != null)
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_37)
		{
			goto IL_015a;
		}
	}
	{
		// LightTile lightTile = new LightTile();
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_38 = (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06*)il2cpp_codegen_object_new(LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		LightTile__ctor_m2ED6AA336B8F469FC356A44CB4368527804602EB(L_38, NULL);
		V_6 = L_38;
		// lightTile.gridPosition = positionInt;
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_39 = V_6;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_40 = ___positionInt0;
		NullCheck(L_39);
		L_39->___gridPosition_0 = L_40;
		// tilebase.GetTileData(positionInt, tilemap, ref tileData);
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_41 = V_2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_42 = ___positionInt0;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_43 = V_1;
		NullCheck(L_41);
		VirtualActionInvoker3< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* >::Invoke(5 /* System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */, L_41, L_42, L_43, (&V_3));
		// Matrix4x4 matrix = tilemap.GetTransformMatrix(positionInt);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_44 = V_1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_45 = ___positionInt0;
		NullCheck(L_44);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_46;
		L_46 = VirtualFuncInvoker1< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(4 /* UnityEngine.Matrix4x4 UnityEngine.Tilemaps.ITilemap::GetTransformMatrix(UnityEngine.Vector3Int) */, L_44, L_45);
		V_7 = L_46;
		// lightTile.rotation = matrix.rotation.eulerAngles.z;
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_47 = V_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48;
		L_48 = Matrix4x4_get_rotation_m7E2C29FCB2AAFAE4D7B4FBD3563E9EDB53F5A8BB((&V_7), NULL);
		V_5 = L_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_5), NULL);
		float L_50 = L_49.___z_4;
		NullCheck(L_47);
		L_47->___rotation_10 = L_50;
		// lightTile.scale = matrix.lossyScale;
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_51 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Matrix4x4_get_lossyScale_mFB3D4CF6408D710D607CA1D2AF94B2E4E0B57EB7((&V_7), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		L_53 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_52, NULL);
		NullCheck(L_51);
		L_51->___scale_9 = L_53;
		// lightTile.SetSprite(tileData.sprite);
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_54 = V_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_55;
		L_55 = TileData_get_sprite_m8117B1A4F4A5722F067271A0B9BEB5C1806F90D1((&V_3), NULL);
		NullCheck(L_54);
		LightTile_SetSprite_m7285D1A97F9A07290FEC014B334DEEA6920FA912_inline(L_54, L_55, NULL);
		// lightTile.GetPhysicsShapePolygons();
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_56 = V_6;
		NullCheck(L_56);
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_57;
		L_57 = LightTile_GetPhysicsShapePolygons_mFB8036FDF9C1E8BEAECB6012B9AB703A6A7041DD(L_56, NULL);
		// lightTile.colliderType = tileData.colliderType;
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_58 = V_6;
		int32_t L_59;
		L_59 = TileData_get_colliderType_mE24736B2027681E98CE454717A92833CE7E64D55((&V_3), NULL);
		NullCheck(L_58);
		L_58->___colliderType_6 = L_59;
		// lightTilemapCollider2D.rectangle.MapTiles.Add(lightTile);
		LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* L_60 = __this->___lightTilemapCollider2D_10;
		NullCheck(L_60);
		Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* L_61 = L_60->___rectangle_10;
		NullCheck(L_61);
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_62;
		L_62 = Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline(L_61, NULL);
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_63 = V_6;
		NullCheck(L_62);
		List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_inline(L_62, L_63, List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_RuntimeMethod_var);
	}

IL_015a:
	{
		// chunkManager.Update(MapTiles, lightTilemapCollider2D.GetCurrentTilemap());
		TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* L_64 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___chunkManager_8;
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_65;
		L_65 = Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline(__this, NULL);
		LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* L_66 = __this->___lightTilemapCollider2D_10;
		NullCheck(L_66);
		Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* L_67;
		L_67 = LightTilemapCollider2D_GetCurrentTilemap_m5F932BB86A69EC845535017923E6CD22E60C9576(L_66, NULL);
		NullCheck(L_64);
		TilemapManager_Update_m877476ABCEF8328780BD30AF2772B962527603A1(L_64, L_65, L_67, NULL);
		// Light2D.ForceUpdateAll();
		il2cpp_codegen_runtime_class_init_inline(Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F_il2cpp_TypeInfo_var);
		Light2D_ForceUpdateAll_mEB191EDD5FF0B7490742EEE1EBCCAC5F9994BA4C(NULL);
		// }
		return;
	}
}
// FunkyCode.LightTile FunkyCode.LightTilemapCollider.Rectangle::GetTileToRefresh(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* Rectangle_GetTileToRefresh_m1820024B6AC81974F3045B46D6E7E9BE6F1F2B90 (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___gridPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* V_1 = NULL;
	LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* V_2 = NULL;
	{
		// foreach(LightTile tile in MapTiles)
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_0;
		L_0 = Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline(__this, NULL);
		NullCheck(L_0);
		Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F L_1;
		L_1 = List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B(L_0, List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C((&V_0), Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_000e_1:
			{
				// foreach(LightTile tile in MapTiles)
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_2;
				L_2 = Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_inline((&V_0), Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_RuntimeMethod_var);
				V_1 = L_2;
				// if (tile.gridPosition == gridPosition) {
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_3 = V_1;
				NullCheck(L_3);
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_4 = L_3->___gridPosition_0;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5 = ___gridPosition0;
				bool L_6;
				L_6 = Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline(L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_0028_1;
				}
			}
			{
				// return(tile);
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_7 = V_1;
				V_2 = L_7;
				goto IL_0043;
			}

IL_0028_1:
			{
				// foreach(LightTile tile in MapTiles)
				bool L_8;
				L_8 = Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3((&V_0), Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// return(null);
		return (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06*)NULL;
	}

IL_0043:
	{
		// }
		LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_9 = V_2;
		return L_9;
	}
}
// System.Void FunkyCode.LightTilemapCollider.Rectangle::InitializeGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_InitializeGrid_m0CB6BF3BC6AA44A5D4673ED41D861EDE405408EF (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mACB443D71A089820C6C2DBF83849FCF1ECF3BE58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* V_0 = NULL;
	PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979 V_1;
	memset((&V_1), 0, sizeof(V_1));
	BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 V_2;
	memset((&V_2), 0, sizeof(V_2));
	PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_4;
	memset((&V_4), 0, sizeof(V_4));
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_5;
	memset((&V_5), 0, sizeof(V_5));
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_6 = NULL;
	LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* V_7 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		// MapTiles.Clear();
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_0;
		L_0 = Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline(__this, NULL);
		NullCheck(L_0);
		List_1_Clear_mACB443D71A089820C6C2DBF83849FCF1ECF3BE58_inline(L_0, List_1_Clear_mACB443D71A089820C6C2DBF83849FCF1ECF3BE58_RuntimeMethod_var);
		// tilemap2D = properties.tilemap;
		TilemapProperties_t92096AEE2F1925950734867E3BB2D49F8677D310* L_1 = ((Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2*)__this)->___properties_6;
		NullCheck(L_1);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_2 = L_1->___tilemap_5;
		__this->___tilemap2D_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tilemap2D_11), (void*)L_2);
		// ITilemap tilemap = GetITilemap(tilemap2D);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_3 = __this->___tilemap2D_11;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_4;
		L_4 = Rectangle_GetITilemap_mA23471D4BA9C6BC2FFF22A42E990EAC0E36CD2D6(L_3, NULL);
		V_0 = L_4;
		// foreach (Vector3Int position in tilemap2D.cellBounds.allPositionsWithin) {
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_5 = __this->___tilemap2D_11;
		NullCheck(L_5);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_6;
		L_6 = Tilemap_get_cellBounds_m2C1EDCFFD145175A83457B4F7A88CEA037DF8EB9(L_5, NULL);
		V_2 = L_6;
		PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979 L_7;
		L_7 = BoundsInt_get_allPositionsWithin_mCB3AC6C2877AF182728C238E0FA674C61011B374((&V_2), NULL);
		V_3 = L_7;
		PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979 L_8;
		L_8 = PositionEnumerator_GetEnumerator_m807AB1779109B8CB87F146953093510E61D8DB6E((&V_3), NULL);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0185:
			{// begin finally (depth: 1)
				PositionEnumerator_System_IDisposable_Dispose_m47826ADCC63143C39135AB628DC71002A378347A((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0177_1;
			}

IL_0049_1:
			{
				// foreach (Vector3Int position in tilemap2D.cellBounds.allPositionsWithin) {
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_9;
				L_9 = PositionEnumerator_get_Current_mD06E8FE52B917BFE51F867A06B183EADFFA5CC2A((&V_1), NULL);
				V_4 = L_9;
				// TileData tileData = new TileData();
				il2cpp_codegen_initobj((&V_5), sizeof(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F));
				// TileBase tilebase = tilemap2D.GetTile(position);
				Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_10 = __this->___tilemap2D_11;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_11 = V_4;
				NullCheck(L_10);
				TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_12;
				L_12 = Tilemap_GetTile_m8500FBFF853C9E813810929BD29D7A866B516225(L_10, L_11, NULL);
				V_6 = L_12;
				// if (tilebase != null) {
				TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_13 = V_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_14)
				{
					goto IL_0177_1;
				}
			}
			{
				// tilebase.GetTileData(position, tilemap, ref tileData);
				TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_15 = V_6;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_16 = V_4;
				ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_17 = V_0;
				NullCheck(L_15);
				VirtualActionInvoker3< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* >::Invoke(5 /* System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */, L_15, L_16, L_17, (&V_5));
				// LightTile lightTile = new LightTile();
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_18 = (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06*)il2cpp_codegen_object_new(LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06_il2cpp_TypeInfo_var);
				NullCheck(L_18);
				LightTile__ctor_m2ED6AA336B8F469FC356A44CB4368527804602EB(L_18, NULL);
				V_7 = L_18;
				// lightTile.gridPosition = position;
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_19 = V_7;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_20 = V_4;
				NullCheck(L_19);
				L_19->___gridPosition_0 = L_20;
				// if (shadowOptimization) {
				bool L_21 = __this->___shadowOptimization_12;
				if (!L_21)
				{
					goto IL_0108_1;
				}
			}
			{
				// bool left = GetTile(position + new Vector3Int(1, 0, 0));
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_22 = V_4;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_23;
				memset((&L_23), 0, sizeof(L_23));
				Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_23), 1, 0, 0, /*hidden argument*/NULL);
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_24;
				L_24 = Vector3Int_op_Addition_m263A29CC729DFC6216FEA87255C5BA5496D196D1_inline(L_22, L_23, NULL);
				bool L_25;
				L_25 = Rectangle_GetTile_mDBDBD8C7D6733FB7D6D329D381E8146268F60FD7(__this, L_24, NULL);
				V_9 = L_25;
				// bool up = GetTile(position + new Vector3Int(0, 1, 0));
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_26 = V_4;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_27;
				memset((&L_27), 0, sizeof(L_27));
				Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_27), 0, 1, 0, /*hidden argument*/NULL);
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_28;
				L_28 = Vector3Int_op_Addition_m263A29CC729DFC6216FEA87255C5BA5496D196D1_inline(L_26, L_27, NULL);
				bool L_29;
				L_29 = Rectangle_GetTile_mDBDBD8C7D6733FB7D6D329D381E8146268F60FD7(__this, L_28, NULL);
				V_10 = L_29;
				// bool right = GetTile(position + new Vector3Int(-1, 0, 0));
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_30 = V_4;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_31;
				memset((&L_31), 0, sizeof(L_31));
				Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_31), (-1), 0, 0, /*hidden argument*/NULL);
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_32;
				L_32 = Vector3Int_op_Addition_m263A29CC729DFC6216FEA87255C5BA5496D196D1_inline(L_30, L_31, NULL);
				bool L_33;
				L_33 = Rectangle_GetTile_mDBDBD8C7D6733FB7D6D329D381E8146268F60FD7(__this, L_32, NULL);
				V_11 = L_33;
				// bool down = GetTile(position + new Vector3Int(0, -1, 0));
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_34 = V_4;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_35;
				memset((&L_35), 0, sizeof(L_35));
				Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_35), 0, (-1), 0, /*hidden argument*/NULL);
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_36;
				L_36 = Vector3Int_op_Addition_m263A29CC729DFC6216FEA87255C5BA5496D196D1_inline(L_34, L_35, NULL);
				bool L_37;
				L_37 = Rectangle_GetTile_mDBDBD8C7D6733FB7D6D329D381E8146268F60FD7(__this, L_36, NULL);
				V_12 = L_37;
				// lightTile.occluded = left && right && up && down;
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_38 = V_7;
				bool L_39 = V_9;
				bool L_40 = V_11;
				bool L_41 = V_10;
				bool L_42 = V_12;
				NullCheck(L_38);
				L_38->___occluded_5 = (bool)((int32_t)(((int32_t)(((int32_t)((int32_t)L_39&(int32_t)L_40))&(int32_t)L_41))&(int32_t)L_42));
			}

IL_0108_1:
			{
				// Matrix4x4 matrix = tilemap2D.GetTransformMatrix(position);
				Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_43 = __this->___tilemap2D_11;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_44 = V_4;
				NullCheck(L_43);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_45;
				L_45 = Tilemap_GetTransformMatrix_mD2D0E0922FF1AB8478FB8ECEE0CD219FB4801D45(L_43, L_44, NULL);
				V_8 = L_45;
				// lightTile.rotation = matrix.rotation.eulerAngles.z;
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_46 = V_7;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47;
				L_47 = Matrix4x4_get_rotation_m7E2C29FCB2AAFAE4D7B4FBD3563E9EDB53F5A8BB((&V_8), NULL);
				V_13 = L_47;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
				L_48 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_13), NULL);
				float L_49 = L_48.___z_4;
				NullCheck(L_46);
				L_46->___rotation_10 = L_49;
				// lightTile.scale = matrix.lossyScale;
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_50 = V_7;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
				L_51 = Matrix4x4_get_lossyScale_mFB3D4CF6408D710D607CA1D2AF94B2E4E0B57EB7((&V_8), NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
				L_52 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_51, NULL);
				NullCheck(L_50);
				L_50->___scale_9 = L_52;
				// lightTile.SetSprite(tileData.sprite);
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_53 = V_7;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_54;
				L_54 = TileData_get_sprite_m8117B1A4F4A5722F067271A0B9BEB5C1806F90D1((&V_5), NULL);
				NullCheck(L_53);
				LightTile_SetSprite_m7285D1A97F9A07290FEC014B334DEEA6920FA912_inline(L_53, L_54, NULL);
				// lightTile.GetPhysicsShapePolygons();
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_55 = V_7;
				NullCheck(L_55);
				List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_56;
				L_56 = LightTile_GetPhysicsShapePolygons_mFB8036FDF9C1E8BEAECB6012B9AB703A6A7041DD(L_55, NULL);
				// lightTile.colliderType = tileData.colliderType;
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_57 = V_7;
				int32_t L_58;
				L_58 = TileData_get_colliderType_mE24736B2027681E98CE454717A92833CE7E64D55((&V_5), NULL);
				NullCheck(L_57);
				L_57->___colliderType_6 = L_58;
				// MapTiles.Add(lightTile);
				List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_59;
				L_59 = Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline(__this, NULL);
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_60 = V_7;
				NullCheck(L_59);
				List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_inline(L_59, L_60, List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_RuntimeMethod_var);
			}

IL_0177_1:
			{
				// foreach (Vector3Int position in tilemap2D.cellBounds.allPositionsWithin) {
				bool L_61;
				L_61 = PositionEnumerator_MoveNext_mB225CE08AF7D18A38E9597E5B3381AE216C2DB0C((&V_1), NULL);
				if (L_61)
				{
					goto IL_0049_1;
				}
			}
			{
				goto IL_0193;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0193:
	{
		// }
		return;
	}
}
// System.Boolean FunkyCode.LightTilemapCollider.Rectangle::GetTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_GetTile_mDBDBD8C7D6733FB7D6D329D381E8146268F60FD7 (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_0 = NULL;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_1;
	memset((&V_1), 0, sizeof(V_1));
	ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* V_2 = NULL;
	{
		// TileBase tilebase = tilemap2D.GetTile(position);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_0 = __this->___tilemap2D_11;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___position0;
		NullCheck(L_0);
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_2;
		L_2 = Tilemap_GetTile_m8500FBFF853C9E813810929BD29D7A866B516225(L_0, L_1, NULL);
		V_0 = L_2;
		// if (tilebase == null) {
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		// return(false);
		return (bool)0;
	}

IL_0018:
	{
		// TileData tileData = new TileData();
		il2cpp_codegen_initobj((&V_1), sizeof(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F));
		// ITilemap tilemap = GetITilemap(tilemap2D);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_5 = __this->___tilemap2D_11;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_6;
		L_6 = Rectangle_GetITilemap_mA23471D4BA9C6BC2FFF22A42E990EAC0E36CD2D6(L_5, NULL);
		V_2 = L_6;
		// tilebase.GetTileData(position, tilemap, ref tileData);
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_7 = V_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_8 = ___position0;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_9 = V_2;
		NullCheck(L_7);
		VirtualActionInvoker3< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* >::Invoke(5 /* System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */, L_7, L_8, L_9, (&V_1));
		// if (tileData.sprite == null) {
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10;
		L_10 = TileData_get_sprite_m8117B1A4F4A5722F067271A0B9BEB5C1806F90D1((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		// return(false);
		return (bool)0;
	}

IL_0047:
	{
		// return(true);
		return (bool)1;
	}
}
// System.Void FunkyCode.LightTilemapCollider.Rectangle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle__ctor_m8DE69374AE69345DBC802DDAA5ACE40C154D5F66 (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Polygon2> compositeColliders = new List<Polygon2>();
		List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* L_0 = (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*)il2cpp_codegen_object_new(List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F(L_0, List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var);
		__this->___compositeColliders_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___compositeColliders_9), (void*)L_0);
		Base__ctor_m356B98FE5A5B282B7B1BFD8045AE9D41ACD1239A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FunkyCode.Chunks.TilemapManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapManager_Initialize_m8C33BB538D743CD4A9510121DBEE9139056D92C0 (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lighting2D_tC57B79084FE0F1E4C5B2BFDF710A7D5CDA053240_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1U5BU2CU5D_t8F789D376BCF4DBC7C84974697314D3AC7A621CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!initialized)
		bool L_0 = __this->___initialized_6;
		if (L_0)
		{
			goto IL_0042;
		}
	}
	{
		// initialized = true;
		__this->___initialized_6 = (bool)1;
		// ChunkSize = Lighting2D.ProjectSettings.chunks.chunkSize;
		il2cpp_codegen_runtime_class_init_inline(Lighting2D_tC57B79084FE0F1E4C5B2BFDF710A7D5CDA053240_il2cpp_TypeInfo_var);
		ProjectSettings_tF1A6266C74517361A17F8055B28EE33E3398665F* L_1;
		L_1 = Lighting2D_get_ProjectSettings_m05BDEDB17C8D70E579B4DEBDA2FA481B15478481(NULL);
		NullCheck(L_1);
		Chunks_t4E49B7B7A566B45E2FF48AB5CE59D6FF42ABFA10* L_2 = L_1->___chunks_7;
		NullCheck(L_2);
		int32_t L_3 = L_2->___chunkSize_1;
		il2cpp_codegen_runtime_class_init_inline(TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var);
		((TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_StaticFields*)il2cpp_codegen_static_fields_for(TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var))->___ChunkSize_1 = L_3;
		// display = new LightTile[1000];
		LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D* L_4 = (LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D*)(LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D*)SZArrayNew(LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1000));
		__this->___display_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___display_0), (void*)L_4);
		// maps = new List<LightTile>[100, 100];
		il2cpp_array_size_t L_6[] = { (il2cpp_array_size_t)((int32_t)100), (il2cpp_array_size_t)((int32_t)100) };
		List_1U5BU2CU5D_t8F789D376BCF4DBC7C84974697314D3AC7A621CA* L_5 = (List_1U5BU2CU5D_t8F789D376BCF4DBC7C84974697314D3AC7A621CA*)GenArrayNew(List_1U5BU2CU5D_t8F789D376BCF4DBC7C84974697314D3AC7A621CA_il2cpp_TypeInfo_var, L_6);
		__this->___maps_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___maps_2), (void*)L_5);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Int32 FunkyCode.Chunks.TilemapManager::GetTiles(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TilemapManager_GetTiles_m1F37CA1F9C72F357657FF18A9D4F002A11E6A5E0 (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___worldRect0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lighting2D_tC57B79084FE0F1E4C5B2BFDF710A7D5CDA053240_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// distplayCount = 0;
		__this->___distplayCount_3 = 0;
		// if (Lighting2D.ProjectSettings.chunks.enabled)
		il2cpp_codegen_runtime_class_init_inline(Lighting2D_tC57B79084FE0F1E4C5B2BFDF710A7D5CDA053240_il2cpp_TypeInfo_var);
		ProjectSettings_tF1A6266C74517361A17F8055B28EE33E3398665F* L_0;
		L_0 = Lighting2D_get_ProjectSettings_m05BDEDB17C8D70E579B4DEBDA2FA481B15478481(NULL);
		NullCheck(L_0);
		Chunks_t4E49B7B7A566B45E2FF48AB5CE59D6FF42ABFA10* L_1 = L_0->___chunks_7;
		NullCheck(L_1);
		bool L_2 = L_1->___enabled_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// GenerateChunks(worldRect);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = ___worldRect0;
		TilemapManager_GenerateChunks_m13A0779E313EC24D98AF66C02F64356B5D1A279E(__this, L_3, NULL);
		goto IL_0028;
	}

IL_0021:
	{
		// GenerateSimple(worldRect);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4 = ___worldRect0;
		TilemapManager_GenerateSimple_mECB96A8A3404CF150756AFE2E97F747020C75C78(__this, L_4, NULL);
	}

IL_0028:
	{
		// return(distplayCount);
		int32_t L_5 = __this->___distplayCount_3;
		return L_5;
	}
}
// System.Void FunkyCode.Chunks.TilemapManager::Update(System.Collections.Generic.List`1<FunkyCode.LightTile>,FunkyCode.LightTilemapCollider.Base)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapManager_Update_m877476ABCEF8328780BD30AF2772B962527603A1 (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* __this, List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* ___tiles0, Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* ___tilemapCollider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lighting2D_tC57B79084FE0F1E4C5B2BFDF710A7D5CDA053240_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2875DE16B62D8DF415E19E34D1FE08B8CD509C02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F V_2;
	memset((&V_2), 0, sizeof(V_2));
	LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* V_3 = NULL;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// this.tiles = tiles;
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_0 = ___tiles0;
		__this->___tiles_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tiles_4), (void*)L_0);
		// Initialize();
		TilemapManager_Initialize_m8C33BB538D743CD4A9510121DBEE9139056D92C0(__this, NULL);
		// this.tilemapCollider = tilemapCollider;
		Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* L_1 = ___tilemapCollider1;
		__this->___tilemapCollider_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tilemapCollider_5), (void*)L_1);
		// if (!Lighting2D.ProjectSettings.chunks.enabled)
		il2cpp_codegen_runtime_class_init_inline(Lighting2D_tC57B79084FE0F1E4C5B2BFDF710A7D5CDA053240_il2cpp_TypeInfo_var);
		ProjectSettings_tF1A6266C74517361A17F8055B28EE33E3398665F* L_2;
		L_2 = Lighting2D_get_ProjectSettings_m05BDEDB17C8D70E579B4DEBDA2FA481B15478481(NULL);
		NullCheck(L_2);
		Chunks_t4E49B7B7A566B45E2FF48AB5CE59D6FF42ABFA10* L_3 = L_2->___chunks_7;
		NullCheck(L_3);
		bool L_4 = L_3->___enabled_0;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		// return;
		return;
	}

IL_0026:
	{
		// for(int x = 0; x < 100; x++)
		V_0 = 0;
		goto IL_004d;
	}

IL_002a:
	{
		// for(int y = 0; y < 100; y++)
		V_1 = 0;
		goto IL_0044;
	}

IL_002e:
	{
		// maps[x, y] = new List<LightTile>();
		List_1U5BU2CU5D_t8F789D376BCF4DBC7C84974697314D3AC7A621CA* L_5 = __this->___maps_2;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_8 = (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA*)il2cpp_codegen_object_new(List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m2875DE16B62D8DF415E19E34D1FE08B8CD509C02(L_8, List_1__ctor_m2875DE16B62D8DF415E19E34D1FE08B8CD509C02_RuntimeMethod_var);
		NullCheck(L_5);
		(L_5)->SetAt(L_6, L_7, L_8);
		// for(int y = 0; y < 100; y++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0044:
	{
		// for(int y = 0; y < 100; y++)
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)100))))
		{
			goto IL_002e;
		}
	}
	{
		// for(int x = 0; x < 100; x++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for(int x = 0; x < 100; x++)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)100))))
		{
			goto IL_002a;
		}
	}
	{
		// foreach(var tile in tiles)
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_13 = ___tiles0;
		NullCheck(L_13);
		Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F L_14;
		L_14 = List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B(L_13, List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B_RuntimeMethod_var);
		V_2 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C((&V_2), Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0090_1;
			}

IL_005b_1:
			{
				// foreach(var tile in tiles)
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_15;
				L_15 = Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_inline((&V_2), Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_RuntimeMethod_var);
				V_3 = L_15;
				// var tilePosition = tile.GetWorldPosition(tilemapCollider);
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_16 = V_3;
				Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* L_17 = ___tilemapCollider1;
				NullCheck(L_16);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
				L_18 = LightTile_GetWorldPosition_mFFC4031CCB1CD2D3932A86168740E9F80DEE5BF5(L_16, L_17, NULL);
				// var chunkPosition = Transform(tilePosition);
				il2cpp_codegen_runtime_class_init_inline(TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var);
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_19;
				L_19 = TilemapManager_Transform_mD14E27E4B14252B818C8EDC35BE15388B75B6216(L_18, NULL);
				V_4 = L_19;
				// maps[chunkPosition.x, chunkPosition.y].Add(tile);
				List_1U5BU2CU5D_t8F789D376BCF4DBC7C84974697314D3AC7A621CA* L_20 = __this->___maps_2;
				int32_t L_21;
				L_21 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_4), NULL);
				int32_t L_22;
				L_22 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_4), NULL);
				NullCheck(L_20);
				List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_23;
				L_23 = (L_20)->GetAt(L_21, L_22);
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_24 = V_3;
				NullCheck(L_23);
				List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_inline(L_23, L_24, List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_RuntimeMethod_var);
			}

IL_0090_1:
			{
				// foreach(var tile in tiles)
				bool L_25;
				L_25 = Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3((&V_2), Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_005b_1;
				}
			}
			{
				goto IL_00a9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void FunkyCode.Chunks.TilemapManager::GenerateChunks(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapManager_GenerateChunks_m13A0779E313EC24D98AF66C02F64356B5D1A279E (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___worldRect0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F V_7;
	memset((&V_7), 0, sizeof(V_7));
	LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* V_8 = NULL;
	{
		// Initialize();
		TilemapManager_Initialize_m8C33BB538D743CD4A9510121DBEE9139056D92C0(__this, NULL);
		// var p0 = new Vector2(worldRect.x, worldRect.y);
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___worldRect0), NULL);
		float L_1;
		L_1 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___worldRect0), NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		// var p1 = new Vector2(worldRect.x + worldRect.width, worldRect.y + worldRect.height);
		float L_2;
		L_2 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___worldRect0), NULL);
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___worldRect0), NULL);
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___worldRect0), NULL);
		float L_5;
		L_5 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___worldRect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_add(L_2, L_3)), ((float)il2cpp_codegen_add(L_4, L_5)), /*hidden argument*/NULL);
		// var tp0 = Transform(p0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8;
		L_8 = TilemapManager_Transform_mD14E27E4B14252B818C8EDC35BE15388B75B6216(L_7, NULL);
		V_1 = L_8;
		// var tp1 = Transform(p1);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9;
		L_9 = TilemapManager_Transform_mD14E27E4B14252B818C8EDC35BE15388B75B6216(L_6, NULL);
		V_2 = L_9;
		// if (tp0.x > tp1.x)
		int32_t L_10;
		L_10 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_1), NULL);
		int32_t L_11;
		L_11 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_2), NULL);
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_006b;
		}
	}
	{
		// tp1.x += 100;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_12 = (&V_2);
		int32_t L_13;
		L_13 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_12, NULL);
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline(L_12, ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)100))), NULL);
	}

IL_006b:
	{
		// if (tp0.y > tp1.y)
		int32_t L_14;
		L_14 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_1), NULL);
		int32_t L_15;
		L_15 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_2), NULL);
		if ((((int32_t)L_14) <= ((int32_t)L_15)))
		{
			goto IL_008b;
		}
	}
	{
		// tp1.y += 100;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_16 = (&V_2);
		int32_t L_17;
		L_17 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_16, NULL);
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline(L_16, ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)100))), NULL);
	}

IL_008b:
	{
		// for(int x = tp0.x; x <= tp1.x; x++)
		int32_t L_18;
		L_18 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_1), NULL);
		V_3 = L_18;
		goto IL_0140;
	}

IL_0098:
	{
		// for(int y = tp0.y; y <= tp1.y; y++)
		int32_t L_19;
		L_19 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_1), NULL);
		V_4 = L_19;
		goto IL_012e;
	}

IL_00a6:
	{
		// int tx = x % 100;
		int32_t L_20 = V_3;
		V_5 = ((int32_t)(L_20%((int32_t)100)));
		// int ty = y % 100;
		int32_t L_21 = V_4;
		V_6 = ((int32_t)(L_21%((int32_t)100)));
		// if (maps[tx, ty] == null)
		List_1U5BU2CU5D_t8F789D376BCF4DBC7C84974697314D3AC7A621CA* L_22 = __this->___maps_2;
		int32_t L_23 = V_5;
		int32_t L_24 = V_6;
		NullCheck(L_22);
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_25;
		L_25 = (L_22)->GetAt(L_23, L_24);
		if (!L_25)
		{
			goto IL_0128;
		}
	}
	{
		// foreach(var tile in maps[tx, ty])
		List_1U5BU2CU5D_t8F789D376BCF4DBC7C84974697314D3AC7A621CA* L_26 = __this->___maps_2;
		int32_t L_27 = V_5;
		int32_t L_28 = V_6;
		NullCheck(L_26);
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_29;
		L_29 = (L_26)->GetAt(L_27, L_28);
		NullCheck(L_29);
		Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F L_30;
		L_30 = List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B(L_29, List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B_RuntimeMethod_var);
		V_7 = L_30;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C((&V_7), Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_010f_1;
			}

IL_00dc_1:
			{
				// foreach(var tile in maps[tx, ty])
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_31;
				L_31 = Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_inline((&V_7), Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_RuntimeMethod_var);
				V_8 = L_31;
				// if (distplayCount < 1000)
				int32_t L_32 = __this->___distplayCount_3;
				if ((((int32_t)L_32) >= ((int32_t)((int32_t)1000))))
				{
					goto IL_010f_1;
				}
			}
			{
				// display[distplayCount] = tile;
				LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D* L_33 = __this->___display_0;
				int32_t L_34 = __this->___distplayCount_3;
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_35 = V_8;
				NullCheck(L_33);
				ArrayElementTypeCheck (L_33, L_35);
				(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06*)L_35);
				// distplayCount ++;
				int32_t L_36 = __this->___distplayCount_3;
				__this->___distplayCount_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
			}

IL_010f_1:
			{
				// foreach(var tile in maps[tx, ty])
				bool L_37;
				L_37 = Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3((&V_7), Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_00dc_1;
				}
			}
			{
				goto IL_0128;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0128:
	{
		// for(int y = tp0.y; y <= tp1.y; y++)
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_012e:
	{
		// for(int y = tp0.y; y <= tp1.y; y++)
		int32_t L_39 = V_4;
		int32_t L_40;
		L_40 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_2), NULL);
		if ((((int32_t)L_39) <= ((int32_t)L_40)))
		{
			goto IL_00a6;
		}
	}
	{
		// for(int x = tp0.x; x <= tp1.x; x++)
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_0140:
	{
		// for(int x = tp0.x; x <= tp1.x; x++)
		int32_t L_42 = V_3;
		int32_t L_43;
		L_43 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_2), NULL);
		if ((((int32_t)L_42) <= ((int32_t)L_43)))
		{
			goto IL_0098;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FunkyCode.Chunks.TilemapManager::GenerateSimple(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapManager_GenerateSimple_mECB96A8A3404CF150756AFE2E97F747020C75C78 (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___worldRect0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9845E704C6377D55B31D91581AF8383ACE36E871);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* V_1 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (tiles == null)
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_0 = __this->___tiles_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (tilemapCollider == null)
		Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* L_1 = __this->___tilemapCollider_5;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		return;
	}

IL_0012:
	{
		// foreach(var tile in tiles)
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_2 = __this->___tiles_4;
		NullCheck(L_2);
		Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F L_3;
		L_3 = List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B(L_2, List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C((&V_0), Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0074_1;
			}

IL_0020_1:
			{
				// foreach(var tile in tiles)
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_4;
				L_4 = Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_inline((&V_0), Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_RuntimeMethod_var);
				V_1 = L_4;
				// if (distplayCount < 1000)
				int32_t L_5 = __this->___distplayCount_3;
				if ((((int32_t)L_5) >= ((int32_t)((int32_t)1000))))
				{
					goto IL_006a_1;
				}
			}
			{
				// var tilePosition = tile.GetWorldPosition(tilemapCollider);
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_6 = V_1;
				Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* L_7 = __this->___tilemapCollider_5;
				NullCheck(L_6);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
				L_8 = LightTile_GetWorldPosition_mFFC4031CCB1CD2D3932A86168740E9F80DEE5BF5(L_6, L_7, NULL);
				V_2 = L_8;
				// if (worldRect.Contains(tilePosition))
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
				bool L_10;
				L_10 = Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B((&___worldRect0), L_9, NULL);
				if (!L_10)
				{
					goto IL_0074_1;
				}
			}
			{
				// display[distplayCount] = tile;
				LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D* L_11 = __this->___display_0;
				int32_t L_12 = __this->___distplayCount_3;
				LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* L_13 = V_1;
				NullCheck(L_11);
				ArrayElementTypeCheck (L_11, L_13);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06*)L_13);
				// distplayCount ++;
				int32_t L_14 = __this->___distplayCount_3;
				__this->___distplayCount_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
				goto IL_0074_1;
			}

IL_006a_1:
			{
				// Debug.LogWarning("Smart Lighting 2D: Tiles cache overflow");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral9845E704C6377D55B31D91581AF8383ACE36E871, NULL);
			}

IL_0074_1:
			{
				// foreach(var tile in tiles)
				bool L_15;
				L_15 = Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3((&V_0), Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_008d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008d:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2Int FunkyCode.Chunks.TilemapManager::Transform(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A TilemapManager_Transform_mD14E27E4B14252B818C8EDC35BE15388B75B6216 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// float tx = (position.x / ChunkSize);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		float L_1 = L_0.___x_0;
		il2cpp_codegen_runtime_class_init_inline(TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var);
		int32_t L_2 = ((TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_StaticFields*)il2cpp_codegen_static_fields_for(TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var))->___ChunkSize_1;
		V_0 = ((float)(L_1/((float)L_2)));
		// float ty = (position.y / ChunkSize);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___position0;
		float L_4 = L_3.___y_1;
		int32_t L_5 = ((TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_StaticFields*)il2cpp_codegen_static_fields_for(TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var))->___ChunkSize_1;
		// int txInt = (int)tx;
		float L_6 = V_0;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_6);
		// int tyInt = (int)ty;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_4/((float)L_5))));
		// if (txInt < 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// txInt = txInt + 1000;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)1000)));
	}

IL_002c:
	{
		// if (tyInt < 0)
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		// tyInt = tyInt + 1000;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)1000)));
	}

IL_0038:
	{
		// txInt = txInt % 100;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)(L_11%((int32_t)100)));
		// tyInt = tyInt % 100;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)(L_12%((int32_t)100)));
		// return(new Vector2Int(txInt, tyInt));
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_15), L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// UnityEngine.Vector2Int FunkyCode.Chunks.TilemapManager::TransformBounds(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A TilemapManager_TransformBounds_mDE706AEEDFFFD565A9616A0DCCC68B2761BEC5F6 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float tx = (position.x / ChunkSize);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		float L_1 = L_0.___x_0;
		il2cpp_codegen_runtime_class_init_inline(TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var);
		int32_t L_2 = ((TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_StaticFields*)il2cpp_codegen_static_fields_for(TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var))->___ChunkSize_1;
		// float ty = (position.y / ChunkSize);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___position0;
		float L_4 = L_3.___y_1;
		int32_t L_5 = ((TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_StaticFields*)il2cpp_codegen_static_fields_for(TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var))->___ChunkSize_1;
		V_0 = ((float)(L_4/((float)L_5)));
		// return(new Vector2Int(Mathf.FloorToInt(tx), Mathf.FloorToInt(ty)));
		int32_t L_6;
		L_6 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(L_1/((float)L_2))), NULL);
		float L_7 = V_0;
		int32_t L_8;
		L_8 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_7, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_9), L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void FunkyCode.Chunks.TilemapManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapManager__ctor_mC30C31BC8877572720C7CF8B0ED5959470B9C3E4 (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FunkyCode.Chunks.TilemapManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapManager__cctor_m98743D751CB0BAFC64CB5731AA295AC210398B9D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public int ChunkSize = 10;
		((TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_StaticFields*)il2cpp_codegen_static_fields_for(TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var))->___ChunkSize_1 = ((int32_t)10);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SortList_set_Count_m7CEB540F99367D488EA05963142912868C51C06C_inline (SortList_t06AC051DCDD31922C338190E8E262E4032CA216F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Count {private set; get;}
		int32_t L_0 = ___value0;
		__this->___U3CCountU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortList_get_Count_m4830DC544F5E80AC711235B1C33AD0A1C48051E6_inline (SortList_t06AC051DCDD31922C338190E8E262E4032CA216F* __this, const RuntimeMethod* method) 
{
	{
		// public int Count {private set; get;}
		int32_t L_0 = __this->___U3CCountU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CollisionEvent2D_Invoke_m5AE37A4322E0C8EC078A512E1EC5E7AD59B7F21D_inline (CollisionEvent2D_tDDFB46264CC980E31635286FE9C75F50D38EBD25* __this, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 ___collision0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___collision0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) 
{
	{
		// public List<LightTile> MapTiles => mapTiles;
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_0 = __this->___mapTiles_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		int32_t L_2 = ___z2;
		__this->___m_Z_2 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LightTile_SetSprite_m7285D1A97F9A07290FEC014B334DEEA6920FA912_inline (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite0, const RuntimeMethod* method) 
{
	{
		// this.sprite = sprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___sprite0;
		__this->___sprite_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sprite_7), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___lhs0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___lhs0), NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___rhs1), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___lhs0), NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___rhs1), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4;
		L_4 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___lhs0), NULL);
		int32_t L_5;
		L_5 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___rhs1), NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Vector3Int_op_Addition_m263A29CC729DFC6216FEA87255C5BA5496D196D1_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___a0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___b1, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___a0), NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___b1), NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___a0), NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___b1), NULL);
		int32_t L_4;
		L_4 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___a0), NULL);
		int32_t L_5;
		L_5 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___b1), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_6), ((int32_t)il2cpp_codegen_add(L_0, L_1)), ((int32_t)il2cpp_codegen_add(L_2, L_3)), ((int32_t)il2cpp_codegen_add(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0036;
	}

IL_0036:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_X_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Y_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) 
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_8);
		return;
	}

IL_0034:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___item0;
		((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1CB35939B2AF7CCD45EE1A6198F9B7BFDF5905BA_gshared_inline (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 ___item0, const RuntimeMethod* method) 
{
	LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C* L_1 = (LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C* L_6 = V_0;
		int32_t L_7 = V_1;
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7)L_8);
		return;
	}

IL_0034:
	{
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_9 = ___item0;
		((  void (*) (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D*, LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2045D625ADB5C6D73108B3E4EC952779C4A23EA2_gshared_inline (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD83344EFEEFE4B81A1881DEC0D23DCED56729953_gshared_inline (List_1_tF1F86E888772C6E7AA10DAAC59FE9C891B5B258D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C* L_3 = (LightCollision2DU5BU5D_tE375E0DF10AB97E77DF978679A814339FEF05D8C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 Enumerator_get_Current_m545CD6DBA4BCB85CF0E9E04EFECBB702BDF867CB_gshared_inline (Enumerator_tE641AA00FCC079FDDA0627B65952706B9B3F894F* __this, const RuntimeMethod* method) 
{
	{
		LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7 L_0 = (LightCollision2D_t4B27DF4C15C66C18A22D685A5AD0307B103AF6C7)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
