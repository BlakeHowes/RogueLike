#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// FunkyCode.LightColliderLayer`1<FunkyCode.LightTilemapCollider2D>
struct LightColliderLayer_1_t93A0EBD611E199715B981091F60A655DA171784E;
// System.Collections.Generic.List`1<FunkyCode.LightTile>
struct List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA;
// System.Collections.Generic.List`1<FunkyCode.LightTilemapCollider2D>
struct List_1_t53210D23CC79388549233000764405C28B06BEFA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2>
struct List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2;
// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>
struct List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// FunkyCode.LightTile[]
struct LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// FunkyCode.Utilities.Polygon2[]
struct Polygon2U5BU5D_tB3FC47D2BF1F996FEA9E45FBAF784EF60CE74A55;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Collections.Generic.List`1<FunkyCode.LightTile>[,]
struct List_1U5BU2CU5D_t8F789D376BCF4DBC7C84974697314D3AC7A621CA;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// FunkyCode.LightTilemapCollider.Base
struct Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// FunkyCode.LightingSettings.BumpMapMode
struct BumpMapMode_t6A34FC9F18E4D274179FA244CF6CC9300948C080;
// Cainos.PixelArtTopDown_Basic.CameraFollow
struct CameraFollow_tB9CFCA11D08C449EDB5D74EFF782161E65507009;
// FunkyCode.LightingSettings.Chunks
struct Chunks_t4E49B7B7A566B45E2FF48AB5CE59D6FF42ABFA10;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.CompositeCollider2D
struct CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8;
// FunkyCode.LightingSettings.EditorView
struct EditorView_t599C5C5AE6D9722C1D05952454777D9F562DFEF3;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// FunkyCode.LightingSettings.Gizmos
struct Gizmos_t78439F9F9CC75683F6AEF6C9A01B503778F72C05;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UnityEngine.Grid
struct Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE;
// UnityEngine.GridLayout
struct GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B;
// FunkyCode.LightTilemapCollider.Hexagon
struct Hexagon_tF485227D12FC1DC72A9D432DFB5CD7ADC867C9AC;
// UnityEngine.Tilemaps.ITilemap
struct ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164;
// FunkyCode.LightTilemapCollider.Isometric
struct Isometric_tFF8D90125CF28DB5D80059E20536A2C185EDFF5E;
// Cainos.PixelArtTopDown_Basic.LayerTrigger
struct LayerTrigger_t158E5324EF2A4EED6197CB78B282D3F536CFEAD7;
// FunkyCode.LightTile
struct LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06;
// FunkyCode.LightTilemapCollider2D
struct LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D;
// FunkyCode.LightTilemapTransform
struct LightTilemapTransform_tD68C51F4D0846371FD7918AEE0DDD7F913AF3D08;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// FunkyCode.MeshObject
struct MeshObject_t482448E354D58CD9F8EBAF2D4A0815C649B835EF;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// FunkyCode.SpriteExtension.PhysicsShape
struct PhysicsShape_t8AF7F1684DF5A1BC8575E4B37445958AA517BBC7;
// FunkyCode.LightingSettings.Profile
struct Profile_tAD78BE693E7497B38FC822DC924DCB13A72E1949;
// FunkyCode.LightingSettings.ProjectSettings
struct ProjectSettings_tF1A6266C74517361A17F8055B28EE33E3398665F;
// Cainos.PixelArtTopDown_Basic.PropsAltar
struct PropsAltar_t34AD2F1806D637C3CEAA9AF6BD83A720D7AAB52F;
// FunkyCode.LightTilemapCollider.Rectangle
struct Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// Cainos.PixelArtTopDown_Basic.SpriteColorAnimation
struct SpriteColorAnimation_t373C1E8CD39C1319910260A297527CCB466E6F7A;
// FunkyCode.SpriteMeshObject
struct SpriteMeshObject_t091413E240336D1284B8D70ED8A08C3A17E9DE23;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
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
// Cainos.PixelArtTopDown_Basic.TopDownCharacterController
struct TopDownCharacterController_t640AB3B7A48B183A3130F3A26D41B94290273BA5;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Light2D_tFBDB275AC39768FD76304F85CD52E5A07148072F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lighting2D_tC57B79084FE0F1E4C5B2BFDF710A7D5CDA053240_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1U5BU2CU5D_t8F789D376BCF4DBC7C84974697314D3AC7A621CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Polygon2Collider2D_tA3B1D29DF1F185806590CD6F430CF75FD909CF66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral9845E704C6377D55B31D91581AF8383ACE36E871;
IL2CPP_EXTERN_C String_t* _stringLiteralC53C15EA098684991F8F2C3F89C5829550973A30;
IL2CPP_EXTERN_C String_t* _stringLiteralC7B59E44CF6A7D4928C046D4C6907A9315E38110;
IL2CPP_EXTERN_C String_t* _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3C2D00F58F2CEF8EDC4987C46410682ADF303F5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA6CD94D365C6D74C0BE0C207BF24BD26881DEB07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3F8F17D7B6CC376502C9A5BFB61614047DA306E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m28AE696A5ACE284C03E477F958FC8CE355F127DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA20BAE82D9C77A7EAC394317EB4707E8C0E07C69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8_m44BA97AD29CAE69EFAFA406BEC9BC9AB0DC5DFE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D_mBFEE80D7AEF0E476676469BB8C6767053A8C5C47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTilemapCollider2D_t66245B4B99A740FBC2F1EA873E82EE808B57E177_m401465FD86AF40A094A65CA1C995DE017FBEA77E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mCFB2B79DEC87933C801879C6DD061AB74EC283E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m96738B846C1581D66034AD5C445C7D1FA3C50ECF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mACB443D71A089820C6C2DBF83849FCF1ECF3BE58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC8224EBDB7A1269FFD7FDEA14CCCD22F3CE0697B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE8D29EC71FAB4BB66AE2CBC30CA541099FAC6501_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m65880922C2EDC50E1841EB72EC6A0224FDE77934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2875DE16B62D8DF415E19E34D1FE08B8CD509C02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_0_0_0_var;

struct LightTileU5BU5D_t0E1F1E6D74107FA4B6FC26827256F5993AB0918D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28;
struct List_1U5BU2CU5D_t8F789D376BCF4DBC7C84974697314D3AC7A621CA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>
struct List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// FunkyCode.LightingSettings.Chunks
struct Chunks_t4E49B7B7A566B45E2FF48AB5CE59D6FF42ABFA10  : public RuntimeObject
{
	// System.Boolean FunkyCode.LightingSettings.Chunks::enabled
	bool ___enabled_0;
	// System.Int32 FunkyCode.LightingSettings.Chunks::chunkSize
	int32_t ___chunkSize_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.SpriteRenderer>
struct Enumerator_t0C0568BBE5A7C577F6D9E574CDC99A5400521695 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ____current_3;
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

// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
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

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// Cainos.PixelArtTopDown_Basic.CameraFollow
struct CameraFollow_tB9CFCA11D08C449EDB5D74EFF782161E65507009  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Cainos.PixelArtTopDown_Basic.CameraFollow::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// System.Single Cainos.PixelArtTopDown_Basic.CameraFollow::lerpSpeed
	float ___lerpSpeed_5;
	// UnityEngine.Vector3 Cainos.PixelArtTopDown_Basic.CameraFollow::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_6;
	// UnityEngine.Vector3 Cainos.PixelArtTopDown_Basic.CameraFollow::targetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos_7;
};

// UnityEngine.CompositeCollider2D
struct CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// UnityEngine.Grid
struct Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE  : public GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B
{
};

// Cainos.PixelArtTopDown_Basic.LayerTrigger
struct LayerTrigger_t158E5324EF2A4EED6197CB78B282D3F536CFEAD7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Cainos.PixelArtTopDown_Basic.LayerTrigger::layer
	String_t* ___layer_4;
	// System.String Cainos.PixelArtTopDown_Basic.LayerTrigger::sortingLayer
	String_t* ___sortingLayer_5;
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

// Cainos.PixelArtTopDown_Basic.PropsAltar
struct PropsAltar_t34AD2F1806D637C3CEAA9AF6BD83A720D7AAB52F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer> Cainos.PixelArtTopDown_Basic.PropsAltar::runes
	List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* ___runes_4;
	// System.Single Cainos.PixelArtTopDown_Basic.PropsAltar::lerpSpeed
	float ___lerpSpeed_5;
	// UnityEngine.Color Cainos.PixelArtTopDown_Basic.PropsAltar::curColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___curColor_6;
	// UnityEngine.Color Cainos.PixelArtTopDown_Basic.PropsAltar::targetColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___targetColor_7;
};

// Cainos.PixelArtTopDown_Basic.SpriteColorAnimation
struct SpriteColorAnimation_t373C1E8CD39C1319910260A297527CCB466E6F7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Gradient Cainos.PixelArtTopDown_Basic.SpriteColorAnimation::gradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___gradient_4;
	// System.Single Cainos.PixelArtTopDown_Basic.SpriteColorAnimation::time
	float ___time_5;
	// UnityEngine.SpriteRenderer Cainos.PixelArtTopDown_Basic.SpriteColorAnimation::sr
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___sr_6;
	// System.Single Cainos.PixelArtTopDown_Basic.SpriteColorAnimation::timer
	float ___timer_7;
};

// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751  : public GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B
{
};

// UnityEngine.Tilemaps.TilemapCollider2D
struct TilemapCollider2D_t66245B4B99A740FBC2F1EA873E82EE808B57E177  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// Cainos.PixelArtTopDown_Basic.TopDownCharacterController
struct TopDownCharacterController_t640AB3B7A48B183A3130F3A26D41B94290273BA5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Cainos.PixelArtTopDown_Basic.TopDownCharacterController::speed
	float ___speed_4;
	// UnityEngine.Animator Cainos.PixelArtTopDown_Basic.TopDownCharacterController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28  : public RuntimeArray
{
	ALIGN_FIELD (8) SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* m_Items[1];

	inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* value)
	{
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.FormatterServices::GetUninitializedObject(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormatterServices_GetUninitializedObject_mA2B57E3C189694129FE2870B8188421DF78468A1 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void FunkyCode.LightTilemapCollider.Base::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_Initialize_m706B406A6F86B7350095390AE2F5B787A9CFD998 (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) ;
// System.Boolean FunkyCode.LightTilemapCollider.Base::UpdateProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Base_UpdateProperties_mC22745424EB9DE120419BD8845C15281D89C675E (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) ;
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
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Collider2D::get_offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Collider2D_get_offset_m6DC45B352DDE28C7B08607BFA3BECEC6E5F31914 (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void FunkyCode.LightTilemapCollider.Rectangle::InitializeGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_InitializeGrid_m0CB6BF3BC6AA44A5D4673ED41D861EDE405408EF (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, const RuntimeMethod* method) ;
// System.Void FunkyCode.LightTilemapCollider.Rectangle::InitializeCompositeCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_InitializeCompositeCollider_m75D6EE9FEC2CC8F3F3C67D472AE7656A17A2C8A1 (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<FunkyCode.LightTile> FunkyCode.LightTilemapCollider.Base::get_MapTiles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) ;
// System.Void FunkyCode.Chunks.TilemapManager::Update(System.Collections.Generic.List`1<FunkyCode.LightTile>,FunkyCode.LightTilemapCollider.Base)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapManager_Update_m877476ABCEF8328780BD30AF2772B962527603A1 (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* __this, List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* ___tiles0, Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* ___tilemapCollider1, const RuntimeMethod* method) ;
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
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.Utilities.Polygon2Collider2D::CreateFromCompositeCollider(UnityEngine.CompositeCollider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* Polygon2Collider2D_CreateFromCompositeCollider_m08D6500541F5206B032F36E50448EE3954B85719 (CompositeCollider2D_t58511A535241FD7BDA84C6F3DF2C38220D4079D8* ___compositeCollider0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.GridLayout::CellToWorld(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GridLayout_CellToWorld_m513467A7565AD77DD66F9032C76AC96BA1DC0105 (GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___cellPosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Single FunkyCode.Utilities.Vector2Extensions::Atan2(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Extensions_Atan2_mBE4AB9FA9022AAA1D7F4A5B00D8B2B5FBC1BD924 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Grid::get_cellSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Grid_get_cellSize_m5512593532CABA9CFC058123B923AFA483D6003E (Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
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
// UnityEngine.Vector3 UnityEngine.Matrix4x4::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_get_lossyScale_mFB3D4CF6408D710D607CA1D2AF94B2E4E0B57EB7 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.Tilemaps.TileData::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* TileData_get_sprite_m8117B1A4F4A5722F067271A0B9BEB5C1806F90D1 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, const RuntimeMethod* method) ;
// System.Void FunkyCode.LightTile::SetSprite(UnityEngine.Sprite)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LightTile_SetSprite_m7285D1A97F9A07290FEC014B334DEEA6920FA912_inline (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2> FunkyCode.LightTile::GetPhysicsShapePolygons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* LightTile_GetPhysicsShapePolygons_mFB8036FDF9C1E8BEAECB6012B9AB703A6A7041DD (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* __this, const RuntimeMethod* method) ;
// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.TileData::get_colliderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TileData_get_colliderType_mE24736B2027681E98CE454717A92833CE7E64D55 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<FunkyCode.LightTile>::Remove(T)
inline bool List_1_Remove_m65880922C2EDC50E1841EB72EC6A0224FDE77934 (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* __this, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA*, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void FunkyCode.LightTile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightTile__ctor_m2ED6AA336B8F469FC356A44CB4368527804602EB (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FunkyCode.LightTile>::Add(T)
inline void List_1_Add_mB46329FFCE02F2503704FD0A45301C078EDE1F29_inline (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* __this, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA*, LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// FunkyCode.LightTilemapCollider.Base FunkyCode.LightTilemapCollider2D::GetCurrentTilemap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* LightTilemapCollider2D_GetCurrentTilemap_m5F932BB86A69EC845535017923E6CD22E60C9576 (LightTilemapCollider2D_t33FB1C28094C0D346326FF2A4C1439A815C2217D* __this, const RuntimeMethod* method) ;
// System.Void FunkyCode.Light2D::ForceUpdateAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light2D_ForceUpdateAll_mEB191EDD5FF0B7490742EEE1EBCCAC5F9994BA4C (const RuntimeMethod* method) ;
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
// System.Boolean UnityEngine.Vector3Int::op_Equality(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___lhs0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<FunkyCode.LightTile>::MoveNext()
inline bool Enumerator_MoveNext_m58CECA712E1D6D0BCACF4C35B146ECEA2CD243F3 (Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2EECFBD9E8795DF8D025BD4DFE796893F4A13F6F*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<FunkyCode.LightTile>::Clear()
inline void List_1_Clear_mACB443D71A089820C6C2DBF83849FCF1ECF3BE58_inline (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
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
// System.Void UnityEngine.Vector3Int::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.Vector3Int::op_Addition(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Vector3Int_op_Addition_m263A29CC729DFC6216FEA87255C5BA5496D196D1_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___a0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___b1, const RuntimeMethod* method) ;
// System.Boolean FunkyCode.LightTilemapCollider.Rectangle::GetTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_GetTile_mDBDBD8C7D6733FB7D6D329D381E8146268F60FD7 (Rectangle_t149BE3A2A0AD6EB75ED751D1F31C9275448F8AD4* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tilemap::GetTransformMatrix(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Tilemap_GetTransformMatrix_mD2D0E0922FF1AB8478FB8ECEE0CD219FB4801D45 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.BoundsInt/PositionEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PositionEnumerator_MoveNext_mB225CE08AF7D18A38E9597E5B3381AE216C2DB0C (PositionEnumerator_t9E06E9233E4B19BA4289A8C1040D7B3A819C7979* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FunkyCode.Utilities.Polygon2>::.ctor()
inline void List_1__ctor_mB9716F4D2719A7DB44ECA85680A88BC1F814A94F (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDE1E9F6AD117ADA8F357F3E9E28B0525058700C2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void FunkyCode.LightTilemapCollider.Base::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base__ctor_m356B98FE5A5B282B7B1BFD8045AE9D41ACD1239A (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) ;
// FunkyCode.LightingSettings.ProjectSettings FunkyCode.Lighting2D::get_ProjectSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProjectSettings_tF1A6266C74517361A17F8055B28EE33E3398665F* Lighting2D_get_ProjectSettings_m05BDEDB17C8D70E579B4DEBDA2FA481B15478481 (const RuntimeMethod* method) ;
// System.Void FunkyCode.Chunks.TilemapManager::GenerateChunks(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapManager_GenerateChunks_m13A0779E313EC24D98AF66C02F64356B5D1A279E (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___worldRect0, const RuntimeMethod* method) ;
// System.Void FunkyCode.Chunks.TilemapManager::GenerateSimple(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapManager_GenerateSimple_mECB96A8A3404CF150756AFE2E97F747020C75C78 (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___worldRect0, const RuntimeMethod* method) ;
// System.Void FunkyCode.Chunks.TilemapManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapManager_Initialize_m8C33BB538D743CD4A9510121DBEE9139056D92C0 (TilemapManager_t3D657373EBF39C1DAA1BDE5B7F78CB6803699C3C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FunkyCode.LightTile>::.ctor()
inline void List_1__ctor_m2875DE16B62D8DF415E19E34D1FE08B8CD509C02 (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Vector2 FunkyCode.LightTile::GetWorldPosition(FunkyCode.LightTilemapCollider.Base)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 LightTile_GetWorldPosition_mFFC4031CCB1CD2D3932A86168740E9F80DEE5BF5 (LightTile_t91A5964E1FEFD83A19ADC3F9E2A3698527586C06* __this, Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* ___tilemap0, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
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
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.SpriteRenderer>()
inline SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* GameObject_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mCFB2B79DEC87933C801879C6DD061AB74EC283E6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>::GetEnumerator()
inline Enumerator_t0C0568BBE5A7C577F6D9E574CDC99A5400521695 List_1_GetEnumerator_mE8D29EC71FAB4BB66AE2CBC30CA541099FAC6501 (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0C0568BBE5A7C577F6D9E574CDC99A5400521695 (*) (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.SpriteRenderer>::Dispose()
inline void Enumerator_Dispose_mA6CD94D365C6D74C0BE0C207BF24BD26881DEB07 (Enumerator_t0C0568BBE5A7C577F6D9E574CDC99A5400521695* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0C0568BBE5A7C577F6D9E574CDC99A5400521695*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.SpriteRenderer>::get_Current()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Enumerator_get_Current_m28AE696A5ACE284C03E477F958FC8CE355F127DE_inline (Enumerator_t0C0568BBE5A7C577F6D9E574CDC99A5400521695* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Enumerator_t0C0568BBE5A7C577F6D9E574CDC99A5400521695*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.SpriteRenderer>::MoveNext()
inline bool Enumerator_MoveNext_m3F8F17D7B6CC376502C9A5BFB61614047DA306E6 (Enumerator_t0C0568BBE5A7C577F6D9E574CDC99A5400521695* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0C0568BBE5A7C577F6D9E574CDC99A5400521695*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Gradient::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32 (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* __this, float ___time0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline (float ___d0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void Cainos.PixelArtTopDown_Basic.CameraFollow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Start_mEBAAC53EB0EE4399F0882DAE9E8D040A25D296F8 (CameraFollow_tB9CFCA11D08C449EDB5D74EFF782161E65507009* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target == null) return;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (target == null) return;
		return;
	}

IL_000f:
	{
		// offset = transform.position - target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___target_4;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_5, NULL);
		__this->___offset_6 = L_6;
		// }
		return;
	}
}
// System.Void Cainos.PixelArtTopDown_Basic.CameraFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Update_m3849E10F292871A111766EC01FF5A9602F8A9E86 (CameraFollow_tB9CFCA11D08C449EDB5D74EFF782161E65507009* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target == null) return;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (target == null) return;
		return;
	}

IL_000f:
	{
		// targetPos = target.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___target_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___offset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_4, NULL);
		__this->___targetPos_7 = L_5;
		// transform.position = Vector3.Lerp(transform.position, targetPos, lerpSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___targetPos_7;
		float L_10 = __this->___lerpSpeed_5;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_8, L_9, ((float)il2cpp_codegen_multiply(L_10, L_11)), NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_12, NULL);
		// }
		return;
	}
}
// System.Void Cainos.PixelArtTopDown_Basic.CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m6C84D3D39B4314D45AC1232FF723AEFCBC17C266 (CameraFollow_tB9CFCA11D08C449EDB5D74EFF782161E65507009* __this, const RuntimeMethod* method) 
{
	{
		// public float lerpSpeed = 1.0f;
		__this->___lerpSpeed_5 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Cainos.PixelArtTopDown_Basic.LayerTrigger::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerTrigger_OnTriggerExit2D_m28B5601357810675FAE0FA71405D3E368FE451B2 (LayerTrigger_t158E5324EF2A4EED6197CB78B282D3F536CFEAD7* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mCFB2B79DEC87933C801879C6DD061AB74EC283E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// other.gameObject.layer = LayerMask.NameToLayer(layer);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2 = __this->___layer_4;
		int32_t L_3;
		L_3 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(L_2, NULL);
		NullCheck(L_1);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_1, L_3, NULL);
		// other.gameObject.GetComponent<SpriteRenderer>().sortingLayerName = sortingLayer;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___other0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		String_t* L_7 = __this->___sortingLayer_5;
		NullCheck(L_6);
		Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A(L_6, L_7, NULL);
		// SpriteRenderer[] srs = other.gameObject.GetComponentsInChildren<SpriteRenderer>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_8 = ___other0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* L_10;
		L_10 = GameObject_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mCFB2B79DEC87933C801879C6DD061AB74EC283E6(L_9, GameObject_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mCFB2B79DEC87933C801879C6DD061AB74EC283E6_RuntimeMethod_var);
		// foreach ( SpriteRenderer sr in srs)
		V_0 = L_10;
		V_1 = 0;
		goto IL_004e;
	}

IL_003c:
	{
		// foreach ( SpriteRenderer sr in srs)
		SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		// sr.sortingLayerName = sortingLayer;
		String_t* L_15 = __this->___sortingLayer_5;
		NullCheck(L_14);
		Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A(L_14, L_15, NULL);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_004e:
	{
		// foreach ( SpriteRenderer sr in srs)
		int32_t L_17 = V_1;
		SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_003c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Cainos.PixelArtTopDown_Basic.LayerTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerTrigger__ctor_m3E69EAFC4F2B44FBF7127B40DAD4C9841823979B (LayerTrigger_t158E5324EF2A4EED6197CB78B282D3F536CFEAD7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Cainos.PixelArtTopDown_Basic.PropsAltar::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropsAltar_OnTriggerEnter2D_m6C0D4DC4347D56D38D3FAEB7DC5A5201D0DF4D8F (PropsAltar_t34AD2F1806D637C3CEAA9AF6BD83A720D7AAB52F* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	{
		// targetColor = new Color(1, 1, 1, 1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___targetColor_7 = L_0;
		// }
		return;
	}
}
// System.Void Cainos.PixelArtTopDown_Basic.PropsAltar::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropsAltar_OnTriggerExit2D_m783F3B467951EEDEE31D0A9B2D2122FB472E0ABA (PropsAltar_t34AD2F1806D637C3CEAA9AF6BD83A720D7AAB52F* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	{
		// targetColor = new Color(1, 1, 1, 0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___targetColor_7 = L_0;
		// }
		return;
	}
}
// System.Void Cainos.PixelArtTopDown_Basic.PropsAltar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropsAltar_Update_m4FDE0804B99A4220F7688C3986205851F0654423 (PropsAltar_t34AD2F1806D637C3CEAA9AF6BD83A720D7AAB52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA6CD94D365C6D74C0BE0C207BF24BD26881DEB07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3F8F17D7B6CC376502C9A5BFB61614047DA306E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m28AE696A5ACE284C03E477F958FC8CE355F127DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE8D29EC71FAB4BB66AE2CBC30CA541099FAC6501_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t0C0568BBE5A7C577F6D9E574CDC99A5400521695 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// curColor = Color.Lerp(curColor, targetColor, lerpSpeed * Time.deltaTime);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___curColor_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___targetColor_7;
		float L_2 = __this->___lerpSpeed_5;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_0, L_1, ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		__this->___curColor_6 = L_4;
		// foreach (var r in runes)
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_5 = __this->___runes_4;
		NullCheck(L_5);
		Enumerator_t0C0568BBE5A7C577F6D9E574CDC99A5400521695 L_6;
		L_6 = List_1_GetEnumerator_mE8D29EC71FAB4BB66AE2CBC30CA541099FAC6501(L_5, List_1_GetEnumerator_mE8D29EC71FAB4BB66AE2CBC30CA541099FAC6501_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA6CD94D365C6D74C0BE0C207BF24BD26881DEB07((&V_0), Enumerator_Dispose_mA6CD94D365C6D74C0BE0C207BF24BD26881DEB07_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0043_1;
			}

IL_0031_1:
			{
				// foreach (var r in runes)
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7;
				L_7 = Enumerator_get_Current_m28AE696A5ACE284C03E477F958FC8CE355F127DE_inline((&V_0), Enumerator_get_Current_m28AE696A5ACE284C03E477F958FC8CE355F127DE_RuntimeMethod_var);
				// r.color = curColor;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___curColor_6;
				NullCheck(L_7);
				SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_7, L_8, NULL);
			}

IL_0043_1:
			{
				// foreach (var r in runes)
				bool L_9;
				L_9 = Enumerator_MoveNext_m3F8F17D7B6CC376502C9A5BFB61614047DA306E6((&V_0), Enumerator_MoveNext_m3F8F17D7B6CC376502C9A5BFB61614047DA306E6_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0031_1;
				}
			}
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Cainos.PixelArtTopDown_Basic.PropsAltar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropsAltar__ctor_m69DFF48A670641BE43D3E0497CFB2C4E4236F9A4 (PropsAltar_t34AD2F1806D637C3CEAA9AF6BD83A720D7AAB52F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Cainos.PixelArtTopDown_Basic.SpriteColorAnimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteColorAnimation_Start_m2ACC54988A8F1FFA29F523C931AB47A000136DDB (SpriteColorAnimation_t373C1E8CD39C1319910260A297527CCB466E6F7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer = time * Random.value;
		float L_0 = __this->___time_5;
		float L_1;
		L_1 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		__this->___timer_7 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// sr = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___sr_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sr_6), (void*)L_2);
		// }
		return;
	}
}
// System.Void Cainos.PixelArtTopDown_Basic.SpriteColorAnimation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteColorAnimation_Update_mEF8C45000A30E791203FE33B5EC460477968247D (SpriteColorAnimation_t373C1E8CD39C1319910260A297527CCB466E6F7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sr)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___sr_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		// timer += Time.deltaTime;
		float L_2 = __this->___timer_7;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_7 = ((float)il2cpp_codegen_add(L_2, L_3));
		// if (timer > time) timer = 0.0f;
		float L_4 = __this->___timer_7;
		float L_5 = __this->___time_5;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0038;
		}
	}
	{
		// if (timer > time) timer = 0.0f;
		__this->___timer_7 = (0.0f);
	}

IL_0038:
	{
		// sr.color = gradient.Evaluate(timer / time);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___sr_6;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_7 = __this->___gradient_4;
		float L_8 = __this->___timer_7;
		float L_9 = __this->___time_5;
		NullCheck(L_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32(L_7, ((float)(L_8/L_9)), NULL);
		NullCheck(L_6);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_6, L_10, NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void Cainos.PixelArtTopDown_Basic.SpriteColorAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteColorAnimation__ctor_m81B06070713CAEF2840EC022D87AEFD3A0256A74 (SpriteColorAnimation_t373C1E8CD39C1319910260A297527CCB466E6F7A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Cainos.PixelArtTopDown_Basic.TopDownCharacterController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TopDownCharacterController_Start_m2855683618F1BA5D03F12D7163C48F7BDECBCDC8 (TopDownCharacterController_t640AB3B7A48B183A3130F3A26D41B94290273BA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Cainos.PixelArtTopDown_Basic.TopDownCharacterController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TopDownCharacterController_Update_m133706DB4F79355D977D674656D297E93238336C (TopDownCharacterController_t640AB3B7A48B183A3130F3A26D41B94290273BA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC53C15EA098684991F8F2C3F89C5829550973A30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 dir = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_0 = L_0;
		// if (Input.GetKey(KeyCode.A))
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)97), NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// dir.x = -1;
		(&V_0)->___x_0 = (-1.0f);
		// animator.SetInteger("Direction", 3);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_5;
		NullCheck(L_2);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_2, _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907, 3, NULL);
		goto IL_0054;
	}

IL_002e:
	{
		// else if (Input.GetKey(KeyCode.D))
		bool L_3;
		L_3 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)100), NULL);
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		// dir.x = 1;
		(&V_0)->___x_0 = (1.0f);
		// animator.SetInteger("Direction", 2);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___animator_5;
		NullCheck(L_4);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_4, _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907, 2, NULL);
	}

IL_0054:
	{
		// if (Input.GetKey(KeyCode.W))
		bool L_5;
		L_5 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)119), NULL);
		if (!L_5)
		{
			goto IL_007c;
		}
	}
	{
		// dir.y = 1;
		(&V_0)->___y_1 = (1.0f);
		// animator.SetInteger("Direction", 1);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___animator_5;
		NullCheck(L_6);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_6, _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907, 1, NULL);
		goto IL_00a2;
	}

IL_007c:
	{
		// else if (Input.GetKey(KeyCode.S))
		bool L_7;
		L_7 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)115), NULL);
		if (!L_7)
		{
			goto IL_00a2;
		}
	}
	{
		// dir.y = -1;
		(&V_0)->___y_1 = (-1.0f);
		// animator.SetInteger("Direction", 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___animator_5;
		NullCheck(L_8);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_8, _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907, 0, NULL);
	}

IL_00a2:
	{
		// dir.Normalize();
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		// animator.SetBool("IsMoving", dir.magnitude > 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->___animator_5;
		float L_10;
		L_10 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_0), NULL);
		NullCheck(L_9);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_9, _stringLiteralC53C15EA098684991F8F2C3F89C5829550973A30, (bool)((((float)L_10) > ((float)(0.0f)))? 1 : 0), NULL);
		// GetComponent<Rigidbody2D>().velocity = speed * dir;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_11;
		L_11 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		float L_12 = __this->___speed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline(L_12, L_13, NULL);
		NullCheck(L_11);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_11, L_14, NULL);
		// }
		return;
	}
}
// System.Void Cainos.PixelArtTopDown_Basic.TopDownCharacterController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TopDownCharacterController__ctor_m8D0CDD0BDFC8B4BD4BC47085188958FF2CD07BAE (TopDownCharacterController_t640AB3B7A48B183A3130F3A26D41B94290273BA5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* Base_get_MapTiles_m14349ED7A9C2651D9FD08DD737DD15491B4022C6_inline (Base_t39C8A518C3358D0E7D2E85B921E795E1344334A2* __this, const RuntimeMethod* method) 
{
	{
		// public List<LightTile> MapTiles => mapTiles;
		List_1_t379326C40530EF7A3B87F9868738F400C3DD9DEA* L_0 = __this->___mapTiles_7;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline (float ___d0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a1;
		float L_1 = L_0.___x_0;
		float L_2 = ___d0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a1;
		float L_4 = L_3.___y_1;
		float L_5 = ___d0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
