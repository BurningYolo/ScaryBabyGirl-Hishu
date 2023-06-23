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
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
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
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
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

// NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.DailyRewards>
struct DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E;
// NiobiumStudios.DailyRewardsCore`1<System.Object>
struct DailyRewardsCore_1_t205D30D210821929737EE2FE518C6F2E31AAEBDE;
// NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.TimedRewards>
struct DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<NiobiumStudios.DailyRewardUI>
struct List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// System.Collections.Generic.List`1<NiobiumStudios.Reward>
struct List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656;
// System.Collections.Generic.List`1<NiobiumStudios.TimedRewardUI>
struct List_1_t780E6658469A67283CE30DD3ED1A48F92F484550;
// NiobiumStudios.DailyRewardsCore`1/OnInitialize<NiobiumStudios.DailyRewards>
struct OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A;
// NiobiumStudios.DailyRewardsCore`1/OnInitialize<System.Object>
struct OnInitialize_t435BD48416A8E1B9B5CDB30812874C1EDBEF4912;
// NiobiumStudios.DailyRewardsCore`1/OnInitialize<NiobiumStudios.TimedRewards>
struct OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// NiobiumStudios.Reward[]
struct RewardU5BU5D_tD62E71A1D1B5E2ECB0800D47850FB5589F1811F7;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// NiobiumStudios.TimedRewardUI[]
struct TimedRewardUIU5BU5D_t382CC7539881AD6D4CC910258617CB014B52FCC4;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// NiobiumStudios.DailyRewardUI
struct DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017;
// NiobiumStudios.DailyRewards
struct DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480;
// NiobiumStudios.DailyRewardsInterface
struct DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// NiobiumStudios.Reward
struct Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// NiobiumStudios.TimedRewardUI
struct TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40;
// NiobiumStudios.TimedRewards
struct TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959;
// NiobiumStudios.TimedRewardsInterface
struct TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB;
// NiobiumStudios.WorldClock
struct WorldClock_t745B9EBFD47BE3C503F538E406361FCADABF5FCE;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// NiobiumStudios.DailyRewards/<InitializeTimer>d__13
struct U3CInitializeTimerU3Ed__13_tA1883F719550C880F98EC3A47835EAB6D50C8A84;
// NiobiumStudios.DailyRewards/OnClaimPrize
struct OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B;
// NiobiumStudios.DailyRewardsInterface/<>c
struct U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B;
// NiobiumStudios.DailyRewardsInterface/<TickTime>d__31
struct U3CTickTimeU3Ed__31_tAF87C81EAA1E96B6958A3148443C21C4A1E2A7A1;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// NiobiumStudios.TimedRewards/<InitializeTimer>d__13
struct U3CInitializeTimerU3Ed__13_t37EF85F2FC4CB68BC18DA87BFCF67F259B5CAFB3;
// NiobiumStudios.TimedRewards/OnCanClaim
struct OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95;
// NiobiumStudios.TimedRewards/OnClaimPrize
struct OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8;
// NiobiumStudios.TimedRewardsInterface/<>c
struct U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3;
// NiobiumStudios.TimedRewardsInterface/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tA646CAD6DEA268D38140DBD24C8ADDF6ED4CA419;
// NiobiumStudios.TimedRewardsInterface/<TickTime>d__28
struct U3CTickTimeU3Ed__28_t5CAE1A21C93AD70B4E3AD0DD09B8B4B2767F0AC5;
// NiobiumStudios.WorldClockBuilder/<InitializeWorldClock>d__6
struct U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC;

IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t780E6658469A67283CE30DD3ED1A48F92F484550_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeTimerU3Ed__13_t37EF85F2FC4CB68BC18DA87BFCF67F259B5CAFB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeTimerU3Ed__13_tA1883F719550C880F98EC3A47835EAB6D50C8A84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTickTimeU3Ed__28_t5CAE1A21C93AD70B4E3AD0DD09B8B4B2767F0AC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass24_0_tA646CAD6DEA268D38140DBD24C8ADDF6ED4CA419_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674;
IL2CPP_EXTERN_C String_t* _stringLiteral0C669044B30EF635826C1065768EA6C806EF02B3;
IL2CPP_EXTERN_C String_t* _stringLiteral146EF252F7495288E5687F0AF42916B1372A7F16;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24E561C2505A7DA9363A848697905B0AA7EACCCF;
IL2CPP_EXTERN_C String_t* _stringLiteral2774AE9610CAB8B564AEA7618945AAAFA295BAD9;
IL2CPP_EXTERN_C String_t* _stringLiteral2C7116151993827DC4B89EF463D33C783422FFB0;
IL2CPP_EXTERN_C String_t* _stringLiteral39EC17533E709FECD44181B4D4B83F26DF68B230;
IL2CPP_EXTERN_C String_t* _stringLiteral4730A68FCCADE7ADA3F812E5A06FE86725860E89;
IL2CPP_EXTERN_C String_t* _stringLiteral4CADB05867593AF2AF08F6696A4EE3D9B0101FAA;
IL2CPP_EXTERN_C String_t* _stringLiteral52B816C6658ED49AB58DCC8F80AF287443796630;
IL2CPP_EXTERN_C String_t* _stringLiteral6178084923226537EED3751DE48D1B65584FEB7A;
IL2CPP_EXTERN_C String_t* _stringLiteral6F24A4A181A2A5948431E988807BD16EA8ABA004;
IL2CPP_EXTERN_C String_t* _stringLiteral85331D822D70F7F861D4A396B0A538667BA1427E;
IL2CPP_EXTERN_C String_t* _stringLiteral898CF9C7C64BC5B720A9998FC3C66E77E5574B99;
IL2CPP_EXTERN_C String_t* _stringLiteral99C165894B2900048144F5DEF682937FE73CA541;
IL2CPP_EXTERN_C String_t* _stringLiteral9E0401D3CF4F5EA11863434ADA52EFFA4D1A9457;
IL2CPP_EXTERN_C String_t* _stringLiteralA392E67288F80E71EACDEBB76A981270AC408CA4;
IL2CPP_EXTERN_C String_t* _stringLiteralAB13BD262338453298F5111D3EEE127450AF4406;
IL2CPP_EXTERN_C String_t* _stringLiteralCB166334AF780C03BBA5A96D8477C6DB6716E2CE;
IL2CPP_EXTERN_C String_t* _stringLiteralD0696F97F364A79EC82FEF41B1634BAC053D8B05;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A63B94BAD9D1C5A01373CA9ABF1D4F587ABDA9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDFAACFF01FFB1E4699D468B20C5C7F7CE3F6CAA3;
IL2CPP_EXTERN_C String_t* _stringLiteralE8A0752ACB63533CC45B4C3EB31AAEA98187B671;
IL2CPP_EXTERN_C String_t* _stringLiteralF406ACD9511CE7F7095274B088383714079A5DA3;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959_m821F06ED76A0DC6943D31FCABC60E4B5B0C78ED6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsCore_1_InitializeDate_m427F8C9E81B6E9902BD94F90338A0BF158E9A7E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsCore_1_InitializeDate_m77EA5C12E72249F8BA70FF4B55D3DBEEEB9B0163_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsCore_1_OnApplicationPause_m31E16277F70662A256A27834F7AE9A111A9D186C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsCore_1_OnApplicationPause_mE41CEF9AB74C5F76EC6CA176792549DB2E784BE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsCore_1_TickTime_mD2A4A1AED29FE7259D2BD7E4CE883B5674E3DF3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsCore_1__ctor_m1E3EC11764253FBCF2416341059E8BE08D69E9A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsCore_1__ctor_m986E47E9E38068AC609D9898ACBDA0B2C06E535C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40_mDA0FC4480AAC563E89881C8DAAEBCB5EF3B912F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisWorldClock_t745B9EBFD47BE3C503F538E406361FCADABF5FCE_m5DB02E492550307362DC05060D4698A53C58DD05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAFFF8DC530DE59DA99EF04E9E61BF06FDCBCDD95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC1EBEF13AE04B8D04CEDE19D6D8F1A5F8F54A44B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimedRewardsInterface_OnCanClaim_mDA66CF5D8942EC4AB9D44ED57EB0AB3984463126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimedRewardsInterface_OnInitialize_mE76B38329896AC90360CBC670569871FE1398055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimedRewardsInterface_U3CStartU3Eb__19_0_m5145E6836398E4D09B6052653CFA0F2467943260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimedRewardsInterface_U3CStartU3Eb__19_1_m3BBF27E3DA3FA54A750F716AA5C7DAE79865BD56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimedRewardsInterface_U3CStartU3Eb__19_2_mBB5107FF6474DCC8F8E308D2B8FFB98686A7E882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimedRewardsInterface_U3CStartU3Eb__19_3_mE2410911C3DB8667AFDE035315E371FF88086695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeTimerU3Ed__13_System_Collections_IEnumerator_Reset_mA7A508F2DE61C1CA8CC1F8216F7107F2E47560CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeTimerU3Ed__13_System_Collections_IEnumerator_Reset_mF576ACCC2D1086E24A837FC6CB1632B7EE3AB895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeWorldClockU3Ed__6_System_Collections_IEnumerator_Reset_m7A75E57F5B8C2A68096C4CFB951360896E5B1401_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTickTimeU3Ed__28_System_Collections_IEnumerator_Reset_m777F9FC984EF31BACE9B4C47FA1537FB962C202F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTickTimeU3Ed__31_System_Collections_IEnumerator_Reset_m8749E37D1DEC400A0578818922047C055727CC90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__19_4_mDC3CCDA4E8345172283D8E6548F630C7E8C1CA02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3COnClickRewardU3Eb__0_m6ECC286FE857B35F4A17182C2C0C40D5EAC1EBF0_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// System.Collections.Generic.List`1<NiobiumStudios.Reward>
struct List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RewardU5BU5D_tD62E71A1D1B5E2ECB0800D47850FB5589F1811F7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RewardU5BU5D_tD62E71A1D1B5E2ECB0800D47850FB5589F1811F7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<NiobiumStudios.TimedRewardUI>
struct List_1_t780E6658469A67283CE30DD3ED1A48F92F484550  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TimedRewardUIU5BU5D_t382CC7539881AD6D4CC910258617CB014B52FCC4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t780E6658469A67283CE30DD3ED1A48F92F484550_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TimedRewardUIU5BU5D_t382CC7539881AD6D4CC910258617CB014B52FCC4* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// NiobiumStudios.Reward
struct Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D  : public RuntimeObject
{
	// System.String NiobiumStudios.Reward::unit
	String_t* ___unit_0;
	// System.Int32 NiobiumStudios.Reward::reward
	int32_t ___reward_1;
	// UnityEngine.Sprite NiobiumStudios.Reward::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_2;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// NiobiumStudios.WorldClock
struct WorldClock_t745B9EBFD47BE3C503F538E406361FCADABF5FCE  : public RuntimeObject
{
	// System.String NiobiumStudios.WorldClock::currentDateTime
	String_t* ___currentDateTime_0;
	// System.String NiobiumStudios.WorldClock::utcOffset
	String_t* ___utcOffset_1;
	// System.String NiobiumStudios.WorldClock::dayOfTheWeek
	String_t* ___dayOfTheWeek_2;
	// System.String NiobiumStudios.WorldClock::timeZoneName
	String_t* ___timeZoneName_3;
	// System.Double NiobiumStudios.WorldClock::currentFileTime
	double ___currentFileTime_4;
	// System.String NiobiumStudios.WorldClock::ordinalDate
	String_t* ___ordinalDate_5;
	// System.String NiobiumStudios.WorldClock::serviceResponse
	String_t* ___serviceResponse_6;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// NiobiumStudios.DailyRewards/<InitializeTimer>d__13
struct U3CInitializeTimerU3Ed__13_tA1883F719550C880F98EC3A47835EAB6D50C8A84  : public RuntimeObject
{
	// System.Int32 NiobiumStudios.DailyRewards/<InitializeTimer>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NiobiumStudios.DailyRewards/<InitializeTimer>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// NiobiumStudios.DailyRewards NiobiumStudios.DailyRewards/<InitializeTimer>d__13::<>4__this
	DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* ___U3CU3E4__this_2;
};

// NiobiumStudios.DailyRewardsInterface/<>c
struct U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B  : public RuntimeObject
{
};

struct U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_StaticFields
{
	// NiobiumStudios.DailyRewardsInterface/<>c NiobiumStudios.DailyRewardsInterface/<>c::<>9
	U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B* ___U3CU3E9_0;
	// UnityEngine.Events.UnityAction NiobiumStudios.DailyRewardsInterface/<>c::<>9__22_7
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__22_7_1;
};

// NiobiumStudios.DailyRewardsInterface/<TickTime>d__31
struct U3CTickTimeU3Ed__31_tAF87C81EAA1E96B6958A3148443C21C4A1E2A7A1  : public RuntimeObject
{
	// System.Int32 NiobiumStudios.DailyRewardsInterface/<TickTime>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NiobiumStudios.DailyRewardsInterface/<TickTime>d__31::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// NiobiumStudios.DailyRewardsInterface NiobiumStudios.DailyRewardsInterface/<TickTime>d__31::<>4__this
	DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* ___U3CU3E4__this_2;
};

// NiobiumStudios.TimedRewards/<InitializeTimer>d__13
struct U3CInitializeTimerU3Ed__13_t37EF85F2FC4CB68BC18DA87BFCF67F259B5CAFB3  : public RuntimeObject
{
	// System.Int32 NiobiumStudios.TimedRewards/<InitializeTimer>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NiobiumStudios.TimedRewards/<InitializeTimer>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// NiobiumStudios.TimedRewards NiobiumStudios.TimedRewards/<InitializeTimer>d__13::<>4__this
	TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* ___U3CU3E4__this_2;
};

// NiobiumStudios.TimedRewardsInterface/<>c
struct U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3  : public RuntimeObject
{
};

struct U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_StaticFields
{
	// NiobiumStudios.TimedRewardsInterface/<>c NiobiumStudios.TimedRewardsInterface/<>c::<>9
	U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3* ___U3CU3E9_0;
	// UnityEngine.Events.UnityAction NiobiumStudios.TimedRewardsInterface/<>c::<>9__19_4
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__19_4_1;
};

// NiobiumStudios.TimedRewardsInterface/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tA646CAD6DEA268D38140DBD24C8ADDF6ED4CA419  : public RuntimeObject
{
	// NiobiumStudios.TimedRewardsInterface NiobiumStudios.TimedRewardsInterface/<>c__DisplayClass24_0::<>4__this
	TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* ___U3CU3E4__this_0;
	// System.Int32 NiobiumStudios.TimedRewardsInterface/<>c__DisplayClass24_0::index
	int32_t ___index_1;
};

// NiobiumStudios.TimedRewardsInterface/<TickTime>d__28
struct U3CTickTimeU3Ed__28_t5CAE1A21C93AD70B4E3AD0DD09B8B4B2767F0AC5  : public RuntimeObject
{
	// System.Int32 NiobiumStudios.TimedRewardsInterface/<TickTime>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NiobiumStudios.TimedRewardsInterface/<TickTime>d__28::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// NiobiumStudios.TimedRewardsInterface NiobiumStudios.TimedRewardsInterface/<TickTime>d__28::<>4__this
	TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* ___U3CU3E4__this_2;
};

// NiobiumStudios.WorldClockBuilder/<InitializeWorldClock>d__6
struct U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC  : public RuntimeObject
{
	// System.Int32 NiobiumStudios.WorldClockBuilder/<InitializeWorldClock>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NiobiumStudios.WorldClockBuilder/<InitializeWorldClock>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String NiobiumStudios.WorldClockBuilder/<InitializeWorldClock>d__6::worldClockUrl
	String_t* ___worldClockUrl_2;
	// System.Int32 NiobiumStudios.WorldClockBuilder/<InitializeWorldClock>d__6::maxRetries
	int32_t ___maxRetries_3;
	// System.String NiobiumStudios.WorldClockBuilder/<InitializeWorldClock>d__6::worldClockFMT
	String_t* ___worldClockFMT_4;
	// System.String NiobiumStudios.WorldClockBuilder/<InitializeWorldClock>d__6::<result>5__2
	String_t* ___U3CresultU3E5__2_5;
	// UnityEngine.WWW NiobiumStudios.WorldClockBuilder/<InitializeWorldClock>d__6::<www>5__3
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* ___U3CwwwU3E5__3_6;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ____uwr_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
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

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::3C7EB0F8F74253388BFD6ED99DB0624AABA0DF08FA63D18F762FA0EEE8FE13D3
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___3C7EB0F8F74253388BFD6ED99DB0624AABA0DF08FA63D18F762FA0EEE8FE13D3_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::C142CA98EDAA9855555CA7696CF53F3A2FA47F1747B9B9AF66785F71120B02D4
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___C142CA98EDAA9855555CA7696CF53F3A2FA47F1747B9B9AF66785F71120B02D4_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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

// NiobiumStudios.WorldClockBuilder
struct WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC  : public RuntimeObject
{
};

struct WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields
{
	// System.String NiobiumStudios.WorldClockBuilder::errorMessage
	String_t* ___errorMessage_0;
	// System.Int32 NiobiumStudios.WorldClockBuilder::connectrionRetries
	int32_t ___connectrionRetries_1;
	// NiobiumStudios.WorldClock NiobiumStudios.WorldClockBuilder::instance
	WorldClock_t745B9EBFD47BE3C503F538E406361FCADABF5FCE* ___instance_2;
	// System.DateTime NiobiumStudios.WorldClockBuilder::worldClockDate
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___worldClockDate_3;
	// NiobiumStudios.WorldClockBuilder/State NiobiumStudios.WorldClockBuilder::currentState
	int32_t ___currentState_4;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// NiobiumStudios.DailyRewardsCore`1/OnInitialize<NiobiumStudios.DailyRewards>
struct OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A  : public MulticastDelegate_t
{
};

// NiobiumStudios.DailyRewardsCore`1/OnInitialize<System.Object>
struct OnInitialize_t435BD48416A8E1B9B5CDB30812874C1EDBEF4912  : public MulticastDelegate_t
{
};

// NiobiumStudios.DailyRewardsCore`1/OnInitialize<NiobiumStudios.TimedRewards>
struct OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// NiobiumStudios.DailyRewards/OnClaimPrize
struct OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B  : public MulticastDelegate_t
{
};

// NiobiumStudios.TimedRewards/OnCanClaim
struct OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95  : public MulticastDelegate_t
{
};

// NiobiumStudios.TimedRewards/OnClaimPrize
struct OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.DailyRewards>
struct DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 NiobiumStudios.DailyRewardsCore`1::instanceId
	int32_t ___instanceId_4;
	// System.Boolean NiobiumStudios.DailyRewardsCore`1::isSingleton
	bool ___isSingleton_5;
	// System.String NiobiumStudios.DailyRewardsCore`1::worldClockUrl
	String_t* ___worldClockUrl_6;
	// System.String NiobiumStudios.DailyRewardsCore`1::worldClockFMT
	String_t* ___worldClockFMT_7;
	// System.Boolean NiobiumStudios.DailyRewardsCore`1::useWorldClockApi
	bool ___useWorldClockApi_8;
	// NiobiumStudios.WorldClock NiobiumStudios.DailyRewardsCore`1::worldClock
	WorldClock_t745B9EBFD47BE3C503F538E406361FCADABF5FCE* ___worldClock_9;
	// System.String NiobiumStudios.DailyRewardsCore`1::errorMessage
	String_t* ___errorMessage_10;
	// System.Boolean NiobiumStudios.DailyRewardsCore`1::isErrorConnect
	bool ___isErrorConnect_11;
	// System.DateTime NiobiumStudios.DailyRewardsCore`1::now
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___now_12;
	// System.Int32 NiobiumStudios.DailyRewardsCore`1::maxRetries
	int32_t ___maxRetries_13;
	// NiobiumStudios.DailyRewardsCore`1/OnInitialize<T> NiobiumStudios.DailyRewardsCore`1::onInitialize
	OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* ___onInitialize_14;
	// System.Boolean NiobiumStudios.DailyRewardsCore`1::isInitialized
	bool ___isInitialized_15;
};

// NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.TimedRewards>
struct DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 NiobiumStudios.DailyRewardsCore`1::instanceId
	int32_t ___instanceId_4;
	// System.Boolean NiobiumStudios.DailyRewardsCore`1::isSingleton
	bool ___isSingleton_5;
	// System.String NiobiumStudios.DailyRewardsCore`1::worldClockUrl
	String_t* ___worldClockUrl_6;
	// System.String NiobiumStudios.DailyRewardsCore`1::worldClockFMT
	String_t* ___worldClockFMT_7;
	// System.Boolean NiobiumStudios.DailyRewardsCore`1::useWorldClockApi
	bool ___useWorldClockApi_8;
	// NiobiumStudios.WorldClock NiobiumStudios.DailyRewardsCore`1::worldClock
	WorldClock_t745B9EBFD47BE3C503F538E406361FCADABF5FCE* ___worldClock_9;
	// System.String NiobiumStudios.DailyRewardsCore`1::errorMessage
	String_t* ___errorMessage_10;
	// System.Boolean NiobiumStudios.DailyRewardsCore`1::isErrorConnect
	bool ___isErrorConnect_11;
	// System.DateTime NiobiumStudios.DailyRewardsCore`1::now
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___now_12;
	// System.Int32 NiobiumStudios.DailyRewardsCore`1::maxRetries
	int32_t ___maxRetries_13;
	// NiobiumStudios.DailyRewardsCore`1/OnInitialize<T> NiobiumStudios.DailyRewardsCore`1::onInitialize
	OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D* ___onInitialize_14;
	// System.Boolean NiobiumStudios.DailyRewardsCore`1::isInitialized
	bool ___isInitialized_15;
};

// NiobiumStudios.DailyRewardUI
struct DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean NiobiumStudios.DailyRewardUI::showRewardName
	bool ___showRewardName_4;
	// UnityEngine.UI.Text NiobiumStudios.DailyRewardUI::textDay
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textDay_5;
	// UnityEngine.UI.Text NiobiumStudios.DailyRewardUI::textReward
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textReward_6;
	// UnityEngine.UI.Image NiobiumStudios.DailyRewardUI::imageRewardBackground
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imageRewardBackground_7;
	// UnityEngine.UI.Image NiobiumStudios.DailyRewardUI::imageReward
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imageReward_8;
	// UnityEngine.Color NiobiumStudios.DailyRewardUI::colorClaim
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colorClaim_9;
	// UnityEngine.Color NiobiumStudios.DailyRewardUI::colorUnclaimed
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colorUnclaimed_10;
	// System.Int32 NiobiumStudios.DailyRewardUI::day
	int32_t ___day_11;
	// NiobiumStudios.Reward NiobiumStudios.DailyRewardUI::reward
	Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* ___reward_12;
	// NiobiumStudios.DailyRewardUI/DailyRewardState NiobiumStudios.DailyRewardUI::state
	int32_t ___state_13;
};

// NiobiumStudios.DailyRewardsInterface
struct DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas NiobiumStudios.DailyRewardsInterface::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_4;
	// UnityEngine.GameObject NiobiumStudios.DailyRewardsInterface::dailyRewardPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dailyRewardPrefab_5;
	// System.Boolean NiobiumStudios.DailyRewardsInterface::isDebug
	bool ___isDebug_6;
	// UnityEngine.GameObject NiobiumStudios.DailyRewardsInterface::panelDebug
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelDebug_7;
	// UnityEngine.UI.Button NiobiumStudios.DailyRewardsInterface::buttonAdvanceDay
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonAdvanceDay_8;
	// UnityEngine.UI.Button NiobiumStudios.DailyRewardsInterface::buttonAdvanceHour
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonAdvanceHour_9;
	// UnityEngine.UI.Button NiobiumStudios.DailyRewardsInterface::buttonReset
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonReset_10;
	// UnityEngine.UI.Button NiobiumStudios.DailyRewardsInterface::buttonReloadScene
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonReloadScene_11;
	// UnityEngine.GameObject NiobiumStudios.DailyRewardsInterface::panelReward
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelReward_12;
	// UnityEngine.UI.Text NiobiumStudios.DailyRewardsInterface::textReward
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textReward_13;
	// UnityEngine.UI.Button NiobiumStudios.DailyRewardsInterface::buttonCloseReward
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonCloseReward_14;
	// UnityEngine.UI.Image NiobiumStudios.DailyRewardsInterface::imageReward
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imageReward_15;
	// UnityEngine.UI.Button NiobiumStudios.DailyRewardsInterface::buttonClaim
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonClaim_16;
	// UnityEngine.UI.Button NiobiumStudios.DailyRewardsInterface::buttonClose
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonClose_17;
	// UnityEngine.UI.Button NiobiumStudios.DailyRewardsInterface::buttonCloseWindow
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonCloseWindow_18;
	// UnityEngine.UI.Text NiobiumStudios.DailyRewardsInterface::textTimeDue
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textTimeDue_19;
	// UnityEngine.UI.GridLayoutGroup NiobiumStudios.DailyRewardsInterface::dailyRewardsGroup
	GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* ___dailyRewardsGroup_20;
	// UnityEngine.UI.ScrollRect NiobiumStudios.DailyRewardsInterface::scrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___scrollRect_21;
	// System.Boolean NiobiumStudios.DailyRewardsInterface::readyToClaim
	bool ___readyToClaim_22;
	// System.Collections.Generic.List`1<NiobiumStudios.DailyRewardUI> NiobiumStudios.DailyRewardsInterface::dailyRewardsUI
	List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609* ___dailyRewardsUI_23;
	// NiobiumStudios.DailyRewards NiobiumStudios.DailyRewardsInterface::dailyRewards
	DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* ___dailyRewards_24;
};

// NiobiumStudios.TimedRewardUI
struct TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text NiobiumStudios.TimedRewardUI::textReward
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textReward_4;
	// UnityEngine.UI.Text NiobiumStudios.TimedRewardUI::textUnit
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textUnit_5;
	// UnityEngine.UI.Image NiobiumStudios.TimedRewardUI::imageReward
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imageReward_6;
	// UnityEngine.UI.Button NiobiumStudios.TimedRewardUI::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_7;
	// System.Int32 NiobiumStudios.TimedRewardUI::index
	int32_t ___index_8;
	// NiobiumStudios.Reward NiobiumStudios.TimedRewardUI::reward
	Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* ___reward_9;
};

// NiobiumStudios.TimedRewardsInterface
struct TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject NiobiumStudios.TimedRewardsInterface::canvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas_4;
	// System.Boolean NiobiumStudios.TimedRewardsInterface::isDebug
	bool ___isDebug_5;
	// UnityEngine.GameObject NiobiumStudios.TimedRewardsInterface::panelDebug
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelDebug_6;
	// UnityEngine.UI.Button NiobiumStudios.TimedRewardsInterface::buttonReset
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonReset_7;
	// UnityEngine.UI.Button NiobiumStudios.TimedRewardsInterface::buttonReloadScene
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonReloadScene_8;
	// UnityEngine.UI.Button NiobiumStudios.TimedRewardsInterface::buttonClaim
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonClaim_9;
	// UnityEngine.UI.Text NiobiumStudios.TimedRewardsInterface::textInfo
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textInfo_10;
	// UnityEngine.GameObject NiobiumStudios.TimedRewardsInterface::panelReward
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelReward_11;
	// UnityEngine.UI.Text NiobiumStudios.TimedRewardsInterface::textReward
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textReward_12;
	// UnityEngine.UI.Button NiobiumStudios.TimedRewardsInterface::buttonCloseReward
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonCloseReward_13;
	// UnityEngine.UI.Image NiobiumStudios.TimedRewardsInterface::imageRewardMessage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imageRewardMessage_14;
	// UnityEngine.GameObject NiobiumStudios.TimedRewardsInterface::panelAvailableRewards
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelAvailableRewards_15;
	// UnityEngine.GameObject NiobiumStudios.TimedRewardsInterface::rewardPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rewardPrefab_16;
	// UnityEngine.UI.Button NiobiumStudios.TimedRewardsInterface::buttonCloseAvailable
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonCloseAvailable_17;
	// UnityEngine.UI.GridLayoutGroup NiobiumStudios.TimedRewardsInterface::rewardsGroup
	GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* ___rewardsGroup_18;
	// UnityEngine.UI.ScrollRect NiobiumStudios.TimedRewardsInterface::scrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___scrollRect_19;
	// NiobiumStudios.TimedRewards NiobiumStudios.TimedRewardsInterface::timedRewards
	TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* ___timedRewards_20;
	// System.Collections.Generic.List`1<NiobiumStudios.TimedRewardUI> NiobiumStudios.TimedRewardsInterface::rewardsUI
	List_1_t780E6658469A67283CE30DD3ED1A48F92F484550* ___rewardsUI_21;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// NiobiumStudios.DailyRewards
struct DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480  : public DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E
{
	// System.Collections.Generic.List`1<NiobiumStudios.Reward> NiobiumStudios.DailyRewards::rewards
	List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* ___rewards_16;
	// System.DateTime NiobiumStudios.DailyRewards::lastRewardTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lastRewardTime_17;
	// System.Int32 NiobiumStudios.DailyRewards::availableReward
	int32_t ___availableReward_18;
	// System.Int32 NiobiumStudios.DailyRewards::lastReward
	int32_t ___lastReward_19;
	// System.Boolean NiobiumStudios.DailyRewards::keepOpen
	bool ___keepOpen_20;
	// NiobiumStudios.DailyRewards/OnClaimPrize NiobiumStudios.DailyRewards::onClaimPrize
	OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* ___onClaimPrize_21;
	// System.TimeSpan NiobiumStudios.DailyRewards::debugTime
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___debugTime_26;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// NiobiumStudios.TimedRewards
struct TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959  : public DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A
{
	// System.DateTime NiobiumStudios.TimedRewards::lastRewardTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lastRewardTime_16;
	// System.TimeSpan NiobiumStudios.TimedRewards::timer
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timer_17;
	// System.Single NiobiumStudios.TimedRewards::maxTime
	float ___maxTime_18;
	// System.Boolean NiobiumStudios.TimedRewards::isRewardRandom
	bool ___isRewardRandom_19;
	// System.Collections.Generic.List`1<NiobiumStudios.Reward> NiobiumStudios.TimedRewards::rewards
	List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* ___rewards_20;
	// NiobiumStudios.TimedRewards/OnCanClaim NiobiumStudios.TimedRewards::onCanClaim
	OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* ___onCanClaim_21;
	// NiobiumStudios.TimedRewards/OnClaimPrize NiobiumStudios.TimedRewards::onClaimPrize
	OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8* ___onClaimPrize_22;
	// System.Boolean NiobiumStudios.TimedRewards::canClaim
	bool ___canClaim_23;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner_12;
	// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis_13;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CellSize_14;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Spacing_15;
	// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint_16;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount_17;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
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
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1/OnInitialize<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnInitialize__ctor_m79D56D3536D806B0D16A8CBA7809DB2642E77A47_gshared (OnInitialize_t435BD48416A8E1B9B5CDB30812874C1EDBEF4912* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1<System.Object>::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsCore_1_OnApplicationPause_m629CE24AA44225CFC4777B86BE562ED7ADFF739B_gshared (DailyRewardsCore_1_t205D30D210821929737EE2FE518C6F2E31AAEBDE* __this, bool ___pauseStatus0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsCore_1__ctor_m4DE9CEFA417FD57E3DD06B930D62CE64D25DD689_gshared (DailyRewardsCore_1_t205D30D210821929737EE2FE518C6F2E31AAEBDE* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator NiobiumStudios.DailyRewardsCore`1<System.Object>::InitializeDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DailyRewardsCore_1_InitializeDate_mCBD358F3C53D4CE4441F8F1D715E59AAA7AAFE06_gshared (DailyRewardsCore_1_t205D30D210821929737EE2FE518C6F2E31AAEBDE* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1/OnInitialize<System.Object>::Invoke(System.Boolean,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnInitialize_Invoke_mAB0BD6F84CC952ED435B489A6E143F0FA7DBC742_gshared_inline (OnInitialize_t435BD48416A8E1B9B5CDB30812874C1EDBEF4912* __this, bool ___error0, String_t* ___errorMessage1, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1<System.Object>::TickTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsCore_1_TickTime_m2D0341213D373324410485B4BEB156B484A22839_gshared (DailyRewardsCore_1_t205D30D210821929737EE2FE518C6F2E31AAEBDE* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;

// System.Void NiobiumStudios.DailyRewardsInterface/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0021446FD55506F27A3AAFF441D74FA40B409A5F (U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Application::get_loadedLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_loadedLevel_m8B0E840EC12E43AFA522267B9E0E6721CF8BB287 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::LoadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_LoadLevel_m509A4D8E077158765B3F6307C3C96D75AF44167A (int32_t ___index0, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsInterface::CheckTimeDifference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_CheckTimeDifference_mB75E4B52B1FE0A0DF936D036764984B20D5E50C5 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<NiobiumStudios.TimedRewards>()
inline TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* Component_GetComponent_TisTimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959_m821F06ED76A0DC6943D31FCABC60E4B5B0C78ED6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void NiobiumStudios.TimedRewardsInterface::InitializeAvailableRewardsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface_InitializeAvailableRewardsUI_mEDDF2E71FC845EEC855AC00899CB7A851E73E6DC (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.TimedRewards/OnCanClaim::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCanClaim__ctor_m57D8220FF1BC0836DEAC3B50F26F515039C24A5D (OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1/OnInitialize<NiobiumStudios.TimedRewards>::.ctor(System.Object,System.IntPtr)
inline void OnInitialize__ctor_mE5B963ACB7EB0DB7219DD9A9AED44BE3FDF43CBB (OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D*, RuntimeObject*, intptr_t, const RuntimeMethod*))OnInitialize__ctor_m79D56D3536D806B0D16A8CBA7809DB2642E77A47_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.String NiobiumStudios.TimedRewards::GetFormattedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimedRewards_GetFormattedTime_m550E13A5B058BED2ABFAE1CD430BA95F10525670 (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<NiobiumStudios.Reward>::get_Count()
inline int32_t List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_inline (List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// NiobiumStudios.Reward NiobiumStudios.TimedRewards::GetReward(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* TimedRewards_GetReward_m1F4393E0DC33472D8AEE64280623825DAE394FF5 (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponent<NiobiumStudios.TimedRewardUI>()
inline TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40* GameObject_GetComponent_TisTimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40_mDA0FC4480AAC563E89881C8DAAEBCB5EF3B912F2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityAction NiobiumStudios.TimedRewardsInterface::OnClickReward(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* TimedRewardsInterface_OnClickReward_m6FFB525558C55BD4686AC44B306DE207E6319147 (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.TimedRewardUI::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardUI_Initialize_m0D87C548BB0C6EE7DDFE6874C550701988E2A36B (TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<NiobiumStudios.TimedRewardUI>::Add(T)
inline void List_1_Add_mAFFF8DC530DE59DA99EF04E9E61BF06FDCBCDD95_inline (List_1_t780E6658469A67283CE30DD3ED1A48F92F484550* __this, TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t780E6658469A67283CE30DD3ED1A48F92F484550*, TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void NiobiumStudios.TimedRewardsInterface/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_mDE4301355E0F34640E346552788C435DA9E83755 (U3CU3Ec__DisplayClass24_0_tA646CAD6DEA268D38140DBD24C8ADDF6ED4CA419* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.TimedRewards::ClaimReward(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewards_ClaimReward_m86D45C54D3617722F33AEF8C763C6B240E475ADC (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, int32_t ___rewardIdx0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator NiobiumStudios.TimedRewardsInterface::TickTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimedRewardsInterface_TickTime_mEA1E2DB05F64901FE8C3260FB719598263BF005A (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.TimedRewardsInterface/<TickTime>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTickTimeU3Ed__28__ctor_mCDEB3AEA8BAA0EA8738C559AF8339831873CE22B (U3CTickTimeU3Ed__28_t5CAE1A21C93AD70B4E3AD0DD09B8B4B2767F0AC5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<NiobiumStudios.TimedRewardUI>::.ctor()
inline void List_1__ctor_mC1EBEF13AE04B8D04CEDE19D6D8F1A5F8F54A44B (List_1_t780E6658469A67283CE30DD3ED1A48F92F484550* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t780E6658469A67283CE30DD3ED1A48F92F484550*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void NiobiumStudios.TimedRewardsInterface::ClaimReward(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface_ClaimReward_m7E50299079E9C028C9D0BDAB0F6278A93DA2DE16 (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.TimedRewards::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewards_Reset_m7B44DDBC4A6EDF92ECC829FF7282019C92BE5BC3 (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.TimedRewardsInterface/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC0ADE29B3F691FFF7370A4ECD63390CC1320A906 (U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.TimedRewardsInterface::UpdateTextInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface_UpdateTextInfo_mC864BCD9BA0892994D1F1DF2AC277AA53675B2AE (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator NiobiumStudios.DailyRewards::InitializeTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DailyRewards_InitializeTimer_m9E5CBDF8ED58E0E736CA600116B49A37A067B94C (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewards/<InitializeTimer>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeTimerU3Ed__13__ctor_m71CCBB6EBBAF9CF564FF1BFDA92EFC6223B3258D (U3CInitializeTimerU3Ed__13_tA1883F719550C880F98EC3A47835EAB6D50C8A84* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.DailyRewards>::OnApplicationPause(System.Boolean)
inline void DailyRewardsCore_1_OnApplicationPause_mE41CEF9AB74C5F76EC6CA176792549DB2E784BE1 (DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E* __this, bool ___pauseStatus0, const RuntimeMethod* method)
{
	((  void (*) (DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*, bool, const RuntimeMethod*))DailyRewardsCore_1_OnApplicationPause_m629CE24AA44225CFC4777B86BE562ED7ADFF739B_gshared)(__this, ___pauseStatus0, method);
}
// System.Void NiobiumStudios.DailyRewards::CheckRewards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_CheckRewards_mB4DAB07E2CB2AEE9284B35F21AC7F5AB87DC7FBF (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_Subtract_m6B780A4AADD60F53CC449DDC2171BBCD09381559 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___ts0, const RuntimeMethod* method) ;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpan__ctor_m513B2AFB80D3350E59FBD23F53B2F1322175C24D (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int32_t ___days0, int32_t ___hours1, int32_t ___minutes2, int32_t ___seconds3, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_Add_m2225A425832F851825CDA4A74903841DDB62AA19 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___ts0, const RuntimeMethod* method) ;
// System.String NiobiumStudios.DailyRewards::GetDebugTimeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DailyRewards_GetDebugTimeKey_mB778850819AEAC9940254D44DBB73AF760FC87AF (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int32_t ___hours0, int32_t ___minutes1, int32_t ___seconds2, const RuntimeMethod* method) ;
// System.String NiobiumStudios.DailyRewards::GetLastRewardTimeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DailyRewards_GetLastRewardTimeKey_mE61CE07064365A751732FBCDF8A14F47D610BA9B (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92 (String_t* ___key0, const RuntimeMethod* method) ;
// System.String NiobiumStudios.DailyRewards::GetLastRewardKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DailyRewards_GetLastRewardKey_m62C336DC6DA3D7ADCC5819D8D79621E1FCEA4DA5 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ParseExact_m19BB81A11B239C7CE5781ACF7B854A8A7F8BE9D3 (String_t* ___s0, String_t* ___format1, RuntimeObject* ___provider2, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalHours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddHours(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddHours_m99C41C078F2F480BF9965F8A4BAB8C8B75C39C02 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___value0, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewards/OnClaimPrize::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_inline (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<NiobiumStudios.Reward>::get_Item(System.Int32)
inline Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD (List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* (*) (List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.DailyRewards>::.ctor()
inline void DailyRewardsCore_1__ctor_m1E3EC11764253FBCF2416341059E8BE08D69E9A9 (DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E* __this, const RuntimeMethod* method)
{
	((  void (*) (DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*, const RuntimeMethod*))DailyRewardsCore_1__ctor_m4DE9CEFA417FD57E3DD06B930D62CE64D25DD689_gshared)(__this, method);
}
// System.Collections.IEnumerator NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.DailyRewards>::InitializeDate()
inline RuntimeObject* DailyRewardsCore_1_InitializeDate_m427F8C9E81B6E9902BD94F90338A0BF158E9A7E9 (DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*, const RuntimeMethod*))DailyRewardsCore_1_InitializeDate_mCBD358F3C53D4CE4441F8F1D715E59AAA7AAFE06_gshared)(__this, method);
}
// System.Void NiobiumStudios.DailyRewardsCore`1/OnInitialize<NiobiumStudios.DailyRewards>::Invoke(System.Boolean,System.String)
inline void OnInitialize_Invoke_mCA580609B445A85F8060391906B32EBD64C6E465_inline (OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* __this, bool ___error0, String_t* ___errorMessage1, const RuntimeMethod* method)
{
	((  void (*) (OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A*, bool, String_t*, const RuntimeMethod*))OnInitialize_Invoke_mAB0BD6F84CC952ED435B489A6E143F0FA7DBC742_gshared_inline)(__this, ___error0, ___errorMessage1, method);
}
// System.Void NiobiumStudios.DailyRewards::LoadDebugTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_LoadDebugTime_mC66149E1640655BC946F566BE5EEAECB2F8BA508 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator NiobiumStudios.TimedRewards::InitializeTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimedRewards_InitializeTimer_mFD2A478BB0F5E425BF1AFA73B4F6552E96E0D6AB (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.TimedRewards/<InitializeTimer>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeTimerU3Ed__13__ctor_m8CCF0247CE77125086F261EBB74C1A80BA4DC685 (U3CInitializeTimerU3Ed__13_t37EF85F2FC4CB68BC18DA87BFCF67F259B5CAFB3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String NiobiumStudios.TimedRewards::GetTimedRewardsTimeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimedRewards_GetTimedRewardsTimeKey_m0FED9537A134C7D608264DF932101AC952B12C01 (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5 (double ___value0, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.TimedRewards>::OnApplicationPause(System.Boolean)
inline void DailyRewardsCore_1_OnApplicationPause_m31E16277F70662A256A27834F7AE9A111A9D186C (DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A* __this, bool ___pauseStatus0, const RuntimeMethod* method)
{
	((  void (*) (DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*, bool, const RuntimeMethod*))DailyRewardsCore_1_OnApplicationPause_m629CE24AA44225CFC4777B86BE562ED7ADFF739B_gshared)(__this, ___pauseStatus0, method);
}
// System.Void NiobiumStudios.TimedRewards::LoadTimerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewards_LoadTimerData_mDE95441321CA31B0DE6F13A68E1992C6E30DBE23 (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.TimedRewards::CheckCanClaim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewards_CheckCanClaim_mEE7BA3D31AA32417FEE948E2AA3C6E291E8B88A2 (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.TimedRewards>::TickTime()
inline void DailyRewardsCore_1_TickTime_mD2A4A1AED29FE7259D2BD7E4CE883B5674E3DF3F (DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A* __this, const RuntimeMethod* method)
{
	((  void (*) (DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*, const RuntimeMethod*))DailyRewardsCore_1_TickTime_m2D0341213D373324410485B4BEB156B484A22839_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652 (const RuntimeMethod* method) ;
// System.Void NiobiumStudios.TimedRewards/OnCanClaim::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnCanClaim_Invoke_mB1DCC1FB854BC4AC1D67F663950C885274F82106_inline (OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_op_Subtraction_mFFB8933364C5E1E2187CA0605445893F2872FBB8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t10, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t21, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::Add(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_Add_mC882C6BBE75862360A1A0C733B4FFE3210D4B9B1 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.TimedRewards/OnClaimPrize::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnClaimPrize_Invoke_m6E8296E663129E650C028F163E5A8B05A0025E41_inline (OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Days_m1317F48F8D9849E161D1CDBEB5CA08344EAAC107 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Hours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Hours_m770B4B777A816E051EFDA317C28DA9A4F39D6CFB (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Minutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Seconds_m8CA21613DC31BD025C5D30D41BAD0ED50827578B (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.TimedRewards>::.ctor()
inline void DailyRewardsCore_1__ctor_m986E47E9E38068AC609D9898ACBDA0B2C06E535C (DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A* __this, const RuntimeMethod* method)
{
	((  void (*) (DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*, const RuntimeMethod*))DailyRewardsCore_1__ctor_m4DE9CEFA417FD57E3DD06B930D62CE64D25DD689_gshared)(__this, method);
}
// System.Collections.IEnumerator NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.TimedRewards>::InitializeDate()
inline RuntimeObject* DailyRewardsCore_1_InitializeDate_m77EA5C12E72249F8BA70FF4B55D3DBEEEB9B0163 (DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*, const RuntimeMethod*))DailyRewardsCore_1_InitializeDate_mCBD358F3C53D4CE4441F8F1D715E59AAA7AAFE06_gshared)(__this, method);
}
// System.Void NiobiumStudios.DailyRewardsCore`1/OnInitialize<NiobiumStudios.TimedRewards>::Invoke(System.Boolean,System.String)
inline void OnInitialize_Invoke_mD09C41ACEF6B0D944D2B2A41CF8B76829458E979_inline (OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D* __this, bool ___error0, String_t* ___errorMessage1, const RuntimeMethod* method)
{
	((  void (*) (OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D*, bool, String_t*, const RuntimeMethod*))OnInitialize_Invoke_mAB0BD6F84CC952ED435B489A6E143F0FA7DBC742_gshared_inline)(__this, ___error0, ___errorMessage1, method);
}
// System.Void NiobiumStudios.WorldClockBuilder/<InitializeWorldClock>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeWorldClockU3Ed__6__ctor_m7B02BD12E2934A7D2D7B298ADBB0737E95A559F5 (U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWW::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, String_t* ___url0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.WWW::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWW_get_isDone_m7E88B666AD0E3903757043813B2811BBFCCCA52E (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.WWW::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_error_m6B2E4F6DB8ECC8217A112EC62AAA1D5E71AA1C93 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String UnityEngine.WWW::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_text_m95F7CAAC33FD0BAB9B535E3AEAFDA36B81B3EC4F (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<NiobiumStudios.WorldClock>(System.String)
inline WorldClock_t745B9EBFD47BE3C503F538E406361FCADABF5FCE* JsonUtility_FromJson_TisWorldClock_t745B9EBFD47BE3C503F538E406361FCADABF5FCE_m5DB02E492550307362DC05060D4698A53C58DD05 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  WorldClock_t745B9EBFD47BE3C503F538E406361FCADABF5FCE* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___value0, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NiobiumStudios.DailyRewardsInterface/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC3144884AF3A76511689FABD6AB4E3E2D2C602AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B* L_0 = (U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B*)il2cpp_codegen_object_new(U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m0021446FD55506F27A3AAFF441D74FA40B409A5F(L_0, NULL);
		((U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0021446FD55506F27A3AAFF441D74FA40B409A5F (U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface/<>c::<Start>b__22_7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__22_7_m8FBCDB8A61CE13E967A76B1AD060F6B382A24331 (U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B* __this, const RuntimeMethod* method) 
{
	{
		// Application.LoadLevel (Application.loadedLevel);
		int32_t L_0;
		L_0 = Application_get_loadedLevel_m8B0E840EC12E43AFA522267B9E0E6721CF8BB287(NULL);
		Application_LoadLevel_m509A4D8E077158765B3F6307C3C96D75AF44167A(L_0, NULL);
		// });
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
// System.Void NiobiumStudios.DailyRewardsInterface/<TickTime>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTickTimeU3Ed__31__ctor_mA504E07E4AAE7C7286C09E367BCC01BBF626D27A (U3CTickTimeU3Ed__31_tAF87C81EAA1E96B6958A3148443C21C4A1E2A7A1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface/<TickTime>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTickTimeU3Ed__31_System_IDisposable_Dispose_m7695287F5313A0EDD1CFF3BAB40762502ED60A0F (U3CTickTimeU3Ed__31_tAF87C81EAA1E96B6958A3148443C21C4A1E2A7A1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean NiobiumStudios.DailyRewardsInterface/<TickTime>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTickTimeU3Ed__31_MoveNext_mDF8F4BC9B6EE676F8C963A46EA91B3FD7D8AAE3B (U3CTickTimeU3Ed__31_tAF87C81EAA1E96B6958A3148443C21C4A1E2A7A1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// dailyRewards.TickTime();
		DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* L_4 = V_1;
		NullCheck(L_4);
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_5 = L_4->___dailyRewards_24;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(4 /* System.Void NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.DailyRewards>::TickTime() */, L_5);
		// CheckTimeDifference();
		DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* L_6 = V_1;
		NullCheck(L_6);
		DailyRewardsInterface_CheckTimeDifference_mB75E4B52B1FE0A0DF936D036764984B20D5E50C5(L_6, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_001e;
	}
}
// System.Object NiobiumStudios.DailyRewardsInterface/<TickTime>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTickTimeU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m10B6E0761B2E1E669C67EB3077F6EBDD85B4253B (U3CTickTimeU3Ed__31_tAF87C81EAA1E96B6958A3148443C21C4A1E2A7A1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface/<TickTime>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTickTimeU3Ed__31_System_Collections_IEnumerator_Reset_m8749E37D1DEC400A0578818922047C055727CC90 (U3CTickTimeU3Ed__31_tAF87C81EAA1E96B6958A3148443C21C4A1E2A7A1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTickTimeU3Ed__31_System_Collections_IEnumerator_Reset_m8749E37D1DEC400A0578818922047C055727CC90_RuntimeMethod_var)));
	}
}
// System.Object NiobiumStudios.DailyRewardsInterface/<TickTime>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTickTimeU3Ed__31_System_Collections_IEnumerator_get_Current_m2D6DF2D24A55B66D0655D378770BC95AB48AC446 (U3CTickTimeU3Ed__31_tAF87C81EAA1E96B6958A3148443C21C4A1E2A7A1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void NiobiumStudios.DailyRewardUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardUI_Awake_m2949A2C67F02471A0D5C9EDDCA3255C927B2B369 (DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* __this, const RuntimeMethod* method) 
{
	{
		// colorUnclaimed = imageReward.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___imageReward_8;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		__this->___colorUnclaimed_10 = L_1;
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardUI::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardUI_Initialize_mA0FC20485D386C91CCCDB681B95381BFF26B060B (DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52B816C6658ED49AB58DCC8F80AF287443796630);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textDay.text = string.Format("Day {0}", day.ToString());
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___textDay_5;
		int32_t* L_1 = (&__this->___day_11);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral52B816C6658ED49AB58DCC8F80AF287443796630, L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// if (reward.reward > 0)
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_4 = __this->___reward_12;
		NullCheck(L_4);
		int32_t L_5 = L_4->___reward_1;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		// if (showRewardName)
		bool L_6 = __this->___showRewardName_4;
		if (!L_6)
		{
			goto IL_0068;
		}
	}
	{
		// textReward.text = reward.reward + " " + reward.unit;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___textReward_6;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_8 = __this->___reward_12;
		NullCheck(L_8);
		int32_t* L_9 = (&L_8->___reward_1);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_11 = __this->___reward_12;
		NullCheck(L_11);
		String_t* L_12 = L_11->___unit_0;
		String_t* L_13;
		L_13 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_10, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_12, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_13);
		goto IL_00a0;
	}

IL_0068:
	{
		// textReward.text = reward.reward.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___textReward_6;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_15 = __this->___reward_12;
		NullCheck(L_15);
		int32_t* L_16 = (&L_15->___reward_1);
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_16, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_17);
		goto IL_00a0;
	}

IL_0085:
	{
		// textReward.text = reward.unit.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___textReward_6;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_19 = __this->___reward_12;
		NullCheck(L_19);
		String_t* L_20 = L_19->___unit_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_21);
	}

IL_00a0:
	{
		// imageReward.sprite = reward.sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___imageReward_8;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_23 = __this->___reward_12;
		NullCheck(L_23);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_24 = L_23->___sprite_2;
		NullCheck(L_22);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_22, L_24, NULL);
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardUI::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardUI_Refresh_mD1C827A4AADFFD9679E20E6B90167077BCE5AC56 (DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (state)
		int32_t L_0 = __this->___state_13;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_003e;
			}
		}
	}
	{
		return;
	}

IL_001a:
	{
		// imageRewardBackground.color = colorClaim;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___imageRewardBackground_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___colorClaim_9;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// break;
		return;
	}

IL_002c:
	{
		// imageRewardBackground.color = colorUnclaimed;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___imageRewardBackground_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___colorUnclaimed_10;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// break;
		return;
	}

IL_003e:
	{
		// imageRewardBackground.color = colorClaim;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___imageRewardBackground_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___colorClaim_9;
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardUI__ctor_m91BC78CB6385FE1E49912D90582E45C4F9EE98CC (DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* __this, const RuntimeMethod* method) 
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
// System.Void NiobiumStudios.TimedRewardsInterface::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface_Awake_mEB657E4776FF28A5D228C9A48B2BC08B995DF71C (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959_m821F06ED76A0DC6943D31FCABC60E4B5B0C78ED6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___canvas_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if (!isDebug)
		bool L_1 = __this->___isDebug_5;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		// panelDebug.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___panelDebug_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0020:
	{
		// timedRewards = GetComponent<TimedRewards>();
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_3;
		L_3 = Component_GetComponent_TisTimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959_m821F06ED76A0DC6943D31FCABC60E4B5B0C78ED6(__this, Component_GetComponent_TisTimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959_m821F06ED76A0DC6943D31FCABC60E4B5B0C78ED6_RuntimeMethod_var);
		__this->___timedRewards_20 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timedRewards_20), (void*)L_3);
		// }
		return;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface_Start_m71C51F4EA2D44594C25DC064B96AC7898F0445C9 (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedRewardsInterface_U3CStartU3Eb__19_0_m5145E6836398E4D09B6052653CFA0F2467943260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedRewardsInterface_U3CStartU3Eb__19_1_m3BBF27E3DA3FA54A750F716AA5C7DAE79865BD56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedRewardsInterface_U3CStartU3Eb__19_2_mBB5107FF6474DCC8F8E308D2B8FFB98686A7E882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedRewardsInterface_U3CStartU3Eb__19_3_mE2410911C3DB8667AFDE035315E371FF88086695_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__19_4_mDC3CCDA4E8345172283D8E6548F630C7E8C1CA02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B5_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B5_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B4_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B4_1 = NULL;
	{
		// InitializeAvailableRewardsUI();
		TimedRewardsInterface_InitializeAvailableRewardsUI_mEDDF2E71FC845EEC855AC00899CB7A851E73E6DC(__this, NULL);
		// buttonClaim.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___buttonClaim_9;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)0, NULL);
		// panelAvailableRewards.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___panelAvailableRewards_15;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// buttonCloseAvailable.onClick.AddListener(() =>
		// {
		//     panelAvailableRewards.SetActive(false);
		//     buttonClaim.interactable = true;
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___buttonCloseAvailable_17;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)TimedRewardsInterface_U3CStartU3Eb__19_0_m5145E6836398E4D09B6052653CFA0F2467943260_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// buttonClaim.onClick.AddListener(() =>
		// {
		//     buttonClaim.interactable = false;
		//     // On single rewards automatically claims
		//     if (timedRewards.rewards.Count == 1)
		//     {
		//         ClaimReward(0);
		//     }
		//     else if (timedRewards.isRewardRandom)
		//     {
		//         // If the reward is random, player claims a random reward from the list
		//         ClaimReward(UnityEngine.Random.Range(0, timedRewards.rewards.Count));
		//     }
		//     else
		//     {
		//         // On multiple rewards shows the Available Rewards panel
		//         panelAvailableRewards.SetActive(true);
		//     }
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___buttonClaim_9;
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_5, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)TimedRewardsInterface_U3CStartU3Eb__19_1_m3BBF27E3DA3FA54A750F716AA5C7DAE79865BD56_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_6, L_7, NULL);
		// buttonCloseReward.onClick.AddListener(() =>
		// {
		//     panelAvailableRewards.SetActive(false);
		//     panelReward.SetActive(false);
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___buttonCloseReward_13;
		NullCheck(L_8);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_9;
		L_9 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_8, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, __this, (intptr_t)((void*)TimedRewardsInterface_U3CStartU3Eb__19_2_mBB5107FF6474DCC8F8E308D2B8FFB98686A7E882_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_9, L_10, NULL);
		// if(buttonReset)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___buttonReset_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_11, NULL);
		if (!L_12)
		{
			goto IL_009b;
		}
	}
	{
		// buttonReset.onClick.AddListener(() =>
		// {
		//     timedRewards.Reset();
		//     buttonClaim.interactable = true;
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = __this->___buttonReset_7;
		NullCheck(L_13);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_14;
		L_14 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_13, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_15 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_15, __this, (intptr_t)((void*)TimedRewardsInterface_U3CStartU3Eb__19_3_mE2410911C3DB8667AFDE035315E371FF88086695_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_14, L_15, NULL);
	}

IL_009b:
	{
		// if(buttonReloadScene)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = __this->___buttonReloadScene_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_16, NULL);
		if (!L_17)
		{
			goto IL_00d7;
		}
	}
	{
		// buttonReloadScene.onClick.AddListener(() =>
		// {
		//     Application.LoadLevel (Application.loadedLevel);
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___buttonReloadScene_8;
		NullCheck(L_18);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_19;
		L_19 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_il2cpp_TypeInfo_var);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_20 = ((U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_il2cpp_TypeInfo_var))->___U3CU3E9__19_4_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_21 = L_20;
		G_B4_0 = L_21;
		G_B4_1 = L_19;
		if (L_21)
		{
			G_B5_0 = L_21;
			G_B5_1 = L_19;
			goto IL_00d2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_il2cpp_TypeInfo_var);
		U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3* L_22 = ((U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_23 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_23, L_22, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__19_4_mDC3CCDA4E8345172283D8E6548F630C7E8C1CA02_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_24 = L_23;
		((U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_il2cpp_TypeInfo_var))->___U3CU3E9__19_4_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_il2cpp_TypeInfo_var))->___U3CU3E9__19_4_1), (void*)L_24);
		G_B5_0 = L_24;
		G_B5_1 = G_B4_1;
	}

IL_00d2:
	{
		NullCheck(G_B5_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B5_1, G_B5_0, NULL);
	}

IL_00d7:
	{
		// }
		return;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface_OnEnable_mAF1C2FA979C88128E3D22B9FFF8C4F2350450129 (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedRewardsInterface_OnCanClaim_mDA66CF5D8942EC4AB9D44ED57EB0AB3984463126_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedRewardsInterface_OnInitialize_mE76B38329896AC90360CBC670569871FE1398055_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timedRewards.onCanClaim += OnCanClaim;
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_0 = __this->___timedRewards_20;
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_1 = L_0;
		NullCheck(L_1);
		OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* L_2 = L_1->___onCanClaim_21;
		OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* L_3 = (OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95*)il2cpp_codegen_object_new(OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		OnCanClaim__ctor_m57D8220FF1BC0836DEAC3B50F26F515039C24A5D(L_3, __this, (intptr_t)((void*)TimedRewardsInterface_OnCanClaim_mDA66CF5D8942EC4AB9D44ED57EB0AB3984463126_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		NullCheck(L_1);
		L_1->___onCanClaim_21 = ((OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95*)CastclassSealed((RuntimeObject*)L_4, OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onCanClaim_21), (void*)((OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95*)CastclassSealed((RuntimeObject*)L_4, OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95_il2cpp_TypeInfo_var)));
		// timedRewards.onInitialize += OnInitialize;
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_5 = __this->___timedRewards_20;
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_6 = L_5;
		NullCheck(L_6);
		OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D* L_7 = ((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)L_6)->___onInitialize_14;
		OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D* L_8 = (OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D*)il2cpp_codegen_object_new(OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		OnInitialize__ctor_mE5B963ACB7EB0DB7219DD9A9AED44BE3FDF43CBB(L_8, __this, (intptr_t)((void*)TimedRewardsInterface_OnInitialize_mE76B38329896AC90360CBC670569871FE1398055_RuntimeMethod_var), NULL);
		Delegate_t* L_9;
		L_9 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_7, L_8, NULL);
		NullCheck(L_6);
		((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)L_6)->___onInitialize_14 = ((OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D*)Castclass((RuntimeObject*)L_9, OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)L_6)->___onInitialize_14), (void*)((OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D*)Castclass((RuntimeObject*)L_9, OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface_OnDisable_mEF6524BEF3E6DDFED2DD78792A51BFCA5961E88E (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedRewardsInterface_OnCanClaim_mDA66CF5D8942EC4AB9D44ED57EB0AB3984463126_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedRewardsInterface_OnInitialize_mE76B38329896AC90360CBC670569871FE1398055_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(timedRewards!=null)
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_0 = __this->___timedRewards_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		// timedRewards.onCanClaim -= OnCanClaim;
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_2 = __this->___timedRewards_20;
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_3 = L_2;
		NullCheck(L_3);
		OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* L_4 = L_3->___onCanClaim_21;
		OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* L_5 = (OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95*)il2cpp_codegen_object_new(OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		OnCanClaim__ctor_m57D8220FF1BC0836DEAC3B50F26F515039C24A5D(L_5, __this, (intptr_t)((void*)TimedRewardsInterface_OnCanClaim_mDA66CF5D8942EC4AB9D44ED57EB0AB3984463126_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_4, L_5, NULL);
		NullCheck(L_3);
		L_3->___onCanClaim_21 = ((OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95*)CastclassSealed((RuntimeObject*)L_6, OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___onCanClaim_21), (void*)((OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95*)CastclassSealed((RuntimeObject*)L_6, OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95_il2cpp_TypeInfo_var)));
		// timedRewards.onInitialize -= OnInitialize;
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_7 = __this->___timedRewards_20;
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_8 = L_7;
		NullCheck(L_8);
		OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D* L_9 = ((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)L_8)->___onInitialize_14;
		OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D* L_10 = (OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D*)il2cpp_codegen_object_new(OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		OnInitialize__ctor_mE5B963ACB7EB0DB7219DD9A9AED44BE3FDF43CBB(L_10, __this, (intptr_t)((void*)TimedRewardsInterface_OnInitialize_mE76B38329896AC90360CBC670569871FE1398055_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_9, L_10, NULL);
		NullCheck(L_8);
		((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)L_8)->___onInitialize_14 = ((OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D*)Castclass((RuntimeObject*)L_11, OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)L_8)->___onInitialize_14), (void*)((OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D*)Castclass((RuntimeObject*)L_11, OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D_il2cpp_TypeInfo_var)));
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface::UpdateTextInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface_UpdateTextInfo_mC864BCD9BA0892994D1F1DF2AC277AA53675B2AE (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, const RuntimeMethod* method) 
{
	{
		// if (timedRewards.timer.TotalSeconds > 0)
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_0 = __this->___timedRewards_20;
		NullCheck(L_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_1 = (&L_0->___timer_17);
		double L_2;
		L_2 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8(L_1, NULL);
		if ((!(((double)L_2) > ((double)(0.0)))))
		{
			goto IL_0031;
		}
	}
	{
		// textInfo.text = timedRewards.GetFormattedTime();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___textInfo_10;
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_4 = __this->___timedRewards_20;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = TimedRewards_GetFormattedTime_m550E13A5B058BED2ABFAE1CD430BA95F10525670(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface::InitializeAvailableRewardsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface_InitializeAvailableRewardsUI_mEDDF2E71FC845EEC855AC00899CB7A851E73E6DC (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40_mDA0FC4480AAC563E89881C8DAAEBCB5EF3B912F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAFFF8DC530DE59DA99EF04E9E61BF06FDCBCDD95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* V_1 = NULL;
	TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40* V_2 = NULL;
	{
		// if (timedRewards.rewards.Count > 1)
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_0 = __this->___timedRewards_20;
		NullCheck(L_0);
		List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* L_1 = L_0->___rewards_20;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_inline(L_1, List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_00b7;
		}
	}
	{
		// for (int i = 0; i < timedRewards.rewards.Count; i++)
		V_0 = 0;
		goto IL_00a1;
	}

IL_001d:
	{
		// var reward = timedRewards.GetReward(i);
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_3 = __this->___timedRewards_20;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_5;
		L_5 = TimedRewards_GetReward_m1F4393E0DC33472D8AEE64280623825DAE394FF5(L_3, L_4, NULL);
		V_1 = L_5;
		// GameObject dailyRewardGo = GameObject.Instantiate(rewardPrefab) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___rewardPrefab_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// TimedRewardUI rewardUI = dailyRewardGo.GetComponent<TimedRewardUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7;
		NullCheck(L_8);
		TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40* L_9;
		L_9 = GameObject_GetComponent_TisTimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40_mDA0FC4480AAC563E89881C8DAAEBCB5EF3B912F2(L_8, GameObject_GetComponent_TisTimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40_mDA0FC4480AAC563E89881C8DAAEBCB5EF3B912F2_RuntimeMethod_var);
		V_2 = L_9;
		// rewardUI.index = 0;
		TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40* L_10 = V_2;
		NullCheck(L_10);
		L_10->___index_8 = 0;
		// rewardUI.transform.SetParent(rewardsGroup.transform);
		TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40* L_11 = V_2;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_13 = __this->___rewardsGroup_18;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_12);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_12, L_14, NULL);
		// dailyRewardGo.transform.localScale = Vector2.one;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_16, NULL);
		NullCheck(L_15);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_15, L_17, NULL);
		// rewardUI.button.onClick.AddListener(OnClickReward(i));
		TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40* L_18 = V_2;
		NullCheck(L_18);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_19 = L_18->___button_7;
		NullCheck(L_19);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_20;
		L_20 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_19, NULL);
		int32_t L_21 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_22;
		L_22 = TimedRewardsInterface_OnClickReward_m6FFB525558C55BD4686AC44B306DE207E6319147(__this, L_21, NULL);
		NullCheck(L_20);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_20, L_22, NULL);
		// rewardUI.reward = reward;
		TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40* L_23 = V_2;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_24 = V_1;
		NullCheck(L_23);
		L_23->___reward_9 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___reward_9), (void*)L_24);
		// rewardUI.Initialize();
		TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40* L_25 = V_2;
		NullCheck(L_25);
		TimedRewardUI_Initialize_m0D87C548BB0C6EE7DDFE6874C550701988E2A36B(L_25, NULL);
		// rewardsUI.Add(rewardUI);
		List_1_t780E6658469A67283CE30DD3ED1A48F92F484550* L_26 = __this->___rewardsUI_21;
		TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40* L_27 = V_2;
		NullCheck(L_26);
		List_1_Add_mAFFF8DC530DE59DA99EF04E9E61BF06FDCBCDD95_inline(L_26, L_27, List_1_Add_mAFFF8DC530DE59DA99EF04E9E61BF06FDCBCDD95_RuntimeMethod_var);
		// for (int i = 0; i < timedRewards.rewards.Count; i++)
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00a1:
	{
		// for (int i = 0; i < timedRewards.rewards.Count; i++)
		int32_t L_29 = V_0;
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_30 = __this->___timedRewards_20;
		NullCheck(L_30);
		List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* L_31 = L_30->___rewards_20;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_inline(L_31, List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_32)))
		{
			goto IL_001d;
		}
	}

IL_00b7:
	{
		// }
		return;
	}
}
// UnityEngine.Events.UnityAction NiobiumStudios.TimedRewardsInterface::OnClickReward(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* TimedRewardsInterface_OnClickReward_m6FFB525558C55BD4686AC44B306DE207E6319147 (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3COnClickRewardU3Eb__0_m6ECC286FE857B35F4A17182C2C0C40D5EAC1EBF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_tA646CAD6DEA268D38140DBD24C8ADDF6ED4CA419_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass24_0_tA646CAD6DEA268D38140DBD24C8ADDF6ED4CA419* L_0 = (U3CU3Ec__DisplayClass24_0_tA646CAD6DEA268D38140DBD24C8ADDF6ED4CA419*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass24_0_tA646CAD6DEA268D38140DBD24C8ADDF6ED4CA419_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass24_0__ctor_mDE4301355E0F34640E346552788C435DA9E83755(L_0, NULL);
		U3CU3Ec__DisplayClass24_0_tA646CAD6DEA268D38140DBD24C8ADDF6ED4CA419* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass24_0_tA646CAD6DEA268D38140DBD24C8ADDF6ED4CA419* L_2 = L_1;
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		L_2->___index_1 = L_3;
		// return () =>
		// {
		//     panelAvailableRewards.SetActive(false);
		//     ClaimReward(index);
		// };
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, L_2, (intptr_t)((void*)U3CU3Ec__DisplayClass24_0_U3COnClickRewardU3Eb__0_m6ECC286FE857B35F4A17182C2C0C40D5EAC1EBF0_RuntimeMethod_var), NULL);
		return L_4;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface::ClaimReward(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface_ClaimReward_m7E50299079E9C028C9D0BDAB0F6278A93DA2DE16 (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85331D822D70F7F861D4A396B0A538667BA1427E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFAACFF01FFB1E4699D468B20C5C7F7CE3F6CAA3);
		s_Il2CppMethodInitialized = true;
	}
	Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// timedRewards.ClaimReward(index);
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_0 = __this->___timedRewards_20;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		TimedRewards_ClaimReward_m86D45C54D3617722F33AEF8C763C6B240E475ADC(L_0, L_1, NULL);
		// panelReward.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___panelReward_11;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// var reward = timedRewards.GetReward(index);
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_3 = __this->___timedRewards_20;
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_5;
		L_5 = TimedRewards_GetReward_m1F4393E0DC33472D8AEE64280623825DAE394FF5(L_3, L_4, NULL);
		V_0 = L_5;
		// var unit = reward.unit;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___unit_0;
		V_1 = L_7;
		// var rewardQt = reward.reward;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___reward_1;
		// imageRewardMessage.sprite = reward.sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___imageRewardMessage_14;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_11 = V_0;
		NullCheck(L_11);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = L_11->___sprite_2;
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_12, NULL);
		// if (rewardQt > 0)
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		// textReward.text = string.Format("You got {0} {1}!", reward.reward, unit);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___textReward_12;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___reward_1;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18 = V_1;
		String_t* L_19;
		L_19 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralDFAACFF01FFB1E4699D468B20C5C7F7CE3F6CAA3, L_17, L_18, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_19);
		return;
	}

IL_0068:
	{
		// textReward.text = string.Format("You got {0}!", unit);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___textReward_12;
		String_t* L_21 = V_1;
		String_t* L_22;
		L_22 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral85331D822D70F7F861D4A396B0A538667BA1427E, L_21, NULL);
		NullCheck(L_20);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_22);
		// }
		return;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface::OnCanClaim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface_OnCanClaim_mDA66CF5D8942EC4AB9D44ED57EB0AB3984463126 (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39EC17533E709FECD44181B4D4B83F26DF68B230);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonClaim.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___buttonClaim_9;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)1, NULL);
		// textInfo.text = "Reward Ready!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___textInfo_10;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral39EC17533E709FECD44181B4D4B83F26DF68B230);
		// if(!buttonClaim.gameObject.activeInHierarchy)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___buttonClaim_9;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (L_4)
		{
			goto IL_003f;
		}
	}
	{
		// buttonClaim.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___buttonClaim_9;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface::OnInitialize(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface_OnInitialize_mE76B38329896AC90360CBC670569871FE1398055 (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, bool ___error0, String_t* ___errorMessage1, const RuntimeMethod* method) 
{
	{
		// if (!error)
		bool L_0 = ___error0;
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		// canvas.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___canvas_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// StartCoroutine(TickTime());
		RuntimeObject* L_3;
		L_3 = TimedRewardsInterface_TickTime_mEA1E2DB05F64901FE8C3260FB719598263BF005A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator NiobiumStudios.TimedRewardsInterface::TickTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimedRewardsInterface_TickTime_mEA1E2DB05F64901FE8C3260FB719598263BF005A (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTickTimeU3Ed__28_t5CAE1A21C93AD70B4E3AD0DD09B8B4B2767F0AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTickTimeU3Ed__28_t5CAE1A21C93AD70B4E3AD0DD09B8B4B2767F0AC5* L_0 = (U3CTickTimeU3Ed__28_t5CAE1A21C93AD70B4E3AD0DD09B8B4B2767F0AC5*)il2cpp_codegen_object_new(U3CTickTimeU3Ed__28_t5CAE1A21C93AD70B4E3AD0DD09B8B4B2767F0AC5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTickTimeU3Ed__28__ctor_mCDEB3AEA8BAA0EA8738C559AF8339831873CE22B(L_0, 0, NULL);
		U3CTickTimeU3Ed__28_t5CAE1A21C93AD70B4E3AD0DD09B8B4B2767F0AC5* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface__ctor_m14F3B5307052C59EAC90821D4DFB23DF9E4B978E (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC1EBEF13AE04B8D04CEDE19D6D8F1A5F8F54A44B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t780E6658469A67283CE30DD3ED1A48F92F484550_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<TimedRewardUI> rewardsUI = new List<TimedRewardUI>();
		List_1_t780E6658469A67283CE30DD3ED1A48F92F484550* L_0 = (List_1_t780E6658469A67283CE30DD3ED1A48F92F484550*)il2cpp_codegen_object_new(List_1_t780E6658469A67283CE30DD3ED1A48F92F484550_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC1EBEF13AE04B8D04CEDE19D6D8F1A5F8F54A44B(L_0, List_1__ctor_mC1EBEF13AE04B8D04CEDE19D6D8F1A5F8F54A44B_RuntimeMethod_var);
		__this->___rewardsUI_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardsUI_21), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface::<Start>b__19_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface_U3CStartU3Eb__19_0_m5145E6836398E4D09B6052653CFA0F2467943260 (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, const RuntimeMethod* method) 
{
	{
		// panelAvailableRewards.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___panelAvailableRewards_15;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// buttonClaim.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___buttonClaim_9;
		NullCheck(L_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)1, NULL);
		// });
		return;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface::<Start>b__19_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface_U3CStartU3Eb__19_1_m3BBF27E3DA3FA54A750F716AA5C7DAE79865BD56 (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonClaim.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___buttonClaim_9;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)0, NULL);
		// if (timedRewards.rewards.Count == 1)
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_1 = __this->___timedRewards_20;
		NullCheck(L_1);
		List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* L_2 = L_1->___rewards_20;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_inline(L_2, List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		// ClaimReward(0);
		TimedRewardsInterface_ClaimReward_m7E50299079E9C028C9D0BDAB0F6278A93DA2DE16(__this, 0, NULL);
		return;
	}

IL_0027:
	{
		// else if (timedRewards.isRewardRandom)
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_4 = __this->___timedRewards_20;
		NullCheck(L_4);
		bool L_5 = L_4->___isRewardRandom_19;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		// ClaimReward(UnityEngine.Random.Range(0, timedRewards.rewards.Count));
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_6 = __this->___timedRewards_20;
		NullCheck(L_6);
		List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* L_7 = L_6->___rewards_20;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_inline(L_7, List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_RuntimeMethod_var);
		int32_t L_9;
		L_9 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_8, NULL);
		TimedRewardsInterface_ClaimReward_m7E50299079E9C028C9D0BDAB0F6278A93DA2DE16(__this, L_9, NULL);
		return;
	}

IL_0051:
	{
		// panelAvailableRewards.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___panelAvailableRewards_15;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// });
		return;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface::<Start>b__19_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface_U3CStartU3Eb__19_2_mBB5107FF6474DCC8F8E308D2B8FFB98686A7E882 (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, const RuntimeMethod* method) 
{
	{
		// panelAvailableRewards.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___panelAvailableRewards_15;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// panelReward.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___panelReward_11;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// });
		return;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface::<Start>b__19_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardsInterface_U3CStartU3Eb__19_3_mE2410911C3DB8667AFDE035315E371FF88086695 (TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* __this, const RuntimeMethod* method) 
{
	{
		// timedRewards.Reset();
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_0 = __this->___timedRewards_20;
		NullCheck(L_0);
		TimedRewards_Reset_m7B44DDBC4A6EDF92ECC829FF7282019C92BE5BC3(L_0, NULL);
		// buttonClaim.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___buttonClaim_9;
		NullCheck(L_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)1, NULL);
		// });
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
// System.Void NiobiumStudios.TimedRewardsInterface/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8ACE5A6FE0E586F7C41932D7A96EE760CE88016E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3* L_0 = (U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3*)il2cpp_codegen_object_new(U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mC0ADE29B3F691FFF7370A4ECD63390CC1320A906(L_0, NULL);
		((U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC0ADE29B3F691FFF7370A4ECD63390CC1320A906 (U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface/<>c::<Start>b__19_4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__19_4_mDC3CCDA4E8345172283D8E6548F630C7E8C1CA02 (U3CU3Ec_t28773C6C195551E8104E761687D44E66E8B4B0F3* __this, const RuntimeMethod* method) 
{
	{
		// Application.LoadLevel (Application.loadedLevel);
		int32_t L_0;
		L_0 = Application_get_loadedLevel_m8B0E840EC12E43AFA522267B9E0E6721CF8BB287(NULL);
		Application_LoadLevel_m509A4D8E077158765B3F6307C3C96D75AF44167A(L_0, NULL);
		// });
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
// System.Void NiobiumStudios.TimedRewardsInterface/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_mDE4301355E0F34640E346552788C435DA9E83755 (U3CU3Ec__DisplayClass24_0_tA646CAD6DEA268D38140DBD24C8ADDF6ED4CA419* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface/<>c__DisplayClass24_0::<OnClickReward>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3COnClickRewardU3Eb__0_m6ECC286FE857B35F4A17182C2C0C40D5EAC1EBF0 (U3CU3Ec__DisplayClass24_0_tA646CAD6DEA268D38140DBD24C8ADDF6ED4CA419* __this, const RuntimeMethod* method) 
{
	{
		// panelAvailableRewards.SetActive(false);
		TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0->___panelAvailableRewards_15;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// ClaimReward(index);
		TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* L_2 = __this->___U3CU3E4__this_0;
		int32_t L_3 = __this->___index_1;
		NullCheck(L_2);
		TimedRewardsInterface_ClaimReward_m7E50299079E9C028C9D0BDAB0F6278A93DA2DE16(L_2, L_3, NULL);
		// };
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
// System.Void NiobiumStudios.TimedRewardsInterface/<TickTime>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTickTimeU3Ed__28__ctor_mCDEB3AEA8BAA0EA8738C559AF8339831873CE22B (U3CTickTimeU3Ed__28_t5CAE1A21C93AD70B4E3AD0DD09B8B4B2767F0AC5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface/<TickTime>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTickTimeU3Ed__28_System_IDisposable_Dispose_m37EB386B9130661D841BE6F639FB57827964D62F (U3CTickTimeU3Ed__28_t5CAE1A21C93AD70B4E3AD0DD09B8B4B2767F0AC5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean NiobiumStudios.TimedRewardsInterface/<TickTime>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTickTimeU3Ed__28_MoveNext_m143952E183C177CD2696ACF851FE54E976CD35D0 (U3CTickTimeU3Ed__28_t5CAE1A21C93AD70B4E3AD0DD09B8B4B2767F0AC5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// timedRewards.TickTime();
		TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* L_4 = V_1;
		NullCheck(L_4);
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_5 = L_4->___timedRewards_20;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(4 /* System.Void NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.TimedRewards>::TickTime() */, L_5);
		// UpdateTextInfo();
		TimedRewardsInterface_t2C5BC77F711C51F65B544BC15DB0EE75A25D7C28* L_6 = V_1;
		NullCheck(L_6);
		TimedRewardsInterface_UpdateTextInfo_mC864BCD9BA0892994D1F1DF2AC277AA53675B2AE(L_6, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_001e;
	}
}
// System.Object NiobiumStudios.TimedRewardsInterface/<TickTime>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTickTimeU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBDBE4A1FBC0E82732DD4CB9F5E66B297EFC85895 (U3CTickTimeU3Ed__28_t5CAE1A21C93AD70B4E3AD0DD09B8B4B2767F0AC5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void NiobiumStudios.TimedRewardsInterface/<TickTime>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTickTimeU3Ed__28_System_Collections_IEnumerator_Reset_m777F9FC984EF31BACE9B4C47FA1537FB962C202F (U3CTickTimeU3Ed__28_t5CAE1A21C93AD70B4E3AD0DD09B8B4B2767F0AC5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTickTimeU3Ed__28_System_Collections_IEnumerator_Reset_m777F9FC984EF31BACE9B4C47FA1537FB962C202F_RuntimeMethod_var)));
	}
}
// System.Object NiobiumStudios.TimedRewardsInterface/<TickTime>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTickTimeU3Ed__28_System_Collections_IEnumerator_get_Current_m6B4BD8C267A088B8D1E8E86C7B01BD821118B001 (U3CTickTimeU3Ed__28_t5CAE1A21C93AD70B4E3AD0DD09B8B4B2767F0AC5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void NiobiumStudios.TimedRewardUI::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardUI_Initialize_m0D87C548BB0C6EE7DDFE6874C550701988E2A36B (TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40* __this, const RuntimeMethod* method) 
{
	{
		// textUnit.text = reward.unit.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___textUnit_5;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_1 = __this->___reward_9;
		NullCheck(L_1);
		String_t* L_2 = L_1->___unit_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// if (reward.reward > 0)
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_4 = __this->___reward_9;
		NullCheck(L_4);
		int32_t L_5 = L_4->___reward_1;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		// textReward.text = reward.reward.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___textReward_4;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_7 = __this->___reward_9;
		NullCheck(L_7);
		int32_t* L_8 = (&L_7->___reward_1);
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_8, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
	}

IL_0044:
	{
		// imageReward.sprite = reward.sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___imageReward_6;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_11 = __this->___reward_9;
		NullCheck(L_11);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = L_11->___sprite_2;
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_12, NULL);
		// }
		return;
	}
}
// System.Void NiobiumStudios.TimedRewardUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewardUI__ctor_m22A47EFFE65F686D5054A9940E18512CCC477FA0 (TimedRewardUI_tD513DCB74919E1F0937117E9C42957C2FFAD6A40* __this, const RuntimeMethod* method) 
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
// System.Void NiobiumStudios.DailyRewards::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_Start_m5FC623C6166D78385B8298E982E74FDEDBB09D98 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(InitializeTimer());
		RuntimeObject* L_0;
		L_0 = DailyRewards_InitializeTimer_m9E5CBDF8ED58E0E736CA600116B49A37A067B94C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator NiobiumStudios.DailyRewards::InitializeTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DailyRewards_InitializeTimer_m9E5CBDF8ED58E0E736CA600116B49A37A067B94C (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeTimerU3Ed__13_tA1883F719550C880F98EC3A47835EAB6D50C8A84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInitializeTimerU3Ed__13_tA1883F719550C880F98EC3A47835EAB6D50C8A84* L_0 = (U3CInitializeTimerU3Ed__13_tA1883F719550C880F98EC3A47835EAB6D50C8A84*)il2cpp_codegen_object_new(U3CInitializeTimerU3Ed__13_tA1883F719550C880F98EC3A47835EAB6D50C8A84_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeTimerU3Ed__13__ctor_m71CCBB6EBBAF9CF564FF1BFDA92EFC6223B3258D(L_0, 0, NULL);
		U3CInitializeTimerU3Ed__13_tA1883F719550C880F98EC3A47835EAB6D50C8A84* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void NiobiumStudios.DailyRewards::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_OnApplicationPause_m4077CF5B1E591B98BAA2E23CDFC02B5914D44A04 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, bool ___pauseStatus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsCore_1_OnApplicationPause_mE41CEF9AB74C5F76EC6CA176792549DB2E784BE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnApplicationPause(pauseStatus);
		bool L_0 = ___pauseStatus0;
		DailyRewardsCore_1_OnApplicationPause_mE41CEF9AB74C5F76EC6CA176792549DB2E784BE1(__this, L_0, DailyRewardsCore_1_OnApplicationPause_mE41CEF9AB74C5F76EC6CA176792549DB2E784BE1_RuntimeMethod_var);
		// CheckRewards();
		DailyRewards_CheckRewards_mB4DAB07E2CB2AEE9284B35F21AC7F5AB87DC7FBF(__this, NULL);
		// }
		return;
	}
}
// System.TimeSpan NiobiumStudios.DailyRewards::GetTimeDifference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DailyRewards_GetTimeDifference_mE94B121B09688541741D6276A86C5FE34E33CBAF (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// TimeSpan difference = (lastRewardTime - now);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___lastRewardTime_17;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___now_12;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(L_0, L_1, NULL);
		V_0 = L_2;
		// difference = difference.Subtract(debugTime);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = __this->___debugTime_26;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = TimeSpan_Subtract_m6B780A4AADD60F53CC449DDC2171BBCD09381559((&V_0), L_3, NULL);
		V_0 = L_4;
		// return difference.Add(new TimeSpan(0, 24, 0, 0));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5;
		memset((&L_5), 0, sizeof(L_5));
		TimeSpan__ctor_m513B2AFB80D3350E59FBD23F53B2F1322175C24D((&L_5), 0, ((int32_t)24), 0, 0, /*hidden argument*/NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6;
		L_6 = TimeSpan_Add_m2225A425832F851825CDA4A74903841DDB62AA19((&V_0), L_5, NULL);
		return L_6;
	}
}
// System.Void NiobiumStudios.DailyRewards::LoadDebugTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_LoadDebugTime_mC66149E1640655BC946F566BE5EEAECB2F8BA508 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int debugHours = PlayerPrefs.GetInt(GetDebugTimeKey(), 0);
		String_t* L_0;
		L_0 = DailyRewards_GetDebugTimeKey_mB778850819AEAC9940254D44DBB73AF760FC87AF(__this, NULL);
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_0, 0, NULL);
		V_0 = L_1;
		// debugTime = new TimeSpan(debugHours, 0, 0);
		int32_t L_2 = V_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		memset((&L_3), 0, sizeof(L_3));
		TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1((&L_3), L_2, 0, 0, /*hidden argument*/NULL);
		__this->___debugTime_26 = L_3;
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewards::CheckRewards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_CheckRewards_mB4DAB07E2CB2AEE9284B35F21AC7F5AB87DC7FBF (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C669044B30EF635826C1065768EA6C806EF02B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F24A4A181A2A5948431E988807BD16EA8ABA004);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C165894B2900048144F5DEF682937FE73CA541);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0696F97F364A79EC82FEF41B1634BAC053D8B05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A63B94BAD9D1C5A01373CA9ABF1D4F587ABDA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF406ACD9511CE7F7095274B088383714079A5DA3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	{
		// string lastClaimedTimeStr = PlayerPrefs.GetString(GetLastRewardTimeKey());
		String_t* L_0;
		L_0 = DailyRewards_GetLastRewardTimeKey_mE61CE07064365A751732FBCDF8A14F47D610BA9B(__this, NULL);
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(L_0, NULL);
		V_0 = L_1;
		// lastReward = PlayerPrefs.GetInt(GetLastRewardKey());
		String_t* L_2;
		L_2 = DailyRewards_GetLastRewardKey_m62C336DC6DA3D7ADCC5819D8D79621E1FCEA4DA5(__this, NULL);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_2, NULL);
		__this->___lastReward_19 = L_3;
		// if (!string.IsNullOrEmpty(lastClaimedTimeStr))
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		if (L_5)
		{
			goto IL_0161;
		}
	}
	{
		// lastRewardTime = DateTime.ParseExact(lastClaimedTimeStr, FMT, CultureInfo.InvariantCulture);
		String_t* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7;
		L_7 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8;
		L_8 = DateTime_ParseExact_m19BB81A11B239C7CE5781ACF7B854A8A7F8BE9D3(L_6, _stringLiteral99C165894B2900048144F5DEF682937FE73CA541, L_7, NULL);
		__this->___lastRewardTime_17 = L_8;
		// DateTime advancedTime = now.AddHours(debugTime.TotalHours);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_9 = (&((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___now_12);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_10 = (&__this->___debugTime_26);
		double L_11;
		L_11 = TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883(L_10, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_12;
		L_12 = DateTime_AddHours_m99C41C078F2F480BF9965F8A4BAB8C8B75C39C02(L_9, L_11, NULL);
		// TimeSpan diff = advancedTime - lastRewardTime;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_13 = __this->___lastRewardTime_17;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_14;
		L_14 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(L_12, L_13, NULL);
		V_1 = L_14;
		// Debug.Log("ID "+instanceId+" Last claim was " + (long)diff.TotalHours + " hours ago.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralD4A63B94BAD9D1C5A01373CA9ABF1D4F587ABDA9);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD4A63B94BAD9D1C5A01373CA9ABF1D4F587ABDA9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		int32_t* L_18 = (&((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___instanceId_4);
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_18, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral6F24A4A181A2A5948431E988807BD16EA8ABA004);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral6F24A4A181A2A5948431E988807BD16EA8ABA004);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		double L_22;
		L_22 = TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883((&V_1), NULL);
		V_3 = il2cpp_codegen_cast_double_to_int<int64_t>(L_22);
		String_t* L_23;
		L_23 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_3), NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_21;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralD0696F97F364A79EC82FEF41B1634BAC053D8B05);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralD0696F97F364A79EC82FEF41B1634BAC053D8B05);
		String_t* L_25;
		L_25 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_25, NULL);
		// int days = (int)(Math.Abs(diff.TotalHours) / 24);
		double L_26;
		L_26 = TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_27;
		L_27 = fabs(L_26);
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)(L_27/(24.0))));
		// if (days == 0)
		int32_t L_28 = V_2;
		if (L_28)
		{
			goto IL_00cc;
		}
	}
	{
		// availableReward = 0;
		__this->___availableReward_18 = 0;
		// return;
		return;
	}

IL_00cc:
	{
		// if (days >= 1 && days < 2)
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) < ((int32_t)1)))
		{
			goto IL_012f;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)2)))
		{
			goto IL_012f;
		}
	}
	{
		// if (lastReward == rewards.Count)
		int32_t L_31 = __this->___lastReward_19;
		List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* L_32 = __this->___rewards_16;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_inline(L_32, List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_RuntimeMethod_var);
		if ((!(((uint32_t)L_31) == ((uint32_t)L_33))))
		{
			goto IL_00f6;
		}
	}
	{
		// availableReward = 1;
		__this->___availableReward_18 = 1;
		// lastReward = 0;
		__this->___lastReward_19 = 0;
		// return;
		return;
	}

IL_00f6:
	{
		// availableReward = lastReward + 1;
		int32_t L_34 = __this->___lastReward_19;
		__this->___availableReward_18 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		// Debug.Log("ID " + instanceId + " Player can claim prize " + availableReward);
		int32_t* L_35 = (&((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___instanceId_4);
		String_t* L_36;
		L_36 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_35, NULL);
		int32_t* L_37 = (&__this->___availableReward_18);
		String_t* L_38;
		L_38 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_37, NULL);
		String_t* L_39;
		L_39 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralD4A63B94BAD9D1C5A01373CA9ABF1D4F587ABDA9, L_36, _stringLiteralF406ACD9511CE7F7095274B088383714079A5DA3, L_38, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_39, NULL);
		// return;
		return;
	}

IL_012f:
	{
		// if (days >= 2)
		int32_t L_40 = V_2;
		if ((((int32_t)L_40) < ((int32_t)2)))
		{
			goto IL_0168;
		}
	}
	{
		// availableReward = 1;
		__this->___availableReward_18 = 1;
		// lastReward = 0;
		__this->___lastReward_19 = 0;
		// Debug.Log("ID " + instanceId + " Prize reset ");
		int32_t* L_41 = (&((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___instanceId_4);
		String_t* L_42;
		L_42 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_41, NULL);
		String_t* L_43;
		L_43 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralD4A63B94BAD9D1C5A01373CA9ABF1D4F587ABDA9, L_42, _stringLiteral0C669044B30EF635826C1065768EA6C806EF02B3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_43, NULL);
		return;
	}

IL_0161:
	{
		// availableReward = 1;
		__this->___availableReward_18 = 1;
	}

IL_0168:
	{
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewards::ClaimPrize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_ClaimPrize_mA67D9A7178739327226FA8D23EA7B5AEEF02E968 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4730A68FCCADE7ADA3F812E5A06FE86725860E89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral898CF9C7C64BC5B720A9998FC3C66E77E5574B99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C165894B2900048144F5DEF682937FE73CA541);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA392E67288F80E71EACDEBB76A981270AC408CA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A63B94BAD9D1C5A01373CA9ABF1D4F587ABDA9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	{
		// if (availableReward > 0)
		int32_t L_0 = __this->___availableReward_18;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00d7;
		}
	}
	{
		// if (onClaimPrize != null)
		OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* L_1 = __this->___onClaimPrize_21;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// onClaimPrize(availableReward);
		OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* L_2 = __this->___onClaimPrize_21;
		int32_t L_3 = __this->___availableReward_18;
		NullCheck(L_2);
		OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_inline(L_2, L_3, NULL);
	}

IL_0025:
	{
		// Debug.Log("ID " + instanceId + " Reward [" + rewards[availableReward - 1] + "] Claimed!");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralD4A63B94BAD9D1C5A01373CA9ABF1D4F587ABDA9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD4A63B94BAD9D1C5A01373CA9ABF1D4F587ABDA9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t* L_7 = (&((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___instanceId_4);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral4730A68FCCADE7ADA3F812E5A06FE86725860E89);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4730A68FCCADE7ADA3F812E5A06FE86725860E89);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* L_11 = __this->___rewards_16;
		int32_t L_12 = __this->___availableReward_18;
		NullCheck(L_11);
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_13;
		L_13 = List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD(L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD_RuntimeMethod_var);
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_14 = L_13;
		G_B4_0 = L_14;
		G_B4_1 = 3;
		G_B4_2 = L_10;
		G_B4_3 = L_10;
		if (L_14)
		{
			G_B5_0 = L_14;
			G_B5_1 = 3;
			G_B5_2 = L_10;
			G_B5_3 = L_10;
			goto IL_0065;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_006a;
	}

IL_0065:
	{
		NullCheck(G_B5_0);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_15;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_006a:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = G_B6_3;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral898CF9C7C64BC5B720A9998FC3C66E77E5574B99);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral898CF9C7C64BC5B720A9998FC3C66E77E5574B99);
		String_t* L_17;
		L_17 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_17, NULL);
		// PlayerPrefs.SetInt(GetLastRewardKey(), availableReward);
		String_t* L_18;
		L_18 = DailyRewards_GetLastRewardKey_m62C336DC6DA3D7ADCC5819D8D79621E1FCEA4DA5(__this, NULL);
		int32_t L_19 = __this->___availableReward_18;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_18, L_19, NULL);
		// string lastClaimedStr = now.AddHours(debugTime.TotalHours).ToString(FMT);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_20 = (&((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___now_12);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_21 = (&__this->___debugTime_26);
		double L_22;
		L_22 = TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883(L_21, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_23;
		L_23 = DateTime_AddHours_m99C41C078F2F480BF9965F8A4BAB8C8B75C39C02(L_20, L_22, NULL);
		V_1 = L_23;
		String_t* L_24;
		L_24 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_1), _stringLiteral99C165894B2900048144F5DEF682937FE73CA541, NULL);
		V_0 = L_24;
		// PlayerPrefs.SetString(GetLastRewardTimeKey(), lastClaimedStr);
		String_t* L_25;
		L_25 = DailyRewards_GetLastRewardTimeKey_mE61CE07064365A751732FBCDF8A14F47D610BA9B(__this, NULL);
		String_t* L_26 = V_0;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_25, L_26, NULL);
		// PlayerPrefs.SetInt(GetDebugTimeKey(), (int)debugTime.TotalHours);
		String_t* L_27;
		L_27 = DailyRewards_GetDebugTimeKey_mB778850819AEAC9940254D44DBB73AF760FC87AF(__this, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_28 = (&__this->___debugTime_26);
		double L_29;
		L_29 = TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883(L_28, NULL);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_27, il2cpp_codegen_cast_double_to_int<int32_t>(L_29), NULL);
		goto IL_00e9;
	}

IL_00d7:
	{
		// else if (availableReward == 0)
		int32_t L_30 = __this->___availableReward_18;
		if (L_30)
		{
			goto IL_00e9;
		}
	}
	{
		// Debug.LogError("Error! The player is trying to claim the same reward twice.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralA392E67288F80E71EACDEBB76A981270AC408CA4, NULL);
	}

IL_00e9:
	{
		// CheckRewards();
		DailyRewards_CheckRewards_mB4DAB07E2CB2AEE9284B35F21AC7F5AB87DC7FBF(__this, NULL);
		// }
		return;
	}
}
// System.String NiobiumStudios.DailyRewards::GetLastRewardKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DailyRewards_GetLastRewardKey_m62C336DC6DA3D7ADCC5819D8D79621E1FCEA4DA5 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6178084923226537EED3751DE48D1B65584FEB7A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instanceId == 0)
		int32_t L_0 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___instanceId_4;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return LAST_REWARD;
		return _stringLiteral6178084923226537EED3751DE48D1B65584FEB7A;
	}

IL_000e:
	{
		// return string.Format("{0}_{1}", LAST_REWARD, instanceId);
		int32_t L_1 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___instanceId_4;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674, _stringLiteral6178084923226537EED3751DE48D1B65584FEB7A, L_3, NULL);
		return L_4;
	}
}
// System.String NiobiumStudios.DailyRewards::GetLastRewardTimeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DailyRewards_GetLastRewardTimeKey_mE61CE07064365A751732FBCDF8A14F47D610BA9B (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CADB05867593AF2AF08F6696A4EE3D9B0101FAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instanceId == 0)
		int32_t L_0 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___instanceId_4;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return LAST_REWARD_TIME;
		return _stringLiteral4CADB05867593AF2AF08F6696A4EE3D9B0101FAA;
	}

IL_000e:
	{
		// return string.Format("{0}_{1}", LAST_REWARD_TIME, instanceId);
		int32_t L_1 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___instanceId_4;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674, _stringLiteral4CADB05867593AF2AF08F6696A4EE3D9B0101FAA, L_3, NULL);
		return L_4;
	}
}
// System.String NiobiumStudios.DailyRewards::GetDebugTimeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DailyRewards_GetDebugTimeKey_mB778850819AEAC9940254D44DBB73AF760FC87AF (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8A0752ACB63533CC45B4C3EB31AAEA98187B671);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instanceId == 0)
		int32_t L_0 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___instanceId_4;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return DEBUG_TIME;
		return _stringLiteralE8A0752ACB63533CC45B4C3EB31AAEA98187B671;
	}

IL_000e:
	{
		// return string.Format("{0}_{1}", DEBUG_TIME, instanceId);
		int32_t L_1 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___instanceId_4;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674, _stringLiteralE8A0752ACB63533CC45B4C3EB31AAEA98187B671, L_3, NULL);
		return L_4;
	}
}
// NiobiumStudios.Reward NiobiumStudios.DailyRewards::GetReward(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* DailyRewards_GetReward_mE953E12B8649897F220D0A1B974CEAE350245BD2 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, int32_t ___day0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return rewards[day - 1];
		List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* L_0 = __this->___rewards_16;
		int32_t L_1 = ___day0;
		NullCheck(L_0);
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_2;
		L_2 = List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD(L_0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void NiobiumStudios.DailyRewards::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_Reset_m07207FCE233ADD81D273DCDD7EFE36AC87A5B072 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	{
		// PlayerPrefs.DeleteKey(GetLastRewardKey());
		String_t* L_0;
		L_0 = DailyRewards_GetLastRewardKey_m62C336DC6DA3D7ADCC5819D8D79621E1FCEA4DA5(__this, NULL);
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(L_0, NULL);
		// PlayerPrefs.DeleteKey(GetLastRewardTimeKey());
		String_t* L_1;
		L_1 = DailyRewards_GetLastRewardTimeKey_mE61CE07064365A751732FBCDF8A14F47D610BA9B(__this, NULL);
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(L_1, NULL);
		// PlayerPrefs.DeleteKey(GetDebugTimeKey());
		String_t* L_2;
		L_2 = DailyRewards_GetDebugTimeKey_mB778850819AEAC9940254D44DBB73AF760FC87AF(__this, NULL);
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(L_2, NULL);
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewards::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards__ctor_m25495537C0BF03AC3345525A8E0C44BA4E09ACC0 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsCore_1__ctor_m1E3EC11764253FBCF2416341059E8BE08D69E9A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool keepOpen = true;        // Keep open even when there are no Rewards available?
		__this->___keepOpen_20 = (bool)1;
		DailyRewardsCore_1__ctor_m1E3EC11764253FBCF2416341059E8BE08D69E9A9(__this, DailyRewardsCore_1__ctor_m1E3EC11764253FBCF2416341059E8BE08D69E9A9_RuntimeMethod_var);
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
void OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_Multicast(OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* currentDelegate = reinterpret_cast<OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___day0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_Open(OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___day0, method);
}
void OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_OpenStaticInvoker(OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___day0);
}
void OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_ClosedStaticInvoker(OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___day0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___day0);

}
// System.Void NiobiumStudios.DailyRewards/OnClaimPrize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClaimPrize__ctor_m01622E897A574238182A1AD112ED602FE0F68817 (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_Multicast;
}
// System.Void NiobiumStudios.DailyRewards/OnClaimPrize::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630 (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___day0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NiobiumStudios.DailyRewards/OnClaimPrize::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnClaimPrize_BeginInvoke_m2B422B13717761ADF273098905BA8B8A8BB3F8E0 (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___day0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NiobiumStudios.DailyRewards/OnClaimPrize::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClaimPrize_EndInvoke_mC21B8CBC2871D58E7FF8FF670C697A9F0DE224B8 (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void NiobiumStudios.DailyRewards/<InitializeTimer>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeTimerU3Ed__13__ctor_m71CCBB6EBBAF9CF564FF1BFDA92EFC6223B3258D (U3CInitializeTimerU3Ed__13_tA1883F719550C880F98EC3A47835EAB6D50C8A84* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void NiobiumStudios.DailyRewards/<InitializeTimer>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeTimerU3Ed__13_System_IDisposable_Dispose_mFE31683A63B47C53E0736254207934910E5C7FA6 (U3CInitializeTimerU3Ed__13_tA1883F719550C880F98EC3A47835EAB6D50C8A84* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean NiobiumStudios.DailyRewards/<InitializeTimer>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInitializeTimerU3Ed__13_MoveNext_m8F45980CD8C6A952102001065A96570414DEFD61 (U3CInitializeTimerU3Ed__13_tA1883F719550C880F98EC3A47835EAB6D50C8A84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsCore_1_InitializeDate_m427F8C9E81B6E9902BD94F90338A0BF158E9A7E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(base.InitializeDate());
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_4 = V_1;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = DailyRewardsCore_1_InitializeDate_m427F8C9E81B6E9902BD94F90338A0BF158E9A7E9(L_5, DailyRewardsCore_1_InitializeDate_m427F8C9E81B6E9902BD94F90338A0BF158E9A7E9_RuntimeMethod_var);
		NullCheck(L_4);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_4, L_6, NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (base.isErrorConnect)
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)L_8)->___isErrorConnect_11;
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		// if (onInitialize != null)
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_10 = V_1;
		NullCheck(L_10);
		OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* L_11 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)L_10)->___onInitialize_14;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		// onInitialize(true, base.errorMessage);
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_12 = V_1;
		NullCheck(L_12);
		OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* L_13 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)L_12)->___onInitialize_14;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)L_14)->___errorMessage_10;
		NullCheck(L_13);
		OnInitialize_Invoke_mCA580609B445A85F8060391906B32EBD64C6E465_inline(L_13, (bool)1, L_15, NULL);
		goto IL_0089;
	}

IL_0064:
	{
		// LoadDebugTime();
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_16 = V_1;
		NullCheck(L_16);
		DailyRewards_LoadDebugTime_mC66149E1640655BC946F566BE5EEAECB2F8BA508(L_16, NULL);
		// CheckRewards();
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_17 = V_1;
		NullCheck(L_17);
		DailyRewards_CheckRewards_mB4DAB07E2CB2AEE9284B35F21AC7F5AB87DC7FBF(L_17, NULL);
		// if(onInitialize!=null)
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_18 = V_1;
		NullCheck(L_18);
		OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* L_19 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)L_18)->___onInitialize_14;
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		// onInitialize();
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_20 = V_1;
		NullCheck(L_20);
		OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* L_21 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)L_20)->___onInitialize_14;
		NullCheck(L_21);
		OnInitialize_Invoke_mCA580609B445A85F8060391906B32EBD64C6E465_inline(L_21, (bool)0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_0089:
	{
		// }
		return (bool)0;
	}
}
// System.Object NiobiumStudios.DailyRewards/<InitializeTimer>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInitializeTimerU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4C41060B1558FBAD8AC5D144905C3B9CE467A819 (U3CInitializeTimerU3Ed__13_tA1883F719550C880F98EC3A47835EAB6D50C8A84* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void NiobiumStudios.DailyRewards/<InitializeTimer>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeTimerU3Ed__13_System_Collections_IEnumerator_Reset_mF576ACCC2D1086E24A837FC6CB1632B7EE3AB895 (U3CInitializeTimerU3Ed__13_tA1883F719550C880F98EC3A47835EAB6D50C8A84* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeTimerU3Ed__13_System_Collections_IEnumerator_Reset_mF576ACCC2D1086E24A837FC6CB1632B7EE3AB895_RuntimeMethod_var)));
	}
}
// System.Object NiobiumStudios.DailyRewards/<InitializeTimer>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInitializeTimerU3Ed__13_System_Collections_IEnumerator_get_Current_m9B40237192A2E3B3BFB173ABE2D15203E2474C09 (U3CInitializeTimerU3Ed__13_tA1883F719550C880F98EC3A47835EAB6D50C8A84* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void NiobiumStudios.Reward::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reward__ctor_mA25B708489732A8A8CD4BCFA469E0789ABCDDDB2 (Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* __this, const RuntimeMethod* method) 
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
// System.Void NiobiumStudios.TimedRewards::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewards_Start_m4FD1EF83BAF9ADE6CCF8E4B9E85854F770BEEF8B (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(InitializeTimer());
		RuntimeObject* L_0;
		L_0 = TimedRewards_InitializeTimer_mFD2A478BB0F5E425BF1AFA73B4F6552E96E0D6AB(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator NiobiumStudios.TimedRewards::InitializeTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimedRewards_InitializeTimer_mFD2A478BB0F5E425BF1AFA73B4F6552E96E0D6AB (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeTimerU3Ed__13_t37EF85F2FC4CB68BC18DA87BFCF67F259B5CAFB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInitializeTimerU3Ed__13_t37EF85F2FC4CB68BC18DA87BFCF67F259B5CAFB3* L_0 = (U3CInitializeTimerU3Ed__13_t37EF85F2FC4CB68BC18DA87BFCF67F259B5CAFB3*)il2cpp_codegen_object_new(U3CInitializeTimerU3Ed__13_t37EF85F2FC4CB68BC18DA87BFCF67F259B5CAFB3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeTimerU3Ed__13__ctor_m8CCF0247CE77125086F261EBB74C1A80BA4DC685(L_0, 0, NULL);
		U3CInitializeTimerU3Ed__13_t37EF85F2FC4CB68BC18DA87BFCF67F259B5CAFB3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void NiobiumStudios.TimedRewards::LoadTimerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewards_LoadTimerData_mDE95441321CA31B0DE6F13A68E1992C6E30DBE23 (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C165894B2900048144F5DEF682937FE73CA541);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string lastRewardTimeStr = PlayerPrefs.GetString(GetTimedRewardsTimeKey());
		String_t* L_0;
		L_0 = TimedRewards_GetTimedRewardsTimeKey_m0FED9537A134C7D608264DF932101AC952B12C01(__this, NULL);
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(L_0, NULL);
		V_0 = L_1;
		// if (!string.IsNullOrEmpty(lastRewardTimeStr))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		if (L_3)
		{
			goto IL_0056;
		}
	}
	{
		// lastRewardTime = DateTime.ParseExact(lastRewardTimeStr, FMT, CultureInfo.InvariantCulture);
		String_t* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = DateTime_ParseExact_m19BB81A11B239C7CE5781ACF7B854A8A7F8BE9D3(L_4, _stringLiteral99C165894B2900048144F5DEF682937FE73CA541, L_5, NULL);
		__this->___lastRewardTime_16 = L_6;
		// timer = (lastRewardTime - now).Add(TimeSpan.FromSeconds(maxTime));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7 = __this->___lastRewardTime_16;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8 = ((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)__this)->___now_12;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9;
		L_9 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(L_7, L_8, NULL);
		V_1 = L_9;
		float L_10 = __this->___maxTime_18;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_11;
		L_11 = TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5(((double)L_10), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_12;
		L_12 = TimeSpan_Add_m2225A425832F851825CDA4A74903841DDB62AA19((&V_1), L_11, NULL);
		__this->___timer_17 = L_12;
		return;
	}

IL_0056:
	{
		// timer = TimeSpan.FromSeconds(maxTime);
		float L_13 = __this->___maxTime_18;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_14;
		L_14 = TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5(((double)L_13), NULL);
		__this->___timer_17 = L_14;
		// }
		return;
	}
}
// System.Void NiobiumStudios.TimedRewards::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewards_OnApplicationPause_mC8C40CE26691D72A21DA1866E52517B041835340 (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, bool ___pauseStatus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsCore_1_OnApplicationPause_m31E16277F70662A256A27834F7AE9A111A9D186C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnApplicationPause(pauseStatus);
		bool L_0 = ___pauseStatus0;
		DailyRewardsCore_1_OnApplicationPause_m31E16277F70662A256A27834F7AE9A111A9D186C(__this, L_0, DailyRewardsCore_1_OnApplicationPause_m31E16277F70662A256A27834F7AE9A111A9D186C_RuntimeMethod_var);
		// LoadTimerData();
		TimedRewards_LoadTimerData_mDE95441321CA31B0DE6F13A68E1992C6E30DBE23(__this, NULL);
		// CheckCanClaim();
		TimedRewards_CheckCanClaim_mEE7BA3D31AA32417FEE948E2AA3C6E291E8B88A2(__this, NULL);
		// }
		return;
	}
}
// System.Void NiobiumStudios.TimedRewards::TickTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewards_TickTime_m1E9F75D0C2B9415DC6E9FBB834A44867C005B892 (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsCore_1_TickTime_mD2A4A1AED29FE7259D2BD7E4CE883B5674E3DF3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.TickTime();
		DailyRewardsCore_1_TickTime_mD2A4A1AED29FE7259D2BD7E4CE883B5674E3DF3F(__this, DailyRewardsCore_1_TickTime_mD2A4A1AED29FE7259D2BD7E4CE883B5674E3DF3F_RuntimeMethod_var);
		// if(isInitialized)
		bool L_0 = ((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)__this)->___isInitialized_15;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (!canClaim)
		bool L_1 = __this->___canClaim_23;
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		// timer = timer.Subtract(TimeSpan.FromSeconds(Time.unscaledDeltaTime));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_2 = (&__this->___timer_17);
		float L_3;
		L_3 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5(((double)L_3), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5;
		L_5 = TimeSpan_Subtract_m6B780A4AADD60F53CC449DDC2171BBCD09381559(L_2, L_4, NULL);
		__this->___timer_17 = L_5;
		// CheckCanClaim();
		TimedRewards_CheckCanClaim_mEE7BA3D31AA32417FEE948E2AA3C6E291E8B88A2(__this, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void NiobiumStudios.TimedRewards::CheckCanClaim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewards_CheckCanClaim_mEE7BA3D31AA32417FEE948E2AA3C6E291E8B88A2 (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C165894B2900048144F5DEF682937FE73CA541);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (timer.TotalSeconds <= 0)
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_0 = (&__this->___timer_17);
		double L_1;
		L_1 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8(L_0, NULL);
		if ((!(((double)L_1) <= ((double)(0.0)))))
		{
			goto IL_0031;
		}
	}
	{
		// canClaim = true;
		__this->___canClaim_23 = (bool)1;
		// if (onCanClaim != null)
		OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* L_2 = __this->___onCanClaim_21;
		if (!L_2)
		{
			goto IL_006b;
		}
	}
	{
		// onCanClaim();
		OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* L_3 = __this->___onCanClaim_21;
		NullCheck(L_3);
		OnCanClaim_Invoke_mB1DCC1FB854BC4AC1D67F663950C885274F82106_inline(L_3, NULL);
		return;
	}

IL_0031:
	{
		// PlayerPrefs.SetString(GetTimedRewardsTimeKey(), now.Add(timer - TimeSpan.FromSeconds(maxTime)).ToString(FMT));
		String_t* L_4;
		L_4 = TimedRewards_GetTimedRewardsTimeKey_m0FED9537A134C7D608264DF932101AC952B12C01(__this, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_5 = (&((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)__this)->___now_12);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6 = __this->___timer_17;
		float L_7 = __this->___maxTime_18;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8;
		L_8 = TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5(((double)L_7), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9;
		L_9 = TimeSpan_op_Subtraction_mFFB8933364C5E1E2187CA0605445893F2872FBB8(L_6, L_8, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_10;
		L_10 = DateTime_Add_mC882C6BBE75862360A1A0C733B4FFE3210D4B9B1(L_5, L_9, NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_0), _stringLiteral99C165894B2900048144F5DEF682937FE73CA541, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_4, L_11, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.String NiobiumStudios.TimedRewards::GetTimedRewardsTimeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimedRewards_GetTimedRewardsTimeKey_m0FED9537A134C7D608264DF932101AC952B12C01 (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral146EF252F7495288E5687F0AF42916B1372A7F16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instanceId == 0)
		int32_t L_0 = ((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)__this)->___instanceId_4;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return TIMED_REWARDS_TIME;
		return _stringLiteral146EF252F7495288E5687F0AF42916B1372A7F16;
	}

IL_000e:
	{
		// return string.Format("{0}_{1}", TIMED_REWARDS_TIME, instanceId);
		int32_t L_1 = ((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)__this)->___instanceId_4;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674, _stringLiteral146EF252F7495288E5687F0AF42916B1372A7F16, L_3, NULL);
		return L_4;
	}
}
// System.Void NiobiumStudios.TimedRewards::ClaimReward(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewards_ClaimReward_m86D45C54D3617722F33AEF8C763C6B240E475ADC (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, int32_t ___rewardIdx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C165894B2900048144F5DEF682937FE73CA541);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// PlayerPrefs.SetString(GetTimedRewardsTimeKey(), now.Add(timer - TimeSpan.FromSeconds(maxTime)).ToString(FMT));
		String_t* L_0;
		L_0 = TimedRewards_GetTimedRewardsTimeKey_m0FED9537A134C7D608264DF932101AC952B12C01(__this, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_1 = (&((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)__this)->___now_12);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2 = __this->___timer_17;
		float L_3 = __this->___maxTime_18;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5(((double)L_3), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5;
		L_5 = TimeSpan_op_Subtraction_mFFB8933364C5E1E2187CA0605445893F2872FBB8(L_2, L_4, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = DateTime_Add_mC882C6BBE75862360A1A0C733B4FFE3210D4B9B1(L_1, L_5, NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_0), _stringLiteral99C165894B2900048144F5DEF682937FE73CA541, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_0, L_7, NULL);
		// timer = TimeSpan.FromSeconds(maxTime);
		float L_8 = __this->___maxTime_18;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9;
		L_9 = TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5(((double)L_8), NULL);
		__this->___timer_17 = L_9;
		// canClaim = false;
		__this->___canClaim_23 = (bool)0;
		// if (onClaimPrize != null)
		OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8* L_10 = __this->___onClaimPrize_22;
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		// onClaimPrize(rewardIdx);
		OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8* L_11 = __this->___onClaimPrize_22;
		int32_t L_12 = ___rewardIdx0;
		NullCheck(L_11);
		OnClaimPrize_Invoke_m6E8296E663129E650C028F163E5A8B05A0025E41_inline(L_11, L_12, NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.String NiobiumStudios.TimedRewards::GetFormattedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimedRewards_GetFormattedTime_m550E13A5B058BED2ABFAE1CD430BA95F10525670 (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2774AE9610CAB8B564AEA7618945AAAFA295BAD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB13BD262338453298F5111D3EEE127450AF4406);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(timer.Days > 0)
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_0 = (&__this->___timer_17);
		int32_t L_1;
		L_1 = TimeSpan_get_Days_m1317F48F8D9849E161D1CDBEB5CA08344EAAC107(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_006b;
		}
	}
	{
		// return string.Format("{0:D2} days {1:D2}:{2:D2}:{0:D3}", timer.Days, timer.Hours, timer.Minutes, timer.Seconds);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_4 = (&__this->___timer_17);
		int32_t L_5;
		L_5 = TimeSpan_get_Days_m1317F48F8D9849E161D1CDBEB5CA08344EAAC107(L_4, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_3;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_9 = (&__this->___timer_17);
		int32_t L_10;
		L_10 = TimeSpan_get_Hours_m770B4B777A816E051EFDA317C28DA9A4F39D6CFB(L_9, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_8;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_14 = (&__this->___timer_17);
		int32_t L_15;
		L_15 = TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F(L_14, NULL);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_13;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_19 = (&__this->___timer_17);
		int32_t L_20;
		L_20 = TimeSpan_get_Seconds_m8CA21613DC31BD025C5D30D41BAD0ED50827578B(L_19, NULL);
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteralAB13BD262338453298F5111D3EEE127450AF4406, L_18, NULL);
		return L_23;
	}

IL_006b:
	{
		// return string.Format("{0:D2}:{1:D2}:{2:D2}", timer.Hours, timer.Minutes, timer.Seconds);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_24 = (&__this->___timer_17);
		int32_t L_25;
		L_25 = TimeSpan_get_Hours_m770B4B777A816E051EFDA317C28DA9A4F39D6CFB(L_24, NULL);
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_26);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_28 = (&__this->___timer_17);
		int32_t L_29;
		L_29 = TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F(L_28, NULL);
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_32 = (&__this->___timer_17);
		int32_t L_33;
		L_33 = TimeSpan_get_Seconds_m8CA21613DC31BD025C5D30D41BAD0ED50827578B(L_32, NULL);
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36;
		L_36 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral2774AE9610CAB8B564AEA7618945AAAFA295BAD9, L_27, L_31, L_35, NULL);
		return L_36;
	}
}
// System.Void NiobiumStudios.TimedRewards::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewards_Reset_m7B44DDBC4A6EDF92ECC829FF7282019C92BE5BC3 (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.DeleteKey(GetTimedRewardsTimeKey());
		String_t* L_0;
		L_0 = TimedRewards_GetTimedRewardsTimeKey_m0FED9537A134C7D608264DF932101AC952B12C01(__this, NULL);
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(L_0, NULL);
		// canClaim = true;
		__this->___canClaim_23 = (bool)1;
		// timer = TimeSpan.FromSeconds(0);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5((0.0), NULL);
		__this->___timer_17 = L_1;
		// if (onCanClaim != null)
		OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* L_2 = __this->___onCanClaim_21;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// onCanClaim();
		OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* L_3 = __this->___onCanClaim_21;
		NullCheck(L_3);
		OnCanClaim_Invoke_mB1DCC1FB854BC4AC1D67F663950C885274F82106_inline(L_3, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// NiobiumStudios.Reward NiobiumStudios.TimedRewards::GetReward(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* TimedRewards_GetReward_m1F4393E0DC33472D8AEE64280623825DAE394FF5 (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return rewards[index];
		List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* L_0 = __this->___rewards_20;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_2;
		L_2 = List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD(L_0, L_1, List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void NiobiumStudios.TimedRewards::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedRewards__ctor_m2DDD48BC0162EC91FC0A7AF1A32D952B0A0EE58D (TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsCore_1__ctor_m986E47E9E38068AC609D9898ACBDA0B2C06E535C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float maxTime = 3600f; // How many seconds until the player can claim the reward
		__this->___maxTime_18 = (3600.0f);
		DailyRewardsCore_1__ctor_m986E47E9E38068AC609D9898ACBDA0B2C06E535C(__this, DailyRewardsCore_1__ctor_m986E47E9E38068AC609D9898ACBDA0B2C06E535C_RuntimeMethod_var);
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
void OnCanClaim_Invoke_mB1DCC1FB854BC4AC1D67F663950C885274F82106_Multicast(OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* currentDelegate = reinterpret_cast<OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnCanClaim_Invoke_mB1DCC1FB854BC4AC1D67F663950C885274F82106_Open(OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnCanClaim_Invoke_mB1DCC1FB854BC4AC1D67F663950C885274F82106_OpenStaticInvoker(OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnCanClaim_Invoke_mB1DCC1FB854BC4AC1D67F663950C885274F82106_ClosedStaticInvoker(OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95 (OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void NiobiumStudios.TimedRewards/OnCanClaim::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCanClaim__ctor_m57D8220FF1BC0836DEAC3B50F26F515039C24A5D (OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCanClaim_Invoke_mB1DCC1FB854BC4AC1D67F663950C885274F82106_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnCanClaim_Invoke_mB1DCC1FB854BC4AC1D67F663950C885274F82106_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCanClaim_Invoke_mB1DCC1FB854BC4AC1D67F663950C885274F82106_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnCanClaim_Invoke_mB1DCC1FB854BC4AC1D67F663950C885274F82106_Multicast;
}
// System.Void NiobiumStudios.TimedRewards/OnCanClaim::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCanClaim_Invoke_mB1DCC1FB854BC4AC1D67F663950C885274F82106 (OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NiobiumStudios.TimedRewards/OnCanClaim::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCanClaim_BeginInvoke_m2347335F647A1FF0514EE83AF84F444113FED814 (OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void NiobiumStudios.TimedRewards/OnCanClaim::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCanClaim_EndInvoke_m4A1525FECEBE32BBCBC90C1CD862F6C88DC705E2 (OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void OnClaimPrize_Invoke_m6E8296E663129E650C028F163E5A8B05A0025E41_Multicast(OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8* __this, int32_t ___index0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8* currentDelegate = reinterpret_cast<OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___index0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnClaimPrize_Invoke_m6E8296E663129E650C028F163E5A8B05A0025E41_Open(OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8* __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___index0, method);
}
void OnClaimPrize_Invoke_m6E8296E663129E650C028F163E5A8B05A0025E41_OpenStaticInvoker(OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8* __this, int32_t ___index0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___index0);
}
void OnClaimPrize_Invoke_m6E8296E663129E650C028F163E5A8B05A0025E41_ClosedStaticInvoker(OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8* __this, int32_t ___index0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___index0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8 (OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8* __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void NiobiumStudios.TimedRewards/OnClaimPrize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClaimPrize__ctor_m55BBA70B27D0B70734720CC26A0E94F8804BDCD3 (OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&OnClaimPrize_Invoke_m6E8296E663129E650C028F163E5A8B05A0025E41_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnClaimPrize_Invoke_m6E8296E663129E650C028F163E5A8B05A0025E41_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnClaimPrize_Invoke_m6E8296E663129E650C028F163E5A8B05A0025E41_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnClaimPrize_Invoke_m6E8296E663129E650C028F163E5A8B05A0025E41_Multicast;
}
// System.Void NiobiumStudios.TimedRewards/OnClaimPrize::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClaimPrize_Invoke_m6E8296E663129E650C028F163E5A8B05A0025E41 (OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___index0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NiobiumStudios.TimedRewards/OnClaimPrize::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnClaimPrize_BeginInvoke_mA6BE37E7BA639A470884F94B305F715CEE32082F (OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8* __this, int32_t ___index0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___index0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NiobiumStudios.TimedRewards/OnClaimPrize::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClaimPrize_EndInvoke_mE1DC27736EA12B18B30A0B8847839A1D85BFBD2F (OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void NiobiumStudios.TimedRewards/<InitializeTimer>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeTimerU3Ed__13__ctor_m8CCF0247CE77125086F261EBB74C1A80BA4DC685 (U3CInitializeTimerU3Ed__13_t37EF85F2FC4CB68BC18DA87BFCF67F259B5CAFB3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void NiobiumStudios.TimedRewards/<InitializeTimer>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeTimerU3Ed__13_System_IDisposable_Dispose_mC4FE8BCDF307EB90CEC272A67ADB4C9A19C55D9F (U3CInitializeTimerU3Ed__13_t37EF85F2FC4CB68BC18DA87BFCF67F259B5CAFB3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean NiobiumStudios.TimedRewards/<InitializeTimer>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInitializeTimerU3Ed__13_MoveNext_m268C1992E7309FF16D6B9F06498CF9E4B1713697 (U3CInitializeTimerU3Ed__13_t37EF85F2FC4CB68BC18DA87BFCF67F259B5CAFB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsCore_1_InitializeDate_m77EA5C12E72249F8BA70FF4B55D3DBEEEB9B0163_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(base.InitializeDate());
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_4 = V_1;
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = DailyRewardsCore_1_InitializeDate_m77EA5C12E72249F8BA70FF4B55D3DBEEEB9B0163(L_5, DailyRewardsCore_1_InitializeDate_m77EA5C12E72249F8BA70FF4B55D3DBEEEB9B0163_RuntimeMethod_var);
		NullCheck(L_4);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_4, L_6, NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (base.isErrorConnect)
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = ((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)L_8)->___isErrorConnect_11;
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		// if(onInitialize!=null)
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_10 = V_1;
		NullCheck(L_10);
		OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D* L_11 = ((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)L_10)->___onInitialize_14;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		// onInitialize(true, base.errorMessage);
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_12 = V_1;
		NullCheck(L_12);
		OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D* L_13 = ((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)L_12)->___onInitialize_14;
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15 = ((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)L_14)->___errorMessage_10;
		NullCheck(L_13);
		OnInitialize_Invoke_mD09C41ACEF6B0D944D2B2A41CF8B76829458E979_inline(L_13, (bool)1, L_15, NULL);
		goto IL_0089;
	}

IL_0064:
	{
		// LoadTimerData();
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_16 = V_1;
		NullCheck(L_16);
		TimedRewards_LoadTimerData_mDE95441321CA31B0DE6F13A68E1992C6E30DBE23(L_16, NULL);
		// if(onInitialize!=null)
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_17 = V_1;
		NullCheck(L_17);
		OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D* L_18 = ((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)L_17)->___onInitialize_14;
		if (!L_18)
		{
			goto IL_0083;
		}
	}
	{
		// onInitialize();
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_19 = V_1;
		NullCheck(L_19);
		OnInitialize_t310340DD9B0FC2805258F1D7C2F4D2C01CF1BE9D* L_20 = ((DailyRewardsCore_1_t132CE96FD92E7DDF335EE3B4F53C11170FEA019A*)L_19)->___onInitialize_14;
		NullCheck(L_20);
		OnInitialize_Invoke_mD09C41ACEF6B0D944D2B2A41CF8B76829458E979_inline(L_20, (bool)0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_0083:
	{
		// CheckCanClaim();
		TimedRewards_tDEAFF6E87A866767F8DD2FFEC6A18FD1D5F49959* L_21 = V_1;
		NullCheck(L_21);
		TimedRewards_CheckCanClaim_mEE7BA3D31AA32417FEE948E2AA3C6E291E8B88A2(L_21, NULL);
	}

IL_0089:
	{
		// }
		return (bool)0;
	}
}
// System.Object NiobiumStudios.TimedRewards/<InitializeTimer>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInitializeTimerU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1FFECB5961A19797AC33E7FC4C06699065B379AB (U3CInitializeTimerU3Ed__13_t37EF85F2FC4CB68BC18DA87BFCF67F259B5CAFB3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void NiobiumStudios.TimedRewards/<InitializeTimer>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeTimerU3Ed__13_System_Collections_IEnumerator_Reset_mA7A508F2DE61C1CA8CC1F8216F7107F2E47560CB (U3CInitializeTimerU3Ed__13_t37EF85F2FC4CB68BC18DA87BFCF67F259B5CAFB3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeTimerU3Ed__13_System_Collections_IEnumerator_Reset_mA7A508F2DE61C1CA8CC1F8216F7107F2E47560CB_RuntimeMethod_var)));
	}
}
// System.Object NiobiumStudios.TimedRewards/<InitializeTimer>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInitializeTimerU3Ed__13_System_Collections_IEnumerator_get_Current_m071A245432FA0230F069ED6DF7D12B10C23B32AE (U3CInitializeTimerU3Ed__13_t37EF85F2FC4CB68BC18DA87BFCF67F259B5CAFB3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void NiobiumStudios.WorldClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldClock__ctor_m926AF202749C6B58711BA18158D0E6CBFFE8E307 (WorldClock_t745B9EBFD47BE3C503F538E406361FCADABF5FCE* __this, const RuntimeMethod* method) 
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
// System.Collections.IEnumerator NiobiumStudios.WorldClockBuilder::InitializeWorldClock(System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorldClockBuilder_InitializeWorldClock_m0EA0A13B30719B06F6F4DAEF3BA3AD4540C5C516 (String_t* ___worldClockUrl0, int32_t ___maxRetries1, String_t* ___worldClockFMT2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC* L_0 = (U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC*)il2cpp_codegen_object_new(U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeWorldClockU3Ed__6__ctor_m7B02BD12E2934A7D2D7B298ADBB0737E95A559F5(L_0, 0, NULL);
		U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC* L_1 = L_0;
		String_t* L_2 = ___worldClockUrl0;
		NullCheck(L_1);
		L_1->___worldClockUrl_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___worldClockUrl_2), (void*)L_2);
		U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC* L_3 = L_1;
		int32_t L_4 = ___maxRetries1;
		NullCheck(L_3);
		L_3->___maxRetries_3 = L_4;
		U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC* L_5 = L_3;
		String_t* L_6 = ___worldClockFMT2;
		NullCheck(L_5);
		L_5->___worldClockFMT_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___worldClockFMT_4), (void*)L_6);
		return L_5;
	}
}
// System.Void NiobiumStudios.WorldClockBuilder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldClockBuilder__cctor_m49FC1FD58497B0569732D72B05366B3E82CAFA1B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string errorMessage = String.Empty;              // Failed error message
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___errorMessage_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___errorMessage_0), (void*)L_0);
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
// System.Void NiobiumStudios.WorldClockBuilder/<InitializeWorldClock>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeWorldClockU3Ed__6__ctor_m7B02BD12E2934A7D2D7B298ADBB0737E95A559F5 (U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void NiobiumStudios.WorldClockBuilder/<InitializeWorldClock>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeWorldClockU3Ed__6_System_IDisposable_Dispose_mD3346496DDFEAE83CA3C91734268547C675DD404 (U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean NiobiumStudios.WorldClockBuilder/<InitializeWorldClock>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInitializeWorldClockU3Ed__6_MoveNext_mAB3C8485A112B12F54A8437587DA241105113876 (U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisWorldClock_t745B9EBFD47BE3C503F538E406361FCADABF5FCE_m5DB02E492550307362DC05060D4698A53C58DD05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24E561C2505A7DA9363A848697905B0AA7EACCCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C7116151993827DC4B89EF463D33C783422FFB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E0401D3CF4F5EA11863434ADA52EFFA4D1A9457);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB166334AF780C03BBA5A96D8477C6DB6716E2CE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// currentState = State.Initializing;
		il2cpp_codegen_runtime_class_init_inline(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var);
		((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___currentState_4 = 1;
		// string result = String.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___U3CresultU3E5__2_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__2_5), (void*)L_3);
		goto IL_00c7;
	}

IL_002d:
	{
		// WWW www = new WWW(worldClockUrl);
		String_t* L_4 = __this->___worldClockUrl_2;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_5 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)il2cpp_codegen_object_new(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D(L_5, L_4, NULL);
		__this->___U3CwwwU3E5__3_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__3_6), (void*)L_5);
		goto IL_0057;
	}

IL_0040:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0050:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0057:
	{
		// while (!www.isDone)
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_6 = __this->___U3CwwwU3E5__3_6;
		NullCheck(L_6);
		bool L_7;
		L_7 = WWW_get_isDone_m7E88B666AD0E3903757043813B2811BBFCCCA52E(L_6, NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		// if (!string.IsNullOrEmpty(www.error))
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_8 = __this->___U3CwwwU3E5__3_6;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = WWW_get_error_m6B2E4F6DB8ECC8217A112EC62AAA1D5E71AA1C93(L_8, NULL);
		bool L_10;
		L_10 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_9, NULL);
		if (L_10)
		{
			goto IL_00ad;
		}
	}
	{
		// connectrionRetries++;
		il2cpp_codegen_runtime_class_init_inline(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var);
		int32_t L_11 = ((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___connectrionRetries_1;
		((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___connectrionRetries_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// Debug.LogError("Error Loading World Clock. Retrying connection " + connectrionRetries);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___connectrionRetries_1), NULL);
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral2C7116151993827DC4B89EF463D33C783422FFB0, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_13, NULL);
		// errorMessage = www.error;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_14 = __this->___U3CwwwU3E5__3_6;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = WWW_get_error_m6B2E4F6DB8ECC8217A112EC62AAA1D5E71AA1C93(L_14, NULL);
		((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___errorMessage_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___errorMessage_0), (void*)L_15);
		goto IL_00c0;
	}

IL_00ad:
	{
		// result = www.text;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_16 = __this->___U3CwwwU3E5__3_6;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = WWW_get_text_m95F7CAAC33FD0BAB9B535E3AEAFDA36B81B3EC4F(L_16, NULL);
		__this->___U3CresultU3E5__2_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__2_5), (void*)L_17);
		// break;
		goto IL_00d7;
	}

IL_00c0:
	{
		// }
		__this->___U3CwwwU3E5__3_6 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__3_6), (void*)(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)NULL);
	}

IL_00c7:
	{
		// while(connectrionRetries < maxRetries)
		il2cpp_codegen_runtime_class_init_inline(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var);
		int32_t L_18 = ((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___connectrionRetries_1;
		int32_t L_19 = __this->___maxRetries_3;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_002d;
		}
	}

IL_00d7:
	{
		// if(!string.IsNullOrEmpty(result))
		String_t* L_20 = __this->___U3CresultU3E5__2_5;
		bool L_21;
		L_21 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_20, NULL);
		if (L_21)
		{
			goto IL_01c4;
		}
	}
	{
		// var clockJson = result;
		String_t* L_22 = __this->___U3CresultU3E5__2_5;
		// var worldClock = JsonUtility.FromJson<WorldClock>(clockJson);
		WorldClock_t745B9EBFD47BE3C503F538E406361FCADABF5FCE* L_23;
		L_23 = JsonUtility_FromJson_TisWorldClock_t745B9EBFD47BE3C503F538E406361FCADABF5FCE_m5DB02E492550307362DC05060D4698A53C58DD05(L_22, JsonUtility_FromJson_TisWorldClock_t745B9EBFD47BE3C503F538E406361FCADABF5FCE_m5DB02E492550307362DC05060D4698A53C58DD05_RuntimeMethod_var);
		// instance = worldClock;
		WorldClock_t745B9EBFD47BE3C503F538E406361FCADABF5FCE* L_24 = L_23;
		il2cpp_codegen_runtime_class_init_inline(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var);
		((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___instance_2 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___instance_2), (void*)L_24);
		// var dateTimeStr = worldClock.currentDateTime;
		NullCheck(L_24);
		String_t* L_25 = L_24->___currentDateTime_0;
		// worldClockDate = DateTime.ParseExact(dateTimeStr, worldClockFMT, CultureInfo.InvariantCulture);
		String_t* L_26 = __this->___worldClockFMT_4;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_27;
		L_27 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_28;
		L_28 = DateTime_ParseExact_m19BB81A11B239C7CE5781ACF7B854A8A7F8BE9D3(L_25, L_26, L_27, NULL);
		((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___worldClockDate_3 = L_28;
		// worldClockDate = worldClockDate.AddSeconds(DateTime.Now.Second);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_29;
		L_29 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		V_2 = L_29;
		int32_t L_30;
		L_30 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&V_2), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_31;
		L_31 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___worldClockDate_3), ((double)L_30), NULL);
		((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___worldClockDate_3 = L_31;
		// var time = string.Format("{0:D4}/{1:D2}/{2:D2} {3:D2}:{4:D2}:{5:D2}", worldClockDate.Year, worldClockDate.Month, worldClockDate.Day, worldClockDate.Hour, worldClockDate.Minute, worldClockDate.Second);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_32;
		int32_t L_34;
		L_34 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138((&((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___worldClockDate_3), NULL);
		int32_t L_35 = L_34;
		RuntimeObject* L_36 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_36);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_33;
		int32_t L_38;
		L_38 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2((&((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___worldClockDate_3), NULL);
		int32_t L_39 = L_38;
		RuntimeObject* L_40 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_40);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_37;
		int32_t L_42;
		L_42 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28((&((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___worldClockDate_3), NULL);
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_44);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = L_41;
		int32_t L_46;
		L_46 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___worldClockDate_3), NULL);
		int32_t L_47 = L_46;
		RuntimeObject* L_48 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_48);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_48);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = L_45;
		int32_t L_50;
		L_50 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___worldClockDate_3), NULL);
		int32_t L_51 = L_50;
		RuntimeObject* L_52 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_51);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_52);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_52);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53 = L_49;
		int32_t L_54;
		L_54 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___worldClockDate_3), NULL);
		int32_t L_55 = L_54;
		RuntimeObject* L_56 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_55);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_56);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_56);
		String_t* L_57;
		L_57 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral24E561C2505A7DA9363A848697905B0AA7EACCCF, L_53, NULL);
		V_1 = L_57;
		// Debug.Log("World Clock Time: " + time);
		String_t* L_58 = V_1;
		String_t* L_59;
		L_59 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralCB166334AF780C03BBA5A96D8477C6DB6716E2CE, L_58, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_59, NULL);
		// currentState = State.Initialized;
		((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___currentState_4 = 2;
		goto IL_01de;
	}

IL_01c4:
	{
		// Debug.LogError("Error Loading World Clock:" + errorMessage);
		il2cpp_codegen_runtime_class_init_inline(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var);
		String_t* L_60 = ((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___errorMessage_0;
		String_t* L_61;
		L_61 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral9E0401D3CF4F5EA11863434ADA52EFFA4D1A9457, L_60, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_61, NULL);
		// currentState = State.FailedToInitialize;
		((WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_StaticFields*)il2cpp_codegen_static_fields_for(WorldClockBuilder_t29B0412D7F161AB34879E4535F63BA2CE429FDDC_il2cpp_TypeInfo_var))->___currentState_4 = 3;
	}

IL_01de:
	{
		// }
		return (bool)0;
	}
}
// System.Object NiobiumStudios.WorldClockBuilder/<InitializeWorldClock>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInitializeWorldClockU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m668AF835331358DDE36C742BFFF2A4CF122A7E22 (U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void NiobiumStudios.WorldClockBuilder/<InitializeWorldClock>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeWorldClockU3Ed__6_System_Collections_IEnumerator_Reset_m7A75E57F5B8C2A68096C4CFB951360896E5B1401 (U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeWorldClockU3Ed__6_System_Collections_IEnumerator_Reset_m7A75E57F5B8C2A68096C4CFB951360896E5B1401_RuntimeMethod_var)));
	}
}
// System.Object NiobiumStudios.WorldClockBuilder/<InitializeWorldClock>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInitializeWorldClockU3Ed__6_System_Collections_IEnumerator_get_Current_m38235607A20F7F59353B6FBAF8F7F6A49450444F (U3CInitializeWorldClockU3Ed__6_t8773DD4161AF333C6B70CA46652D38EEF341FCEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_inline (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___day0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnCanClaim_Invoke_mB1DCC1FB854BC4AC1D67F663950C885274F82106_inline (OnCanClaim_tCDE39A0FE8D34FC953ACD9D336495DF1A29C5A95* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnClaimPrize_Invoke_m6E8296E663129E650C028F163E5A8B05A0025E41_inline (OnClaimPrize_tD77001B62AA8F3C6C04525D0C63F11E17928A6B8* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___index0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnInitialize_Invoke_mAB0BD6F84CC952ED435B489A6E143F0FA7DBC742_gshared_inline (OnInitialize_t435BD48416A8E1B9B5CDB30812874C1EDBEF4912* __this, bool ___error0, String_t* ___errorMessage1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___error0, ___errorMessage1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
