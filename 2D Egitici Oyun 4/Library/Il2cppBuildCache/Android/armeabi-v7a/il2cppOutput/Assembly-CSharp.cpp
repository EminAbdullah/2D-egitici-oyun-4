#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B;
// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// AltMenuManager
struct AltMenuManager_tB302189E4474ADBD46128A1A9A4EFEBD20D007D7;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DG.Tweening.EaseFunction
struct EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuManager
struct MenuManager_tD52BB657312ED53913E423A985CACC86F900124C;
// MermiManager
struct MermiManager_t19426B7AD34A7153C1EF6058850C0C6442128906;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlayerManager
struct PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// DG.Tweening.Sequence
struct Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E;
// SesKontrolManager
struct SesKontrolManager_t68205183CC3ECDCA699D2AD380748D9E52EA672A;
// SonucManager
struct SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TimerManager
struct TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// DG.Tweening.TweenCallback
struct TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// circleRotateManager
struct circleRotateManager_t1072A97811A010508B91D80C9201F3D11D874CF5;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// GameManager/<baslaYazRoutine>d__27
struct U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// SonucManager/<resimAcilsinMiRoutine>d__11
struct U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9;
// TimerManager/<Zaman>d__5
struct U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68;

IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral0F7A219A924C3E71CB37D360DAEC81889C7FFC95;
IL2CPP_EXTERN_C String_t* _stringLiteral23427A8BE18B094B8A894F4C4478D1EC6431AC27;
IL2CPP_EXTERN_C String_t* _stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805;
IL2CPP_EXTERN_C String_t* _stringLiteral358F231A52491A7C857965E92BFD300FE7D1166B;
IL2CPP_EXTERN_C String_t* _stringLiteral483A3BF26DCF497CB1AAC6E1E1762A117334DEF0;
IL2CPP_EXTERN_C String_t* _stringLiteral50073F112E9BD8ED0268EC06E13A306C5B660FDC;
IL2CPP_EXTERN_C String_t* _stringLiteral51B86B3DEE097BF7A5F2CEA360AB759B2C1B017E;
IL2CPP_EXTERN_C String_t* _stringLiteral55DE8BF12517FC395D414EBDFF4FAB01E4A3165B;
IL2CPP_EXTERN_C String_t* _stringLiteral60E6DFFCD6F3BCC6302A1CD0DBA2FB8996086C1B;
IL2CPP_EXTERN_C String_t* _stringLiteral6732310B7DD8882613E9C36603DE956845F0EECA;
IL2CPP_EXTERN_C String_t* _stringLiteral6ED4CB570D5BF8A9852CE839D5166F1FA50AD1F7;
IL2CPP_EXTERN_C String_t* _stringLiteral6F531D091DEFD1AFE9482485551BED2FDAAA1A44;
IL2CPP_EXTERN_C String_t* _stringLiteral7480AFC0FA0E430AE13902C888EB3277E32B94F7;
IL2CPP_EXTERN_C String_t* _stringLiteral7B68578BBE99A5FAEF26CFEC074E429EF626D2C2;
IL2CPP_EXTERN_C String_t* _stringLiteral7E8047D91D13BF2F737DA2AF58D5F2027F5B3302;
IL2CPP_EXTERN_C String_t* _stringLiteral8061E2F0AC26AB4B4200C43C0BDA58A4A4E09A7D;
IL2CPP_EXTERN_C String_t* _stringLiteral9A16B642AE33965E91CAD93FE10DF7D82CDFEF4D;
IL2CPP_EXTERN_C String_t* _stringLiteralB67A6CE51AEEF3B86F491BCE74FAB45479581AE6;
IL2CPP_EXTERN_C String_t* _stringLiteralC0FDA4783E36B5D9B9D406D45BF082E5F2532496;
IL2CPP_EXTERN_C String_t* _stringLiteralC27A95D8E73334A668B8BB39ADB93AE8C05A4891;
IL2CPP_EXTERN_C String_t* _stringLiteralD2436568628965DB9ECE3E34F4D5479C0599FD9C;
IL2CPP_EXTERN_C String_t* _stringLiteralD737C7C96927A055956E7E1A3877EAB8F2DDF254;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEBDF38A7B693B4D7872B3C475AEF08FC201BEE4E;
IL2CPP_EXTERN_C String_t* _stringLiteralF73D67FA6D623D7DAD29F68A1807E29C871FDD89;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFC7A1E0BADBBD0081CE3877F39072B4D26B78BC6;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_m14B304841D56F2822E0E096CB90F01FAFEFC2877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6_m2CBA82F7C1473D8AACD53558BC829D4E41D8ECE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CZamanU3Ed__5_System_Collections_IEnumerator_Reset_m6DBFE51362ADCEAF5A7925BE79BBE9A69969C1EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CbaslaYazRoutineU3Ed__27_System_Collections_IEnumerator_Reset_m7D3F05891B01B66E89BE7F35A00ACE48788945CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CresimAcilsinMiRoutineU3Ed__11_System_Collections_IEnumerator_Reset_m03DA44F61642E04E425559A1811B12DEDB620A25_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// GameManager/<baslaYazRoutine>d__27
struct U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<baslaYazRoutine>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<baslaYazRoutine>d__27::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<baslaYazRoutine>d__27::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// SonucManager/<resimAcilsinMiRoutine>d__11
struct U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9  : public RuntimeObject
{
public:
	// System.Int32 SonucManager/<resimAcilsinMiRoutine>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SonucManager/<resimAcilsinMiRoutine>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SonucManager SonucManager/<resimAcilsinMiRoutine>d__11::<>4__this
	SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9, ___U3CU3E4__this_2)); }
	inline SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TimerManager/<Zaman>d__5
struct U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68  : public RuntimeObject
{
public:
	// System.Int32 TimerManager/<Zaman>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TimerManager/<Zaman>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TimerManager TimerManager/<Zaman>d__5::<>4__this
	TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * ___U3CU3E4__this_2;
	// System.Int32 TimerManager/<Zaman>d__5::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68, ___U3CU3E4__this_2)); }
	inline TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.FloatOptions::snapping
	bool ___snapping_0;

public:
	inline static int32_t get_offset_of_snapping_0() { return static_cast<int32_t>(offsetof(FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603, ___snapping_0)); }
	inline bool get_snapping_0() const { return ___snapping_0; }
	inline bool* get_address_of_snapping_0() { return &___snapping_0; }
	inline void set_snapping_0(bool value)
	{
		___snapping_0 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_marshaled_com
{
	int32_t ___snapping_0;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// DG.Tweening.AxisConstraint
struct AxisConstraint_tA0D384964013674923F26C7DF2618FB76CD3D7F4 
{
public:
	// System.Int32 DG.Tweening.AxisConstraint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisConstraint_tA0D384964013674923F26C7DF2618FB76CD3D7F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// DG.Tweening.Ease
struct Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4 
{
public:
	// System.Int32 DG.Tweening.Ease::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// DG.Tweening.LoopType
struct LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A 
{
public:
	// System.Int32 DG.Tweening.LoopType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// DG.Tweening.RotateMode
struct RotateMode_t16C0F7B9855AE83E1CA407FF541E1060DCE32B1C 
{
public:
	// System.Int32 DG.Tweening.RotateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotateMode_t16C0F7B9855AE83E1CA407FF541E1060DCE32B1C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.SpecialStartupMode
struct SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.SpecialStartupMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.TweenType
struct TweenType_tAB2DEC1268409EA172594368494218E51696EF5D 
{
public:
	// System.Int32 DG.Tweening.TweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenType_tAB2DEC1268409EA172594368494218E51696EF5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.UpdateType
struct UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED 
{
public:
	// System.Int32 DG.Tweening.UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76  : public RuntimeObject
{
public:
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStart_3;

public:
	inline static int32_t get_offset_of_tweenType_0() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___tweenType_0)); }
	inline int32_t get_tweenType_0() const { return ___tweenType_0; }
	inline int32_t* get_address_of_tweenType_0() { return &___tweenType_0; }
	inline void set_tweenType_0(int32_t value)
	{
		___tweenType_0 = value;
	}

	inline static int32_t get_offset_of_sequencedPosition_1() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedPosition_1)); }
	inline float get_sequencedPosition_1() const { return ___sequencedPosition_1; }
	inline float* get_address_of_sequencedPosition_1() { return &___sequencedPosition_1; }
	inline void set_sequencedPosition_1(float value)
	{
		___sequencedPosition_1 = value;
	}

	inline static int32_t get_offset_of_sequencedEndPosition_2() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedEndPosition_2)); }
	inline float get_sequencedEndPosition_2() const { return ___sequencedEndPosition_2; }
	inline float* get_address_of_sequencedEndPosition_2() { return &___sequencedEndPosition_2; }
	inline void set_sequencedEndPosition_2(float value)
	{
		___sequencedEndPosition_2 = value;
	}

	inline static int32_t get_offset_of_onStart_3() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___onStart_3)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStart_3() const { return ___onStart_3; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStart_3() { return &___onStart_3; }
	inline void set_onStart_3(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStart_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_3), (void*)value);
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA 
{
public:
	// DG.Tweening.RotateMode DG.Tweening.Plugins.Options.QuaternionOptions::rotateMode
	int32_t ___rotateMode_0;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.QuaternionOptions::axisConstraint
	int32_t ___axisConstraint_1;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::up
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up_2;
	// System.Boolean DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAt
	bool ___dynamicLookAt_3;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAtWorldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dynamicLookAtWorldPosition_4;

public:
	inline static int32_t get_offset_of_rotateMode_0() { return static_cast<int32_t>(offsetof(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA, ___rotateMode_0)); }
	inline int32_t get_rotateMode_0() const { return ___rotateMode_0; }
	inline int32_t* get_address_of_rotateMode_0() { return &___rotateMode_0; }
	inline void set_rotateMode_0(int32_t value)
	{
		___rotateMode_0 = value;
	}

	inline static int32_t get_offset_of_axisConstraint_1() { return static_cast<int32_t>(offsetof(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA, ___axisConstraint_1)); }
	inline int32_t get_axisConstraint_1() const { return ___axisConstraint_1; }
	inline int32_t* get_address_of_axisConstraint_1() { return &___axisConstraint_1; }
	inline void set_axisConstraint_1(int32_t value)
	{
		___axisConstraint_1 = value;
	}

	inline static int32_t get_offset_of_up_2() { return static_cast<int32_t>(offsetof(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA, ___up_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_up_2() const { return ___up_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_up_2() { return &___up_2; }
	inline void set_up_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___up_2 = value;
	}

	inline static int32_t get_offset_of_dynamicLookAt_3() { return static_cast<int32_t>(offsetof(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA, ___dynamicLookAt_3)); }
	inline bool get_dynamicLookAt_3() const { return ___dynamicLookAt_3; }
	inline bool* get_address_of_dynamicLookAt_3() { return &___dynamicLookAt_3; }
	inline void set_dynamicLookAt_3(bool value)
	{
		___dynamicLookAt_3 = value;
	}

	inline static int32_t get_offset_of_dynamicLookAtWorldPosition_4() { return static_cast<int32_t>(offsetof(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA, ___dynamicLookAtWorldPosition_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dynamicLookAtWorldPosition_4() const { return ___dynamicLookAtWorldPosition_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dynamicLookAtWorldPosition_4() { return &___dynamicLookAtWorldPosition_4; }
	inline void set_dynamicLookAtWorldPosition_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dynamicLookAtWorldPosition_4 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_marshaled_pinvoke
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dynamicLookAtWorldPosition_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_marshaled_com
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dynamicLookAtWorldPosition_4;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB 
{
public:
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;

public:
	inline static int32_t get_offset_of_axisConstraint_0() { return static_cast<int32_t>(offsetof(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB, ___axisConstraint_0)); }
	inline int32_t get_axisConstraint_0() const { return ___axisConstraint_0; }
	inline int32_t* get_address_of_axisConstraint_0() { return &___axisConstraint_0; }
	inline void set_axisConstraint_0(int32_t value)
	{
		___axisConstraint_0 = value;
	}

	inline static int32_t get_offset_of_snapping_1() { return static_cast<int32_t>(offsetof(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB, ___snapping_1)); }
	inline bool get_snapping_1() const { return ___snapping_1; }
	inline bool* get_address_of_snapping_1() { return &___snapping_1; }
	inline void set_snapping_1(bool value)
	{
		___snapping_1 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// DG.Tweening.Tween
struct Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941  : public ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76
{
public:
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject * ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject * ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t * ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t * ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t * ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;

public:
	inline static int32_t get_offset_of_timeScale_4() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___timeScale_4)); }
	inline float get_timeScale_4() const { return ___timeScale_4; }
	inline float* get_address_of_timeScale_4() { return &___timeScale_4; }
	inline void set_timeScale_4(float value)
	{
		___timeScale_4 = value;
	}

	inline static int32_t get_offset_of_isBackwards_5() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBackwards_5)); }
	inline bool get_isBackwards_5() const { return ___isBackwards_5; }
	inline bool* get_address_of_isBackwards_5() { return &___isBackwards_5; }
	inline void set_isBackwards_5(bool value)
	{
		___isBackwards_5 = value;
	}

	inline static int32_t get_offset_of_isInverted_6() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isInverted_6)); }
	inline bool get_isInverted_6() const { return ___isInverted_6; }
	inline bool* get_address_of_isInverted_6() { return &___isInverted_6; }
	inline void set_isInverted_6(bool value)
	{
		___isInverted_6 = value;
	}

	inline static int32_t get_offset_of_id_7() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___id_7)); }
	inline RuntimeObject * get_id_7() const { return ___id_7; }
	inline RuntimeObject ** get_address_of_id_7() { return &___id_7; }
	inline void set_id_7(RuntimeObject * value)
	{
		___id_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_7), (void*)value);
	}

	inline static int32_t get_offset_of_stringId_8() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___stringId_8)); }
	inline String_t* get_stringId_8() const { return ___stringId_8; }
	inline String_t** get_address_of_stringId_8() { return &___stringId_8; }
	inline void set_stringId_8(String_t* value)
	{
		___stringId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringId_8), (void*)value);
	}

	inline static int32_t get_offset_of_intId_9() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___intId_9)); }
	inline int32_t get_intId_9() const { return ___intId_9; }
	inline int32_t* get_address_of_intId_9() { return &___intId_9; }
	inline void set_intId_9(int32_t value)
	{
		___intId_9 = value;
	}

	inline static int32_t get_offset_of_target_10() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___target_10)); }
	inline RuntimeObject * get_target_10() const { return ___target_10; }
	inline RuntimeObject ** get_address_of_target_10() { return &___target_10; }
	inline void set_target_10(RuntimeObject * value)
	{
		___target_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_10), (void*)value);
	}

	inline static int32_t get_offset_of_updateType_11() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___updateType_11)); }
	inline int32_t get_updateType_11() const { return ___updateType_11; }
	inline int32_t* get_address_of_updateType_11() { return &___updateType_11; }
	inline void set_updateType_11(int32_t value)
	{
		___updateType_11 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_12() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isIndependentUpdate_12)); }
	inline bool get_isIndependentUpdate_12() const { return ___isIndependentUpdate_12; }
	inline bool* get_address_of_isIndependentUpdate_12() { return &___isIndependentUpdate_12; }
	inline void set_isIndependentUpdate_12(bool value)
	{
		___isIndependentUpdate_12 = value;
	}

	inline static int32_t get_offset_of_onPlay_13() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPlay_13)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPlay_13() const { return ___onPlay_13; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPlay_13() { return &___onPlay_13; }
	inline void set_onPlay_13(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPlay_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlay_13), (void*)value);
	}

	inline static int32_t get_offset_of_onPause_14() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPause_14)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPause_14() const { return ___onPause_14; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPause_14() { return &___onPause_14; }
	inline void set_onPause_14(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPause_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPause_14), (void*)value);
	}

	inline static int32_t get_offset_of_onRewind_15() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onRewind_15)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onRewind_15() const { return ___onRewind_15; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onRewind_15() { return &___onRewind_15; }
	inline void set_onRewind_15(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onRewind_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRewind_15), (void*)value);
	}

	inline static int32_t get_offset_of_onUpdate_16() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onUpdate_16)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onUpdate_16() const { return ___onUpdate_16; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onUpdate_16() { return &___onUpdate_16; }
	inline void set_onUpdate_16(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onUpdate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdate_16), (void*)value);
	}

	inline static int32_t get_offset_of_onStepComplete_17() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onStepComplete_17)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStepComplete_17() const { return ___onStepComplete_17; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStepComplete_17() { return &___onStepComplete_17; }
	inline void set_onStepComplete_17(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStepComplete_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStepComplete_17), (void*)value);
	}

	inline static int32_t get_offset_of_onComplete_18() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onComplete_18)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onComplete_18() const { return ___onComplete_18; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onComplete_18() { return &___onComplete_18; }
	inline void set_onComplete_18(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onComplete_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onComplete_18), (void*)value);
	}

	inline static int32_t get_offset_of_onKill_19() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onKill_19)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onKill_19() const { return ___onKill_19; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onKill_19() { return &___onKill_19; }
	inline void set_onKill_19(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onKill_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onKill_19), (void*)value);
	}

	inline static int32_t get_offset_of_onWaypointChange_20() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onWaypointChange_20)); }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * get_onWaypointChange_20() const { return ___onWaypointChange_20; }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B ** get_address_of_onWaypointChange_20() { return &___onWaypointChange_20; }
	inline void set_onWaypointChange_20(TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * value)
	{
		___onWaypointChange_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onWaypointChange_20), (void*)value);
	}

	inline static int32_t get_offset_of_isFrom_21() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isFrom_21)); }
	inline bool get_isFrom_21() const { return ___isFrom_21; }
	inline bool* get_address_of_isFrom_21() { return &___isFrom_21; }
	inline void set_isFrom_21(bool value)
	{
		___isFrom_21 = value;
	}

	inline static int32_t get_offset_of_isBlendable_22() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBlendable_22)); }
	inline bool get_isBlendable_22() const { return ___isBlendable_22; }
	inline bool* get_address_of_isBlendable_22() { return &___isBlendable_22; }
	inline void set_isBlendable_22(bool value)
	{
		___isBlendable_22 = value;
	}

	inline static int32_t get_offset_of_isRecyclable_23() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isRecyclable_23)); }
	inline bool get_isRecyclable_23() const { return ___isRecyclable_23; }
	inline bool* get_address_of_isRecyclable_23() { return &___isRecyclable_23; }
	inline void set_isRecyclable_23(bool value)
	{
		___isRecyclable_23 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_24() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSpeedBased_24)); }
	inline bool get_isSpeedBased_24() const { return ___isSpeedBased_24; }
	inline bool* get_address_of_isSpeedBased_24() { return &___isSpeedBased_24; }
	inline void set_isSpeedBased_24(bool value)
	{
		___isSpeedBased_24 = value;
	}

	inline static int32_t get_offset_of_autoKill_25() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___autoKill_25)); }
	inline bool get_autoKill_25() const { return ___autoKill_25; }
	inline bool* get_address_of_autoKill_25() { return &___autoKill_25; }
	inline void set_autoKill_25(bool value)
	{
		___autoKill_25 = value;
	}

	inline static int32_t get_offset_of_duration_26() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___duration_26)); }
	inline float get_duration_26() const { return ___duration_26; }
	inline float* get_address_of_duration_26() { return &___duration_26; }
	inline void set_duration_26(float value)
	{
		___duration_26 = value;
	}

	inline static int32_t get_offset_of_loops_27() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loops_27)); }
	inline int32_t get_loops_27() const { return ___loops_27; }
	inline int32_t* get_address_of_loops_27() { return &___loops_27; }
	inline void set_loops_27(int32_t value)
	{
		___loops_27 = value;
	}

	inline static int32_t get_offset_of_loopType_28() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loopType_28)); }
	inline int32_t get_loopType_28() const { return ___loopType_28; }
	inline int32_t* get_address_of_loopType_28() { return &___loopType_28; }
	inline void set_loopType_28(int32_t value)
	{
		___loopType_28 = value;
	}

	inline static int32_t get_offset_of_delay_29() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delay_29)); }
	inline float get_delay_29() const { return ___delay_29; }
	inline float* get_address_of_delay_29() { return &___delay_29; }
	inline void set_delay_29(float value)
	{
		___delay_29 = value;
	}

	inline static int32_t get_offset_of_U3CisRelativeU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CisRelativeU3Ek__BackingField_30)); }
	inline bool get_U3CisRelativeU3Ek__BackingField_30() const { return ___U3CisRelativeU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CisRelativeU3Ek__BackingField_30() { return &___U3CisRelativeU3Ek__BackingField_30; }
	inline void set_U3CisRelativeU3Ek__BackingField_30(bool value)
	{
		___U3CisRelativeU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_easeType_31() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeType_31)); }
	inline int32_t get_easeType_31() const { return ___easeType_31; }
	inline int32_t* get_address_of_easeType_31() { return &___easeType_31; }
	inline void set_easeType_31(int32_t value)
	{
		___easeType_31 = value;
	}

	inline static int32_t get_offset_of_customEase_32() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___customEase_32)); }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * get_customEase_32() const { return ___customEase_32; }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 ** get_address_of_customEase_32() { return &___customEase_32; }
	inline void set_customEase_32(EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * value)
	{
		___customEase_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customEase_32), (void*)value);
	}

	inline static int32_t get_offset_of_easeOvershootOrAmplitude_33() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeOvershootOrAmplitude_33)); }
	inline float get_easeOvershootOrAmplitude_33() const { return ___easeOvershootOrAmplitude_33; }
	inline float* get_address_of_easeOvershootOrAmplitude_33() { return &___easeOvershootOrAmplitude_33; }
	inline void set_easeOvershootOrAmplitude_33(float value)
	{
		___easeOvershootOrAmplitude_33 = value;
	}

	inline static int32_t get_offset_of_easePeriod_34() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easePeriod_34)); }
	inline float get_easePeriod_34() const { return ___easePeriod_34; }
	inline float* get_address_of_easePeriod_34() { return &___easePeriod_34; }
	inline void set_easePeriod_34(float value)
	{
		___easePeriod_34 = value;
	}

	inline static int32_t get_offset_of_debugTargetId_35() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___debugTargetId_35)); }
	inline String_t* get_debugTargetId_35() const { return ___debugTargetId_35; }
	inline String_t** get_address_of_debugTargetId_35() { return &___debugTargetId_35; }
	inline void set_debugTargetId_35(String_t* value)
	{
		___debugTargetId_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugTargetId_35), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT1_36() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT1_36)); }
	inline Type_t * get_typeofT1_36() const { return ___typeofT1_36; }
	inline Type_t ** get_address_of_typeofT1_36() { return &___typeofT1_36; }
	inline void set_typeofT1_36(Type_t * value)
	{
		___typeofT1_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT1_36), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT2_37() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT2_37)); }
	inline Type_t * get_typeofT2_37() const { return ___typeofT2_37; }
	inline Type_t ** get_address_of_typeofT2_37() { return &___typeofT2_37; }
	inline void set_typeofT2_37(Type_t * value)
	{
		___typeofT2_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT2_37), (void*)value);
	}

	inline static int32_t get_offset_of_typeofTPlugOptions_38() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofTPlugOptions_38)); }
	inline Type_t * get_typeofTPlugOptions_38() const { return ___typeofTPlugOptions_38; }
	inline Type_t ** get_address_of_typeofTPlugOptions_38() { return &___typeofTPlugOptions_38; }
	inline void set_typeofTPlugOptions_38(Type_t * value)
	{
		___typeofTPlugOptions_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofTPlugOptions_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CactiveU3Ek__BackingField_39)); }
	inline bool get_U3CactiveU3Ek__BackingField_39() const { return ___U3CactiveU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_39() { return &___U3CactiveU3Ek__BackingField_39; }
	inline void set_U3CactiveU3Ek__BackingField_39(bool value)
	{
		___U3CactiveU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_isSequenced_40() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSequenced_40)); }
	inline bool get_isSequenced_40() const { return ___isSequenced_40; }
	inline bool* get_address_of_isSequenced_40() { return &___isSequenced_40; }
	inline void set_isSequenced_40(bool value)
	{
		___isSequenced_40 = value;
	}

	inline static int32_t get_offset_of_sequenceParent_41() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___sequenceParent_41)); }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * get_sequenceParent_41() const { return ___sequenceParent_41; }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E ** get_address_of_sequenceParent_41() { return &___sequenceParent_41; }
	inline void set_sequenceParent_41(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * value)
	{
		___sequenceParent_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequenceParent_41), (void*)value);
	}

	inline static int32_t get_offset_of_activeId_42() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___activeId_42)); }
	inline int32_t get_activeId_42() const { return ___activeId_42; }
	inline int32_t* get_address_of_activeId_42() { return &___activeId_42; }
	inline void set_activeId_42(int32_t value)
	{
		___activeId_42 = value;
	}

	inline static int32_t get_offset_of_specialStartupMode_43() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___specialStartupMode_43)); }
	inline int32_t get_specialStartupMode_43() const { return ___specialStartupMode_43; }
	inline int32_t* get_address_of_specialStartupMode_43() { return &___specialStartupMode_43; }
	inline void set_specialStartupMode_43(int32_t value)
	{
		___specialStartupMode_43 = value;
	}

	inline static int32_t get_offset_of_creationLocked_44() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___creationLocked_44)); }
	inline bool get_creationLocked_44() const { return ___creationLocked_44; }
	inline bool* get_address_of_creationLocked_44() { return &___creationLocked_44; }
	inline void set_creationLocked_44(bool value)
	{
		___creationLocked_44 = value;
	}

	inline static int32_t get_offset_of_startupDone_45() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___startupDone_45)); }
	inline bool get_startupDone_45() const { return ___startupDone_45; }
	inline bool* get_address_of_startupDone_45() { return &___startupDone_45; }
	inline void set_startupDone_45(bool value)
	{
		___startupDone_45 = value;
	}

	inline static int32_t get_offset_of_U3CplayedOnceU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CplayedOnceU3Ek__BackingField_46)); }
	inline bool get_U3CplayedOnceU3Ek__BackingField_46() const { return ___U3CplayedOnceU3Ek__BackingField_46; }
	inline bool* get_address_of_U3CplayedOnceU3Ek__BackingField_46() { return &___U3CplayedOnceU3Ek__BackingField_46; }
	inline void set_U3CplayedOnceU3Ek__BackingField_46(bool value)
	{
		___U3CplayedOnceU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CpositionU3Ek__BackingField_47)); }
	inline float get_U3CpositionU3Ek__BackingField_47() const { return ___U3CpositionU3Ek__BackingField_47; }
	inline float* get_address_of_U3CpositionU3Ek__BackingField_47() { return &___U3CpositionU3Ek__BackingField_47; }
	inline void set_U3CpositionU3Ek__BackingField_47(float value)
	{
		___U3CpositionU3Ek__BackingField_47 = value;
	}

	inline static int32_t get_offset_of_fullDuration_48() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___fullDuration_48)); }
	inline float get_fullDuration_48() const { return ___fullDuration_48; }
	inline float* get_address_of_fullDuration_48() { return &___fullDuration_48; }
	inline void set_fullDuration_48(float value)
	{
		___fullDuration_48 = value;
	}

	inline static int32_t get_offset_of_completedLoops_49() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___completedLoops_49)); }
	inline int32_t get_completedLoops_49() const { return ___completedLoops_49; }
	inline int32_t* get_address_of_completedLoops_49() { return &___completedLoops_49; }
	inline void set_completedLoops_49(int32_t value)
	{
		___completedLoops_49 = value;
	}

	inline static int32_t get_offset_of_isPlaying_50() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isPlaying_50)); }
	inline bool get_isPlaying_50() const { return ___isPlaying_50; }
	inline bool* get_address_of_isPlaying_50() { return &___isPlaying_50; }
	inline void set_isPlaying_50(bool value)
	{
		___isPlaying_50 = value;
	}

	inline static int32_t get_offset_of_isComplete_51() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isComplete_51)); }
	inline bool get_isComplete_51() const { return ___isComplete_51; }
	inline bool* get_address_of_isComplete_51() { return &___isComplete_51; }
	inline void set_isComplete_51(bool value)
	{
		___isComplete_51 = value;
	}

	inline static int32_t get_offset_of_elapsedDelay_52() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___elapsedDelay_52)); }
	inline float get_elapsedDelay_52() const { return ___elapsedDelay_52; }
	inline float* get_address_of_elapsedDelay_52() { return &___elapsedDelay_52; }
	inline void set_elapsedDelay_52(float value)
	{
		___elapsedDelay_52 = value;
	}

	inline static int32_t get_offset_of_delayComplete_53() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delayComplete_53)); }
	inline bool get_delayComplete_53() const { return ___delayComplete_53; }
	inline bool* get_address_of_delayComplete_53() { return &___delayComplete_53; }
	inline void set_delayComplete_53(bool value)
	{
		___delayComplete_53 = value;
	}

	inline static int32_t get_offset_of_miscInt_54() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___miscInt_54)); }
	inline int32_t get_miscInt_54() const { return ___miscInt_54; }
	inline int32_t* get_address_of_miscInt_54() { return &___miscInt_54; }
	inline void set_miscInt_54(int32_t value)
	{
		___miscInt_54 = value;
	}
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// DG.Tweening.Tweener
struct Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8  : public Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941
{
public:
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;

public:
	inline static int32_t get_offset_of_hasManuallySetStartValue_55() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___hasManuallySetStartValue_55)); }
	inline bool get_hasManuallySetStartValue_55() const { return ___hasManuallySetStartValue_55; }
	inline bool* get_address_of_hasManuallySetStartValue_55() { return &___hasManuallySetStartValue_55; }
	inline void set_hasManuallySetStartValue_55(bool value)
	{
		___hasManuallySetStartValue_55 = value;
	}

	inline static int32_t get_offset_of_isFromAllowed_56() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___isFromAllowed_56)); }
	inline bool get_isFromAllowed_56() const { return ___isFromAllowed_56; }
	inline bool* get_address_of_isFromAllowed_56() { return &___isFromAllowed_56; }
	inline void set_isFromAllowed_56(bool value)
	{
		___isFromAllowed_56 = value;
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___startValue_57)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startValue_57() const { return ___startValue_57; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___endValue_58)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endValue_58() const { return ___endValue_58; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___changeValue_59)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___plugOptions_60)); }
	inline QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA  get_plugOptions_60() const { return ___plugOptions_60; }
	inline QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___getter_61)); }
	inline DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___setter_62)); }
	inline DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	float ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	float ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	float ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___startValue_57)); }
	inline float get_startValue_57() const { return ___startValue_57; }
	inline float* get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(float value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___endValue_58)); }
	inline float get_endValue_58() const { return ___endValue_58; }
	inline float* get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(float value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___changeValue_59)); }
	inline float get_changeValue_59() const { return ___changeValue_59; }
	inline float* get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(float value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___plugOptions_60)); }
	inline FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603  get_plugOptions_60() const { return ___plugOptions_60; }
	inline FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___getter_61)); }
	inline DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___setter_62)); }
	inline DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___startValue_57)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startValue_57() const { return ___startValue_57; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___endValue_58)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endValue_58() const { return ___endValue_58; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___changeValue_59)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___plugOptions_60)); }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  get_plugOptions_60() const { return ___plugOptions_60; }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___getter_61)); }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___setter_62)); }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// AltMenuManager
struct AltMenuManager_tB302189E4474ADBD46128A1A9A4EFEBD20D007D7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject AltMenuManager::AltMenuPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___AltMenuPanel_4;
	// UnityEngine.AudioSource AltMenuManager::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_5;
	// UnityEngine.AudioClip AltMenuManager::buttonClick
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___buttonClick_6;

public:
	inline static int32_t get_offset_of_AltMenuPanel_4() { return static_cast<int32_t>(offsetof(AltMenuManager_tB302189E4474ADBD46128A1A9A4EFEBD20D007D7, ___AltMenuPanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_AltMenuPanel_4() const { return ___AltMenuPanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_AltMenuPanel_4() { return &___AltMenuPanel_4; }
	inline void set_AltMenuPanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___AltMenuPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AltMenuPanel_4), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(AltMenuManager_tB302189E4474ADBD46128A1A9A4EFEBD20D007D7, ___audioSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_buttonClick_6() { return static_cast<int32_t>(offsetof(AltMenuManager_tB302189E4474ADBD46128A1A9A4EFEBD20D007D7, ___buttonClick_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_buttonClick_6() const { return ___buttonClick_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_buttonClick_6() { return &___buttonClick_6; }
	inline void set_buttonClick_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___buttonClick_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonClick_6), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameManager::baslaImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___baslaImage_4;
	// System.String GameManager::hangiOyun
	String_t* ___hangiOyun_5;
	// System.Int32 GameManager::birinciCarpan
	int32_t ___birinciCarpan_6;
	// System.Int32 GameManager::ikinciCarpan
	int32_t ___ikinciCarpan_7;
	// System.Int32 GameManager::dogruSonuc
	int32_t ___dogruSonuc_8;
	// System.Int32 GameManager::yanlisSonuc1
	int32_t ___yanlisSonuc1_9;
	// System.Int32 GameManager::yanlisSonuc2
	int32_t ___yanlisSonuc2_10;
	// System.Int32 GameManager::dogruAdet
	int32_t ___dogruAdet_11;
	// System.Int32 GameManager::yanlisAdet
	int32_t ___yanlisAdet_12;
	// System.Int32 GameManager::toplamPuan
	int32_t ___toplamPuan_13;
	// UnityEngine.GameObject GameManager::dogruImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___dogruImage_14;
	// UnityEngine.GameObject GameManager::yanlisImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___yanlisImage_15;
	// UnityEngine.UI.Text GameManager::dogruAdetText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___dogruAdetText_16;
	// UnityEngine.UI.Text GameManager::yanlisAdetText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___yanlisAdetText_17;
	// UnityEngine.UI.Text GameManager::puanText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___puanText_18;
	// UnityEngine.UI.Text GameManager::soruText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___soruText_19;
	// UnityEngine.UI.Text GameManager::solText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___solText_20;
	// UnityEngine.UI.Text GameManager::ortaText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ortaText_21;
	// UnityEngine.UI.Text GameManager::sagText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___sagText_22;
	// PlayerManager GameManager::playerManager
	PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * ___playerManager_23;
	// UnityEngine.GameObject GameManager::sonucPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___sonucPanel_24;
	// UnityEngine.GameObject GameManager::sonuclar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___sonuclar_25;
	// UnityEngine.GameObject GameManager::zamanImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___zamanImage_26;
	// UnityEngine.GameObject GameManager::dogruYanlisImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___dogruYanlisImage_27;
	// UnityEngine.GameObject GameManager::puanPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___puanPanel_28;

public:
	inline static int32_t get_offset_of_baslaImage_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___baslaImage_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_baslaImage_4() const { return ___baslaImage_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_baslaImage_4() { return &___baslaImage_4; }
	inline void set_baslaImage_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___baslaImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baslaImage_4), (void*)value);
	}

	inline static int32_t get_offset_of_hangiOyun_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___hangiOyun_5)); }
	inline String_t* get_hangiOyun_5() const { return ___hangiOyun_5; }
	inline String_t** get_address_of_hangiOyun_5() { return &___hangiOyun_5; }
	inline void set_hangiOyun_5(String_t* value)
	{
		___hangiOyun_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hangiOyun_5), (void*)value);
	}

	inline static int32_t get_offset_of_birinciCarpan_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___birinciCarpan_6)); }
	inline int32_t get_birinciCarpan_6() const { return ___birinciCarpan_6; }
	inline int32_t* get_address_of_birinciCarpan_6() { return &___birinciCarpan_6; }
	inline void set_birinciCarpan_6(int32_t value)
	{
		___birinciCarpan_6 = value;
	}

	inline static int32_t get_offset_of_ikinciCarpan_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___ikinciCarpan_7)); }
	inline int32_t get_ikinciCarpan_7() const { return ___ikinciCarpan_7; }
	inline int32_t* get_address_of_ikinciCarpan_7() { return &___ikinciCarpan_7; }
	inline void set_ikinciCarpan_7(int32_t value)
	{
		___ikinciCarpan_7 = value;
	}

	inline static int32_t get_offset_of_dogruSonuc_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___dogruSonuc_8)); }
	inline int32_t get_dogruSonuc_8() const { return ___dogruSonuc_8; }
	inline int32_t* get_address_of_dogruSonuc_8() { return &___dogruSonuc_8; }
	inline void set_dogruSonuc_8(int32_t value)
	{
		___dogruSonuc_8 = value;
	}

	inline static int32_t get_offset_of_yanlisSonuc1_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___yanlisSonuc1_9)); }
	inline int32_t get_yanlisSonuc1_9() const { return ___yanlisSonuc1_9; }
	inline int32_t* get_address_of_yanlisSonuc1_9() { return &___yanlisSonuc1_9; }
	inline void set_yanlisSonuc1_9(int32_t value)
	{
		___yanlisSonuc1_9 = value;
	}

	inline static int32_t get_offset_of_yanlisSonuc2_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___yanlisSonuc2_10)); }
	inline int32_t get_yanlisSonuc2_10() const { return ___yanlisSonuc2_10; }
	inline int32_t* get_address_of_yanlisSonuc2_10() { return &___yanlisSonuc2_10; }
	inline void set_yanlisSonuc2_10(int32_t value)
	{
		___yanlisSonuc2_10 = value;
	}

	inline static int32_t get_offset_of_dogruAdet_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___dogruAdet_11)); }
	inline int32_t get_dogruAdet_11() const { return ___dogruAdet_11; }
	inline int32_t* get_address_of_dogruAdet_11() { return &___dogruAdet_11; }
	inline void set_dogruAdet_11(int32_t value)
	{
		___dogruAdet_11 = value;
	}

	inline static int32_t get_offset_of_yanlisAdet_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___yanlisAdet_12)); }
	inline int32_t get_yanlisAdet_12() const { return ___yanlisAdet_12; }
	inline int32_t* get_address_of_yanlisAdet_12() { return &___yanlisAdet_12; }
	inline void set_yanlisAdet_12(int32_t value)
	{
		___yanlisAdet_12 = value;
	}

	inline static int32_t get_offset_of_toplamPuan_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___toplamPuan_13)); }
	inline int32_t get_toplamPuan_13() const { return ___toplamPuan_13; }
	inline int32_t* get_address_of_toplamPuan_13() { return &___toplamPuan_13; }
	inline void set_toplamPuan_13(int32_t value)
	{
		___toplamPuan_13 = value;
	}

	inline static int32_t get_offset_of_dogruImage_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___dogruImage_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_dogruImage_14() const { return ___dogruImage_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_dogruImage_14() { return &___dogruImage_14; }
	inline void set_dogruImage_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___dogruImage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dogruImage_14), (void*)value);
	}

	inline static int32_t get_offset_of_yanlisImage_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___yanlisImage_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_yanlisImage_15() const { return ___yanlisImage_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_yanlisImage_15() { return &___yanlisImage_15; }
	inline void set_yanlisImage_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___yanlisImage_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yanlisImage_15), (void*)value);
	}

	inline static int32_t get_offset_of_dogruAdetText_16() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___dogruAdetText_16)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_dogruAdetText_16() const { return ___dogruAdetText_16; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_dogruAdetText_16() { return &___dogruAdetText_16; }
	inline void set_dogruAdetText_16(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___dogruAdetText_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dogruAdetText_16), (void*)value);
	}

	inline static int32_t get_offset_of_yanlisAdetText_17() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___yanlisAdetText_17)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_yanlisAdetText_17() const { return ___yanlisAdetText_17; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_yanlisAdetText_17() { return &___yanlisAdetText_17; }
	inline void set_yanlisAdetText_17(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___yanlisAdetText_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yanlisAdetText_17), (void*)value);
	}

	inline static int32_t get_offset_of_puanText_18() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___puanText_18)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_puanText_18() const { return ___puanText_18; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_puanText_18() { return &___puanText_18; }
	inline void set_puanText_18(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___puanText_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___puanText_18), (void*)value);
	}

	inline static int32_t get_offset_of_soruText_19() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___soruText_19)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_soruText_19() const { return ___soruText_19; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_soruText_19() { return &___soruText_19; }
	inline void set_soruText_19(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___soruText_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soruText_19), (void*)value);
	}

	inline static int32_t get_offset_of_solText_20() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___solText_20)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_solText_20() const { return ___solText_20; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_solText_20() { return &___solText_20; }
	inline void set_solText_20(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___solText_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___solText_20), (void*)value);
	}

	inline static int32_t get_offset_of_ortaText_21() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___ortaText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ortaText_21() const { return ___ortaText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ortaText_21() { return &___ortaText_21; }
	inline void set_ortaText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ortaText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ortaText_21), (void*)value);
	}

	inline static int32_t get_offset_of_sagText_22() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___sagText_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_sagText_22() const { return ___sagText_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_sagText_22() { return &___sagText_22; }
	inline void set_sagText_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___sagText_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sagText_22), (void*)value);
	}

	inline static int32_t get_offset_of_playerManager_23() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___playerManager_23)); }
	inline PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * get_playerManager_23() const { return ___playerManager_23; }
	inline PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 ** get_address_of_playerManager_23() { return &___playerManager_23; }
	inline void set_playerManager_23(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * value)
	{
		___playerManager_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerManager_23), (void*)value);
	}

	inline static int32_t get_offset_of_sonucPanel_24() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___sonucPanel_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_sonucPanel_24() const { return ___sonucPanel_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_sonucPanel_24() { return &___sonucPanel_24; }
	inline void set_sonucPanel_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___sonucPanel_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sonucPanel_24), (void*)value);
	}

	inline static int32_t get_offset_of_sonuclar_25() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___sonuclar_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_sonuclar_25() const { return ___sonuclar_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_sonuclar_25() { return &___sonuclar_25; }
	inline void set_sonuclar_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___sonuclar_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sonuclar_25), (void*)value);
	}

	inline static int32_t get_offset_of_zamanImage_26() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___zamanImage_26)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_zamanImage_26() const { return ___zamanImage_26; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_zamanImage_26() { return &___zamanImage_26; }
	inline void set_zamanImage_26(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___zamanImage_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zamanImage_26), (void*)value);
	}

	inline static int32_t get_offset_of_dogruYanlisImage_27() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___dogruYanlisImage_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_dogruYanlisImage_27() const { return ___dogruYanlisImage_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_dogruYanlisImage_27() { return &___dogruYanlisImage_27; }
	inline void set_dogruYanlisImage_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___dogruYanlisImage_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dogruYanlisImage_27), (void*)value);
	}

	inline static int32_t get_offset_of_puanPanel_28() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___puanPanel_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_puanPanel_28() const { return ___puanPanel_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_puanPanel_28() { return &___puanPanel_28; }
	inline void set_puanPanel_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___puanPanel_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___puanPanel_28), (void*)value);
	}
};


// MenuManager
struct MenuManager_tD52BB657312ED53913E423A985CACC86F900124C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MenuManager::soruPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___soruPanel_4;
	// UnityEngine.AudioSource MenuManager::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_5;
	// UnityEngine.AudioClip MenuManager::buttonClick
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___buttonClick_6;
	// UnityEngine.GameObject MenuManager::sesPaneli
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___sesPaneli_7;
	// System.Boolean MenuManager::sesPaneliAcikMi
	bool ___sesPaneliAcikMi_8;

public:
	inline static int32_t get_offset_of_soruPanel_4() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___soruPanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_soruPanel_4() const { return ___soruPanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_soruPanel_4() { return &___soruPanel_4; }
	inline void set_soruPanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___soruPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soruPanel_4), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___audioSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_buttonClick_6() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___buttonClick_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_buttonClick_6() const { return ___buttonClick_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_buttonClick_6() { return &___buttonClick_6; }
	inline void set_buttonClick_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___buttonClick_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonClick_6), (void*)value);
	}

	inline static int32_t get_offset_of_sesPaneli_7() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___sesPaneli_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_sesPaneli_7() const { return ___sesPaneli_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_sesPaneli_7() { return &___sesPaneli_7; }
	inline void set_sesPaneli_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___sesPaneli_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sesPaneli_7), (void*)value);
	}

	inline static int32_t get_offset_of_sesPaneliAcikMi_8() { return static_cast<int32_t>(offsetof(MenuManager_tD52BB657312ED53913E423A985CACC86F900124C, ___sesPaneliAcikMi_8)); }
	inline bool get_sesPaneliAcikMi_8() const { return ___sesPaneliAcikMi_8; }
	inline bool* get_address_of_sesPaneliAcikMi_8() { return &___sesPaneliAcikMi_8; }
	inline void set_sesPaneliAcikMi_8(bool value)
	{
		___sesPaneliAcikMi_8 = value;
	}
};


// MermiManager
struct MermiManager_t19426B7AD34A7153C1EF6058850C0C6442128906  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single MermiManager::mermiHizi
	float ___mermiHizi_4;

public:
	inline static int32_t get_offset_of_mermiHizi_4() { return static_cast<int32_t>(offsetof(MermiManager_t19426B7AD34A7153C1EF6058850C0C6442128906, ___mermiHizi_4)); }
	inline float get_mermiHizi_4() const { return ___mermiHizi_4; }
	inline float* get_address_of_mermiHizi_4() { return &___mermiHizi_4; }
	inline void set_mermiHizi_4(float value)
	{
		___mermiHizi_4 = value;
	}
};


// PlayerManager
struct PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform PlayerManager::gun
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gun_4;
	// UnityEngine.Transform PlayerManager::mermiYeri
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mermiYeri_5;
	// UnityEngine.GameObject[] PlayerManager::mermiPrefab
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___mermiPrefab_6;
	// System.Single PlayerManager::angle
	float ___angle_7;
	// System.Single PlayerManager::donusHizi
	float ___donusHizi_8;
	// System.Single PlayerManager::ikiMermiArasiSure
	float ___ikiMermiArasiSure_9;
	// System.Single PlayerManager::sonrakiAtis
	float ___sonrakiAtis_10;
	// System.Boolean PlayerManager::rotaDegissinMi
	bool ___rotaDegissinMi_11;
	// UnityEngine.AudioSource PlayerManager::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_12;
	// UnityEngine.AudioClip PlayerManager::topSesi
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___topSesi_13;

public:
	inline static int32_t get_offset_of_gun_4() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___gun_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_gun_4() const { return ___gun_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_gun_4() { return &___gun_4; }
	inline void set_gun_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___gun_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gun_4), (void*)value);
	}

	inline static int32_t get_offset_of_mermiYeri_5() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___mermiYeri_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_mermiYeri_5() const { return ___mermiYeri_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_mermiYeri_5() { return &___mermiYeri_5; }
	inline void set_mermiYeri_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___mermiYeri_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mermiYeri_5), (void*)value);
	}

	inline static int32_t get_offset_of_mermiPrefab_6() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___mermiPrefab_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_mermiPrefab_6() const { return ___mermiPrefab_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_mermiPrefab_6() { return &___mermiPrefab_6; }
	inline void set_mermiPrefab_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___mermiPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mermiPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_angle_7() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___angle_7)); }
	inline float get_angle_7() const { return ___angle_7; }
	inline float* get_address_of_angle_7() { return &___angle_7; }
	inline void set_angle_7(float value)
	{
		___angle_7 = value;
	}

	inline static int32_t get_offset_of_donusHizi_8() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___donusHizi_8)); }
	inline float get_donusHizi_8() const { return ___donusHizi_8; }
	inline float* get_address_of_donusHizi_8() { return &___donusHizi_8; }
	inline void set_donusHizi_8(float value)
	{
		___donusHizi_8 = value;
	}

	inline static int32_t get_offset_of_ikiMermiArasiSure_9() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___ikiMermiArasiSure_9)); }
	inline float get_ikiMermiArasiSure_9() const { return ___ikiMermiArasiSure_9; }
	inline float* get_address_of_ikiMermiArasiSure_9() { return &___ikiMermiArasiSure_9; }
	inline void set_ikiMermiArasiSure_9(float value)
	{
		___ikiMermiArasiSure_9 = value;
	}

	inline static int32_t get_offset_of_sonrakiAtis_10() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___sonrakiAtis_10)); }
	inline float get_sonrakiAtis_10() const { return ___sonrakiAtis_10; }
	inline float* get_address_of_sonrakiAtis_10() { return &___sonrakiAtis_10; }
	inline void set_sonrakiAtis_10(float value)
	{
		___sonrakiAtis_10 = value;
	}

	inline static int32_t get_offset_of_rotaDegissinMi_11() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___rotaDegissinMi_11)); }
	inline bool get_rotaDegissinMi_11() const { return ___rotaDegissinMi_11; }
	inline bool* get_address_of_rotaDegissinMi_11() { return &___rotaDegissinMi_11; }
	inline void set_rotaDegissinMi_11(bool value)
	{
		___rotaDegissinMi_11 = value;
	}

	inline static int32_t get_offset_of_audioSource_12() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___audioSource_12)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_12() const { return ___audioSource_12; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_12() { return &___audioSource_12; }
	inline void set_audioSource_12(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_12), (void*)value);
	}

	inline static int32_t get_offset_of_topSesi_13() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___topSesi_13)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_topSesi_13() const { return ___topSesi_13; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_topSesi_13() { return &___topSesi_13; }
	inline void set_topSesi_13(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___topSesi_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topSesi_13), (void*)value);
	}
};


// SesKontrolManager
struct SesKontrolManager_t68205183CC3ECDCA699D2AD380748D9E52EA672A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SonucManager
struct SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image SonucManager::sonucImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___sonucImage_4;
	// UnityEngine.UI.Text SonucManager::dogruText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___dogruText_5;
	// UnityEngine.UI.Text SonucManager::yanlisText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___yanlisText_6;
	// UnityEngine.UI.Text SonucManager::puanText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___puanText_7;
	// UnityEngine.GameObject SonucManager::tekrarOynaBttn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tekrarOynaBttn_8;
	// UnityEngine.GameObject SonucManager::menuyaDonBttn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___menuyaDonBttn_9;
	// System.Single SonucManager::Sure
	float ___Sure_10;
	// System.Boolean SonucManager::AcilsinMi
	bool ___AcilsinMi_11;
	// GameManager SonucManager::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_12;

public:
	inline static int32_t get_offset_of_sonucImage_4() { return static_cast<int32_t>(offsetof(SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356, ___sonucImage_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_sonucImage_4() const { return ___sonucImage_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_sonucImage_4() { return &___sonucImage_4; }
	inline void set_sonucImage_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___sonucImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sonucImage_4), (void*)value);
	}

	inline static int32_t get_offset_of_dogruText_5() { return static_cast<int32_t>(offsetof(SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356, ___dogruText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_dogruText_5() const { return ___dogruText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_dogruText_5() { return &___dogruText_5; }
	inline void set_dogruText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___dogruText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dogruText_5), (void*)value);
	}

	inline static int32_t get_offset_of_yanlisText_6() { return static_cast<int32_t>(offsetof(SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356, ___yanlisText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_yanlisText_6() const { return ___yanlisText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_yanlisText_6() { return &___yanlisText_6; }
	inline void set_yanlisText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___yanlisText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yanlisText_6), (void*)value);
	}

	inline static int32_t get_offset_of_puanText_7() { return static_cast<int32_t>(offsetof(SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356, ___puanText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_puanText_7() const { return ___puanText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_puanText_7() { return &___puanText_7; }
	inline void set_puanText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___puanText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___puanText_7), (void*)value);
	}

	inline static int32_t get_offset_of_tekrarOynaBttn_8() { return static_cast<int32_t>(offsetof(SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356, ___tekrarOynaBttn_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tekrarOynaBttn_8() const { return ___tekrarOynaBttn_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tekrarOynaBttn_8() { return &___tekrarOynaBttn_8; }
	inline void set_tekrarOynaBttn_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tekrarOynaBttn_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tekrarOynaBttn_8), (void*)value);
	}

	inline static int32_t get_offset_of_menuyaDonBttn_9() { return static_cast<int32_t>(offsetof(SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356, ___menuyaDonBttn_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_menuyaDonBttn_9() const { return ___menuyaDonBttn_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_menuyaDonBttn_9() { return &___menuyaDonBttn_9; }
	inline void set_menuyaDonBttn_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___menuyaDonBttn_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuyaDonBttn_9), (void*)value);
	}

	inline static int32_t get_offset_of_Sure_10() { return static_cast<int32_t>(offsetof(SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356, ___Sure_10)); }
	inline float get_Sure_10() const { return ___Sure_10; }
	inline float* get_address_of_Sure_10() { return &___Sure_10; }
	inline void set_Sure_10(float value)
	{
		___Sure_10 = value;
	}

	inline static int32_t get_offset_of_AcilsinMi_11() { return static_cast<int32_t>(offsetof(SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356, ___AcilsinMi_11)); }
	inline bool get_AcilsinMi_11() const { return ___AcilsinMi_11; }
	inline bool* get_address_of_AcilsinMi_11() { return &___AcilsinMi_11; }
	inline void set_AcilsinMi_11(bool value)
	{
		___AcilsinMi_11 = value;
	}

	inline static int32_t get_offset_of_gameManager_12() { return static_cast<int32_t>(offsetof(SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356, ___gameManager_12)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_12() const { return ___gameManager_12; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_12() { return &___gameManager_12; }
	inline void set_gameManager_12(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_12), (void*)value);
	}
};


// TimerManager
struct TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text TimerManager::zamanText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___zamanText_4;
	// System.Int32 TimerManager::kalanSure
	int32_t ___kalanSure_5;
	// GameManager TimerManager::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_6;

public:
	inline static int32_t get_offset_of_zamanText_4() { return static_cast<int32_t>(offsetof(TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D, ___zamanText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_zamanText_4() const { return ___zamanText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_zamanText_4() { return &___zamanText_4; }
	inline void set_zamanText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___zamanText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zamanText_4), (void*)value);
	}

	inline static int32_t get_offset_of_kalanSure_5() { return static_cast<int32_t>(offsetof(TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D, ___kalanSure_5)); }
	inline int32_t get_kalanSure_5() const { return ___kalanSure_5; }
	inline int32_t* get_address_of_kalanSure_5() { return &___kalanSure_5; }
	inline void set_kalanSure_5(int32_t value)
	{
		___kalanSure_5 = value;
	}

	inline static int32_t get_offset_of_gameManager_6() { return static_cast<int32_t>(offsetof(TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D, ___gameManager_6)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_6() const { return ___gameManager_6; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_6() { return &___gameManager_6; }
	inline void set_gameManager_6(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_6), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// circleRotateManager
struct circleRotateManager_t1072A97811A010508B91D80C9201F3D11D874CF5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager circleRotateManager::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_4;
	// System.String circleRotateManager::hangiSonuc
	String_t* ___hangiSonuc_5;

public:
	inline static int32_t get_offset_of_gameManager_4() { return static_cast<int32_t>(offsetof(circleRotateManager_t1072A97811A010508B91D80C9201F3D11D874CF5, ___gameManager_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_4() const { return ___gameManager_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_4() { return &___gameManager_4; }
	inline void set_gameManager_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_hangiSonuc_5() { return static_cast<int32_t>(offsetof(circleRotateManager_t1072A97811A010508B91D80C9201F3D11D874CF5, ___hangiSonuc_5)); }
	inline String_t* get_hangiSonuc_5() const { return ___hangiSonuc_5; }
	inline String_t** get_address_of_hangiSonuc_5() { return &___hangiSonuc_5; }
	inline void set_hangiSonuc_5(String_t* value)
	{
		___hangiSonuc_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hangiSonuc_5), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(!!0,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_SetEase_TisRuntimeObject_m17D546F0CC41676B108187269B5BB10959EFA2A4_gshared (RuntimeObject * ___t0, int32_t ___ease1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ShortcutExtensions_DOScale_m3F394144EDDD26734F69CCDACBE8E7ACFBBFA8B7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>>(!!0,DG.Tweening.Ease)
inline TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4 (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * (*) (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m17D546F0CC41676B108187269B5BB10959EFA2A4_gshared)(___t0, ___ease1, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<PlayerManager>()
inline PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * Object_FindObjectOfType_TisPlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_m14B304841D56F2822E0E096CB90F01FAFEFC2877 (const RuntimeMethod* method)
{
	return ((  PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// System.Collections.IEnumerator GameManager::baslaYazRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_baslaYazRoutine_m16C96EA82400581561CAA0031CA044D7563981FB (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void GameManager/<baslaYazRoutine>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CbaslaYazRoutineU3Ed__27__ctor_m342D5552E8083D838708BF04DDF8A496FE752C84 (U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void GameManager::soruyuYazdir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_soruyuYazdir_m0C41181CE709528594A318CD079E6A9C73A3A72D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mD94B0E22EF32AD3DFD277ED8E911B5DFA4CDB91E (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void GameManager::birinciCarpaniAyarla()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_birinciCarpaniAyarla_m8EDF6D39EC5B48438CCCEA154C55E4077E77B3F7 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void GameManager::sonuclariYazdir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_sonuclariYazdir_m602F78C9F3F8A84265E19787BB4C9034C583D6C8 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0 (int32_t ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.CanvasGroup,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * DOTweenModuleUI_DOFade_mBE8F5B25D6DAB090178C1AE0A97896F09D42136C (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>>(!!0,DG.Tweening.Ease)
inline TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * TweenSettingsExtensions_SetEase_TisTweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6_m2CBA82F7C1473D8AACD53558BC829D4E41D8ECE0 (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * (*) (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m17D546F0CC41676B108187269B5BB10959EFA2A4_gshared)(___t0, ___ease1, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOLocalMoveY(UnityEngine.Transform,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ShortcutExtensions_DOLocalMoveY_m758574147287D8B39618F852682E1E03BDC7A696 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, float ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Void PlayerManager::rotateDegistir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_rotateDegistir_m91831C3BD6AF948A4D5025658FB704540FFB7790 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void PlayerManager::mermiAt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_mermiAt_m4EDFDC34951B3D42E4A010D673C7B369F222B7E4 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void SesKontrolManager::SesiAc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SesKontrolManager_SesiAc_m9E3688335F1D621363A44C5EED670E9A40E273FF (SesKontrolManager_t68205183CC3ECDCA699D2AD380748D9E52EA672A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<GameManager>()
inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59 (const RuntimeMethod* method)
{
	return ((  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Collections.IEnumerator SonucManager::resimAcilsinMiRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SonucManager_resimAcilsinMiRoutine_mBDCB199BF62B38E23FE47434D84E65129C944F85 (SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * __this, const RuntimeMethod* method);
// System.Void SonucManager/<resimAcilsinMiRoutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CresimAcilsinMiRoutineU3Ed__11__ctor_m9B2D22A0D200C1E154820A98DC45FB9BCE9901BC (U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator TimerManager::Zaman()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimerManager_Zaman_m31A400370CEBE4F4C29CD7C78014599235BA9E87 (TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * __this, const RuntimeMethod* method);
// System.Void TimerManager/<Zaman>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZamanU3Ed__5__ctor_m13577EE43FBE522D7C32563EC8CCB8671131361B (U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.ShortcutExtensions::DORotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * ShortcutExtensions_DORotate_mE9F72A2C8CB5CABE531B629F166E1CFB12A020AE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue1, float ___duration2, int32_t ___mode3, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Void GameManager::SonucuKontrolEt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SonucuKontrolEt_m5376A6A1C5692EFD240E77C1F0DB3E8CBCE7922A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___Sonuc0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void GameManager::oyunaBasla()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_oyunaBasla_m4BBAFB238703F14FAF74A07DD857586324D7B47D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// System.Void GameManager::OyunuBitir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OyunuBitir_m5547757297A64AC611DB01B352CC01D34FDE85CE (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mD94B0E22EF32AD3DFD277ED8E911B5DFA4CDB91E (String_t* ___s0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_2, /*hidden argument*/NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_3^(int32_t)L_4)), (int32_t)((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
// System.Void AltMenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AltMenuManager_Start_mF6EB478F430D29F9EF778C3C99CEF9C65EC9D358 (AltMenuManager_tB302189E4474ADBD46128A1A9A4EFEBD20D007D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AltMenuPanel.GetComponent<RectTransform>().DOScale(1, 1f).SetEase(Ease.OutCirc);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_AltMenuPanel_4();
		NullCheck(L_0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_2;
		L_2 = ShortcutExtensions_DOScale_m3F394144EDDD26734F69CCDACBE8E7ACFBBFA8B7(L_1, (1.0f), (1.0f), /*hidden argument*/NULL);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_3;
		L_3 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4(L_2, ((int32_t)21), /*hidden argument*/TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AltMenuManager::hangiOyunAcilsin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AltMenuManager_hangiOyunAcilsin_mCD4403EC5CED38DB7FCA9F3A99081DBE69A40A15 (AltMenuManager_tB302189E4474ADBD46128A1A9A4EFEBD20D007D7 * __this, String_t* ___hangiOyun0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E6DFFCD6F3BCC6302A1CD0DBA2FB8996086C1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0FDA4783E36B5D9B9D406D45BF082E5F2532496);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("SesDurumu") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		// audioSource.PlayOneShot(buttonClick);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_5();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_buttonClick_6();
		NullCheck(L_1);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// PlayerPrefs.SetString("hangiOyun", hangiOyun);
		String_t* L_3 = ___hangiOyun0;
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral60E6DFFCD6F3BCC6302A1CD0DBA2FB8996086C1B, L_3, /*hidden argument*/NULL);
		// SceneManager.LoadScene("GameLevel");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralC0FDA4783E36B5D9B9D406D45BF082E5F2532496, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AltMenuManager::geriDon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AltMenuManager_geriDon_mEF84E97E756D58EF1C62055AB90CB40938B1A561 (AltMenuManager_tB302189E4474ADBD46128A1A9A4EFEBD20D007D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23427A8BE18B094B8A894F4C4478D1EC6431AC27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("SesDurumu") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		// audioSource.PlayOneShot(buttonClick);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_5();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_buttonClick_6();
		NullCheck(L_1);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// SceneManager.LoadScene("MenuLevel");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral23427A8BE18B094B8A894F4C4478D1EC6431AC27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AltMenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AltMenuManager__ctor_mC518BC38E34B2520151F1A8B92446467D3E04143 (AltMenuManager_tB302189E4474ADBD46128A1A9A4EFEBD20D007D7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_m14B304841D56F2822E0E096CB90F01FAFEFC2877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerManager = Object.FindObjectOfType<PlayerManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * L_0;
		L_0 = Object_FindObjectOfType_TisPlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_m14B304841D56F2822E0E096CB90F01FAFEFC2877(/*hidden argument*/Object_FindObjectOfType_TisPlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_m14B304841D56F2822E0E096CB90F01FAFEFC2877_RuntimeMethod_var);
		__this->set_playerManager_23(L_0);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E6DFFCD6F3BCC6302A1CD0DBA2FB8996086C1B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// puanPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_puanPanel_28();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// sonuclar.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_sonuclar_25();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// zamanImage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_zamanImage_26();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// dogruYanlisImage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_dogruYanlisImage_27();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// sonucPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_sonucPanel_24();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// dogruAdet = 0;
		__this->set_dogruAdet_11(0);
		// yanlisAdet = 0;
		__this->set_yanlisAdet_12(0);
		// toplamPuan = 0;
		__this->set_toplamPuan_13(0);
		// dogruImage.GetComponent<RectTransform>().localScale = Vector3.zero;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_dogruImage_14();
		NullCheck(L_5);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6;
		L_6 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_5, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_6, L_7, /*hidden argument*/NULL);
		// yanlisImage.GetComponent<RectTransform>().localScale = Vector3.zero;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_yanlisImage_15();
		NullCheck(L_8);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9;
		L_9 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_8, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_9, L_10, /*hidden argument*/NULL);
		// if (PlayerPrefs.HasKey("hangiOyun"))
		bool L_11;
		L_11 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral60E6DFFCD6F3BCC6302A1CD0DBA2FB8996086C1B, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0097;
		}
	}
	{
		// hangiOyun = PlayerPrefs.GetString("hangiOyun");
		String_t* L_12;
		L_12 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral60E6DFFCD6F3BCC6302A1CD0DBA2FB8996086C1B, /*hidden argument*/NULL);
		__this->set_hangiOyun_5(L_12);
	}

IL_0097:
	{
		// StartCoroutine(baslaYazRoutine());
		RuntimeObject* L_13;
		L_13 = GameManager_baslaYazRoutine_m16C96EA82400581561CAA0031CA044D7563981FB(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_14;
		L_14 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::baslaYazRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_baslaYazRoutine_m16C96EA82400581561CAA0031CA044D7563981FB (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B * L_0 = (U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B *)il2cpp_codegen_object_new(U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B_il2cpp_TypeInfo_var);
		U3CbaslaYazRoutineU3Ed__27__ctor_m342D5552E8083D838708BF04DDF8A496FE752C84(L_0, 0, /*hidden argument*/NULL);
		U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameManager::oyunaBasla()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_oyunaBasla_m4BBAFB238703F14FAF74A07DD857586324D7B47D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// playerManager.rotaDegissinMi = true;
		PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * L_0 = __this->get_playerManager_23();
		NullCheck(L_0);
		L_0->set_rotaDegissinMi_11((bool)1);
		// soruyuYazdir();
		GameManager_soruyuYazdir_m0C41181CE709528594A318CD079E6A9C73A3A72D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::birinciCarpaniAyarla()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_birinciCarpaniAyarla_m8EDF6D39EC5B48438CCCEA154C55E4077E77B3F7 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55DE8BF12517FC395D414EBDFF4FAB01E4A3165B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6732310B7DD8882613E9C36603DE956845F0EECA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ED4CB570D5BF8A9852CE839D5166F1FA50AD1F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F531D091DEFD1AFE9482485551BED2FDAAA1A44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B68578BBE99A5FAEF26CFEC074E429EF626D2C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E8047D91D13BF2F737DA2AF58D5F2027F5B3302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8061E2F0AC26AB4B4200C43C0BDA58A4A4E09A7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A16B642AE33965E91CAD93FE10DF7D82CDFEF4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB67A6CE51AEEF3B86F491BCE74FAB45479581AE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2436568628965DB9ECE3E34F4D5479C0599FD9C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		// switch (hangiOyun)
		String_t* L_0 = __this->get_hangiOyun_5();
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0170;
		}
	}
	{
		String_t* L_2 = V_0;
		uint32_t L_3;
		L_3 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mD94B0E22EF32AD3DFD277ED8E911B5DFA4CDB91E(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		uint32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1630810064)))))
		{
			goto IL_0057;
		}
	}
	{
		uint32_t L_5 = V_1;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)575341273)))))
		{
			goto IL_0038;
		}
	}
	{
		uint32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572222095))))
		{
			goto IL_009a;
		}
	}
	{
		uint32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)575341273))))
		{
			goto IL_00e0;
		}
	}
	{
		return;
	}

IL_0038:
	{
		uint32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)684443287))))
		{
			goto IL_00c4;
		}
	}
	{
		uint32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1269813773))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1630810064))))
		{
			goto IL_00fc;
		}
	}
	{
		return;
	}

IL_0057:
	{
		uint32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1628125828)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)2031841974))))
		{
			goto IL_00ee;
		}
	}
	{
		uint32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1628125828))))
		{
			goto IL_008c;
		}
	}
	{
		return;
	}

IL_0073:
	{
		uint32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1517651996))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-786860135))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-536242955))))
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_008c:
	{
		String_t* L_17 = V_0;
		bool L_18;
		L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteral8061E2F0AC26AB4B4200C43C0BDA58A4A4E09A7D, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0118;
		}
	}
	{
		return;
	}

IL_009a:
	{
		String_t* L_19 = V_0;
		bool L_20;
		L_20 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_19, _stringLiteral9A16B642AE33965E91CAD93FE10DF7D82CDFEF4D, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0120;
		}
	}
	{
		return;
	}

IL_00a8:
	{
		String_t* L_21 = V_0;
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_21, _stringLiteral55DE8BF12517FC395D414EBDFF4FAB01E4A3165B, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0128;
		}
	}
	{
		return;
	}

IL_00b6:
	{
		String_t* L_23 = V_0;
		bool L_24;
		L_24 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_23, _stringLiteral6732310B7DD8882613E9C36603DE956845F0EECA, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0130;
		}
	}
	{
		return;
	}

IL_00c4:
	{
		String_t* L_25 = V_0;
		bool L_26;
		L_26 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_25, _stringLiteralD2436568628965DB9ECE3E34F4D5479C0599FD9C, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0138;
		}
	}
	{
		return;
	}

IL_00d2:
	{
		String_t* L_27 = V_0;
		bool L_28;
		L_28 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_27, _stringLiteral7E8047D91D13BF2F737DA2AF58D5F2027F5B3302, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0140;
		}
	}
	{
		return;
	}

IL_00e0:
	{
		String_t* L_29 = V_0;
		bool L_30;
		L_30 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_29, _stringLiteral6ED4CB570D5BF8A9852CE839D5166F1FA50AD1F7, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0148;
		}
	}
	{
		return;
	}

IL_00ee:
	{
		String_t* L_31 = V_0;
		bool L_32;
		L_32 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_31, _stringLiteral7B68578BBE99A5FAEF26CFEC074E429EF626D2C2, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_0150;
		}
	}
	{
		return;
	}

IL_00fc:
	{
		String_t* L_33 = V_0;
		bool L_34;
		L_34 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_33, _stringLiteral6F531D091DEFD1AFE9482485551BED2FDAAA1A44, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_0159;
		}
	}
	{
		return;
	}

IL_010a:
	{
		String_t* L_35 = V_0;
		bool L_36;
		L_36 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_35, _stringLiteralB67A6CE51AEEF3B86F491BCE74FAB45479581AE6, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0162;
		}
	}
	{
		return;
	}

IL_0118:
	{
		// birinciCarpan = 2;
		__this->set_birinciCarpan_6(2);
		// break;
		return;
	}

IL_0120:
	{
		// birinciCarpan = 3;
		__this->set_birinciCarpan_6(3);
		// break;
		return;
	}

IL_0128:
	{
		// birinciCarpan = 4;
		__this->set_birinciCarpan_6(4);
		// break;
		return;
	}

IL_0130:
	{
		// birinciCarpan = 5;
		__this->set_birinciCarpan_6(5);
		// break;
		return;
	}

IL_0138:
	{
		// birinciCarpan = 6;
		__this->set_birinciCarpan_6(6);
		// break;
		return;
	}

IL_0140:
	{
		// birinciCarpan = 7;
		__this->set_birinciCarpan_6(7);
		// break;
		return;
	}

IL_0148:
	{
		// birinciCarpan = 8;
		__this->set_birinciCarpan_6(8);
		// break;
		return;
	}

IL_0150:
	{
		// birinciCarpan = 9;
		__this->set_birinciCarpan_6(((int32_t)9));
		// break;
		return;
	}

IL_0159:
	{
		// birinciCarpan = 10;
		__this->set_birinciCarpan_6(((int32_t)10));
		// break;
		return;
	}

IL_0162:
	{
		// birinciCarpan = Random.Range(2,11);
		int32_t L_37;
		L_37 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(2, ((int32_t)11), /*hidden argument*/NULL);
		__this->set_birinciCarpan_6(L_37);
	}

IL_0170:
	{
		// }
		return;
	}
}
// System.Void GameManager::soruyuYazdir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_soruyuYazdir_m0C41181CE709528594A318CD079E6A9C73A3A72D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// birinciCarpaniAyarla();
		GameManager_birinciCarpaniAyarla_m8EDF6D39EC5B48438CCCEA154C55E4077E77B3F7(__this, /*hidden argument*/NULL);
		// ikinciCarpan = Random.Range(2, 11);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(2, ((int32_t)11), /*hidden argument*/NULL);
		__this->set_ikinciCarpan_7(L_0);
		// int rastgeleDeger = Random.Range(1, 100);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)100), /*hidden argument*/NULL);
		// if (rastgeleDeger<=50)
		if ((((int32_t)L_1) > ((int32_t)((int32_t)50))))
		{
			goto IL_004d;
		}
	}
	{
		// soruText.text = birinciCarpan.ToString() + "x" + ikinciCarpan.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_soruText_19();
		int32_t* L_3 = __this->get_address_of_birinciCarpan_6();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		int32_t* L_5 = __this->get_address_of_ikinciCarpan_7();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_4, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_7);
		// }
		goto IL_0078;
	}

IL_004d:
	{
		// soruText.text = ikinciCarpan.ToString() + "x" + birinciCarpan.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_soruText_19();
		int32_t* L_9 = __this->get_address_of_ikinciCarpan_7();
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_9, /*hidden argument*/NULL);
		int32_t* L_11 = __this->get_address_of_birinciCarpan_6();
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_10, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_12, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_13);
	}

IL_0078:
	{
		// dogruSonuc = birinciCarpan * ikinciCarpan;
		int32_t L_14 = __this->get_birinciCarpan_6();
		int32_t L_15 = __this->get_ikinciCarpan_7();
		__this->set_dogruSonuc_8(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)L_15)));
		// sonuclariYazdir();
		GameManager_sonuclariYazdir_m602F78C9F3F8A84265E19787BB4C9034C583D6C8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::sonuclariYazdir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_sonuclariYazdir_m602F78C9F3F8A84265E19787BB4C9034C583D6C8 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// yanlisSonuc1 = dogruSonuc + Random.Range(2, 10);
		int32_t L_0 = __this->get_dogruSonuc_8();
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(2, ((int32_t)10), /*hidden argument*/NULL);
		__this->set_yanlisSonuc1_9(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// if (dogruSonuc>10)
		int32_t L_2 = __this->get_dogruSonuc_8();
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0036;
		}
	}
	{
		// yanlisSonuc2 = dogruSonuc - Random.Range(2, 10);
		int32_t L_3 = __this->get_dogruSonuc_8();
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(2, ((int32_t)10), /*hidden argument*/NULL);
		__this->set_yanlisSonuc2_10(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4)));
		// }
		goto IL_005e;
	}

IL_0036:
	{
		// yanlisSonuc2 =Mathf.Abs(dogruSonuc - Random.Range(2, 5));
		int32_t L_5 = __this->get_dogruSonuc_8();
		int32_t L_6;
		L_6 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(2, 5, /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)), /*hidden argument*/NULL);
		__this->set_yanlisSonuc2_10(L_7);
		// if (yanlisSonuc2==0)
		int32_t L_8 = __this->get_yanlisSonuc2_10();
		if (L_8)
		{
			goto IL_005e;
		}
	}
	{
		// yanlisSonuc2 = 1;
		__this->set_yanlisSonuc2_10(1);
	}

IL_005e:
	{
		// int rastgeledeger2 = Random.Range(1, 100);
		int32_t L_9;
		L_9 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)100), /*hidden argument*/NULL);
		V_0 = L_9;
		// if (rastgeledeger2<=33)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)33))))
		{
			goto IL_00af;
		}
	}
	{
		// solText.text = dogruSonuc.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_solText_20();
		int32_t* L_12 = __this->get_address_of_dogruSonuc_8();
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_13);
		// ortaText.text = yanlisSonuc1.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = __this->get_ortaText_21();
		int32_t* L_15 = __this->get_address_of_yanlisSonuc1_9();
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
		// sagText.text = yanlisSonuc2.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = __this->get_sagText_22();
		int32_t* L_18 = __this->get_address_of_yanlisSonuc2_10();
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_19);
		// }
		return;
	}

IL_00af:
	{
		// else if (rastgeledeger2>33 && rastgeledeger2<=66)
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) <= ((int32_t)((int32_t)33))))
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)66))))
		{
			goto IL_00fc;
		}
	}
	{
		// ortaText.text = dogruSonuc.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_22 = __this->get_ortaText_21();
		int32_t* L_23 = __this->get_address_of_dogruSonuc_8();
		String_t* L_24;
		L_24 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_24);
		// solText.text = yanlisSonuc1.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_25 = __this->get_solText_20();
		int32_t* L_26 = __this->get_address_of_yanlisSonuc1_9();
		String_t* L_27;
		L_27 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_27);
		// sagText.text = yanlisSonuc2.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_28 = __this->get_sagText_22();
		int32_t* L_29 = __this->get_address_of_yanlisSonuc2_10();
		String_t* L_30;
		L_30 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, L_30);
		// }
		return;
	}

IL_00fc:
	{
		// sagText.text = dogruSonuc.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_31 = __this->get_sagText_22();
		int32_t* L_32 = __this->get_address_of_dogruSonuc_8();
		String_t* L_33;
		L_33 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_33);
		// ortaText.text = yanlisSonuc1.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_34 = __this->get_ortaText_21();
		int32_t* L_35 = __this->get_address_of_yanlisSonuc1_9();
		String_t* L_36;
		L_36 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_34, L_36);
		// solText.text = yanlisSonuc2.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_37 = __this->get_solText_20();
		int32_t* L_38 = __this->get_address_of_yanlisSonuc2_10();
		String_t* L_39;
		L_39 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_39);
		// }
		return;
	}
}
// System.Void GameManager::SonucuKontrolEt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SonucuKontrolEt_m5376A6A1C5692EFD240E77C1F0DB3E8CBCE7922A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___Sonuc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral483A3BF26DCF497CB1AAC6E1E1762A117334DEF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD737C7C96927A055956E7E1A3877EAB8F2DDF254);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBDF38A7B693B4D7872B3C475AEF08FC201BEE4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dogruImage.GetComponent<RectTransform>().localScale = Vector3.zero;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_dogruImage_14();
		NullCheck(L_0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_1, L_2, /*hidden argument*/NULL);
		// yanlisImage.GetComponent<RectTransform>().localScale = Vector3.zero;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_yanlisImage_15();
		NullCheck(L_3);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4;
		L_4 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_3, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_4, L_5, /*hidden argument*/NULL);
		// if (Sonuc==dogruSonuc)
		int32_t L_6 = ___Sonuc0;
		int32_t L_7 = __this->get_dogruSonuc_8();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_006d;
		}
	}
	{
		// dogruAdet++;
		int32_t L_8 = __this->get_dogruAdet_11();
		__this->set_dogruAdet_11(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		// toplamPuan += 20;
		int32_t L_9 = __this->get_toplamPuan_13();
		__this->set_toplamPuan_13(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)((int32_t)20))));
		// dogruImage.GetComponent<RectTransform>().DOScale(1, 0.2f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_dogruImage_14();
		NullCheck(L_10);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_11;
		L_11 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_10, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_12;
		L_12 = ShortcutExtensions_DOScale_m3F394144EDDD26734F69CCDACBE8E7ACFBBFA8B7(L_11, (1.0f), (0.200000003f), /*hidden argument*/NULL);
		// }
		goto IL_00b5;
	}

IL_006d:
	{
		// yanlisAdet++;
		int32_t L_13 = __this->get_yanlisAdet_12();
		__this->set_yanlisAdet_12(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		// toplamPuan -= 10;
		int32_t L_14 = __this->get_toplamPuan_13();
		__this->set_toplamPuan_13(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)10))));
		// if (toplamPuan<=0)
		int32_t L_15 = __this->get_toplamPuan_13();
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_009a;
		}
	}
	{
		// toplamPuan = 0;
		__this->set_toplamPuan_13(0);
	}

IL_009a:
	{
		// yanlisImage.GetComponent<RectTransform>().DOScale(1, 0.2f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_yanlisImage_15();
		NullCheck(L_16);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_17;
		L_17 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_16, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_18;
		L_18 = ShortcutExtensions_DOScale_m3F394144EDDD26734F69CCDACBE8E7ACFBBFA8B7(L_17, (1.0f), (0.200000003f), /*hidden argument*/NULL);
	}

IL_00b5:
	{
		// dogruAdetText.text = dogruAdet.ToString() +" DO�RU";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_dogruAdetText_16();
		int32_t* L_20 = __this->get_address_of_dogruAdet_11();
		String_t* L_21;
		L_21 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_20, /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_21, _stringLiteralD737C7C96927A055956E7E1A3877EAB8F2DDF254, /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_22);
		// yanlisAdetText.text = yanlisAdet.ToString() + " YANLI�";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = __this->get_yanlisAdetText_17();
		int32_t* L_24 = __this->get_address_of_yanlisAdet_12();
		String_t* L_25;
		L_25 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_24, /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_25, _stringLiteral483A3BF26DCF497CB1AAC6E1E1762A117334DEF0, /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_26);
		// puanText.text = toplamPuan.ToString() + " PUAN";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_27 = __this->get_puanText_18();
		int32_t* L_28 = __this->get_address_of_toplamPuan_13();
		String_t* L_29;
		L_29 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_28, /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_29, _stringLiteralEBDF38A7B693B4D7872B3C475AEF08FC201BEE4E, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_30);
		// soruyuYazdir();
		GameManager_soruyuYazdir_m0C41181CE709528594A318CD079E6A9C73A3A72D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::OyunuBitir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OyunuBitir_m5547757297A64AC611DB01B352CC01D34FDE85CE (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sonucPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_sonucPanel_24();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// sonuclar.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_sonuclar_25();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// zamanImage.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_zamanImage_26();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// dogruYanlisImage.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_dogruYanlisImage_27();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// puanPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_puanPanel_28();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// soruText.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_soruText_19();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Start_m4E4A5EF33C27448D7F34FD29B93589635F1B2EE2 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6_m2CBA82F7C1473D8AACD53558BC829D4E41D8ECE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sesPaneliAcikMi = false;
		__this->set_sesPaneliAcikMi_8((bool)0);
		// sesPaneli.GetComponent<RectTransform>().localPosition = new Vector3(0, -23, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_sesPaneli_7();
		NullCheck(L_0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (-23.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_1, L_2, /*hidden argument*/NULL);
		// soruPanel.GetComponent<CanvasGroup>().DOFade(1, 1f).SetEase(Ease.InCirc);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_soruPanel_4();
		NullCheck(L_3);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_4;
		L_4 = GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A(L_3, /*hidden argument*/GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A_RuntimeMethod_var);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_5;
		L_5 = DOTweenModuleUI_DOFade_mBE8F5B25D6DAB090178C1AE0A97896F09D42136C(L_4, (1.0f), (1.0f), /*hidden argument*/NULL);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_6;
		L_6 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6_m2CBA82F7C1473D8AACD53558BC829D4E41D8ECE0(L_5, ((int32_t)20), /*hidden argument*/TweenSettingsExtensions_SetEase_TisTweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6_m2CBA82F7C1473D8AACD53558BC829D4E41D8ECE0_RuntimeMethod_var);
		// soruPanel.GetComponent<RectTransform>().DOScale(1, 1f).SetEase(Ease.OutBack);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_soruPanel_4();
		NullCheck(L_7);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8;
		L_8 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_7, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_9;
		L_9 = ShortcutExtensions_DOScale_m3F394144EDDD26734F69CCDACBE8E7ACFBBFA8B7(L_8, (1.0f), (1.0f), /*hidden argument*/NULL);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_10;
		L_10 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4(L_9, ((int32_t)27), /*hidden argument*/TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MenuManager::ikinciLeveleGec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ikinciLeveleGec_m033C621EC09A3B0625E847D3C7962ECE884397DC (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F7A219A924C3E71CB37D360DAEC81889C7FFC95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("SesDurumu")==1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		// audioSource.PlayOneShot(buttonClick);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_5();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_buttonClick_6();
		NullCheck(L_1);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// SceneManager.LoadScene("MenuLevel2");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral0F7A219A924C3E71CB37D360DAEC81889C7FFC95, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::AyarlariYap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_AyarlariYap_m97032B647CA164C528E808DA883BC2B5AF0CFB6E (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("SesDurumu") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		// audioSource.PlayOneShot(buttonClick);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_5();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_buttonClick_6();
		NullCheck(L_1);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// if (!sesPaneliAcikMi)
		bool L_3 = __this->get_sesPaneliAcikMi_8();
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		// sesPaneli.GetComponent<RectTransform>().DOLocalMoveY(-100, 0.5f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_sesPaneli_7();
		NullCheck(L_4);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5;
		L_5 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_4, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_6;
		L_6 = ShortcutExtensions_DOLocalMoveY_m758574147287D8B39618F852682E1E03BDC7A696(L_5, (-100.0f), (0.5f), (bool)0, /*hidden argument*/NULL);
		// sesPaneliAcikMi = true;
		__this->set_sesPaneliAcikMi_8((bool)1);
		// }
		return;
	}

IL_004a:
	{
		// else if (sesPaneliAcikMi)
		bool L_7 = __this->get_sesPaneliAcikMi_8();
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		// sesPaneli.GetComponent<RectTransform>().DOLocalMoveY(-23, 0.5f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_sesPaneli_7();
		NullCheck(L_8);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9;
		L_9 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_8, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_10;
		L_10 = ShortcutExtensions_DOLocalMoveY_m758574147287D8B39618F852682E1E03BDC7A696(L_9, (-23.0f), (0.5f), (bool)0, /*hidden argument*/NULL);
		// sesPaneliAcikMi = false;
		__this->set_sesPaneliAcikMi_8((bool)0);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void MenuManager::oyundanCik()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_oyundanCik_m8419F79F9D0FAB68F0E158F49781ED74FB829734 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("SesDurumu") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		// audioSource.PlayOneShot(buttonClick);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_5();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_buttonClick_6();
		NullCheck(L_1);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager__ctor_m8F61CC885B72291B54C1C6EC368AE303EA856529 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MermiManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MermiManager_Start_m2C35169C06297104197323D287A8EEF79C5BEAFE (MermiManager_t19426B7AD34A7153C1EF6058850C0C6442128906 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject!=null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Destroy(this.gameObject, 3f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_2, (3.0f), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void MermiManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MermiManager_Update_mDFDF9DF2B9C3A8310AF208C76FC477715458D508 (MermiManager_t19426B7AD34A7153C1EF6058850C0C6442128906 * __this, const RuntimeMethod* method)
{
	{
		// transform.Translate(Vector3.up * Time.deltaTime * mermiHizi);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_mermiHizi_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MermiManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MermiManager__ctor_mEBEDFAB503F932B4FD0D3D6930C3371FE8DAE41A (MermiManager_t19426B7AD34A7153C1EF6058850C0C6442128906 * __this, const RuntimeMethod* method)
{
	{
		// float mermiHizi = 15;
		__this->set_mermiHizi_4((15.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_Start_mA587FD881326FC1FBCEE2699E54A8A0ACCF83455 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method)
{
	{
		// rotaDegissinMi = false;
		__this->set_rotaDegissinMi_11((bool)0);
		// }
		return;
	}
}
// System.Void PlayerManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_Update_mA0EE0A117D34258508935E958CF715FD930D066A (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method)
{
	{
		// if (rotaDegissinMi)
		bool L_0 = __this->get_rotaDegissinMi_11();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// rotateDegistir();
		PlayerManager_rotateDegistir_m91831C3BD6AF948A4D5025658FB704540FFB7790(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void PlayerManager::rotateDegistir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_rotateDegistir_m91831C3BD6AF948A4D5025658FB704540FFB7790 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 direction = Camera.main.ScreenToWorldPoint(Input.mousePosition) - gun.transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_0, L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_gun_4();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg - 90f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_0;
		float L_9 = L_8.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		float L_11 = L_10.get_x_0();
		float L_12;
		L_12 = atan2f(L_9, L_11);
		__this->set_angle_7(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_12, (float)(57.2957802f))), (float)(90.0f))));
		// if (angle < 45 && angle > -45)
		float L_13 = __this->get_angle_7();
		if ((!(((float)L_13) < ((float)(45.0f)))))
		{
			goto IL_00aa;
		}
	}
	{
		float L_14 = __this->get_angle_7();
		if ((!(((float)L_14) > ((float)(-45.0f)))))
		{
			goto IL_00aa;
		}
	}
	{
		// Quaternion rotation = Quaternion.AngleAxis(angle, Vector3.forward);
		float L_15 = __this->get_angle_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(L_15, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		// gun.transform.rotation = Quaternion.Slerp(gun.transform.rotation, rotation, donusHizi * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = __this->get_gun_4();
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = __this->get_gun_4();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_21, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23 = V_1;
		float L_24 = __this->get_donusHizi_8();
		float L_25;
		L_25 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_22, L_23, ((float)il2cpp_codegen_multiply((float)L_24, (float)L_25)), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_19, L_26, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_27;
		L_27 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00d7;
		}
	}
	{
		// if (Time.time > sonrakiAtis)
		float L_28;
		L_28 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_29 = __this->get_sonrakiAtis_10();
		if ((!(((float)L_28) > ((float)L_29))))
		{
			goto IL_00d7;
		}
	}
	{
		// sonrakiAtis = Time.time + ikiMermiArasiSure;
		float L_30;
		L_30 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_31 = __this->get_ikiMermiArasiSure_9();
		__this->set_sonrakiAtis_10(((float)il2cpp_codegen_add((float)L_30, (float)L_31)));
		// mermiAt();
		PlayerManager_mermiAt_m4EDFDC34951B3D42E4A010D673C7B369F222B7E4(__this, /*hidden argument*/NULL);
	}

IL_00d7:
	{
		// }
		return;
	}
}
// System.Void PlayerManager::mermiAt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_mermiAt_m4EDFDC34951B3D42E4A010D673C7B369F222B7E4 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("SesDurumu") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		// audioSource.PlayOneShot(topSesi);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_12();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_topSesi_13();
		NullCheck(L_1);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// GameObject mermi = Instantiate(mermiPrefab[Random.Range(0,mermiPrefab.Length)],mermiYeri.position,mermiYeri.rotation) as GameObject;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_mermiPrefab_6();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get_mermiPrefab_6();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_6 = L_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_mermiYeri_5();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_mermiYeri_5();
		NullCheck(L_10);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_7, L_9, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PlayerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager__ctor_m4C7CA12A8243D6CA73C1EA65B361E7B717070471 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method)
{
	{
		// float donusHizi = 100f;
		__this->set_donusHizi_8((100.0f));
		// float ikiMermiArasiSure = 0.3f;
		__this->set_ikiMermiArasiSure_9((0.300000012f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SesKontrolManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SesKontrolManager_Start_m13880DFB97AFEB0F6C538A738349375020DB2241 (SesKontrolManager_t68205183CC3ECDCA699D2AD380748D9E52EA672A * __this, const RuntimeMethod* method)
{
	{
		// SesiAc();
		SesKontrolManager_SesiAc_m9E3688335F1D621363A44C5EED670E9A40E273FF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SesKontrolManager::SesiAc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SesKontrolManager_SesiAc_m9E3688335F1D621363A44C5EED670E9A40E273FF (SesKontrolManager_t68205183CC3ECDCA699D2AD380748D9E52EA672A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("SesDurumu", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SesKontrolManager::SesiKapat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SesKontrolManager_SesiKapat_mA5C745DE4A4692615260705C6834BC512A021B6B (SesKontrolManager_t68205183CC3ECDCA699D2AD380748D9E52EA672A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("SesDurumu", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral25628A6C51E6A678894DC2C1E485DD189346D805, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SesKontrolManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SesKontrolManager__ctor_m9ACC8865F2A099EA2BC0D813D511E85A10CB8F63 (SesKontrolManager_t68205183CC3ECDCA699D2AD380748D9E52EA672A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SonucManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SonucManager_Awake_mE462D881551086FE24270AB054CA550A83B0E798 (SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = Object.FindObjectOfType<GameManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		__this->set_gameManager_12(L_0);
		// }
		return;
	}
}
// System.Void SonucManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SonucManager_OnEnable_m7A62557C428F378A4FC672244F3047A252E13F71 (SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dogruText.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_dogruText_5();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// yanlisText.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_yanlisText_6();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// puanText.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_puanText_7();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// Sure = 0;
		__this->set_Sure_10((0.0f));
		// AcilsinMi = true;
		__this->set_AcilsinMi_11((bool)1);
		// tekrarOynaBttn.GetComponent<RectTransform>().localScale = Vector3.zero;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_tekrarOynaBttn_8();
		NullCheck(L_3);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4;
		L_4 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_3, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_4, L_5, /*hidden argument*/NULL);
		// menuyaDonBttn.GetComponent<RectTransform>().localScale = Vector3.zero;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_menuyaDonBttn_9();
		NullCheck(L_6);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7;
		L_7 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_6, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_7, L_8, /*hidden argument*/NULL);
		// StartCoroutine(resimAcilsinMiRoutine());
		RuntimeObject* L_9;
		L_9 = SonucManager_resimAcilsinMiRoutine_mBDCB199BF62B38E23FE47434D84E65129C944F85(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_10;
		L_10 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SonucManager::resimAcilsinMiRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SonucManager_resimAcilsinMiRoutine_mBDCB199BF62B38E23FE47434D84E65129C944F85 (SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9 * L_0 = (U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9 *)il2cpp_codegen_object_new(U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9_il2cpp_TypeInfo_var);
		U3CresimAcilsinMiRoutineU3Ed__11__ctor_m9B2D22A0D200C1E154820A98DC45FB9BCE9901BC(L_0, 0, /*hidden argument*/NULL);
		U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void SonucManager::TekrarOyna()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SonucManager_TekrarOyna_m7A43119B852565B15BD0559CCF58F8FAF01E158B (SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0FDA4783E36B5D9B9D406D45BF082E5F2532496);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GameLevel");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralC0FDA4783E36B5D9B9D406D45BF082E5F2532496, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SonucManager::AnaMenuyeDon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SonucManager_AnaMenuyeDon_mBA67CD74D2B989392B28FBFADBA077674BD78FFD (SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F7A219A924C3E71CB37D360DAEC81889C7FFC95);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MenuLevel2");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral0F7A219A924C3E71CB37D360DAEC81889C7FFC95, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SonucManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SonucManager__ctor_m2906C7E5D2247C0C90C85F7D8FB41C9253B38897 (SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TimerManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerManager_Awake_m75F50765B45224CB29C549F02ABB77987781F9B3 (TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = Object.FindObjectOfType<GameManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		__this->set_gameManager_6(L_0);
		// }
		return;
	}
}
// System.Void TimerManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerManager_Start_mC3447020AED210F176D947D40C15B39B9C72F1EA (TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(Zaman());
		RuntimeObject* L_0;
		L_0 = TimerManager_Zaman_m31A400370CEBE4F4C29CD7C78014599235BA9E87(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TimerManager::Zaman()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimerManager_Zaman_m31A400370CEBE4F4C29CD7C78014599235BA9E87 (TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68 * L_0 = (U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68 *)il2cpp_codegen_object_new(U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68_il2cpp_TypeInfo_var);
		U3CZamanU3Ed__5__ctor_m13577EE43FBE522D7C32563EC8CCB8671131361B(L_0, 0, /*hidden argument*/NULL);
		U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void TimerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerManager__ctor_m9F70E979790C36597C7774EEF98A90ABC02DC07A (TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * __this, const RuntimeMethod* method)
{
	{
		// int kalanSure = 90;
		__this->set_kalanSure_5(((int32_t)90));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void circleRotateManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void circleRotateManager_Awake_m11CB194C3AC535014CA7EFC238D1FBE2A9CCC8BA (circleRotateManager_t1072A97811A010508B91D80C9201F3D11D874CF5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = GameObject.FindObjectOfType<GameManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		__this->set_gameManager_4(L_0);
		// }
		return;
	}
}
// System.Void circleRotateManager::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void circleRotateManager_OnTriggerEnter2D_m630E36818F0982030D8C2F32121551861E909990 (circleRotateManager_t1072A97811A010508B91D80C9201F3D11D874CF5 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral358F231A52491A7C857965E92BFD300FE7D1166B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50073F112E9BD8ED0268EC06E13A306C5B660FDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B86B3DEE097BF7A5F2CEA360AB759B2C1B017E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7480AFC0FA0E430AE13902C888EB3277E32B94F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC27A95D8E73334A668B8BB39ADB93AE8C05A4891);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF73D67FA6D623D7DAD29F68A1807E29C871FDD89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC7A1E0BADBBD0081CE3877F39072B4D26B78BC6);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (collision.tag=="mermi")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral50073F112E9BD8ED0268EC06E13A306C5B660FDC, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0119;
		}
	}
	{
		// gameObject.transform.DORotate(transform.eulerAngles + Quaternion.AngleAxis(45, Vector3.forward).eulerAngles, 0.5f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398((45.0f), L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_9, /*hidden argument*/NULL);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_11;
		L_11 = ShortcutExtensions_DORotate_mE9F72A2C8CB5CABE531B629F166E1CFB12A020AE(L_4, L_10, (0.5f), 0, /*hidden argument*/NULL);
		// if (collision.gameObject!=null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12 = ___collision0;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_15 = ___collision0;
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_16, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (gameObject.name == "solDaire")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteralC27A95D8E73334A668B8BB39ADB93AE8C05A4891, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_009f;
		}
	}
	{
		// hangiSonuc = GameObject.Find("SolText").GetComponent<Text>().text;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral51B86B3DEE097BF7A5F2CEA360AB759B2C1B017E, /*hidden argument*/NULL);
		NullCheck(L_20);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21;
		L_21 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_20, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_21);
		__this->set_hangiSonuc_5(L_22);
		// }
		goto IL_0103;
	}

IL_009f:
	{
		// else if (gameObject.name == "ortaDaire")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_23, /*hidden argument*/NULL);
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteral358F231A52491A7C857965E92BFD300FE7D1166B, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00d2;
		}
	}
	{
		// hangiSonuc = GameObject.Find("OrtaText").GetComponent<Text>().text;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFC7A1E0BADBBD0081CE3877F39072B4D26B78BC6, /*hidden argument*/NULL);
		NullCheck(L_26);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_27;
		L_27 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_26, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_27);
		__this->set_hangiSonuc_5(L_28);
		// }
		goto IL_0103;
	}

IL_00d2:
	{
		// else if (gameObject.name == "sagDaire")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		String_t* L_30;
		L_30 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_29, /*hidden argument*/NULL);
		bool L_31;
		L_31 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_30, _stringLiteralF73D67FA6D623D7DAD29F68A1807E29C871FDD89, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0103;
		}
	}
	{
		// hangiSonuc = GameObject.Find("SagText").GetComponent<Text>().text;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral7480AFC0FA0E430AE13902C888EB3277E32B94F7, /*hidden argument*/NULL);
		NullCheck(L_32);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_33;
		L_33 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_32, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_33);
		__this->set_hangiSonuc_5(L_34);
	}

IL_0103:
	{
		// gameManager.SonucuKontrolEt(int.Parse(hangiSonuc));
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_35 = __this->get_gameManager_4();
		String_t* L_36 = __this->get_hangiSonuc_5();
		int32_t L_37;
		L_37 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		GameManager_SonucuKontrolEt_m5376A6A1C5692EFD240E77C1F0DB3E8CBCE7922A(L_35, L_37, /*hidden argument*/NULL);
	}

IL_0119:
	{
		// }
		return;
	}
}
// System.Void circleRotateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void circleRotateManager__ctor_m543B2CE79BFC407D4FE8F926B4C5682064534F05 (circleRotateManager_t1072A97811A010508B91D80C9201F3D11D874CF5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameManager/<baslaYazRoutine>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CbaslaYazRoutineU3Ed__27__ctor_m342D5552E8083D838708BF04DDF8A496FE752C84 (U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<baslaYazRoutine>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CbaslaYazRoutineU3Ed__27_System_IDisposable_Dispose_m5822DC6D66BA80FE04CC2D61FDEC4F737F128AE5 (U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<baslaYazRoutine>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CbaslaYazRoutineU3Ed__27_MoveNext_m1CBAEF54628DB976422C09EDD0C21FFD8D996B66 (U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_00ba;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// baslaImage.GetComponent<RectTransform>().DOScale(1.3f, 0.5f);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3 = V_1;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_baslaImage_4();
		NullCheck(L_4);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5;
		L_5 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_4, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_6;
		L_6 = ShortcutExtensions_DOScale_m3F394144EDDD26734F69CCDACBE8E7ACFBBFA8B7(L_5, (1.29999995f), (0.5f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.6f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, (0.600000024f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// baslaImage.GetComponent<RectTransform>().DOScale(0, 0.5f).SetEase(Ease.InBack);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_8 = V_1;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8->get_baslaImage_4();
		NullCheck(L_9);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10;
		L_10 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_9, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_11;
		L_11 = ShortcutExtensions_DOScale_m3F394144EDDD26734F69CCDACBE8E7ACFBBFA8B7(L_10, (0.0f), (0.5f), /*hidden argument*/NULL);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_12;
		L_12 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4(L_11, ((int32_t)26), /*hidden argument*/TweenSettingsExtensions_SetEase_TisTweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4_mF0DA0120CEA2C163098E706FECA34869CC6E76D4_RuntimeMethod_var);
		// baslaImage.GetComponent<CanvasGroup>().DOFade(0, 0.5f);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_13 = V_1;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = L_13->get_baslaImage_4();
		NullCheck(L_14);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_15;
		L_15 = GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A(L_14, /*hidden argument*/GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A_RuntimeMethod_var);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_16;
		L_16 = DOTweenModuleUI_DOFade_mBE8F5B25D6DAB090178C1AE0A97896F09D42136C(L_15, (0.0f), (0.5f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.6f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_17 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_17, (0.600000024f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00ba:
	{
		__this->set_U3CU3E1__state_0((-1));
		// oyunaBasla();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_18 = V_1;
		NullCheck(L_18);
		GameManager_oyunaBasla_m4BBAFB238703F14FAF74A07DD857586324D7B47D(L_18, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<baslaYazRoutine>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CbaslaYazRoutineU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5DCC81C1C47219DB10937ECE35165FB96DA892D8 (U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<baslaYazRoutine>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CbaslaYazRoutineU3Ed__27_System_Collections_IEnumerator_Reset_m7D3F05891B01B66E89BE7F35A00ACE48788945CE (U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CbaslaYazRoutineU3Ed__27_System_Collections_IEnumerator_Reset_m7D3F05891B01B66E89BE7F35A00ACE48788945CE_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<baslaYazRoutine>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CbaslaYazRoutineU3Ed__27_System_Collections_IEnumerator_get_Current_mC5277C5DD30440E3471EDE76D85D86ABC390A476 (U3CbaslaYazRoutineU3Ed__27_t84BB0630C83EE1784BA5AC62BC14D873E215B13B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void SonucManager/<resimAcilsinMiRoutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CresimAcilsinMiRoutineU3Ed__11__ctor_m9B2D22A0D200C1E154820A98DC45FB9BCE9901BC (U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SonucManager/<resimAcilsinMiRoutine>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CresimAcilsinMiRoutineU3Ed__11_System_IDisposable_Dispose_m8FEEB0CC8B7919A7A13FB3E2024671904DD762E4 (U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SonucManager/<resimAcilsinMiRoutine>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CresimAcilsinMiRoutineU3Ed__11_MoveNext_m8A54922EEFB32E0544A673283A2790E98AC3CC4B (U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral483A3BF26DCF497CB1AAC6E1E1762A117334DEF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD737C7C96927A055956E7E1A3877EAB8F2DDF254);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBDF38A7B693B4D7872B3C475AEF08FC201BEE4E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0066;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0134;
	}

IL_0023:
	{
		// Sure += 0.15f;
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_4 = V_1;
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->get_Sure_10();
		NullCheck(L_4);
		L_4->set_Sure_10(((float)il2cpp_codegen_add((float)L_6, (float)(0.150000006f))));
		// sonucImage.fillAmount += Sure;
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_7 = V_1;
		NullCheck(L_7);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = L_7->get_sonucImage_4();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = L_8;
		NullCheck(L_9);
		float L_10;
		L_10 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_9, /*hidden argument*/NULL);
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->get_Sure_10();
		NullCheck(L_9);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_9, ((float)il2cpp_codegen_add((float)L_10, (float)L_12)), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.15f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_13 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_13, (0.150000006f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0066:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (Sure>=1)
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->get_Sure_10();
		if ((!(((float)L_15) >= ((float)(1.0f)))))
		{
			goto IL_0134;
		}
	}
	{
		// Sure=1;
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_16 = V_1;
		NullCheck(L_16);
		L_16->set_Sure_10((1.0f));
		// AcilsinMi = false;
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_17 = V_1;
		NullCheck(L_17);
		L_17->set_AcilsinMi_11((bool)0);
		// dogruText.text = gameManager.dogruAdet.ToString() + " DO�RU";
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_18 = V_1;
		NullCheck(L_18);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = L_18->get_dogruText_5();
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_20 = V_1;
		NullCheck(L_20);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_21 = L_20->get_gameManager_12();
		NullCheck(L_21);
		int32_t* L_22 = L_21->get_address_of_dogruAdet_11();
		String_t* L_23;
		L_23 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_22, /*hidden argument*/NULL);
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_23, _stringLiteralD737C7C96927A055956E7E1A3877EAB8F2DDF254, /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_24);
		// yanlisText.text = gameManager.yanlisAdet.ToString() + " YANLI�";
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_25 = V_1;
		NullCheck(L_25);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_26 = L_25->get_yanlisText_6();
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_27 = V_1;
		NullCheck(L_27);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_28 = L_27->get_gameManager_12();
		NullCheck(L_28);
		int32_t* L_29 = L_28->get_address_of_yanlisAdet_12();
		String_t* L_30;
		L_30 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_29, /*hidden argument*/NULL);
		String_t* L_31;
		L_31 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_30, _stringLiteral483A3BF26DCF497CB1AAC6E1E1762A117334DEF0, /*hidden argument*/NULL);
		NullCheck(L_26);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_31);
		// puanText.text = gameManager.toplamPuan.ToString() + " PUAN";
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_32 = V_1;
		NullCheck(L_32);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_33 = L_32->get_puanText_7();
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_34 = V_1;
		NullCheck(L_34);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_35 = L_34->get_gameManager_12();
		NullCheck(L_35);
		int32_t* L_36 = L_35->get_address_of_toplamPuan_13();
		String_t* L_37;
		L_37 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_36, /*hidden argument*/NULL);
		String_t* L_38;
		L_38 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_37, _stringLiteralEBDF38A7B693B4D7872B3C475AEF08FC201BEE4E, /*hidden argument*/NULL);
		NullCheck(L_33);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_38);
		// tekrarOynaBttn.GetComponent<RectTransform>().DOScale(1, 0.3f);
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_39 = V_1;
		NullCheck(L_39);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = L_39->get_tekrarOynaBttn_8();
		NullCheck(L_40);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_41;
		L_41 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_40, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_42;
		L_42 = ShortcutExtensions_DOScale_m3F394144EDDD26734F69CCDACBE8E7ACFBBFA8B7(L_41, (1.0f), (0.300000012f), /*hidden argument*/NULL);
		// menuyaDonBttn.GetComponent<RectTransform>().DOScale(1, 0.3f);
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_43 = V_1;
		NullCheck(L_43);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = L_43->get_menuyaDonBttn_9();
		NullCheck(L_44);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_45;
		L_45 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_44, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_46;
		L_46 = ShortcutExtensions_DOScale_m3F394144EDDD26734F69CCDACBE8E7ACFBBFA8B7(L_45, (1.0f), (0.300000012f), /*hidden argument*/NULL);
	}

IL_0134:
	{
		// while (AcilsinMi)
		SonucManager_tD33C12B758524D46B84A0E4A045088CF86EF0356 * L_47 = V_1;
		NullCheck(L_47);
		bool L_48 = L_47->get_AcilsinMi_11();
		if (L_48)
		{
			goto IL_0023;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SonucManager/<resimAcilsinMiRoutine>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CresimAcilsinMiRoutineU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m47F9181B1EC21159F7FCBD90E57A2E363F95D7AC (U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SonucManager/<resimAcilsinMiRoutine>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CresimAcilsinMiRoutineU3Ed__11_System_Collections_IEnumerator_Reset_m03DA44F61642E04E425559A1811B12DEDB620A25 (U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CresimAcilsinMiRoutineU3Ed__11_System_Collections_IEnumerator_Reset_m03DA44F61642E04E425559A1811B12DEDB620A25_RuntimeMethod_var)));
	}
}
// System.Object SonucManager/<resimAcilsinMiRoutine>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CresimAcilsinMiRoutineU3Ed__11_System_Collections_IEnumerator_get_Current_m4F7D40B817A861D6D558DB01E0BFFE9FA8619F78 (U3CresimAcilsinMiRoutineU3Ed__11_tABC6EA5A972E2F2C3A923FE10ED96F3B0BFF87E9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void TimerManager/<Zaman>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZamanU3Ed__5__ctor_m13577EE43FBE522D7C32563EC8CCB8671131361B (U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TimerManager/<Zaman>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZamanU3Ed__5_System_IDisposable_Dispose_m82987ED36BF2C58F398F4ABBB84D0DD74A6EAF04 (U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TimerManager/<Zaman>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CZamanU3Ed__5_MoveNext_mA9B373E166721844DD62936B420D210451218FDD (U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0087;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = kalanSure; i > 0; i--)
		TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_kalanSure_5();
		__this->set_U3CiU3E5__2_3(L_5);
		goto IL_009e;
	}

IL_002c:
	{
		// if (i < 10)
		int32_t L_6 = __this->get_U3CiU3E5__2_3();
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0058;
		}
	}
	{
		// zamanText.text = "0" + i.ToString();
		TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * L_7 = V_1;
		NullCheck(L_7);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = L_7->get_zamanText_4();
		int32_t* L_9 = __this->get_address_of_U3CiU3E5__2_3();
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		// }
		goto IL_006e;
	}

IL_0058:
	{
		// zamanText.text = i.ToString();
		TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * L_12 = V_1;
		NullCheck(L_12);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = L_12->get_zamanText_4();
		int32_t* L_14 = __this->get_address_of_U3CiU3E5__2_3();
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_15);
	}

IL_006e:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_16 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_16, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0087:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = kalanSure; i > 0; i--)
		int32_t L_17 = __this->get_U3CiU3E5__2_3();
		V_2 = L_17;
		int32_t L_18 = V_2;
		__this->set_U3CiU3E5__2_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1)));
	}

IL_009e:
	{
		// for (int i = kalanSure; i > 0; i--)
		int32_t L_19 = __this->get_U3CiU3E5__2_3();
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// zamanText.text = "";
		TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * L_20 = V_1;
		NullCheck(L_20);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = L_20->get_zamanText_4();
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// gameManager.OyunuBitir();
		TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * L_22 = V_1;
		NullCheck(L_22);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_23 = L_22->get_gameManager_6();
		NullCheck(L_23);
		GameManager_OyunuBitir_m5547757297A64AC611DB01B352CC01D34FDE85CE(L_23, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object TimerManager/<Zaman>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CZamanU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5F64CC26AA56E1AC3F94974191B95A7E9C1CE207 (U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TimerManager/<Zaman>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZamanU3Ed__5_System_Collections_IEnumerator_Reset_m6DBFE51362ADCEAF5A7925BE79BBE9A69969C1EB (U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CZamanU3Ed__5_System_Collections_IEnumerator_Reset_m6DBFE51362ADCEAF5A7925BE79BBE9A69969C1EB_RuntimeMethod_var)));
	}
}
// System.Object TimerManager/<Zaman>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CZamanU3Ed__5_System_Collections_IEnumerator_get_Current_m4E022ED68ACD50C25479CEF182889F532C17E074 (U3CZamanU3Ed__5_tAF6F5DA6BA19AF0EAD73CC99CAF187BE78D3EE68 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method)
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->get_m_FillAmount_43();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
