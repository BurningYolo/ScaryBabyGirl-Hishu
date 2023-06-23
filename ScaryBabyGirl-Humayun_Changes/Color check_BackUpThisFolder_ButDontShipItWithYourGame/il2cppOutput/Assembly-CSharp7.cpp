#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// _2dxFX_DesintegrationFX
struct _2dxFX_DesintegrationFX_t623BC235CE2F4F1765D00B281B55B3F8BC905F18;
// _2dxFX_DestroyedFX
struct _2dxFX_DestroyedFX_t9348A584FB22183109E7F04E28E4D283A58732A6;
// _2dxFX_Distortion
struct _2dxFX_Distortion_t367EC0A276FDC00608131CC5350D3EAE197DDAD5;
// _2dxFX_Distortion_Additive
struct _2dxFX_Distortion_Additive_tE4E718EB0CF16C2CEE1C89C2CD4B651733DEB6AF;
// _2dxFX_EdgeColor
struct _2dxFX_EdgeColor_t4B90DE42AF25C27981A4C996D5202426A3BAB421;
// _2dxFX_EnergyBar
struct _2dxFX_EnergyBar_t0B4C9EA17A011ED78CC558264BDDE49CDB14F864;
// _2dxFX_Fire
struct _2dxFX_Fire_t084E152BA43D01AFC8E7BE02D65EB97F5901FDD0;
// _2dxFX_FireAdditive
struct _2dxFX_FireAdditive_t21E701631EF606D28D542026207D924E12DD6721;
// _2dxFX_Flame
struct _2dxFX_Flame_t14BDBA9767DE28C6F3D4D6CB3B4CE097379810FA;
// _2dxFX_FlameAdditive
struct _2dxFX_FlameAdditive_t9E5117F19945E7DB198384CA46F07B88001DEF40;
// _2dxFX_Frozen
struct _2dxFX_Frozen_t3DB1A04D8FFCC9E572916C785B40DE5879EAE222;
// _2dxFX_Ghost
struct _2dxFX_Ghost_t26BD0413C9E00EC8834C8B267F5371824EE19FDA;
// _2dxFX_GoldFX
struct _2dxFX_GoldFX_t78DED9E7706AAC502B94114EB61ACC5A3200A60D;
// _2dxFX_GoldenFX
struct _2dxFX_GoldenFX_t21206D984DE5FBEADB1C14CC16127C91C026E1EC;
// _2dxFX_GrassFX
struct _2dxFX_GrassFX_t367E2A291CFD851B96C000F765205953B30A252A;
// _2dxFX_GrassMultiFX
struct _2dxFX_GrassMultiFX_tF4B2168A4F821268CFC0A463338A9D854EAC03E6;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A9F42F970EF6CFCBE324993E0420EB1FB0FDFC4;
IL2CPP_EXTERN_C String_t* _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3;
IL2CPP_EXTERN_C String_t* _stringLiteral1402AC68467C6C648E65DC462376B1547FFED9A9;
IL2CPP_EXTERN_C String_t* _stringLiteral1C26F33C0DE4C81DCEA6058BFCECF194E6A820D1;
IL2CPP_EXTERN_C String_t* _stringLiteral1D353D53F4C8F559C72530CD77E0A1517FA9447B;
IL2CPP_EXTERN_C String_t* _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E;
IL2CPP_EXTERN_C String_t* _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7;
IL2CPP_EXTERN_C String_t* _stringLiteral240E009D42283D9AF1F4D5CA564205C5255A9960;
IL2CPP_EXTERN_C String_t* _stringLiteral2B320216F6F6FE23325BCE983AAB3CE5DF975015;
IL2CPP_EXTERN_C String_t* _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266;
IL2CPP_EXTERN_C String_t* _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59;
IL2CPP_EXTERN_C String_t* _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716;
IL2CPP_EXTERN_C String_t* _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75;
IL2CPP_EXTERN_C String_t* _stringLiteral455192F2C6C0DDD922218931AB63F3F8AB307544;
IL2CPP_EXTERN_C String_t* _stringLiteral45DEBD614E899C52D96DFDEBAE0ED46ACB47B279;
IL2CPP_EXTERN_C String_t* _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25;
IL2CPP_EXTERN_C String_t* _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E;
IL2CPP_EXTERN_C String_t* _stringLiteral5073C2BBD522115CC0FA5C1944383E429DF2CB4D;
IL2CPP_EXTERN_C String_t* _stringLiteral536CE248DF0F8851543CF40C1896A8A6A821B100;
IL2CPP_EXTERN_C String_t* _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227;
IL2CPP_EXTERN_C String_t* _stringLiteral55C14E004F846FB099A44A6870DA7B59B01FF067;
IL2CPP_EXTERN_C String_t* _stringLiteral58AAFF72F520DA2B9EE6AA369289D02EDB353A4F;
IL2CPP_EXTERN_C String_t* _stringLiteral58EE991C0D62941158D2C3989C441E4E000D65E0;
IL2CPP_EXTERN_C String_t* _stringLiteral69C9230FB0C7F891F4264EBA12C85C9C1E073237;
IL2CPP_EXTERN_C String_t* _stringLiteral6BC8D56751E37C6B4A11D742870D42E79C2E9F06;
IL2CPP_EXTERN_C String_t* _stringLiteral725B75E738B55ED8EF009980C3AC6820D195BB18;
IL2CPP_EXTERN_C String_t* _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1;
IL2CPP_EXTERN_C String_t* _stringLiteral7B2E394C745A9FA989279137456A6B330EDE6E47;
IL2CPP_EXTERN_C String_t* _stringLiteral7BE42EC7BAF495A63C4A39C9EC2E5F176D0A7A7B;
IL2CPP_EXTERN_C String_t* _stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1;
IL2CPP_EXTERN_C String_t* _stringLiteral98EFB4DB378ABF6DB5740960B24CF28A72A196A8;
IL2CPP_EXTERN_C String_t* _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117;
IL2CPP_EXTERN_C String_t* _stringLiteral9EEC191F53AD169AC62F0A08F647DA34EB1911A7;
IL2CPP_EXTERN_C String_t* _stringLiteralAEAB42CB5370ED3CC12890AC1A47274050AC81B7;
IL2CPP_EXTERN_C String_t* _stringLiteralBB67ABAA43E9F8B57A1F3517C99CA36AC4A723CA;
IL2CPP_EXTERN_C String_t* _stringLiteralBBF46CBBBD7F63FB47A67AE4772CAA081A121020;
IL2CPP_EXTERN_C String_t* _stringLiteralC20D0119BB22B049E24C4FB66EB326DFC6460899;
IL2CPP_EXTERN_C String_t* _stringLiteralCA458A82D0C42C18B4FFBEFE374B0717C1444A7E;
IL2CPP_EXTERN_C String_t* _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527;
IL2CPP_EXTERN_C String_t* _stringLiteralCB49BBDAA036916B45BD1A2A1FA6A05E6CC500E3;
IL2CPP_EXTERN_C String_t* _stringLiteralD040CD9DBAE11BF08B05AF12EF4A88AF1D8A39FA;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A90695775E1E1455F2A9C11C74D424DD90EDB4;
IL2CPP_EXTERN_C String_t* _stringLiteralD678F4CA88B311E84935640E1244CC2707625352;
IL2CPP_EXTERN_C String_t* _stringLiteralDA072EB754C30E9D13AA23AA4AB225FECC2493CD;
IL2CPP_EXTERN_C String_t* _stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1;
IL2CPP_EXTERN_C String_t* _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A;
IL2CPP_EXTERN_C String_t* _stringLiteralFF8E1F5EF1340BB4DE17EAA7636D1021F91E9C17;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;

struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

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

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
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

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// _2dxFX_DesintegrationFX
struct _2dxFX_DesintegrationFX_t623BC235CE2F4F1765D00B281B55B3F8BC905F18  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_DesintegrationFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_DesintegrationFX::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_DesintegrationFX::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_DesintegrationFX::_Alpha
	float ____Alpha_7;
	// UnityEngine.Color _2dxFX_DesintegrationFX::_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____Color_8;
	// System.Single _2dxFX_DesintegrationFX::Seed
	float ___Seed_9;
	// System.Single _2dxFX_DesintegrationFX::Desintegration
	float ___Desintegration_10;
	// System.Int32 _2dxFX_DesintegrationFX::ShaderChange
	int32_t ___ShaderChange_11;
	// UnityEngine.Material _2dxFX_DesintegrationFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_12;
	// UnityEngine.Material _2dxFX_DesintegrationFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_13;
	// UnityEngine.UI.Image _2dxFX_DesintegrationFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_14;
	// UnityEngine.SpriteRenderer _2dxFX_DesintegrationFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_15;
	// System.Boolean _2dxFX_DesintegrationFX::ActiveUpdate
	bool ___ActiveUpdate_16;
};

// _2dxFX_DestroyedFX
struct _2dxFX_DestroyedFX_t9348A584FB22183109E7F04E28E4D283A58732A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_DestroyedFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_DestroyedFX::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_DestroyedFX::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_DestroyedFX::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_DestroyedFX::Seed
	float ___Seed_8;
	// System.Single _2dxFX_DestroyedFX::Destroyed
	float ___Destroyed_9;
	// System.Int32 _2dxFX_DestroyedFX::ShaderChange
	int32_t ___ShaderChange_10;
	// UnityEngine.Material _2dxFX_DestroyedFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_11;
	// UnityEngine.Material _2dxFX_DestroyedFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_12;
	// UnityEngine.UI.Image _2dxFX_DestroyedFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_13;
	// UnityEngine.SpriteRenderer _2dxFX_DestroyedFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_14;
	// System.Boolean _2dxFX_DestroyedFX::ActiveUpdate
	bool ___ActiveUpdate_15;
};

// _2dxFX_Distortion
struct _2dxFX_Distortion_t367EC0A276FDC00608131CC5350D3EAE197DDAD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_Distortion::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_Distortion::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_Distortion::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_Distortion::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_Distortion::_OffsetX
	float ____OffsetX_8;
	// System.Single _2dxFX_Distortion::_OffsetY
	float ____OffsetY_9;
	// System.Single _2dxFX_Distortion::_DistanceX
	float ____DistanceX_10;
	// System.Single _2dxFX_Distortion::_DistanceY
	float ____DistanceY_11;
	// System.Single _2dxFX_Distortion::_WaveTimeX
	float ____WaveTimeX_12;
	// System.Single _2dxFX_Distortion::_WaveTimeY
	float ____WaveTimeY_13;
	// System.Boolean _2dxFX_Distortion::AutoPlayWaveX
	bool ___AutoPlayWaveX_14;
	// System.Single _2dxFX_Distortion::AutoPlaySpeedX
	float ___AutoPlaySpeedX_15;
	// System.Boolean _2dxFX_Distortion::AutoPlayWaveY
	bool ___AutoPlayWaveY_16;
	// System.Single _2dxFX_Distortion::AutoPlaySpeedY
	float ___AutoPlaySpeedY_17;
	// System.Boolean _2dxFX_Distortion::AutoRandom
	bool ___AutoRandom_18;
	// System.Single _2dxFX_Distortion::AutoRandomRange
	float ___AutoRandomRange_19;
	// System.Int32 _2dxFX_Distortion::ShaderChange
	int32_t ___ShaderChange_20;
	// UnityEngine.Material _2dxFX_Distortion::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_21;
	// UnityEngine.Material _2dxFX_Distortion::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_22;
	// UnityEngine.UI.Image _2dxFX_Distortion::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_23;
	// UnityEngine.SpriteRenderer _2dxFX_Distortion::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_24;
	// System.Boolean _2dxFX_Distortion::ActiveUpdate
	bool ___ActiveUpdate_25;
};

// _2dxFX_Distortion_Additive
struct _2dxFX_Distortion_Additive_tE4E718EB0CF16C2CEE1C89C2CD4B651733DEB6AF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_Distortion_Additive::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_Distortion_Additive::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_Distortion_Additive::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_Distortion_Additive::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_Distortion_Additive::_OffsetX
	float ____OffsetX_8;
	// System.Single _2dxFX_Distortion_Additive::_OffsetY
	float ____OffsetY_9;
	// System.Single _2dxFX_Distortion_Additive::_DistanceX
	float ____DistanceX_10;
	// System.Single _2dxFX_Distortion_Additive::_DistanceY
	float ____DistanceY_11;
	// System.Single _2dxFX_Distortion_Additive::_WaveTimeX
	float ____WaveTimeX_12;
	// System.Single _2dxFX_Distortion_Additive::_WaveTimeY
	float ____WaveTimeY_13;
	// System.Boolean _2dxFX_Distortion_Additive::AutoPlayWaveX
	bool ___AutoPlayWaveX_14;
	// System.Single _2dxFX_Distortion_Additive::AutoPlaySpeedX
	float ___AutoPlaySpeedX_15;
	// System.Boolean _2dxFX_Distortion_Additive::AutoPlayWaveY
	bool ___AutoPlayWaveY_16;
	// System.Single _2dxFX_Distortion_Additive::AutoPlaySpeedY
	float ___AutoPlaySpeedY_17;
	// System.Boolean _2dxFX_Distortion_Additive::AutoRandom
	bool ___AutoRandom_18;
	// System.Single _2dxFX_Distortion_Additive::AutoRandomRange
	float ___AutoRandomRange_19;
	// System.Int32 _2dxFX_Distortion_Additive::ShaderChange
	int32_t ___ShaderChange_20;
	// UnityEngine.Material _2dxFX_Distortion_Additive::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_21;
	// UnityEngine.Material _2dxFX_Distortion_Additive::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_22;
	// UnityEngine.UI.Image _2dxFX_Distortion_Additive::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_23;
	// UnityEngine.SpriteRenderer _2dxFX_Distortion_Additive::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_24;
	// System.Boolean _2dxFX_Distortion_Additive::ActiveUpdate
	bool ___ActiveUpdate_25;
};

// _2dxFX_EdgeColor
struct _2dxFX_EdgeColor_t4B90DE42AF25C27981A4C996D5202426A3BAB421  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_EdgeColor::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_EdgeColor::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_EdgeColor::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_EdgeColor::_Alpha
	float ____Alpha_7;
	// UnityEngine.Color _2dxFX_EdgeColor::_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____Color_8;
	// System.Int32 _2dxFX_EdgeColor::ShaderChange
	int32_t ___ShaderChange_9;
	// UnityEngine.Material _2dxFX_EdgeColor::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_10;
	// UnityEngine.Material _2dxFX_EdgeColor::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_11;
	// UnityEngine.UI.Image _2dxFX_EdgeColor::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_12;
	// UnityEngine.SpriteRenderer _2dxFX_EdgeColor::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_13;
	// System.Boolean _2dxFX_EdgeColor::ActiveUpdate
	bool ___ActiveUpdate_14;
};

// _2dxFX_EnergyBar
struct _2dxFX_EnergyBar_t0B4C9EA17A011ED78CC558264BDDE49CDB14F864  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_EnergyBar::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_EnergyBar::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_EnergyBar::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_EnergyBar::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_EnergyBar::BarProgress
	float ___BarProgress_8;
	// System.Single _2dxFX_EnergyBar::_Value2
	float ____Value2_9;
	// System.Single _2dxFX_EnergyBar::_Value3
	float ____Value3_10;
	// System.Single _2dxFX_EnergyBar::_Value4
	float ____Value4_11;
	// System.Single _2dxFX_EnergyBar::_Value5
	float ____Value5_12;
	// System.Int32 _2dxFX_EnergyBar::ShaderChange
	int32_t ___ShaderChange_13;
	// UnityEngine.Material _2dxFX_EnergyBar::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_14;
	// UnityEngine.Material _2dxFX_EnergyBar::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_15;
	// UnityEngine.UI.Image _2dxFX_EnergyBar::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_16;
	// UnityEngine.SpriteRenderer _2dxFX_EnergyBar::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_17;
	// System.Boolean _2dxFX_EnergyBar::ActiveUpdate
	bool ___ActiveUpdate_18;
};

// _2dxFX_Fire
struct _2dxFX_Fire_t084E152BA43D01AFC8E7BE02D65EB97F5901FDD0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_Fire::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_Fire::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_Fire::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_Fire::_Alpha
	float ____Alpha_7;
	// UnityEngine.Texture2D _2dxFX_Fire::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_8;
	// System.Single _2dxFX_Fire::_Value1
	float ____Value1_9;
	// System.Single _2dxFX_Fire::_Value2
	float ____Value2_10;
	// System.Single _2dxFX_Fire::_Value3
	float ____Value3_11;
	// System.Single _2dxFX_Fire::_Value4
	float ____Value4_12;
	// System.Boolean _2dxFX_Fire::_AutoScrollX
	bool ____AutoScrollX_13;
	// System.Single _2dxFX_Fire::_AutoScrollSpeedX
	float ____AutoScrollSpeedX_14;
	// System.Boolean _2dxFX_Fire::_AutoScrollY
	bool ____AutoScrollY_15;
	// System.Single _2dxFX_Fire::_AutoScrollSpeedY
	float ____AutoScrollSpeedY_16;
	// System.Single _2dxFX_Fire::_AutoScrollCountX
	float ____AutoScrollCountX_17;
	// System.Single _2dxFX_Fire::_AutoScrollCountY
	float ____AutoScrollCountY_18;
	// System.Int32 _2dxFX_Fire::ShaderChange
	int32_t ___ShaderChange_19;
	// UnityEngine.Material _2dxFX_Fire::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_20;
	// UnityEngine.Material _2dxFX_Fire::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_21;
	// UnityEngine.UI.Image _2dxFX_Fire::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_22;
	// UnityEngine.SpriteRenderer _2dxFX_Fire::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_23;
	// System.Boolean _2dxFX_Fire::ActiveUpdate
	bool ___ActiveUpdate_24;
};

// _2dxFX_FireAdditive
struct _2dxFX_FireAdditive_t21E701631EF606D28D542026207D924E12DD6721  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_FireAdditive::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_FireAdditive::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_FireAdditive::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_FireAdditive::_Alpha
	float ____Alpha_7;
	// UnityEngine.Texture2D _2dxFX_FireAdditive::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_8;
	// System.Single _2dxFX_FireAdditive::_Value1
	float ____Value1_9;
	// System.Single _2dxFX_FireAdditive::_Value2
	float ____Value2_10;
	// System.Single _2dxFX_FireAdditive::_Value3
	float ____Value3_11;
	// System.Single _2dxFX_FireAdditive::_Value4
	float ____Value4_12;
	// System.Boolean _2dxFX_FireAdditive::_AutoScrollX
	bool ____AutoScrollX_13;
	// System.Single _2dxFX_FireAdditive::_AutoScrollSpeedX
	float ____AutoScrollSpeedX_14;
	// System.Boolean _2dxFX_FireAdditive::_AutoScrollY
	bool ____AutoScrollY_15;
	// System.Single _2dxFX_FireAdditive::_AutoScrollSpeedY
	float ____AutoScrollSpeedY_16;
	// System.Single _2dxFX_FireAdditive::_AutoScrollCountX
	float ____AutoScrollCountX_17;
	// System.Single _2dxFX_FireAdditive::_AutoScrollCountY
	float ____AutoScrollCountY_18;
	// System.Int32 _2dxFX_FireAdditive::ShaderChange
	int32_t ___ShaderChange_19;
	// UnityEngine.Material _2dxFX_FireAdditive::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_20;
	// UnityEngine.Material _2dxFX_FireAdditive::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_21;
	// UnityEngine.UI.Image _2dxFX_FireAdditive::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_22;
	// UnityEngine.SpriteRenderer _2dxFX_FireAdditive::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_23;
	// System.Boolean _2dxFX_FireAdditive::ActiveUpdate
	bool ___ActiveUpdate_24;
};

// _2dxFX_Flame
struct _2dxFX_Flame_t14BDBA9767DE28C6F3D4D6CB3B4CE097379810FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_Flame::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_Flame::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_Flame::shader
	String_t* ___shader_6;
	// UnityEngine.Texture2D _2dxFX_Flame::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_7;
	// System.Single _2dxFX_Flame::_Alpha
	float ____Alpha_8;
	// System.Single _2dxFX_Flame::_Speed
	float ____Speed_9;
	// System.Single _2dxFX_Flame::_Intensity
	float ____Intensity_10;
	// System.Int32 _2dxFX_Flame::ShaderChange
	int32_t ___ShaderChange_11;
	// UnityEngine.Material _2dxFX_Flame::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_12;
	// UnityEngine.Material _2dxFX_Flame::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_13;
	// UnityEngine.UI.Image _2dxFX_Flame::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_14;
	// UnityEngine.SpriteRenderer _2dxFX_Flame::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_15;
	// System.Boolean _2dxFX_Flame::ActiveUpdate
	bool ___ActiveUpdate_16;
};

// _2dxFX_FlameAdditive
struct _2dxFX_FlameAdditive_t9E5117F19945E7DB198384CA46F07B88001DEF40  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_FlameAdditive::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_FlameAdditive::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_FlameAdditive::shader
	String_t* ___shader_6;
	// UnityEngine.Texture2D _2dxFX_FlameAdditive::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_7;
	// System.Single _2dxFX_FlameAdditive::_Alpha
	float ____Alpha_8;
	// System.Single _2dxFX_FlameAdditive::_Speed
	float ____Speed_9;
	// System.Single _2dxFX_FlameAdditive::_Intensity
	float ____Intensity_10;
	// System.Int32 _2dxFX_FlameAdditive::ShaderChange
	int32_t ___ShaderChange_11;
	// UnityEngine.Material _2dxFX_FlameAdditive::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_12;
	// UnityEngine.Material _2dxFX_FlameAdditive::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_13;
	// UnityEngine.SpriteRenderer _2dxFX_FlameAdditive::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_14;
	// System.Boolean _2dxFX_FlameAdditive::ActiveUpdate
	bool ___ActiveUpdate_15;
	// UnityEngine.UI.Image _2dxFX_FlameAdditive::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_16;
};

// _2dxFX_Frozen
struct _2dxFX_Frozen_t3DB1A04D8FFCC9E572916C785B40DE5879EAE222  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_Frozen::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_Frozen::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_Frozen::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_Frozen::_Alpha
	float ____Alpha_7;
	// UnityEngine.Texture2D _2dxFX_Frozen::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_8;
	// System.Single _2dxFX_Frozen::_Value1
	float ____Value1_9;
	// System.Single _2dxFX_Frozen::_Value2
	float ____Value2_10;
	// System.Single _2dxFX_Frozen::_Value3
	float ____Value3_11;
	// System.Single _2dxFX_Frozen::_Value4
	float ____Value4_12;
	// System.Boolean _2dxFX_Frozen::_AutoScrollX
	bool ____AutoScrollX_13;
	// System.Single _2dxFX_Frozen::_AutoScrollSpeedX
	float ____AutoScrollSpeedX_14;
	// System.Boolean _2dxFX_Frozen::_AutoScrollY
	bool ____AutoScrollY_15;
	// System.Single _2dxFX_Frozen::_AutoScrollSpeedY
	float ____AutoScrollSpeedY_16;
	// System.Single _2dxFX_Frozen::_AutoScrollCountX
	float ____AutoScrollCountX_17;
	// System.Single _2dxFX_Frozen::_AutoScrollCountY
	float ____AutoScrollCountY_18;
	// System.Int32 _2dxFX_Frozen::ShaderChange
	int32_t ___ShaderChange_19;
	// UnityEngine.Material _2dxFX_Frozen::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_20;
	// UnityEngine.Material _2dxFX_Frozen::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_21;
	// UnityEngine.UI.Image _2dxFX_Frozen::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_22;
	// UnityEngine.SpriteRenderer _2dxFX_Frozen::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_23;
	// System.Boolean _2dxFX_Frozen::ActiveUpdate
	bool ___ActiveUpdate_24;
};

// _2dxFX_Ghost
struct _2dxFX_Ghost_t26BD0413C9E00EC8834C8B267F5371824EE19FDA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_Ghost::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_Ghost::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_Ghost::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_Ghost::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_Ghost::_offset
	float ____offset_8;
	// System.Single _2dxFX_Ghost::_ClipLeft
	float ____ClipLeft_9;
	// System.Single _2dxFX_Ghost::_ClipRight
	float ____ClipRight_10;
	// System.Single _2dxFX_Ghost::_ClipUp
	float ____ClipUp_11;
	// System.Single _2dxFX_Ghost::_ClipDown
	float ____ClipDown_12;
	// System.Int32 _2dxFX_Ghost::ShaderChange
	int32_t ___ShaderChange_13;
	// UnityEngine.Material _2dxFX_Ghost::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_14;
	// UnityEngine.Material _2dxFX_Ghost::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_15;
	// UnityEngine.UI.Image _2dxFX_Ghost::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_16;
	// UnityEngine.SpriteRenderer _2dxFX_Ghost::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_17;
	// System.Boolean _2dxFX_Ghost::ActiveUpdate
	bool ___ActiveUpdate_18;
};

// _2dxFX_GoldFX
struct _2dxFX_GoldFX_t78DED9E7706AAC502B94114EB61ACC5A3200A60D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_GoldFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_GoldFX::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_GoldFX::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_GoldFX::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_GoldFX::Gold
	float ___Gold_8;
	// System.Int32 _2dxFX_GoldFX::ShaderChange
	int32_t ___ShaderChange_9;
	// UnityEngine.Material _2dxFX_GoldFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_10;
	// UnityEngine.Material _2dxFX_GoldFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_11;
	// UnityEngine.UI.Image _2dxFX_GoldFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_12;
	// UnityEngine.SpriteRenderer _2dxFX_GoldFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_13;
	// System.Boolean _2dxFX_GoldFX::ActiveUpdate
	bool ___ActiveUpdate_14;
};

// _2dxFX_GoldenFX
struct _2dxFX_GoldenFX_t21206D984DE5FBEADB1C14CC16127C91C026E1EC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_GoldenFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_GoldenFX::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_GoldenFX::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_GoldenFX::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_GoldenFX::Golden
	float ___Golden_8;
	// System.Int32 _2dxFX_GoldenFX::ShaderChange
	int32_t ___ShaderChange_9;
	// UnityEngine.Material _2dxFX_GoldenFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_10;
	// UnityEngine.Material _2dxFX_GoldenFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_11;
	// UnityEngine.UI.Image _2dxFX_GoldenFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_12;
	// UnityEngine.SpriteRenderer _2dxFX_GoldenFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_13;
	// System.Boolean _2dxFX_GoldenFX::ActiveUpdate
	bool ___ActiveUpdate_14;
};

// _2dxFX_GrassFX
struct _2dxFX_GrassFX_t367E2A291CFD851B96C000F765205953B30A252A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_GrassFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_GrassFX::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_GrassFX::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_GrassFX::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_GrassFX::Heat
	float ___Heat_8;
	// System.Single _2dxFX_GrassFX::Speed
	float ___Speed_9;
	// UnityEngine.AnimationCurve _2dxFX_GrassFX::Wind
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___Wind_10;
	// System.Single _2dxFX_GrassFX::WindTime1
	float ___WindTime1_11;
	// System.Int32 _2dxFX_GrassFX::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_GrassFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_GrassFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_GrassFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_GrassFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_GrassFX::ActiveUpdate
	bool ___ActiveUpdate_17;
};

// _2dxFX_GrassMultiFX
struct _2dxFX_GrassMultiFX_tF4B2168A4F821268CFC0A463338A9D854EAC03E6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_GrassMultiFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_GrassMultiFX::ActiveChange
	bool ___ActiveChange_5;
	// System.String _2dxFX_GrassMultiFX::shader
	String_t* ___shader_6;
	// System.Single _2dxFX_GrassMultiFX::_Alpha
	float ____Alpha_7;
	// System.Single _2dxFX_GrassMultiFX::Heat
	float ___Heat_8;
	// System.Single _2dxFX_GrassMultiFX::Speed
	float ___Speed_9;
	// UnityEngine.AnimationCurve _2dxFX_GrassMultiFX::Wind
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___Wind_10;
	// System.Single _2dxFX_GrassMultiFX::WindTime1
	float ___WindTime1_11;
	// System.Single _2dxFX_GrassMultiFX::WindTime2
	float ___WindTime2_12;
	// System.Single _2dxFX_GrassMultiFX::WindTime3
	float ___WindTime3_13;
	// System.Single _2dxFX_GrassMultiFX::WindTime4
	float ___WindTime4_14;
	// System.Int32 _2dxFX_GrassMultiFX::ShaderChange
	int32_t ___ShaderChange_15;
	// UnityEngine.Material _2dxFX_GrassMultiFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_16;
	// UnityEngine.Material _2dxFX_GrassMultiFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_17;
	// UnityEngine.UI.Image _2dxFX_GrassMultiFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_18;
	// UnityEngine.SpriteRenderer _2dxFX_GrassMultiFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_19;
	// System.Boolean _2dxFX_GrassMultiFX::ActiveUpdate
	bool ___ActiveUpdate_20;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void _2dxFX_DesintegrationFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DesintegrationFX_XUpdate_mADA0E2657F368258B3AED5775D32BB5ED61775AF (_2dxFX_DesintegrationFX_t623BC235CE2F4F1765D00B281B55B3F8BC905F18* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_DestroyedFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DestroyedFX_XUpdate_m510EA11BD775170EDDEA628F449965702F9C1D50 (_2dxFX_DestroyedFX_t9348A584FB22183109E7F04E28E4D283A58732A6* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_Distortion::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_XUpdate_m8F1B4379E44A81FA78BFAD18F9CD9344A6E3398F (_2dxFX_Distortion_t367EC0A276FDC00608131CC5350D3EAE197DDAD5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void _2dxFX_Distortion_Additive::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_Additive_XUpdate_m189702256788A246AE63BF2BD22B8B38620FBEF9 (_2dxFX_Distortion_Additive_tE4E718EB0CF16C2CEE1C89C2CD4B651733DEB6AF* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_EdgeColor::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EdgeColor_XUpdate_m537AE41122D4680A571BAEC9D25EFA7CA2BA937C (_2dxFX_EdgeColor_t4B90DE42AF25C27981A4C996D5202426A3BAB421* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_EnergyBar::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EnergyBar_XUpdate_m729060FEFE49F85C33D23C90B2E061A5C2B30E16 (_2dxFX_EnergyBar_t0B4C9EA17A011ED78CC558264BDDE49CDB14F864* __this, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void _2dxFX_Fire::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Fire_XUpdate_m772F6AFEDCA3FB0AC536764197062143AA6518BA (_2dxFX_Fire_t084E152BA43D01AFC8E7BE02D65EB97F5901FDD0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void _2dxFX_FireAdditive::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FireAdditive_XUpdate_mAC0FA901B28E85EB17EBF1E9AA7939FEEA13C234 (_2dxFX_FireAdditive_t21E701631EF606D28D542026207D924E12DD6721* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_Flame::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Flame_XUpdate_mE4350F57AB98C02A653415E924D916F8B26C3CE9 (_2dxFX_Flame_t14BDBA9767DE28C6F3D4D6CB3B4CE097379810FA* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_FlameAdditive::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FlameAdditive_XUpdate_m4FB4E43C1861843F7EA8D14BD15ED9079E744B2E (_2dxFX_FlameAdditive_t9E5117F19945E7DB198384CA46F07B88001DEF40* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_Frozen::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Frozen_XUpdate_mEB5D841DAB6AA24CD6A7C4D5D265B1822EB248E0 (_2dxFX_Frozen_t3DB1A04D8FFCC9E572916C785B40DE5879EAE222* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_Ghost::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ghost_XUpdate_mE0B94322E5E18678FCA904939F9BEE96D312D9F7 (_2dxFX_Ghost_t26BD0413C9E00EC8834C8B267F5371824EE19FDA* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_GoldenFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_XUpdate_mC065EE01C1B550CA3A7EDF26939608A9BD91C770 (_2dxFX_GoldenFX_t21206D984DE5FBEADB1C14CC16127C91C026E1EC* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_GoldFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldFX_XUpdate_mFE02377BE8E5A2CD976341E1660D40BEB297B6C5 (_2dxFX_GoldFX_t78DED9E7706AAC502B94114EB61ACC5A3200A60D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimationCurve::AddKey(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::set_inTangent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::set_outTangent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void _2dxFX_GrassFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_XUpdate_mA50D1B12B346D004EEBA27117BE5EDB779F53747 (_2dxFX_GrassFX_t367E2A291CFD851B96C000F765205953B30A252A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void _2dxFX_GrassMultiFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_XUpdate_mF0172E2CC1AF375CC4C3EBB77D2FFF63E0D44F85 (_2dxFX_GrassMultiFX_tF4B2168A4F821268CFC0A463338A9D854EAC03E6* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void _2dxFX_DesintegrationFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DesintegrationFX_Awake_mF9262C6DD30B1F793B8CB0882FFD6BDA782E4521 (_2dxFX_DesintegrationFX_t623BC235CE2F4F1765D00B281B55B3F8BC905F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_14), (void*)L_4);
	}

IL_0024:
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_15 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_15), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_DesintegrationFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DesintegrationFX_Start_m66698C5405839A15E2504F23A9FC9F517F596653 (_2dxFX_DesintegrationFX_t623BC235CE2F4F1765D00B281B55B3F8BC905F18* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_11 = 0;
		// XUpdate();
		_2dxFX_DesintegrationFX_XUpdate_mADA0E2657F368258B3AED5775D32BB5ED61775AF(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_DesintegrationFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DesintegrationFX_CallUpdate_mC0C12D8BA70B364D158C20B89CAC6FA070BD7B6C (_2dxFX_DesintegrationFX_t623BC235CE2F4F1765D00B281B55B3F8BC905F18* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_DesintegrationFX_XUpdate_mADA0E2657F368258B3AED5775D32BB5ED61775AF(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_DesintegrationFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DesintegrationFX_Update_m3D77ED502DDE26840190B07A20A553F26F08A287 (_2dxFX_DesintegrationFX_t623BC235CE2F4F1765D00B281B55B3F8BC905F18* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_16;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_DesintegrationFX_XUpdate_mADA0E2657F368258B3AED5775D32BB5ED61775AF(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_DesintegrationFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DesintegrationFX_XUpdate_mADA0E2657F368258B3AED5775D32BB5ED61775AF (_2dxFX_DesintegrationFX_t623BC235CE2F4F1765D00B281B55B3F8BC905F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_14 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_14), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_15 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_15), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_11;
		if (L_14)
		{
			goto IL_0102;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0102;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_11 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ForceMaterial_4;
		NullCheck(L_26);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
	}

IL_00e0:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_28, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		String_t* L_30 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_31;
		L_31 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_30, NULL);
		NullCheck(L_29);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_29, L_31, NULL);
	}

IL_0102:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a1;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_11;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_0138;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_12 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_12), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_12;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_017b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_12;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_019a;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_12;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_11 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_02ad;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_022d;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_7;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Desintegration);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->___Desintegration_10;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_58, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetColor("_ColorX", _Color);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_59 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_59);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60;
		L_60 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_59, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_61 = __this->____Color_8;
		NullCheck(L_60);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_60, _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227, L_61, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Size", Seed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_62 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_62);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_63;
		L_63 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_62, NULL);
		float L_64 = __this->___Seed_9;
		NullCheck(L_63);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_63, _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117, L_64, NULL);
		return;
	}

IL_022d:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_65 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_66;
		L_66 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_65, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_66)
		{
			goto IL_02ad;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_67 = __this->___CanvasImage_14;
		NullCheck(L_67);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_68;
		L_68 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_67);
		float L_69 = __this->____Alpha_7;
		NullCheck(L_68);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_68, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_69)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Desintegration);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_70 = __this->___CanvasImage_14;
		NullCheck(L_70);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71;
		L_71 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_70);
		float L_72 = __this->___Desintegration_10;
		NullCheck(L_71);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_71, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_72, NULL);
		// CanvasImage.material.SetColor("_ColorX", _Color);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_73 = __this->___CanvasImage_14;
		NullCheck(L_73);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74;
		L_74 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_73);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_75 = __this->____Color_8;
		NullCheck(L_74);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_74, _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227, L_75, NULL);
		// CanvasImage.material.SetFloat("_Size", Seed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_76 = __this->___CanvasImage_14;
		NullCheck(L_76);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77;
		L_77 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_76);
		float L_78 = __this->___Seed_9;
		NullCheck(L_77);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_77, _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117, L_78, NULL);
	}

IL_02ad:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_DesintegrationFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DesintegrationFX_OnDestroy_m9DAEB3935FAB4FDB364F86A4874EB1DAE78CB976 (_2dxFX_DesintegrationFX_t623BC235CE2F4F1765D00B281B55B3F8BC905F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_002d:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_13;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_13, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, 0, NULL);
		return;
	}

IL_0079:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_13;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_14;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_19);
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, 0, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_DesintegrationFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DesintegrationFX_OnDisable_m87A20F9CE60BE72959894D13C132E57FE3CA2897 (_2dxFX_DesintegrationFX_t623BC235CE2F4F1765D00B281B55B3F8BC905F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_13;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_13;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_14;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		NullCheck(L_15);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_15, 0, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_DesintegrationFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DesintegrationFX_OnEnable_m22BC420295EF76D8B61A77598D7095E907A509D2 (_2dxFX_DesintegrationFX_t623BC235CE2F4F1765D00B281B55B3F8BC905F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_13), (void*)L_3);
	}

IL_0023:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_6 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_12), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_12;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_12;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_12;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20;
		L_20 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_19, NULL);
		NullCheck(L_18);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_18, L_20, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___ForceMaterial_4;
		NullCheck(L_21);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00dc;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		return;
	}

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_28, L_29);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_DesintegrationFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DesintegrationFX__ctor_m57F9DE1BF612FF7565DCE10D8E4826603F047B83 (_2dxFX_DesintegrationFX_t623BC235CE2F4F1765D00B281B55B3F8BC905F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9F42F970EF6CFCBE324993E0420EB1FB0FDFC4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// private string shader = "2DxFX/Standard/DesintegrationFX";
		__this->___shader_6 = _stringLiteral0A9F42F970EF6CFCBE324993E0420EB1FB0FDFC4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_6), (void*)_stringLiteral0A9F42F970EF6CFCBE324993E0420EB1FB0FDFC4);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_7 = (1.0f);
		// [HideInInspector] public Color _Color = new Color(0f, 1f, 1f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->____Color_8 = L_0;
		// [HideInInspector] [Range(0, 1)] public float Seed = 1.0f;
		__this->___Seed_9 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float Desintegration = 0.5f;
		__this->___Desintegration_10 = (0.5f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_16 = (bool)1;
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
// System.Void _2dxFX_DestroyedFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DestroyedFX_Awake_m2E26201FE788B34D5D9B59DB46DD1B5604557EAB (_2dxFX_DestroyedFX_t9348A584FB22183109E7F04E28E4D283A58732A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_13), (void*)L_4);
	}

IL_0024:
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_14), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_DestroyedFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DestroyedFX_Start_m0869D1607E740A1720CBEF91A7E5C50452058967 (_2dxFX_DestroyedFX_t9348A584FB22183109E7F04E28E4D283A58732A6* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_10 = 0;
		// XUpdate();
		_2dxFX_DestroyedFX_XUpdate_m510EA11BD775170EDDEA628F449965702F9C1D50(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_DestroyedFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DestroyedFX_CallUpdate_m6DDDF365273A6C2B498F306AC4EAC5D3095FF0F8 (_2dxFX_DestroyedFX_t9348A584FB22183109E7F04E28E4D283A58732A6* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_DestroyedFX_XUpdate_m510EA11BD775170EDDEA628F449965702F9C1D50(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_DestroyedFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DestroyedFX_Update_mD727E38BFD2FDBED45F897838D22883744E36ED3 (_2dxFX_DestroyedFX_t9348A584FB22183109E7F04E28E4D283A58732A6* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_15;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_DestroyedFX_XUpdate_m510EA11BD775170EDDEA628F449965702F9C1D50(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_DestroyedFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DestroyedFX_XUpdate_m510EA11BD775170EDDEA628F449965702F9C1D50 (_2dxFX_DestroyedFX_t9348A584FB22183109E7F04E28E4D283A58732A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_13), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_14 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_14), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_10;
		if (L_14)
		{
			goto IL_0102;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0102;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_10 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ForceMaterial_4;
		NullCheck(L_26);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
	}

IL_00e0:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_28, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		String_t* L_30 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_31;
		L_31 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_30, NULL);
		NullCheck(L_29);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_29, L_31, NULL);
	}

IL_0102:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a1;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_10;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_0138;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_11 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_11), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_11;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_017b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_11;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_019a;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_11;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_10 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_0277;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_0212;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_14;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_7;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Destroyed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_14;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->___Destroyed_9;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_58, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Size", Seed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_59 = __this->___CanvasSpriteRenderer_14;
		NullCheck(L_59);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60;
		L_60 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_59, NULL);
		float L_61 = __this->___Seed_8;
		NullCheck(L_60);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_60, _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117, L_61, NULL);
		return;
	}

IL_0212:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_62 = __this->___CanvasImage_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_62, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_63)
		{
			goto IL_0277;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_64 = __this->___CanvasImage_13;
		NullCheck(L_64);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65;
		L_65 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_64);
		float L_66 = __this->____Alpha_7;
		NullCheck(L_65);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_65, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_66)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Destroyed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_67 = __this->___CanvasImage_13;
		NullCheck(L_67);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_68;
		L_68 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_67);
		float L_69 = __this->___Destroyed_9;
		NullCheck(L_68);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_68, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_69, NULL);
		// CanvasImage.material.SetFloat("_Size", Seed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_70 = __this->___CanvasImage_13;
		NullCheck(L_70);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71;
		L_71 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_70);
		float L_72 = __this->___Seed_8;
		NullCheck(L_71);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_71, _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117, L_72, NULL);
	}

IL_0277:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_DestroyedFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DestroyedFX_OnDestroy_mDA2103357DC5BE133417A644010B2FA60C3B17B1 (_2dxFX_DestroyedFX_t9348A584FB22183109E7F04E28E4D283A58732A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_002d:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_12;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_14;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_13, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, 0, NULL);
		return;
	}

IL_0079:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_12;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_13;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_19);
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, 0, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_DestroyedFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DestroyedFX_OnDisable_m983BBA714D7D4CF4602BD87D6E0E004A228EA574 (_2dxFX_DestroyedFX_t9348A584FB22183109E7F04E28E4D283A58732A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_12;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_14;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_12;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_13;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		NullCheck(L_15);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_15, 0, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_DestroyedFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DestroyedFX_OnEnable_m3C75B56F387AD254AA08BC737A65C79866109DAB (_2dxFX_DestroyedFX_t9348A584FB22183109E7F04E28E4D283A58732A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_12), (void*)L_3);
	}

IL_0023:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_6 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_11 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_11), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_11;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_11;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_11;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20;
		L_20 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_19, NULL);
		NullCheck(L_18);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_18, L_20, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___ForceMaterial_4;
		NullCheck(L_21);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00dc;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		return;
	}

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_28, L_29);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_DestroyedFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_DestroyedFX__ctor_m0A76737F86FB911B34CE79A7D77C2678A1C24E61 (_2dxFX_DestroyedFX_t9348A584FB22183109E7F04E28E4D283A58732A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEAB42CB5370ED3CC12890AC1A47274050AC81B7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// private string shader = "2DxFX/Standard/DestroyedFX";
		__this->___shader_6 = _stringLiteralAEAB42CB5370ED3CC12890AC1A47274050AC81B7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_6), (void*)_stringLiteralAEAB42CB5370ED3CC12890AC1A47274050AC81B7);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_7 = (1.0f);
		// [HideInInspector] [Range(0.001f, 1)] public float Seed = 1.0f;
		__this->___Seed_8 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float Destroyed = 0.5f;
		__this->___Destroyed_9 = (0.5f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_15 = (bool)1;
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
// System.Void _2dxFX_Distortion::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_Awake_mA735F2971C602DA293B19FAE7FB2EA42B8C5A89E (_2dxFX_Distortion_t367EC0A276FDC00608131CC5350D3EAE197DDAD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_23 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_23), (void*)L_4);
	}

IL_0024:
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_24 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_24), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Distortion::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_Start_m29F7E1C53BE2BA41CA60EA53C08550907C47D465 (_2dxFX_Distortion_t367EC0A276FDC00608131CC5350D3EAE197DDAD5* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_20 = 0;
		// XUpdate();
		_2dxFX_Distortion_XUpdate_m8F1B4379E44A81FA78BFAD18F9CD9344A6E3398F(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Distortion::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_CallUpdate_m422C5B9099211BABC205455C3AC4BEC5E082AB7D (_2dxFX_Distortion_t367EC0A276FDC00608131CC5350D3EAE197DDAD5* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_Distortion_XUpdate_m8F1B4379E44A81FA78BFAD18F9CD9344A6E3398F(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Distortion::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_Update_m6DAE216744C372DA21B53BC4052E0A0685EBE453 (_2dxFX_Distortion_t367EC0A276FDC00608131CC5350D3EAE197DDAD5* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_25;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_Distortion_XUpdate_m8F1B4379E44A81FA78BFAD18F9CD9344A6E3398F(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Distortion::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_XUpdate_m8F1B4379E44A81FA78BFAD18F9CD9344A6E3398F (_2dxFX_Distortion_t367EC0A276FDC00608131CC5350D3EAE197DDAD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral240E009D42283D9AF1F4D5CA564205C5255A9960);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BC8D56751E37C6B4A11D742870D42E79C2E9F06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A90695775E1E1455F2A9C11C74D424DD90EDB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD678F4CA88B311E84935640E1244CC2707625352);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_23 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_23), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_24 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_24), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_20;
		if (L_14)
		{
			goto IL_0102;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0102;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_20 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ForceMaterial_4;
		NullCheck(L_26);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
	}

IL_00e0:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_28, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		String_t* L_30 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_31;
		L_31 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_30, NULL);
		NullCheck(L_29);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_29, L_31, NULL);
	}

IL_0102:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a1;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_20;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_0138;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_21 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_21), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_21;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_017b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_21;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_019a;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_21;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_20 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_03f0;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_0285;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_7;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetX", _OffsetX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->____OffsetX_8;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_58, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetY", _OffsetY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_59 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_59);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60;
		L_60 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_59, NULL);
		float L_61 = __this->____OffsetY_9;
		NullCheck(L_60);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_60, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_61, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_DistanceX", _DistanceX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_62 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_62);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_63;
		L_63 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_62, NULL);
		float L_64 = __this->____DistanceX_10;
		NullCheck(L_63);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_63, _stringLiteral240E009D42283D9AF1F4D5CA564205C5255A9960, L_64, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_DistanceY", _DistanceY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_65);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66;
		L_66 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_65, NULL);
		float L_67 = __this->____DistanceY_11;
		NullCheck(L_66);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_66, _stringLiteralD678F4CA88B311E84935640E1244CC2707625352, L_67, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_WaveTimeX", _WaveTimeX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_68);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69;
		L_69 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_68, NULL);
		float L_70 = __this->____WaveTimeX_12;
		NullCheck(L_69);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_69, _stringLiteral6BC8D56751E37C6B4A11D742870D42E79C2E9F06, L_70, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_WaveTimeY", _WaveTimeY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_71);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_72;
		L_72 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_71, NULL);
		float L_73 = __this->____WaveTimeY_13;
		NullCheck(L_72);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_72, _stringLiteralD4A90695775E1E1455F2A9C11C74D424DD90EDB4, L_73, NULL);
		goto IL_0359;
	}

IL_0285:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_74 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_74, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_75)
		{
			goto IL_0359;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_76 = __this->___CanvasImage_23;
		NullCheck(L_76);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77;
		L_77 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_76);
		float L_78 = __this->____Alpha_7;
		NullCheck(L_77);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_77, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_78)), NULL);
		// CanvasImage.material.SetFloat("_OffsetX", _OffsetX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_79 = __this->___CanvasImage_23;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_79);
		float L_81 = __this->____OffsetX_8;
		NullCheck(L_80);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_80, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_81, NULL);
		// CanvasImage.material.SetFloat("_OffsetY", _OffsetY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_82 = __this->___CanvasImage_23;
		NullCheck(L_82);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_83;
		L_83 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_82);
		float L_84 = __this->____OffsetY_9;
		NullCheck(L_83);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_83, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_84, NULL);
		// CanvasImage.material.SetFloat("_DistanceX", _DistanceX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_85 = __this->___CanvasImage_23;
		NullCheck(L_85);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_86;
		L_86 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_85);
		float L_87 = __this->____DistanceX_10;
		NullCheck(L_86);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_86, _stringLiteral240E009D42283D9AF1F4D5CA564205C5255A9960, L_87, NULL);
		// CanvasImage.material.SetFloat("_DistanceY", _DistanceY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_88 = __this->___CanvasImage_23;
		NullCheck(L_88);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89;
		L_89 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_88);
		float L_90 = __this->____DistanceY_11;
		NullCheck(L_89);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_89, _stringLiteralD678F4CA88B311E84935640E1244CC2707625352, L_90, NULL);
		// CanvasImage.material.SetFloat("_WaveTimeX", _WaveTimeX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_91 = __this->___CanvasImage_23;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_91);
		float L_93 = __this->____WaveTimeX_12;
		NullCheck(L_92);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_92, _stringLiteral6BC8D56751E37C6B4A11D742870D42E79C2E9F06, L_93, NULL);
		// CanvasImage.material.SetFloat("_WaveTimeY", _WaveTimeY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_94 = __this->___CanvasImage_23;
		NullCheck(L_94);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_95;
		L_95 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_94);
		float L_96 = __this->____WaveTimeY_13;
		NullCheck(L_95);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_95, _stringLiteralD4A90695775E1E1455F2A9C11C74D424DD90EDB4, L_96, NULL);
	}

IL_0359:
	{
		// if (AutoRandom)
		bool L_97 = __this->___AutoRandom_18;
		if (!L_97)
		{
			goto IL_0380;
		}
	}
	{
		// timerange = (Random.Range(1, AutoRandomRange) / 5) * Time.deltaTime;
		float L_98 = __this->___AutoRandomRange_19;
		float L_99;
		L_99 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((1.0f), L_98, NULL);
		float L_100;
		L_100 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)(L_99/(5.0f))), L_100));
		goto IL_0386;
	}

IL_0380:
	{
		// timerange = Time.deltaTime;
		float L_101;
		L_101 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_101;
	}

IL_0386:
	{
		// if (AutoPlayWaveX) _WaveTimeX += AutoPlaySpeedX * timerange;
		bool L_102 = __this->___AutoPlayWaveX_14;
		if (!L_102)
		{
			goto IL_03a3;
		}
	}
	{
		// if (AutoPlayWaveX) _WaveTimeX += AutoPlaySpeedX * timerange;
		float L_103 = __this->____WaveTimeX_12;
		float L_104 = __this->___AutoPlaySpeedX_15;
		float L_105 = V_0;
		__this->____WaveTimeX_12 = ((float)il2cpp_codegen_add(L_103, ((float)il2cpp_codegen_multiply(L_104, L_105))));
	}

IL_03a3:
	{
		// if (AutoPlayWaveY) _WaveTimeY += AutoPlaySpeedY * timerange;
		bool L_106 = __this->___AutoPlayWaveY_16;
		if (!L_106)
		{
			goto IL_03c0;
		}
	}
	{
		// if (AutoPlayWaveY) _WaveTimeY += AutoPlaySpeedY * timerange;
		float L_107 = __this->____WaveTimeY_13;
		float L_108 = __this->___AutoPlaySpeedY_17;
		float L_109 = V_0;
		__this->____WaveTimeY_13 = ((float)il2cpp_codegen_add(L_107, ((float)il2cpp_codegen_multiply(L_108, L_109))));
	}

IL_03c0:
	{
		// if (_WaveTimeX > 6.28f) _WaveTimeX = 0f;
		float L_110 = __this->____WaveTimeX_12;
		if ((!(((float)L_110) > ((float)(6.28000021f)))))
		{
			goto IL_03d8;
		}
	}
	{
		// if (_WaveTimeX > 6.28f) _WaveTimeX = 0f;
		__this->____WaveTimeX_12 = (0.0f);
	}

IL_03d8:
	{
		// if (_WaveTimeY > 6.28f) _WaveTimeY = 0f;
		float L_111 = __this->____WaveTimeY_13;
		if ((!(((float)L_111) > ((float)(6.28000021f)))))
		{
			goto IL_03f0;
		}
	}
	{
		// if (_WaveTimeY > 6.28f) _WaveTimeY = 0f;
		__this->____WaveTimeY_13 = (0.0f);
	}

IL_03f0:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Distortion::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_OnDestroy_m4661DAB9A97935159020B43F508A89DABD0C3C19 (_2dxFX_Distortion_t367EC0A276FDC00608131CC5350D3EAE197DDAD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_002d:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_22;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_13, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, 0, NULL);
		return;
	}

IL_0079:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_22;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_23;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_19);
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, 0, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Distortion::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_OnDisable_m82FE4552B9C0A2D893531C3524DE69D27F280EA2 (_2dxFX_Distortion_t367EC0A276FDC00608131CC5350D3EAE197DDAD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_22;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_22;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_23;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		NullCheck(L_15);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_15, 0, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Distortion::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_OnEnable_m3BC4CE7DC9DEF90145F74E01A6A50A3DC891EDE0 (_2dxFX_Distortion_t367EC0A276FDC00608131CC5350D3EAE197DDAD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_22 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_22), (void*)L_3);
	}

IL_0023:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_6 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_21 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_21), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_21;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_21;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_21;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20;
		L_20 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_19, NULL);
		NullCheck(L_18);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_18, L_20, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___ForceMaterial_4;
		NullCheck(L_21);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00dc;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		return;
	}

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_28, L_29);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Distortion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion__ctor_m7FC5FF1964C12785152DCE7D209CB5329FB780D5 (_2dxFX_Distortion_t367EC0A276FDC00608131CC5350D3EAE197DDAD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA458A82D0C42C18B4FFBEFE374B0717C1444A7E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// private string shader = "2DxFX/Standard/Distortion";
		__this->___shader_6 = _stringLiteralCA458A82D0C42C18B4FFBEFE374B0717C1444A7E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_6), (void*)_stringLiteralCA458A82D0C42C18B4FFBEFE374B0717C1444A7E);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_7 = (1.0f);
		// [HideInInspector] [Range(0f, 128f)] public float _OffsetX = 10f;
		__this->____OffsetX_8 = (10.0f);
		// [HideInInspector] [Range(0f, 128f)] public float _OffsetY = 10f;
		__this->____OffsetY_9 = (10.0f);
		// [HideInInspector] [Range(0f, 1f)] public float _DistanceX = 0.03f;
		__this->____DistanceX_10 = (0.0299999993f);
		// [HideInInspector] [Range(0f, 1f)] public float _DistanceY = 0.03f;
		__this->____DistanceY_11 = (0.0299999993f);
		// [HideInInspector] [Range(0f, 6.28f)] public float _WaveTimeX = 0.16f;
		__this->____WaveTimeX_12 = (0.159999996f);
		// [HideInInspector] [Range(0f, 6.28f)] public float _WaveTimeY = 0.12f;
		__this->____WaveTimeY_13 = (0.119999997f);
		// [HideInInspector] [Range(0f, 5f)] public float AutoPlaySpeedX = 5f;
		__this->___AutoPlaySpeedX_15 = (5.0f);
		// [HideInInspector] [Range(0f, 50f)] public float AutoPlaySpeedY = 5f;
		__this->___AutoPlaySpeedY_17 = (5.0f);
		// [HideInInspector] [Range(0f, 50f)] public float AutoRandomRange = 10f;
		__this->___AutoRandomRange_19 = (10.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_25 = (bool)1;
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
// System.Void _2dxFX_Distortion_Additive::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_Additive_Awake_m9123670841E41298798CDE0EB3C09675C8286332 (_2dxFX_Distortion_Additive_tE4E718EB0CF16C2CEE1C89C2CD4B651733DEB6AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_23 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_23), (void*)L_4);
	}

IL_0024:
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_24 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_24), (void*)L_9);
	}

IL_0048:
	{
		// XUpdate();
		_2dxFX_Distortion_Additive_XUpdate_m189702256788A246AE63BF2BD22B8B38620FBEF9(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Distortion_Additive::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_Additive_CallUpdate_m327BB7E5763D071CBDEF3524E210A0B0FD9DA197 (_2dxFX_Distortion_Additive_tE4E718EB0CF16C2CEE1C89C2CD4B651733DEB6AF* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_Distortion_Additive_XUpdate_m189702256788A246AE63BF2BD22B8B38620FBEF9(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Distortion_Additive::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_Additive_Update_m62F1B28883CCA5DAEDD657007C558EE3773AE640 (_2dxFX_Distortion_Additive_tE4E718EB0CF16C2CEE1C89C2CD4B651733DEB6AF* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_25;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_Distortion_Additive_XUpdate_m189702256788A246AE63BF2BD22B8B38620FBEF9(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Distortion_Additive::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_Additive_XUpdate_m189702256788A246AE63BF2BD22B8B38620FBEF9 (_2dxFX_Distortion_Additive_tE4E718EB0CF16C2CEE1C89C2CD4B651733DEB6AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral240E009D42283D9AF1F4D5CA564205C5255A9960);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BC8D56751E37C6B4A11D742870D42E79C2E9F06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A90695775E1E1455F2A9C11C74D424DD90EDB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD678F4CA88B311E84935640E1244CC2707625352);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_23 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_23), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_24 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_24), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_20;
		if (L_14)
		{
			goto IL_0102;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0102;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_20 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ForceMaterial_4;
		NullCheck(L_26);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
	}

IL_00e0:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_28, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		String_t* L_30 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_31;
		L_31 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_30, NULL);
		NullCheck(L_29);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_29, L_31, NULL);
	}

IL_0102:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a1;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_20;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_0138;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_21 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_21), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_21;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_017b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_21;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_019a;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_21;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_20 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_03f0;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_0285;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_7;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetX", _OffsetX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->____OffsetX_8;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_58, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetY", _OffsetY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_59 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_59);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60;
		L_60 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_59, NULL);
		float L_61 = __this->____OffsetY_9;
		NullCheck(L_60);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_60, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_61, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_DistanceX", _DistanceX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_62 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_62);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_63;
		L_63 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_62, NULL);
		float L_64 = __this->____DistanceX_10;
		NullCheck(L_63);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_63, _stringLiteral240E009D42283D9AF1F4D5CA564205C5255A9960, L_64, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_DistanceY", _DistanceY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_65);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66;
		L_66 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_65, NULL);
		float L_67 = __this->____DistanceY_11;
		NullCheck(L_66);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_66, _stringLiteralD678F4CA88B311E84935640E1244CC2707625352, L_67, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_WaveTimeX", _WaveTimeX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_68);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69;
		L_69 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_68, NULL);
		float L_70 = __this->____WaveTimeX_12;
		NullCheck(L_69);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_69, _stringLiteral6BC8D56751E37C6B4A11D742870D42E79C2E9F06, L_70, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_WaveTimeY", _WaveTimeY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_71);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_72;
		L_72 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_71, NULL);
		float L_73 = __this->____WaveTimeY_13;
		NullCheck(L_72);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_72, _stringLiteralD4A90695775E1E1455F2A9C11C74D424DD90EDB4, L_73, NULL);
		goto IL_0359;
	}

IL_0285:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_74 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_74, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_75)
		{
			goto IL_0359;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_76 = __this->___CanvasImage_23;
		NullCheck(L_76);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77;
		L_77 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_76);
		float L_78 = __this->____Alpha_7;
		NullCheck(L_77);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_77, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_78)), NULL);
		// CanvasImage.material.SetFloat("_OffsetX", _OffsetX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_79 = __this->___CanvasImage_23;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_79);
		float L_81 = __this->____OffsetX_8;
		NullCheck(L_80);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_80, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_81, NULL);
		// CanvasImage.material.SetFloat("_OffsetY", _OffsetY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_82 = __this->___CanvasImage_23;
		NullCheck(L_82);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_83;
		L_83 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_82);
		float L_84 = __this->____OffsetY_9;
		NullCheck(L_83);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_83, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_84, NULL);
		// CanvasImage.material.SetFloat("_DistanceX", _DistanceX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_85 = __this->___CanvasImage_23;
		NullCheck(L_85);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_86;
		L_86 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_85);
		float L_87 = __this->____DistanceX_10;
		NullCheck(L_86);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_86, _stringLiteral240E009D42283D9AF1F4D5CA564205C5255A9960, L_87, NULL);
		// CanvasImage.material.SetFloat("_DistanceY", _DistanceY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_88 = __this->___CanvasImage_23;
		NullCheck(L_88);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89;
		L_89 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_88);
		float L_90 = __this->____DistanceY_11;
		NullCheck(L_89);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_89, _stringLiteralD678F4CA88B311E84935640E1244CC2707625352, L_90, NULL);
		// CanvasImage.material.SetFloat("_WaveTimeX", _WaveTimeX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_91 = __this->___CanvasImage_23;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_91);
		float L_93 = __this->____WaveTimeX_12;
		NullCheck(L_92);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_92, _stringLiteral6BC8D56751E37C6B4A11D742870D42E79C2E9F06, L_93, NULL);
		// CanvasImage.material.SetFloat("_WaveTimeY", _WaveTimeY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_94 = __this->___CanvasImage_23;
		NullCheck(L_94);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_95;
		L_95 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_94);
		float L_96 = __this->____WaveTimeY_13;
		NullCheck(L_95);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_95, _stringLiteralD4A90695775E1E1455F2A9C11C74D424DD90EDB4, L_96, NULL);
	}

IL_0359:
	{
		// if (AutoRandom)
		bool L_97 = __this->___AutoRandom_18;
		if (!L_97)
		{
			goto IL_0380;
		}
	}
	{
		// timerange = (Random.Range(1, AutoRandomRange) / 5) * Time.deltaTime;
		float L_98 = __this->___AutoRandomRange_19;
		float L_99;
		L_99 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((1.0f), L_98, NULL);
		float L_100;
		L_100 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)(L_99/(5.0f))), L_100));
		goto IL_0386;
	}

IL_0380:
	{
		// timerange = Time.deltaTime;
		float L_101;
		L_101 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_101;
	}

IL_0386:
	{
		// if (AutoPlayWaveX) _WaveTimeX += AutoPlaySpeedX * timerange;
		bool L_102 = __this->___AutoPlayWaveX_14;
		if (!L_102)
		{
			goto IL_03a3;
		}
	}
	{
		// if (AutoPlayWaveX) _WaveTimeX += AutoPlaySpeedX * timerange;
		float L_103 = __this->____WaveTimeX_12;
		float L_104 = __this->___AutoPlaySpeedX_15;
		float L_105 = V_0;
		__this->____WaveTimeX_12 = ((float)il2cpp_codegen_add(L_103, ((float)il2cpp_codegen_multiply(L_104, L_105))));
	}

IL_03a3:
	{
		// if (AutoPlayWaveY) _WaveTimeY += AutoPlaySpeedY * timerange;
		bool L_106 = __this->___AutoPlayWaveY_16;
		if (!L_106)
		{
			goto IL_03c0;
		}
	}
	{
		// if (AutoPlayWaveY) _WaveTimeY += AutoPlaySpeedY * timerange;
		float L_107 = __this->____WaveTimeY_13;
		float L_108 = __this->___AutoPlaySpeedY_17;
		float L_109 = V_0;
		__this->____WaveTimeY_13 = ((float)il2cpp_codegen_add(L_107, ((float)il2cpp_codegen_multiply(L_108, L_109))));
	}

IL_03c0:
	{
		// if (_WaveTimeX > 6.28f) _WaveTimeX = 0f;
		float L_110 = __this->____WaveTimeX_12;
		if ((!(((float)L_110) > ((float)(6.28000021f)))))
		{
			goto IL_03d8;
		}
	}
	{
		// if (_WaveTimeX > 6.28f) _WaveTimeX = 0f;
		__this->____WaveTimeX_12 = (0.0f);
	}

IL_03d8:
	{
		// if (_WaveTimeY > 6.28f) _WaveTimeY = 0f;
		float L_111 = __this->____WaveTimeY_13;
		if ((!(((float)L_111) > ((float)(6.28000021f)))))
		{
			goto IL_03f0;
		}
	}
	{
		// if (_WaveTimeY > 6.28f) _WaveTimeY = 0f;
		__this->____WaveTimeY_13 = (0.0f);
	}

IL_03f0:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Distortion_Additive::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_Additive_OnDestroy_m596964FA37B80AB89C643D705C90B167130FA269 (_2dxFX_Distortion_Additive_tE4E718EB0CF16C2CEE1C89C2CD4B651733DEB6AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_002d:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_22;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_13, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, 0, NULL);
		return;
	}

IL_0079:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_22;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_23;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_19);
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, 0, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Distortion_Additive::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_Additive_OnDisable_m1B4482E5D9724E7DAB25CB0590F9FAEE96EB1B07 (_2dxFX_Distortion_Additive_tE4E718EB0CF16C2CEE1C89C2CD4B651733DEB6AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_22;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_22;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_23;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		NullCheck(L_15);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_15, 0, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Distortion_Additive::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_Additive_OnEnable_m238A5AFE7654443F6331D330ED03E1CB13A0CDB9 (_2dxFX_Distortion_Additive_tE4E718EB0CF16C2CEE1C89C2CD4B651733DEB6AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_22 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_22), (void*)L_3);
	}

IL_0023:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_6 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_21 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_21), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_21;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_21;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_21;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20;
		L_20 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_19, NULL);
		NullCheck(L_18);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_18, L_20, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___ForceMaterial_4;
		NullCheck(L_21);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00dc;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		return;
	}

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_28, L_29);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Distortion_Additive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Distortion_Additive__ctor_m98023A75F06DEA6EF857E3B52E9CA27CA8EE9A0C (_2dxFX_Distortion_Additive_tE4E718EB0CF16C2CEE1C89C2CD4B651733DEB6AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB67ABAA43E9F8B57A1F3517C99CA36AC4A723CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// private string shader = "2DxFX/Standard/Distortion_Additive";
		__this->___shader_6 = _stringLiteralBB67ABAA43E9F8B57A1F3517C99CA36AC4A723CA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_6), (void*)_stringLiteralBB67ABAA43E9F8B57A1F3517C99CA36AC4A723CA);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_7 = (1.0f);
		// [HideInInspector] [Range(0f, 128f)] public float _OffsetX = 10f;
		__this->____OffsetX_8 = (10.0f);
		// [HideInInspector] [Range(0f, 128f)] public float _OffsetY = 10f;
		__this->____OffsetY_9 = (10.0f);
		// [HideInInspector] [Range(0f, 1f)] public float _DistanceX = 0.03f;
		__this->____DistanceX_10 = (0.0299999993f);
		// [HideInInspector] [Range(0f, 1f)] public float _DistanceY = 0.03f;
		__this->____DistanceY_11 = (0.0299999993f);
		// [HideInInspector] [Range(0f, 6.28f)] public float _WaveTimeX = 0.16f;
		__this->____WaveTimeX_12 = (0.159999996f);
		// [HideInInspector] [Range(0f, 6.28f)] public float _WaveTimeY = 0.12f;
		__this->____WaveTimeY_13 = (0.119999997f);
		// [HideInInspector] [Range(0f, 5f)] public float AutoPlaySpeedX = 5f;
		__this->___AutoPlaySpeedX_15 = (5.0f);
		// [HideInInspector] [Range(0f, 50f)] public float AutoPlaySpeedY = 5f;
		__this->___AutoPlaySpeedY_17 = (5.0f);
		// [HideInInspector] [Range(0f, 50f)] public float AutoRandomRange = 10f;
		__this->___AutoRandomRange_19 = (10.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_25 = (bool)1;
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
// System.Void _2dxFX_EdgeColor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EdgeColor_Awake_m0935D3C2A67E60A5C7722279828DA14A42E49765 (_2dxFX_EdgeColor_t4B90DE42AF25C27981A4C996D5202426A3BAB421* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_12), (void*)L_4);
	}

IL_0024:
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_13 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_13), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_EdgeColor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EdgeColor_Start_m550EEA473ECE1DCCC2C6BC05517EFB2B93199093 (_2dxFX_EdgeColor_t4B90DE42AF25C27981A4C996D5202426A3BAB421* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_9 = 0;
		// XUpdate();
		_2dxFX_EdgeColor_XUpdate_m537AE41122D4680A571BAEC9D25EFA7CA2BA937C(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_EdgeColor::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EdgeColor_CallUpdate_m89DAD8E23807B0C34C6D0CFA551C13C84577BFEF (_2dxFX_EdgeColor_t4B90DE42AF25C27981A4C996D5202426A3BAB421* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_EdgeColor_XUpdate_m537AE41122D4680A571BAEC9D25EFA7CA2BA937C(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_EdgeColor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EdgeColor_Update_mF1C02EBE8DD631E9E76F68FA9D48DB037679CED0 (_2dxFX_EdgeColor_t4B90DE42AF25C27981A4C996D5202426A3BAB421* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_14;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_EdgeColor_XUpdate_m537AE41122D4680A571BAEC9D25EFA7CA2BA937C(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_EdgeColor::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EdgeColor_XUpdate_m537AE41122D4680A571BAEC9D25EFA7CA2BA937C (_2dxFX_EdgeColor_t4B90DE42AF25C27981A4C996D5202426A3BAB421* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_12), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_13), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_9;
		if (L_14)
		{
			goto IL_0102;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0102;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_9 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ForceMaterial_4;
		NullCheck(L_26);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
	}

IL_00e0:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_28, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		String_t* L_30 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_31;
		L_31 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_30, NULL);
		NullCheck(L_29);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_29, L_31, NULL);
	}

IL_0102:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a1;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_9;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_0138;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_10 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_10), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_10;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_017b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_10;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_019a;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_10;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_9 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_0241;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_01f7;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_13;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_7;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetColor("_ColorX", _Color);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_13;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_58 = __this->____Color_8;
		NullCheck(L_57);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_57, _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227, L_58, NULL);
		return;
	}

IL_01f7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_59 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_59, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_60)
		{
			goto IL_0241;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_61 = __this->___CanvasImage_12;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_61);
		float L_63 = __this->____Alpha_7;
		NullCheck(L_62);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_62, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_63)), NULL);
		// CanvasImage.material.SetColor("_ColorX", _Color);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_64 = __this->___CanvasImage_12;
		NullCheck(L_64);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65;
		L_65 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_64);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_66 = __this->____Color_8;
		NullCheck(L_65);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_65, _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227, L_66, NULL);
	}

IL_0241:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_EdgeColor::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EdgeColor_OnDestroy_m052A4E354B96461A353A915981728934A1D988CB (_2dxFX_EdgeColor_t4B90DE42AF25C27981A4C996D5202426A3BAB421* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_002d:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_11;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_13;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_13, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, 0, NULL);
		return;
	}

IL_0079:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_11;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_12;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_19);
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, 0, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_EdgeColor::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EdgeColor_OnDisable_mE16E57728FAFA7708E69A0DD3D929D314AC7BFA0 (_2dxFX_EdgeColor_t4B90DE42AF25C27981A4C996D5202426A3BAB421* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_11;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_13;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_11;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_12;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		NullCheck(L_15);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_15, 0, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_EdgeColor::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EdgeColor_OnEnable_mD99ACA61D2A4E867D4FB9B5C412DC2FED62199D4 (_2dxFX_EdgeColor_t4B90DE42AF25C27981A4C996D5202426A3BAB421* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_11), (void*)L_3);
	}

IL_0023:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_6 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_10), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_10;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_10;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_10;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20;
		L_20 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_19, NULL);
		NullCheck(L_18);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_18, L_20, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___ForceMaterial_4;
		NullCheck(L_21);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00dc;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		return;
	}

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_28, L_29);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_EdgeColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EdgeColor__ctor_m260308DE45BE216B41A379C43019C532EC8F8A92 (_2dxFX_EdgeColor_t4B90DE42AF25C27981A4C996D5202426A3BAB421* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45DEBD614E899C52D96DFDEBAE0ED46ACB47B279);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// private string shader = "2DxFX/Standard/EdgeColor";
		__this->___shader_6 = _stringLiteral45DEBD614E899C52D96DFDEBAE0ED46ACB47B279;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_6), (void*)_stringLiteral45DEBD614E899C52D96DFDEBAE0ED46ACB47B279);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_7 = (1.0f);
		// [HideInInspector] public Color _Color = new Color(0f, 1f, 1f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->____Color_8 = L_0;
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_14 = (bool)1;
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
// System.Void _2dxFX_EnergyBar::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EnergyBar_Awake_m7542141DD60280A2955728CBA14F3D31937B2B90 (_2dxFX_EnergyBar_t0B4C9EA17A011ED78CC558264BDDE49CDB14F864* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_16), (void*)L_4);
	}

IL_0024:
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_17 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_17), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_EnergyBar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EnergyBar_Start_mD1A5723973B794D4289936AD7779D625BCE18E74 (_2dxFX_EnergyBar_t0B4C9EA17A011ED78CC558264BDDE49CDB14F864* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_13 = 0;
		// XUpdate();
		_2dxFX_EnergyBar_XUpdate_m729060FEFE49F85C33D23C90B2E061A5C2B30E16(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_EnergyBar::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EnergyBar_CallUpdate_m8FB4E700ADF322D9BD3F39F13C6878F4AD96F9C7 (_2dxFX_EnergyBar_t0B4C9EA17A011ED78CC558264BDDE49CDB14F864* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_EnergyBar_XUpdate_m729060FEFE49F85C33D23C90B2E061A5C2B30E16(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_EnergyBar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EnergyBar_Update_m23E904C9611C4911C1B4FA925FC364671FB2C960 (_2dxFX_EnergyBar_t0B4C9EA17A011ED78CC558264BDDE49CDB14F864* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_18;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_EnergyBar_XUpdate_m729060FEFE49F85C33D23C90B2E061A5C2B30E16(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_EnergyBar::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EnergyBar_XUpdate_m729060FEFE49F85C33D23C90B2E061A5C2B30E16 (_2dxFX_EnergyBar_t0B4C9EA17A011ED78CC558264BDDE49CDB14F864* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455192F2C6C0DDD922218931AB63F3F8AB307544);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_16), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_17 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_17), (void*)L_13);
	}

IL_0064:
	{
		// if (BarProgress > 1) BarProgress = 1;
		float L_14 = __this->___BarProgress_8;
		if ((!(((float)L_14) > ((float)(1.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		// if (BarProgress > 1) BarProgress = 1;
		__this->___BarProgress_8 = (1.0f);
	}

IL_007c:
	{
		// if (BarProgress < 0) BarProgress = 0;
		float L_15 = __this->___BarProgress_8;
		if ((!(((float)L_15) < ((float)(0.0f)))))
		{
			goto IL_0094;
		}
	}
	{
		// if (BarProgress < 0) BarProgress = 0;
		__this->___BarProgress_8 = (0.0f);
	}

IL_0094:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_16 = __this->___ShaderChange_13;
		if (L_16)
		{
			goto IL_0132;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_0132;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_13 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00d0;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___tempMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_21, NULL);
	}

IL_00d0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00f1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		goto IL_0110;
	}

IL_00f1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_0110;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_28, L_29);
	}

IL_0110:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___ForceMaterial_4;
		NullCheck(L_30);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_30, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___ForceMaterial_4;
		String_t* L_32 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_33;
		L_33 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_32, NULL);
		NullCheck(L_31);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_31, L_33, NULL);
	}

IL_0132:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_34, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_35)
		{
			goto IL_01d1;
		}
	}
	{
		int32_t L_36 = __this->___ShaderChange_13;
		if ((!(((uint32_t)L_36) == ((uint32_t)1))))
		{
			goto IL_01d1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_37, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_38)
		{
			goto IL_0168;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = __this->___tempMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_39, NULL);
	}

IL_0168:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_40 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_41;
		L_41 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_40, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_42, L_41, NULL);
		__this->___tempMaterial_14 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_14), (void*)L_42);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43 = __this->___tempMaterial_14;
		NullCheck(L_43);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_43, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_44, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_45)
		{
			goto IL_01ab;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_46 = __this->___CanvasSpriteRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = __this->___tempMaterial_14;
		NullCheck(L_46);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_46, L_47, NULL);
		goto IL_01ca;
	}

IL_01ab:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_48, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_49)
		{
			goto IL_01ca;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_50 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_51 = __this->___tempMaterial_14;
		NullCheck(L_50);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_50, L_51);
	}

IL_01ca:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_13 = 0;
	}

IL_01d1:
	{
		// if (ActiveChange)
		bool L_52 = __this->___ActiveChange_5;
		if (!L_52)
		{
			goto IL_0367;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_53, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_54)
		{
			goto IL_02a2;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_55 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_55);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_56;
		L_56 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_55, NULL);
		float L_57 = __this->____Alpha_7;
		NullCheck(L_56);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_56, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_57)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value1", BarProgress);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_58);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_59;
		L_59 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_58, NULL);
		float L_60 = __this->___BarProgress_8;
		NullCheck(L_59);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_59, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_60, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value2", 1 - _Value2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		float L_63 = __this->____Value2_9;
		NullCheck(L_62);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_62, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, ((float)il2cpp_codegen_subtract((1.0f), L_63)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value3", 1 - _Value3);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_64 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_64);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65;
		L_65 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_64, NULL);
		float L_66 = __this->____Value3_10;
		NullCheck(L_65);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_65, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, ((float)il2cpp_codegen_subtract((1.0f), L_66)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value4", _Value4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_67 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_67);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_68;
		L_68 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_67, NULL);
		float L_69 = __this->____Value4_11;
		NullCheck(L_68);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_68, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_69, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value5", _Value5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_70);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71;
		L_71 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_70, NULL);
		float L_72 = __this->____Value5_12;
		NullCheck(L_71);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_71, _stringLiteral455192F2C6C0DDD922218931AB63F3F8AB307544, L_72, NULL);
		return;
	}

IL_02a2:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_73 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_73, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_74)
		{
			goto IL_0367;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_75 = __this->___CanvasImage_16;
		NullCheck(L_75);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_76;
		L_76 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_75);
		float L_77 = __this->____Alpha_7;
		NullCheck(L_76);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_76, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_77)), NULL);
		// CanvasImage.material.SetFloat("_Value1", BarProgress);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_78 = __this->___CanvasImage_16;
		NullCheck(L_78);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_79;
		L_79 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_78);
		float L_80 = __this->___BarProgress_8;
		NullCheck(L_79);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_79, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_80, NULL);
		// CanvasImage.material.SetFloat("_Value2", 1 - _Value2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_81 = __this->___CanvasImage_16;
		NullCheck(L_81);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82;
		L_82 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_81);
		float L_83 = __this->____Value2_9;
		NullCheck(L_82);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_82, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, ((float)il2cpp_codegen_subtract((1.0f), L_83)), NULL);
		// CanvasImage.material.SetFloat("_Value3", 1 - _Value3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_84 = __this->___CanvasImage_16;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_84);
		float L_86 = __this->____Value3_10;
		NullCheck(L_85);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_85, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, ((float)il2cpp_codegen_subtract((1.0f), L_86)), NULL);
		// CanvasImage.material.SetFloat("_Value4", _Value4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_87 = __this->___CanvasImage_16;
		NullCheck(L_87);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_88;
		L_88 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_87);
		float L_89 = __this->____Value4_11;
		NullCheck(L_88);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_88, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_89, NULL);
		// CanvasImage.material.SetFloat("_Value5", _Value5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_90 = __this->___CanvasImage_16;
		NullCheck(L_90);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_91;
		L_91 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_90);
		float L_92 = __this->____Value5_12;
		NullCheck(L_91);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_91, _stringLiteral455192F2C6C0DDD922218931AB63F3F8AB307544, L_92, NULL);
	}

IL_0367:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_EnergyBar::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EnergyBar_OnDestroy_m80CE2D1636890DC215637B91B04F8533FD64D620 (_2dxFX_EnergyBar_t0B4C9EA17A011ED78CC558264BDDE49CDB14F864* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_002d:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_15;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_13, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, 0, NULL);
		return;
	}

IL_0079:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_15;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_16;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_19);
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, 0, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_EnergyBar::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EnergyBar_OnDisable_m7437A2A8599C039FE9221B010505F442C4A1D1F3 (_2dxFX_EnergyBar_t0B4C9EA17A011ED78CC558264BDDE49CDB14F864* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_15;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_15;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_16;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		NullCheck(L_15);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_15, 0, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_EnergyBar::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EnergyBar_OnEnable_m56351053A7669CA18601C66E88782CEFB3061AA0 (_2dxFX_EnergyBar_t0B4C9EA17A011ED78CC558264BDDE49CDB14F864* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_15), (void*)L_3);
	}

IL_0023:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_6 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_14), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_14;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_14;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_14;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20;
		L_20 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_19, NULL);
		NullCheck(L_18);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_18, L_20, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___ForceMaterial_4;
		NullCheck(L_21);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00dc;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		return;
	}

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_28, L_29);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_EnergyBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_EnergyBar__ctor_mD95E27724B90B32D0FC670E8ECE331B90F3C7583 (_2dxFX_EnergyBar_t0B4C9EA17A011ED78CC558264BDDE49CDB14F864* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98EFB4DB378ABF6DB5740960B24CF28A72A196A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// private string shader = "2DxFX/Standard/EnergyBar";
		__this->___shader_6 = _stringLiteral98EFB4DB378ABF6DB5740960B24CF28A72A196A8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_6), (void*)_stringLiteral98EFB4DB378ABF6DB5740960B24CF28A72A196A8);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_7 = (1.0f);
		// [HideInInspector] [Range(0f, 1f)] public float BarProgress = 0.5f;
		__this->___BarProgress_8 = (0.5f);
		// [HideInInspector] [Range(0.9f, 1f)] public float _Value2 = 0.975f;
		__this->____Value2_9 = (0.975000024f);
		// [HideInInspector] [Range(0f, 0.5f)] public float _Value3 = 0.5f;
		__this->____Value3_10 = (0.5f);
		// [HideInInspector] [Range(0f, 1f)] public float _Value4 = 1.0f;
		__this->____Value4_11 = (1.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_18 = (bool)1;
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
// System.Void _2dxFX_Fire::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Fire_Awake_m1A4DEB470B851BC0507CD351D55E00109B62130A (_2dxFX_Fire_t084E152BA43D01AFC8E7BE02D65EB97F5901FDD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_22 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_22), (void*)L_4);
	}

IL_0024:
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_23 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_23), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Fire::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Fire_Start_m24FD0260028ED5B0DC62C2DAB1091A16DF3D842A (_2dxFX_Fire_t084E152BA43D01AFC8E7BE02D65EB97F5901FDD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// __MainTex2 = Resources.Load("_2dxFX_FireTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1, NULL);
		__this->_____MainTex2_8 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_8), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		// ShaderChange = 0;
		__this->___ShaderChange_19 = 0;
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetTexture("_MainTex2", __MainTex2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->_____MainTex2_8;
		NullCheck(L_4);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_4, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_5, NULL);
		goto IL_0070;
	}

IL_0047:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		// CanvasImage.material.SetTexture("_MainTex2", __MainTex2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___CanvasImage_22;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_8);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->_____MainTex2_8;
		NullCheck(L_9);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_9, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_10, NULL);
	}

IL_0070:
	{
		// XUpdate();
		_2dxFX_Fire_XUpdate_m772F6AFEDCA3FB0AC536764197062143AA6518BA(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Fire::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Fire_CallUpdate_m2C38F822D3076E0594924DC6E5081A1C8F4CD7E1 (_2dxFX_Fire_t084E152BA43D01AFC8E7BE02D65EB97F5901FDD0* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_Fire_XUpdate_m772F6AFEDCA3FB0AC536764197062143AA6518BA(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Fire::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Fire_Update_mDD5B5106895A8E68D9688B015708674FDDFDF40D (_2dxFX_Fire_t084E152BA43D01AFC8E7BE02D65EB97F5901FDD0* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_24;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_Fire_XUpdate_m772F6AFEDCA3FB0AC536764197062143AA6518BA(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Fire::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Fire_XUpdate_m772F6AFEDCA3FB0AC536764197062143AA6518BA (_2dxFX_Fire_t084E152BA43D01AFC8E7BE02D65EB97F5901FDD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_22 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_22), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_23 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_23), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_19;
		if (L_14)
		{
			goto IL_0102;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0102;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_19 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ForceMaterial_4;
		NullCheck(L_26);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
	}

IL_00e0:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_28, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		String_t* L_30 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_31;
		L_31 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_30, NULL);
		NullCheck(L_29);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_29, L_31, NULL);
	}

IL_0102:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a1;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_19;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_0138;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_20 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_20), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_20;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_017b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_20;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_019a;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_20;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_19 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_02e9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_024b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_7;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value1", _Value1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->____Value1_9;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_58, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value2", _Value2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_59 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_59);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60;
		L_60 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_59, NULL);
		float L_61 = __this->____Value2_10;
		NullCheck(L_60);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_60, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, L_61, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value3", _Value3);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_62 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_62);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_63;
		L_63 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_62, NULL);
		float L_64 = __this->____Value3_11;
		NullCheck(L_63);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_63, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, L_64, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value4", _Value4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_65);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66;
		L_66 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_65, NULL);
		float L_67 = __this->____Value4_12;
		NullCheck(L_66);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_66, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_67, NULL);
		return;
	}

IL_024b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_68 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_68, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_69)
		{
			goto IL_02e9;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_70 = __this->___CanvasImage_22;
		NullCheck(L_70);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71;
		L_71 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_70);
		float L_72 = __this->____Alpha_7;
		NullCheck(L_71);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_71, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_72)), NULL);
		// CanvasImage.material.SetFloat("_Value1", _Value1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_73 = __this->___CanvasImage_22;
		NullCheck(L_73);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74;
		L_74 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_73);
		float L_75 = __this->____Value1_9;
		NullCheck(L_74);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_74, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_75, NULL);
		// CanvasImage.material.SetFloat("_Value2", _Value2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_76 = __this->___CanvasImage_22;
		NullCheck(L_76);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77;
		L_77 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_76);
		float L_78 = __this->____Value2_10;
		NullCheck(L_77);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_77, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, L_78, NULL);
		// CanvasImage.material.SetFloat("_Value3", _Value3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_79 = __this->___CanvasImage_22;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_79);
		float L_81 = __this->____Value3_11;
		NullCheck(L_80);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_80, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, L_81, NULL);
		// CanvasImage.material.SetFloat("_Value4", _Value4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_82 = __this->___CanvasImage_22;
		NullCheck(L_82);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_83;
		L_83 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_82);
		float L_84 = __this->____Value4_12;
		NullCheck(L_83);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_83, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_84, NULL);
	}

IL_02e9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Fire::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Fire_OnDestroy_mCDFCD04D1425824D0BA6B57AB5DB7F1457DFA545 (_2dxFX_Fire_t084E152BA43D01AFC8E7BE02D65EB97F5901FDD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_002d:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_21;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_13, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, 0, NULL);
		return;
	}

IL_0079:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_21;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_22;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_19);
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, 0, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Fire::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Fire_OnDisable_m187A1580EA736D009E3EA95676502B91BD7C6DE9 (_2dxFX_Fire_t084E152BA43D01AFC8E7BE02D65EB97F5901FDD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_21;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_21;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_22;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		NullCheck(L_15);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_15, 0, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Fire::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Fire_OnEnable_m164F9D367E6F86FA4C9093B82988744B95815254 (_2dxFX_Fire_t084E152BA43D01AFC8E7BE02D65EB97F5901FDD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_21 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_21), (void*)L_3);
	}

IL_0023:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_00b4;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_6 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_20 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_20), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_20;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_20;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		goto IL_009d;
	}

IL_007e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_009d;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_20;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
	}

IL_009d:
	{
		// __MainTex2 = Resources.Load("_2dxFX_FireTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1, NULL);
		__this->_____MainTex2_8 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_8), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		goto IL_012b;
	}

IL_00b4:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___ForceMaterial_4;
		String_t* L_20 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_21;
		L_21 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_20, NULL);
		NullCheck(L_19);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_19, L_21, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_22, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_23 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_00f7;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_25 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___ForceMaterial_4;
		NullCheck(L_25);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_25, L_26, NULL);
		goto IL_0116;
	}

IL_00f7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_0116;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___ForceMaterial_4;
		NullCheck(L_29);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_29, L_30);
	}

IL_0116:
	{
		// __MainTex2 = Resources.Load("_2dxFX_FireTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31;
		L_31 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1, NULL);
		__this->_____MainTex2_8 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_8), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
	}

IL_012b:
	{
		// if (__MainTex2)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_32 = __this->_____MainTex2_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_32, NULL);
		if (!L_33)
		{
			goto IL_0197;
		}
	}
	{
		// __MainTex2.wrapMode = TextureWrapMode.Repeat;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = __this->_____MainTex2_8;
		NullCheck(L_34);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_34, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_35 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_016e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetTexture("_MainTex2", __MainTex2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_37 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_37);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38;
		L_38 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_37, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = __this->_____MainTex2_8;
		NullCheck(L_38);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_38, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_39, NULL);
		return;
	}

IL_016e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_40, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_41)
		{
			goto IL_0197;
		}
	}
	{
		// CanvasImage.material.SetTexture("_MainTex2", __MainTex2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___CanvasImage_22;
		NullCheck(L_42);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43;
		L_43 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_42);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = __this->_____MainTex2_8;
		NullCheck(L_43);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_43, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_44, NULL);
	}

IL_0197:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Fire::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Fire__ctor_mED973390EB4F06AD3044223404274B917EBE43F8 (_2dxFX_Fire_t084E152BA43D01AFC8E7BE02D65EB97F5901FDD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC20D0119BB22B049E24C4FB66EB326DFC6460899);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// private string shader = "2DxFX/Standard/Fire";
		__this->___shader_6 = _stringLiteralC20D0119BB22B049E24C4FB66EB326DFC6460899;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_6), (void*)_stringLiteralC20D0119BB22B049E24C4FB66EB326DFC6460899);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_7 = (1.0f);
		// [HideInInspector] [Range(64, 256)] public float _Value1 = 64;
		__this->____Value1_9 = (64.0f);
		// [HideInInspector] [Range(0, 2)] public float _Value2 = 1;
		__this->____Value2_10 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float _Value3 = 1;
		__this->____Value3_11 = (1.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_24 = (bool)1;
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
// System.Void _2dxFX_FireAdditive::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FireAdditive_Awake_m5120D875C4B19753B90DD11656E9D380D6BF8A54 (_2dxFX_FireAdditive_t21E701631EF606D28D542026207D924E12DD6721* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_22 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_22), (void*)L_4);
	}

IL_0024:
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_23 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_23), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_FireAdditive::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FireAdditive_Start_mFBC684B6FEEC5C4E1FEAEF9BD56F1C62D551F4E1 (_2dxFX_FireAdditive_t21E701631EF606D28D542026207D924E12DD6721* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// __MainTex2 = Resources.Load("_2dxFX_FireTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1, NULL);
		__this->_____MainTex2_8 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_8), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		// ShaderChange = 0;
		__this->___ShaderChange_19 = 0;
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetTexture("_MainTex2", __MainTex2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->_____MainTex2_8;
		NullCheck(L_4);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_4, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_5, NULL);
		goto IL_0070;
	}

IL_0047:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		// CanvasImage.material.SetTexture("_MainTex2", __MainTex2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___CanvasImage_22;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_8);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->_____MainTex2_8;
		NullCheck(L_9);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_9, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_10, NULL);
	}

IL_0070:
	{
		// XUpdate();
		_2dxFX_FireAdditive_XUpdate_mAC0FA901B28E85EB17EBF1E9AA7939FEEA13C234(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_FireAdditive::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FireAdditive_CallUpdate_mD968DC83A645CD70AB28D77791E671CF4ED7B531 (_2dxFX_FireAdditive_t21E701631EF606D28D542026207D924E12DD6721* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_FireAdditive_XUpdate_mAC0FA901B28E85EB17EBF1E9AA7939FEEA13C234(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_FireAdditive::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FireAdditive_Update_mBDBDBA68DC20F0510AD7EC8F9CED9D6847C36002 (_2dxFX_FireAdditive_t21E701631EF606D28D542026207D924E12DD6721* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_24;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_FireAdditive_XUpdate_mAC0FA901B28E85EB17EBF1E9AA7939FEEA13C234(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_FireAdditive::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FireAdditive_XUpdate_mAC0FA901B28E85EB17EBF1E9AA7939FEEA13C234 (_2dxFX_FireAdditive_t21E701631EF606D28D542026207D924E12DD6721* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_22 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_22), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_23 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_23), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_19;
		if (L_14)
		{
			goto IL_0102;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0102;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_19 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ForceMaterial_4;
		NullCheck(L_26);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
	}

IL_00e0:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_28, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		String_t* L_30 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_31;
		L_31 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_30, NULL);
		NullCheck(L_29);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_29, L_31, NULL);
	}

IL_0102:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a1;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_19;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_0138;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_20 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_20), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_20;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_017b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_20;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_019a;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_20;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_19 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_02e9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_024b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_7;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value1", _Value1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->____Value1_9;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_58, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value2", _Value2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_59 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_59);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60;
		L_60 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_59, NULL);
		float L_61 = __this->____Value2_10;
		NullCheck(L_60);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_60, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, L_61, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value3", _Value3);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_62 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_62);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_63;
		L_63 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_62, NULL);
		float L_64 = __this->____Value3_11;
		NullCheck(L_63);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_63, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, L_64, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value4", _Value4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_65);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66;
		L_66 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_65, NULL);
		float L_67 = __this->____Value4_12;
		NullCheck(L_66);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_66, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_67, NULL);
		return;
	}

IL_024b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_68 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_68, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_69)
		{
			goto IL_02e9;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_70 = __this->___CanvasImage_22;
		NullCheck(L_70);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71;
		L_71 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_70);
		float L_72 = __this->____Alpha_7;
		NullCheck(L_71);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_71, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_72)), NULL);
		// CanvasImage.material.SetFloat("_Value1", _Value1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_73 = __this->___CanvasImage_22;
		NullCheck(L_73);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74;
		L_74 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_73);
		float L_75 = __this->____Value1_9;
		NullCheck(L_74);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_74, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_75, NULL);
		// CanvasImage.material.SetFloat("_Value2", _Value2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_76 = __this->___CanvasImage_22;
		NullCheck(L_76);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77;
		L_77 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_76);
		float L_78 = __this->____Value2_10;
		NullCheck(L_77);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_77, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, L_78, NULL);
		// CanvasImage.material.SetFloat("_Value3", _Value3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_79 = __this->___CanvasImage_22;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_79);
		float L_81 = __this->____Value3_11;
		NullCheck(L_80);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_80, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, L_81, NULL);
		// CanvasImage.material.SetFloat("_Value4", _Value4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_82 = __this->___CanvasImage_22;
		NullCheck(L_82);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_83;
		L_83 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_82);
		float L_84 = __this->____Value4_12;
		NullCheck(L_83);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_83, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_84, NULL);
	}

IL_02e9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_FireAdditive::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FireAdditive_OnDestroy_mF704336CD452AB5497AD902A45C8924E6632DD39 (_2dxFX_FireAdditive_t21E701631EF606D28D542026207D924E12DD6721* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_002d:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_21;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_13, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, 0, NULL);
		return;
	}

IL_0079:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_21;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_22;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_19);
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, 0, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_FireAdditive::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FireAdditive_OnDisable_m6E715215C9833B15A0A0DAE5CB7E0525DAAF99DC (_2dxFX_FireAdditive_t21E701631EF606D28D542026207D924E12DD6721* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_21;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_21;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_22;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		NullCheck(L_15);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_15, 0, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_FireAdditive::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FireAdditive_OnEnable_mA6AC6E4F82D650799784613BFCB41EDC1C8CD493 (_2dxFX_FireAdditive_t21E701631EF606D28D542026207D924E12DD6721* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_21 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_21), (void*)L_3);
	}

IL_0023:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_00b7;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_6 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_20 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_20), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_20;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_20;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		goto IL_009d;
	}

IL_007e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_009d;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_20;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
	}

IL_009d:
	{
		// __MainTex2 = Resources.Load("_2dxFX_FireTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1, NULL);
		__this->_____MainTex2_8 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_8), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		goto IL_0141;
	}

IL_00b7:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___ForceMaterial_4;
		String_t* L_20 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_21;
		L_21 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_20, NULL);
		NullCheck(L_19);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_19, L_21, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_22, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_23 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_00fa;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_25 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___ForceMaterial_4;
		NullCheck(L_25);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_25, L_26, NULL);
		goto IL_012c;
	}

IL_00fa:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_012c;
		}
	}
	{
		// Image img = CanvasImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___CanvasImage_22;
		// if (img.material == null)
		NullCheck(L_29);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30;
		L_30 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_29);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_31)
		{
			goto IL_012c;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = __this->___ForceMaterial_4;
		NullCheck(L_32);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_32, L_33);
	}

IL_012c:
	{
		// __MainTex2 = Resources.Load("_2dxFX_FireTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_34;
		L_34 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1, NULL);
		__this->_____MainTex2_8 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_34, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_8), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_34, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
	}

IL_0141:
	{
		// if (__MainTex2)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_35 = __this->_____MainTex2_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_35, NULL);
		if (!L_36)
		{
			goto IL_01c0;
		}
	}
	{
		// __MainTex2.wrapMode = TextureWrapMode.Repeat;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = __this->_____MainTex2_8;
		NullCheck(L_37);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_37, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_38 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_39)
		{
			goto IL_0184;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetTexture("_MainTex2", __MainTex2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_40 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_40);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41;
		L_41 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_40, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_42 = __this->_____MainTex2_8;
		NullCheck(L_41);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_41, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_42, NULL);
		return;
	}

IL_0184:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_43 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_43, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_44)
		{
			goto IL_01c0;
		}
	}
	{
		// Image img = CanvasImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_45 = __this->___CanvasImage_22;
		// if (img.material == null)
		NullCheck(L_45);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_46;
		L_46 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_45);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_01c0;
		}
	}
	{
		// CanvasImage.material.SetTexture("_MainTex2", __MainTex2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_22;
		NullCheck(L_48);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49;
		L_49 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_48);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_50 = __this->_____MainTex2_8;
		NullCheck(L_49);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_49, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_50, NULL);
	}

IL_01c0:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_FireAdditive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FireAdditive__ctor_m559C807105E67E9555BC1DD6C41DAE0D5A83719D (_2dxFX_FireAdditive_t21E701631EF606D28D542026207D924E12DD6721* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD040CD9DBAE11BF08B05AF12EF4A88AF1D8A39FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// private string shader = "2DxFX/Standard/FireAdditive";
		__this->___shader_6 = _stringLiteralD040CD9DBAE11BF08B05AF12EF4A88AF1D8A39FA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_6), (void*)_stringLiteralD040CD9DBAE11BF08B05AF12EF4A88AF1D8A39FA);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_7 = (1.0f);
		// [HideInInspector] [Range(64, 256)] public float _Value1 = 64;
		__this->____Value1_9 = (64.0f);
		// [HideInInspector] [Range(0, 2)] public float _Value2 = 1;
		__this->____Value2_10 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float _Value3 = 1;
		__this->____Value3_11 = (1.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_24 = (bool)1;
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
// System.Void _2dxFX_Flame::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Flame_Awake_m63FC06A3F0056306107175A440F39587E6917098 (_2dxFX_Flame_t14BDBA9767DE28C6F3D4D6CB3B4CE097379810FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_14), (void*)L_4);
	}

IL_0024:
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_15 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_15), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Flame::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Flame_Start_m0F7B41E916369DB49AD3397ACF3620CC1A7A82B9 (_2dxFX_Flame_t14BDBA9767DE28C6F3D4D6CB3B4CE097379810FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B2E394C745A9FA989279137456A6B330EDE6E47);
		s_Il2CppMethodInitialized = true;
	}
	{
		// __MainTex2 = Resources.Load("_2dxFX_FlameTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral7B2E394C745A9FA989279137456A6B330EDE6E47, NULL);
		__this->_____MainTex2_7 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_7), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		// ShaderChange = 0;
		__this->___ShaderChange_11 = 0;
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetTexture("_MainTex2", __MainTex2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->_____MainTex2_7;
		NullCheck(L_4);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_4, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_5, NULL);
		goto IL_0070;
	}

IL_0047:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		// CanvasImage.material.SetTexture("_MainTex2", __MainTex2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___CanvasImage_14;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_8);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->_____MainTex2_7;
		NullCheck(L_9);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_9, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_10, NULL);
	}

IL_0070:
	{
		// XUpdate();
		_2dxFX_Flame_XUpdate_mE4350F57AB98C02A653415E924D916F8B26C3CE9(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Flame::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Flame_CallUpdate_m5105DACFDCBCDA45CE58AFDEA626F0DF62EF6C48 (_2dxFX_Flame_t14BDBA9767DE28C6F3D4D6CB3B4CE097379810FA* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_Flame_XUpdate_mE4350F57AB98C02A653415E924D916F8B26C3CE9(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Flame::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Flame_Update_m72FD730076AEF6B0BB7FA79625973F4939BEA9A3 (_2dxFX_Flame_t14BDBA9767DE28C6F3D4D6CB3B4CE097379810FA* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_16;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_Flame_XUpdate_mE4350F57AB98C02A653415E924D916F8B26C3CE9(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Flame::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Flame_XUpdate_mE4350F57AB98C02A653415E924D916F8B26C3CE9 (_2dxFX_Flame_t14BDBA9767DE28C6F3D4D6CB3B4CE097379810FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_14 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_14), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_15 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_15), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_11;
		if (L_14)
		{
			goto IL_0109;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0109;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_11 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ForceMaterial_4;
		NullCheck(L_26);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
	}

IL_00e0:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_28, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		String_t* L_30 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_31;
		L_31 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_30, NULL);
		NullCheck(L_29);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_29, L_31, NULL);
		// ActiveChange = false;
		__this->___ActiveChange_5 = (bool)0;
	}

IL_0109:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a8;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_11;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a8;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_013f;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_013f:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_12 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_12), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_12;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_0182;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_12;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_01a1;
	}

IL_0182:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_01a1;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_12;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_01a1:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_11 = 0;
	}

IL_01a8:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_0272;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_0213;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_8;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, L_55, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Speed", _Speed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->____Speed_9;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_58, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Intensity", _Intensity);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_59 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_59);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60;
		L_60 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_59, NULL);
		float L_61 = __this->____Intensity_10;
		NullCheck(L_60);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_60, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_61, NULL);
		return;
	}

IL_0213:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_62 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_62, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_63)
		{
			goto IL_0272;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_64 = __this->___CanvasImage_14;
		NullCheck(L_64);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65;
		L_65 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_64);
		float L_66 = __this->____Alpha_8;
		NullCheck(L_65);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_65, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, L_66, NULL);
		// CanvasImage.material.SetFloat("_Intensity", _Intensity);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_67 = __this->___CanvasImage_14;
		NullCheck(L_67);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_68;
		L_68 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_67);
		float L_69 = __this->____Intensity_10;
		NullCheck(L_68);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_68, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_69, NULL);
		// CanvasImage.material.SetFloat("_Speed", _Speed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_70 = __this->___CanvasImage_14;
		NullCheck(L_70);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71;
		L_71 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_70);
		float L_72 = __this->____Speed_9;
		NullCheck(L_71);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_71, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_72, NULL);
	}

IL_0272:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Flame::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Flame_OnDestroy_m54E49B719DAFA14ED2FDB347541D985F21A066B0 (_2dxFX_Flame_t14BDBA9767DE28C6F3D4D6CB3B4CE097379810FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_002d:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_13;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_13, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, 0, NULL);
		return;
	}

IL_0079:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_13;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_14;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_19);
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, 0, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Flame::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Flame_OnDisable_m013CB5675182B2ED2B1B3CD37EC172D4142AE7B1 (_2dxFX_Flame_t14BDBA9767DE28C6F3D4D6CB3B4CE097379810FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_13;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_13;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_14;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		NullCheck(L_15);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_15, 0, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Flame::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Flame_OnEnable_m20F84C34A912BBC00BBD8AED105F95CF13DAD396 (_2dxFX_Flame_t14BDBA9767DE28C6F3D4D6CB3B4CE097379810FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B2E394C745A9FA989279137456A6B330EDE6E47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_13), (void*)L_3);
	}

IL_0023:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_00b4;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_6 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_12), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_12;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_12;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		goto IL_009d;
	}

IL_007e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_009d;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_12;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
	}

IL_009d:
	{
		// __MainTex2 = Resources.Load("_2dxFX_FlameTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral7B2E394C745A9FA989279137456A6B330EDE6E47, NULL);
		__this->_____MainTex2_7 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_7), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		goto IL_012b;
	}

IL_00b4:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___ForceMaterial_4;
		String_t* L_20 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_21;
		L_21 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_20, NULL);
		NullCheck(L_19);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_19, L_21, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_22, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_23 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_00f7;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_25 = __this->___CanvasSpriteRenderer_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___ForceMaterial_4;
		NullCheck(L_25);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_25, L_26, NULL);
		goto IL_0116;
	}

IL_00f7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_0116;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___CanvasImage_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___ForceMaterial_4;
		NullCheck(L_29);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_29, L_30);
	}

IL_0116:
	{
		// __MainTex2 = Resources.Load("_2dxFX_FlameTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31;
		L_31 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral7B2E394C745A9FA989279137456A6B330EDE6E47, NULL);
		__this->_____MainTex2_7 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_7), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
	}

IL_012b:
	{
		// if (__MainTex2)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_32 = __this->_____MainTex2_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_32, NULL);
		if (!L_33)
		{
			goto IL_0197;
		}
	}
	{
		// __MainTex2.wrapMode = TextureWrapMode.Repeat;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = __this->_____MainTex2_7;
		NullCheck(L_34);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_34, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_35 = __this->___CanvasSpriteRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_016e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetTexture("_MainTex2", __MainTex2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_37 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_37);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38;
		L_38 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_37, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = __this->_____MainTex2_7;
		NullCheck(L_38);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_38, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_39, NULL);
		return;
	}

IL_016e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_40, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_41)
		{
			goto IL_0197;
		}
	}
	{
		// CanvasImage.material.SetTexture("_MainTex2", __MainTex2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___CanvasImage_14;
		NullCheck(L_42);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43;
		L_43 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_42);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = __this->_____MainTex2_7;
		NullCheck(L_43);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_43, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_44, NULL);
	}

IL_0197:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Flame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Flame__ctor_m8438775F5D4880A1DDAE7552D1F66DD983B5ECBA (_2dxFX_Flame_t14BDBA9767DE28C6F3D4D6CB3B4CE097379810FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5073C2BBD522115CC0FA5C1944383E429DF2CB4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// private string shader = "2DxFX/Standard/Flame";
		__this->___shader_6 = _stringLiteral5073C2BBD522115CC0FA5C1944383E429DF2CB4D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_6), (void*)_stringLiteral5073C2BBD522115CC0FA5C1944383E429DF2CB4D);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_8 = (1.0f);
		// [HideInInspector] [Range(-2f, 2f)] public float _Speed = 1f;
		__this->____Speed_9 = (1.0f);
		// [HideInInspector] [Range(0f, 2f)] public float _Intensity = 1f;
		__this->____Intensity_10 = (1.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_16 = (bool)1;
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
// System.Void _2dxFX_FlameAdditive::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FlameAdditive_Awake_m91946A3424F6564A59619815F54ACF034FAFE123 (_2dxFX_FlameAdditive_t9E5117F19945E7DB198384CA46F07B88001DEF40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_16), (void*)L_4);
	}

IL_0024:
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_14), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_FlameAdditive::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FlameAdditive_Start_m68220DB87EF4241E287041CF73D3A85FE034B314 (_2dxFX_FlameAdditive_t9E5117F19945E7DB198384CA46F07B88001DEF40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B2E394C745A9FA989279137456A6B330EDE6E47);
		s_Il2CppMethodInitialized = true;
	}
	{
		// __MainTex2 = Resources.Load("_2dxFX_FlameTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral7B2E394C745A9FA989279137456A6B330EDE6E47, NULL);
		__this->_____MainTex2_7 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_7), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		// ShaderChange = 0;
		__this->___ShaderChange_11 = 0;
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetTexture("_MainTex2", __MainTex2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___CanvasSpriteRenderer_14;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->_____MainTex2_7;
		NullCheck(L_4);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_4, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_5, NULL);
		goto IL_0070;
	}

IL_0047:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		// CanvasImage.material.SetTexture("_MainTex2", __MainTex2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___CanvasImage_16;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_8);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->_____MainTex2_7;
		NullCheck(L_9);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_9, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_10, NULL);
	}

IL_0070:
	{
		// XUpdate();
		_2dxFX_FlameAdditive_XUpdate_m4FB4E43C1861843F7EA8D14BD15ED9079E744B2E(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_FlameAdditive::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FlameAdditive_CallUpdate_mF9307169F16E2737E95678F7D5369725747088EA (_2dxFX_FlameAdditive_t9E5117F19945E7DB198384CA46F07B88001DEF40* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_FlameAdditive_XUpdate_m4FB4E43C1861843F7EA8D14BD15ED9079E744B2E(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_FlameAdditive::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FlameAdditive_Update_m4155412F4EDC0E52024A2EE9BF7E486E43EE8207 (_2dxFX_FlameAdditive_t9E5117F19945E7DB198384CA46F07B88001DEF40* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_15;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_FlameAdditive_XUpdate_m4FB4E43C1861843F7EA8D14BD15ED9079E744B2E(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_FlameAdditive::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FlameAdditive_XUpdate_m4FB4E43C1861843F7EA8D14BD15ED9079E744B2E (_2dxFX_FlameAdditive_t9E5117F19945E7DB198384CA46F07B88001DEF40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_16), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_14 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_14), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_11;
		if (L_14)
		{
			goto IL_0109;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0109;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_11 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null) CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// if (CanvasSpriteRenderer != null) CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null) CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// else if (CanvasImage != null) CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ForceMaterial_4;
		NullCheck(L_26);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
	}

IL_00e0:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_28, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		String_t* L_30 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_31;
		L_31 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_30, NULL);
		NullCheck(L_29);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_29, L_31, NULL);
		// ActiveChange = false;
		__this->___ActiveChange_5 = (bool)0;
	}

IL_0109:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a8;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_11;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a8;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_013f;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_013f:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_12 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_12), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_12;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_0182;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_12;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_01a1;
	}

IL_0182:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_01a1;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_12;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_01a1:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_11 = 0;
	}

IL_01a8:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_0272;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_0213;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_14;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_8;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, L_55, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Speed", _Speed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_14;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->____Speed_9;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_58, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Intensity", _Intensity);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_59 = __this->___CanvasSpriteRenderer_14;
		NullCheck(L_59);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60;
		L_60 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_59, NULL);
		float L_61 = __this->____Intensity_10;
		NullCheck(L_60);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_60, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_61, NULL);
		return;
	}

IL_0213:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_62 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_62, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_63)
		{
			goto IL_0272;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_64 = __this->___CanvasImage_16;
		NullCheck(L_64);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65;
		L_65 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_64);
		float L_66 = __this->____Alpha_8;
		NullCheck(L_65);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_65, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, L_66, NULL);
		// CanvasImage.material.SetFloat("_Intensity", _Intensity);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_67 = __this->___CanvasImage_16;
		NullCheck(L_67);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_68;
		L_68 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_67);
		float L_69 = __this->____Intensity_10;
		NullCheck(L_68);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_68, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_69, NULL);
		// CanvasImage.material.SetFloat("_Speed", _Speed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_70 = __this->___CanvasImage_16;
		NullCheck(L_70);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71;
		L_71 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_70);
		float L_72 = __this->____Speed_9;
		NullCheck(L_71);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_71, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_72, NULL);
	}

IL_0272:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_FlameAdditive::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FlameAdditive_OnDestroy_mEA378A968A422200380209F9C45B767513CBBC89 (_2dxFX_FlameAdditive_t9E5117F19945E7DB198384CA46F07B88001DEF40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_002d:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_13;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_14;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_13, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, 0, NULL);
		return;
	}

IL_0079:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_13;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_16;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_19);
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, 0, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_FlameAdditive::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FlameAdditive_OnDisable_m56FD2CCBB4C071BF23AD6DCD7500C46EDDBCD721 (_2dxFX_FlameAdditive_t9E5117F19945E7DB198384CA46F07B88001DEF40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_13;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_14;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_13;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_16;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		NullCheck(L_15);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_15, 0, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_FlameAdditive::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FlameAdditive_OnEnable_m6FB2075830C9E3C023AE6E33FAD9CE81407D5602 (_2dxFX_FlameAdditive_t9E5117F19945E7DB198384CA46F07B88001DEF40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B2E394C745A9FA989279137456A6B330EDE6E47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_13), (void*)L_3);
	}

IL_0023:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_00b4;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_6 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_12), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_12;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_12;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		goto IL_009d;
	}

IL_007e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_009d;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_12;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
	}

IL_009d:
	{
		// __MainTex2 = Resources.Load("_2dxFX_FlameTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral7B2E394C745A9FA989279137456A6B330EDE6E47, NULL);
		__this->_____MainTex2_7 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_7), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		goto IL_012b;
	}

IL_00b4:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___ForceMaterial_4;
		String_t* L_20 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_21;
		L_21 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_20, NULL);
		NullCheck(L_19);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_19, L_21, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_22, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_23 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_00f7;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_25 = __this->___CanvasSpriteRenderer_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___ForceMaterial_4;
		NullCheck(L_25);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_25, L_26, NULL);
		goto IL_0116;
	}

IL_00f7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_0116;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___ForceMaterial_4;
		NullCheck(L_29);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_29, L_30);
	}

IL_0116:
	{
		// __MainTex2 = Resources.Load("_2dxFX_FlameTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31;
		L_31 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral7B2E394C745A9FA989279137456A6B330EDE6E47, NULL);
		__this->_____MainTex2_7 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_7), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
	}

IL_012b:
	{
		// if (__MainTex2)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_32 = __this->_____MainTex2_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_32, NULL);
		if (!L_33)
		{
			goto IL_0197;
		}
	}
	{
		// __MainTex2.wrapMode = TextureWrapMode.Repeat;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = __this->_____MainTex2_7;
		NullCheck(L_34);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_34, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_35 = __this->___CanvasSpriteRenderer_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_016e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetTexture("_MainTex2", __MainTex2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_37 = __this->___CanvasSpriteRenderer_14;
		NullCheck(L_37);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38;
		L_38 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_37, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = __this->_____MainTex2_7;
		NullCheck(L_38);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_38, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_39, NULL);
		return;
	}

IL_016e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_40, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_41)
		{
			goto IL_0197;
		}
	}
	{
		// CanvasImage.material.SetTexture("_MainTex2", __MainTex2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___CanvasImage_16;
		NullCheck(L_42);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43;
		L_43 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_42);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = __this->_____MainTex2_7;
		NullCheck(L_43);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_43, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_44, NULL);
	}

IL_0197:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_FlameAdditive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_FlameAdditive__ctor_m9E303694245D28B5D8A02226EF7E64EC06A88B99 (_2dxFX_FlameAdditive_t9E5117F19945E7DB198384CA46F07B88001DEF40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BE42EC7BAF495A63C4A39C9EC2E5F176D0A7A7B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// private string shader = "2DxFX/Standard/FlameAdditive";
		__this->___shader_6 = _stringLiteral7BE42EC7BAF495A63C4A39C9EC2E5F176D0A7A7B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_6), (void*)_stringLiteral7BE42EC7BAF495A63C4A39C9EC2E5F176D0A7A7B);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_8 = (1.0f);
		// [HideInInspector] [Range(-2f, 2f)] public float _Speed = 1f;
		__this->____Speed_9 = (1.0f);
		// [HideInInspector] [Range(0f, 2f)] public float _Intensity = 1f;
		__this->____Intensity_10 = (1.0f);
		// SpriteRenderer CanvasSpriteRenderer; [HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_15 = (bool)1;
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
// System.Void _2dxFX_Frozen::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Frozen_Awake_m7396E45B79E961BD756DB301D4BAFC4447DF1DC7 (_2dxFX_Frozen_t3DB1A04D8FFCC9E572916C785B40DE5879EAE222* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_22 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_22), (void*)L_4);
	}

IL_0024:
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_23 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_23), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Frozen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Frozen_Start_m2DA809DE93009D847B6F8F6A97B493FD28666839 (_2dxFX_Frozen_t3DB1A04D8FFCC9E572916C785B40DE5879EAE222* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B320216F6F6FE23325BCE983AAB3CE5DF975015);
		s_Il2CppMethodInitialized = true;
	}
	{
		// __MainTex2 = Resources.Load("_2dxFX_FrozenTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral2B320216F6F6FE23325BCE983AAB3CE5DF975015, NULL);
		__this->_____MainTex2_8 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_8), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		// ShaderChange = 0;
		__this->___ShaderChange_19 = 0;
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetTexture("_MainTex2", __MainTex2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->_____MainTex2_8;
		NullCheck(L_4);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_4, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_5, NULL);
		goto IL_0070;
	}

IL_0047:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		// CanvasImage.material.SetTexture("_MainTex2", __MainTex2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___CanvasImage_22;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_8);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->_____MainTex2_8;
		NullCheck(L_9);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_9, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_10, NULL);
	}

IL_0070:
	{
		// XUpdate();
		_2dxFX_Frozen_XUpdate_mEB5D841DAB6AA24CD6A7C4D5D265B1822EB248E0(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Frozen::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Frozen_CallUpdate_mB0380C662F877680FED722177FB2DE8800B19A3F (_2dxFX_Frozen_t3DB1A04D8FFCC9E572916C785B40DE5879EAE222* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_Frozen_XUpdate_mEB5D841DAB6AA24CD6A7C4D5D265B1822EB248E0(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Frozen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Frozen_Update_m02003921705D7BC93581C276542E16D751BE1C72 (_2dxFX_Frozen_t3DB1A04D8FFCC9E572916C785B40DE5879EAE222* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_24;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_Frozen_XUpdate_mEB5D841DAB6AA24CD6A7C4D5D265B1822EB248E0(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Frozen::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Frozen_XUpdate_mEB5D841DAB6AA24CD6A7C4D5D265B1822EB248E0 (_2dxFX_Frozen_t3DB1A04D8FFCC9E572916C785B40DE5879EAE222* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_22 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_22), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_23 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_23), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_19;
		if (L_14)
		{
			goto IL_0102;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0102;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_19 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ForceMaterial_4;
		NullCheck(L_26);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
	}

IL_00e0:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_28, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		String_t* L_30 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_31;
		L_31 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_30, NULL);
		NullCheck(L_29);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_29, L_31, NULL);
	}

IL_0102:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a1;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_19;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_0138;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_20 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_20), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_20;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_017b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_20;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_019a;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_20;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_19 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_02e9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_024b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_7;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value1", _Value1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->____Value1_9;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_58, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value2", _Value2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_59 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_59);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60;
		L_60 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_59, NULL);
		float L_61 = __this->____Value2_10;
		NullCheck(L_60);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_60, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, L_61, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value3", _Value3);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_62 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_62);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_63;
		L_63 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_62, NULL);
		float L_64 = __this->____Value3_11;
		NullCheck(L_63);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_63, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, L_64, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value4", _Value4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_65);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66;
		L_66 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_65, NULL);
		float L_67 = __this->____Value4_12;
		NullCheck(L_66);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_66, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_67, NULL);
		return;
	}

IL_024b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_68 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_68, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_69)
		{
			goto IL_02e9;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_70 = __this->___CanvasImage_22;
		NullCheck(L_70);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71;
		L_71 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_70);
		float L_72 = __this->____Alpha_7;
		NullCheck(L_71);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_71, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_72)), NULL);
		// CanvasImage.material.SetFloat("_Value1", _Value1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_73 = __this->___CanvasImage_22;
		NullCheck(L_73);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74;
		L_74 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_73);
		float L_75 = __this->____Value1_9;
		NullCheck(L_74);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_74, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_75, NULL);
		// CanvasImage.material.SetFloat("_Value2", _Value2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_76 = __this->___CanvasImage_22;
		NullCheck(L_76);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77;
		L_77 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_76);
		float L_78 = __this->____Value2_10;
		NullCheck(L_77);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_77, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, L_78, NULL);
		// CanvasImage.material.SetFloat("_Value3", _Value3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_79 = __this->___CanvasImage_22;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_79);
		float L_81 = __this->____Value3_11;
		NullCheck(L_80);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_80, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, L_81, NULL);
		// CanvasImage.material.SetFloat("_Value4", _Value4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_82 = __this->___CanvasImage_22;
		NullCheck(L_82);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_83;
		L_83 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_82);
		float L_84 = __this->____Value4_12;
		NullCheck(L_83);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_83, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_84, NULL);
	}

IL_02e9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Frozen::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Frozen_OnDestroy_m525DC13EA63BF23B7B08FBB5E037E45150CC3D9D (_2dxFX_Frozen_t3DB1A04D8FFCC9E572916C785B40DE5879EAE222* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_002d:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_21;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_13, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, 0, NULL);
		return;
	}

IL_0079:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_21;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_22;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_19);
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, 0, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Frozen::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Frozen_OnDisable_mC07D0022802297AB0DC9E5502B62643C6D3A4159 (_2dxFX_Frozen_t3DB1A04D8FFCC9E572916C785B40DE5879EAE222* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_21;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_21;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_22;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		NullCheck(L_15);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_15, 0, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Frozen::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Frozen_OnEnable_mB96FA9D99D45464CE655FAE4AE76E013487EEF64 (_2dxFX_Frozen_t3DB1A04D8FFCC9E572916C785B40DE5879EAE222* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B320216F6F6FE23325BCE983AAB3CE5DF975015);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_21 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_21), (void*)L_3);
	}

IL_0023:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_00b4;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_6 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_20 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_20), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_20;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_20;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		goto IL_009d;
	}

IL_007e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_009d;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_20;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
	}

IL_009d:
	{
		// __MainTex2 = Resources.Load("_2dxFX_FrozenTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral2B320216F6F6FE23325BCE983AAB3CE5DF975015, NULL);
		__this->_____MainTex2_8 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_8), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		goto IL_012b;
	}

IL_00b4:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___ForceMaterial_4;
		String_t* L_20 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_21;
		L_21 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_20, NULL);
		NullCheck(L_19);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_19, L_21, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_22, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_23 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_00f7;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_25 = __this->___CanvasSpriteRenderer_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___ForceMaterial_4;
		NullCheck(L_25);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_25, L_26, NULL);
		goto IL_0116;
	}

IL_00f7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_0116;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___CanvasImage_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___ForceMaterial_4;
		NullCheck(L_29);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_29, L_30);
	}

IL_0116:
	{
		// __MainTex2 = Resources.Load("_2dxFX_FrozenTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31;
		L_31 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral2B320216F6F6FE23325BCE983AAB3CE5DF975015, NULL);
		__this->_____MainTex2_8 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_8), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
	}

IL_012b:
	{
		// if (__MainTex2)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_32 = __this->_____MainTex2_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_32, NULL);
		if (!L_33)
		{
			goto IL_0197;
		}
	}
	{
		// __MainTex2.wrapMode = TextureWrapMode.Repeat;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = __this->_____MainTex2_8;
		NullCheck(L_34);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_34, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_35 = __this->___CanvasSpriteRenderer_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_016e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetTexture("_MainTex2", __MainTex2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_37 = __this->___CanvasSpriteRenderer_23;
		NullCheck(L_37);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38;
		L_38 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_37, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = __this->_____MainTex2_8;
		NullCheck(L_38);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_38, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_39, NULL);
		return;
	}

IL_016e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40 = __this->___CanvasImage_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_40, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_41)
		{
			goto IL_0197;
		}
	}
	{
		// CanvasImage.material.SetTexture("_MainTex2", __MainTex2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___CanvasImage_22;
		NullCheck(L_42);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43;
		L_43 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_42);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = __this->_____MainTex2_8;
		NullCheck(L_43);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_43, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_44, NULL);
	}

IL_0197:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Frozen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Frozen__ctor_mAA7DBA628C8FE60E914B03B8504ACE0ED23F54D2 (_2dxFX_Frozen_t3DB1A04D8FFCC9E572916C785B40DE5879EAE222* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB49BBDAA036916B45BD1A2A1FA6A05E6CC500E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// private string shader = "2DxFX/Standard/Frozen";
		__this->___shader_6 = _stringLiteralCB49BBDAA036916B45BD1A2A1FA6A05E6CC500E3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_6), (void*)_stringLiteralCB49BBDAA036916B45BD1A2A1FA6A05E6CC500E3);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_7 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float _Value1 = 0.5f;
		__this->____Value1_9 = (0.5f);
		// [HideInInspector] [Range(0, 1)] public float _Value2 = 1;
		__this->____Value2_10 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float _Value3 = 1;
		__this->____Value3_11 = (1.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_24 = (bool)1;
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
// System.Void _2dxFX_Ghost::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ghost_Awake_m73382E22348FC30806005621DAB60DFE85ACCF8D (_2dxFX_Ghost_t26BD0413C9E00EC8834C8B267F5371824EE19FDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_16), (void*)L_4);
	}

IL_0024:
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_17 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_17), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Ghost::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ghost_Start_mDCB425C5EB9E4CDD0D867B92ECF0D483D24E29FC (_2dxFX_Ghost_t26BD0413C9E00EC8834C8B267F5371824EE19FDA* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_13 = 0;
		// XUpdate();
		_2dxFX_Ghost_XUpdate_mE0B94322E5E18678FCA904939F9BEE96D312D9F7(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Ghost::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ghost_CallUpdate_m316B98CD8CCCB34685A7A7E3853C227A989BAFA4 (_2dxFX_Ghost_t26BD0413C9E00EC8834C8B267F5371824EE19FDA* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_Ghost_XUpdate_mE0B94322E5E18678FCA904939F9BEE96D312D9F7(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_Ghost::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ghost_Update_mBC4C8DDFBE72A840B337F8257B30328447688C04 (_2dxFX_Ghost_t26BD0413C9E00EC8834C8B267F5371824EE19FDA* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_18;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_Ghost_XUpdate_mE0B94322E5E18678FCA904939F9BEE96D312D9F7(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Ghost::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ghost_XUpdate_mE0B94322E5E18678FCA904939F9BEE96D312D9F7 (_2dxFX_Ghost_t26BD0413C9E00EC8834C8B267F5371824EE19FDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C26F33C0DE4C81DCEA6058BFCECF194E6A820D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D353D53F4C8F559C72530CD77E0A1517FA9447B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55C14E004F846FB099A44A6870DA7B59B01FF067);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58EE991C0D62941158D2C3989C441E4E000D65E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA072EB754C30E9D13AA23AA4AB225FECC2493CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_16), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_17 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_17), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_13;
		if (L_14)
		{
			goto IL_0102;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0102;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_13 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ForceMaterial_4;
		NullCheck(L_26);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
	}

IL_00e0:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_28, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		String_t* L_30 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_31;
		L_31 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_30, NULL);
		NullCheck(L_29);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_29, L_31, NULL);
	}

IL_0102:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a1;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_13;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_0138;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_14 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_14), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_14;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_017b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_14;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_019a;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_14;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_13 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_034f;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_027e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_ClipLeft", 1 - _ClipLeft);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____ClipLeft_9;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralDA072EB754C30E9D13AA23AA4AB225FECC2493CD, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_ClipRight", 1 - _ClipRight);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->____ClipRight_10;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteral55C14E004F846FB099A44A6870DA7B59B01FF067, ((float)il2cpp_codegen_subtract((1.0f), L_58)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_ClipUp", 1 - _ClipUp);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_59 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_59);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60;
		L_60 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_59, NULL);
		float L_61 = __this->____ClipUp_11;
		NullCheck(L_60);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_60, _stringLiteral1D353D53F4C8F559C72530CD77E0A1517FA9447B, ((float)il2cpp_codegen_subtract((1.0f), L_61)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_ClipDown", 1 - _ClipDown);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_62 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_62);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_63;
		L_63 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_62, NULL);
		float L_64 = __this->____ClipDown_12;
		NullCheck(L_63);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_63, _stringLiteral1C26F33C0DE4C81DCEA6058BFCECF194E6A820D1, ((float)il2cpp_codegen_subtract((1.0f), L_64)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_65);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66;
		L_66 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_65, NULL);
		float L_67 = __this->____Alpha_7;
		NullCheck(L_66);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_66, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_67)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_offset", _offset);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_68);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69;
		L_69 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_68, NULL);
		float L_70 = __this->____offset_8;
		NullCheck(L_69);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_69, _stringLiteral58EE991C0D62941158D2C3989C441E4E000D65E0, L_70, NULL);
		return;
	}

IL_027e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_71 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_71, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_72)
		{
			goto IL_034f;
		}
	}
	{
		// CanvasImage.material.SetFloat("_ClipLeft", 1 - _ClipLeft);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_73 = __this->___CanvasImage_16;
		NullCheck(L_73);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74;
		L_74 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_73);
		float L_75 = __this->____ClipLeft_9;
		NullCheck(L_74);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_74, _stringLiteralDA072EB754C30E9D13AA23AA4AB225FECC2493CD, ((float)il2cpp_codegen_subtract((1.0f), L_75)), NULL);
		// CanvasImage.material.SetFloat("_ClipRight", 1 - _ClipRight);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_76 = __this->___CanvasImage_16;
		NullCheck(L_76);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77;
		L_77 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_76);
		float L_78 = __this->____ClipRight_10;
		NullCheck(L_77);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_77, _stringLiteral55C14E004F846FB099A44A6870DA7B59B01FF067, ((float)il2cpp_codegen_subtract((1.0f), L_78)), NULL);
		// CanvasImage.material.SetFloat("_ClipUp", 1 - _ClipUp);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_79 = __this->___CanvasImage_16;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_79);
		float L_81 = __this->____ClipUp_11;
		NullCheck(L_80);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_80, _stringLiteral1D353D53F4C8F559C72530CD77E0A1517FA9447B, ((float)il2cpp_codegen_subtract((1.0f), L_81)), NULL);
		// CanvasImage.material.SetFloat("_ClipDown", 1 - _ClipDown);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_82 = __this->___CanvasImage_16;
		NullCheck(L_82);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_83;
		L_83 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_82);
		float L_84 = __this->____ClipDown_12;
		NullCheck(L_83);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_83, _stringLiteral1C26F33C0DE4C81DCEA6058BFCECF194E6A820D1, ((float)il2cpp_codegen_subtract((1.0f), L_84)), NULL);
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_85 = __this->___CanvasImage_16;
		NullCheck(L_85);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_86;
		L_86 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_85);
		float L_87 = __this->____Alpha_7;
		NullCheck(L_86);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_86, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_87)), NULL);
		// CanvasImage.material.SetFloat("_offset", _offset);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_88 = __this->___CanvasImage_16;
		NullCheck(L_88);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89;
		L_89 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_88);
		float L_90 = __this->____offset_8;
		NullCheck(L_89);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_89, _stringLiteral58EE991C0D62941158D2C3989C441E4E000D65E0, L_90, NULL);
	}

IL_034f:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Ghost::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ghost_OnDestroy_m096CBB1C20427916AD82EA2F32D5BAE256427BDE (_2dxFX_Ghost_t26BD0413C9E00EC8834C8B267F5371824EE19FDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_002d:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_15;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_13, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, 0, NULL);
		return;
	}

IL_0079:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_15;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_16;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_19);
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, 0, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Ghost::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ghost_OnDisable_mEDDC65A79803015A3386F4B046F52A585A3FBC47 (_2dxFX_Ghost_t26BD0413C9E00EC8834C8B267F5371824EE19FDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_15;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_15;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_16;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		NullCheck(L_15);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_15, 0, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Ghost::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ghost_OnEnable_mDAB7F94D52ED5D664739B94D916EDD8A6849A06D (_2dxFX_Ghost_t26BD0413C9E00EC8834C8B267F5371824EE19FDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_15), (void*)L_3);
	}

IL_0023:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_6 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_14), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_14;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_14;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_14;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20;
		L_20 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_19, NULL);
		NullCheck(L_18);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_18, L_20, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___ForceMaterial_4;
		NullCheck(L_21);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00dc;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		return;
	}

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_28, L_29);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_Ghost::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_Ghost__ctor_mAAB8C45617D779F432D0710D2671E2A89CBFAB0D (_2dxFX_Ghost_t26BD0413C9E00EC8834C8B267F5371824EE19FDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1402AC68467C6C648E65DC462376B1547FFED9A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// private string shader = "2DxFX/Standard/Ghost";
		__this->___shader_6 = _stringLiteral1402AC68467C6C648E65DC462376B1547FFED9A9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_6), (void*)_stringLiteral1402AC68467C6C648E65DC462376B1547FFED9A9);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_7 = (1.0f);
		// [HideInInspector] [Range(0f, 1f)] public float _offset = 0.4f;
		__this->____offset_8 = (0.400000006f);
		// [HideInInspector] [Range(0f, 1f)] public float _ClipLeft = 0.4f;
		__this->____ClipLeft_9 = (0.400000006f);
		// [HideInInspector] [Range(0f, 1f)] public float _ClipRight = 0.2f;
		__this->____ClipRight_10 = (0.200000003f);
		// [HideInInspector] [Range(0f, 1f)] public float _ClipUp = 0.1f;
		__this->____ClipUp_11 = (0.100000001f);
		// [HideInInspector] [Range(0f, 1f)] public float _ClipDown = 0.5f;
		__this->____ClipDown_12 = (0.5f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_18 = (bool)1;
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
// System.Void _2dxFX_GoldenFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_Awake_m29B84C170007FEF3999001C26E0A391AE406B1BD (_2dxFX_GoldenFX_t21206D984DE5FBEADB1C14CC16127C91C026E1EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_12), (void*)L_4);
	}

IL_0024:
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_13 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_13), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldenFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_Start_m8B72E13002830A0E4FCF5295002A5D95D491568E (_2dxFX_GoldenFX_t21206D984DE5FBEADB1C14CC16127C91C026E1EC* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_9 = 0;
		// XUpdate();
		_2dxFX_GoldenFX_XUpdate_mC065EE01C1B550CA3A7EDF26939608A9BD91C770(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_GoldenFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_CallUpdate_m41368BF279FEBC4F18D41F80F2E0D032AFEC3A34 (_2dxFX_GoldenFX_t21206D984DE5FBEADB1C14CC16127C91C026E1EC* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_GoldenFX_XUpdate_mC065EE01C1B550CA3A7EDF26939608A9BD91C770(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_GoldenFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_Update_m288108DFF77926143E8BF610D20A51F4C8B194BC (_2dxFX_GoldenFX_t21206D984DE5FBEADB1C14CC16127C91C026E1EC* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_14;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_GoldenFX_XUpdate_mC065EE01C1B550CA3A7EDF26939608A9BD91C770(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldenFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_XUpdate_mC065EE01C1B550CA3A7EDF26939608A9BD91C770 (_2dxFX_GoldenFX_t21206D984DE5FBEADB1C14CC16127C91C026E1EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_12), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_13), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_9;
		if (L_14)
		{
			goto IL_0102;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0102;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_9 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ForceMaterial_4;
		NullCheck(L_26);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
	}

IL_00e0:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_28, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		String_t* L_30 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_31;
		L_31 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_30, NULL);
		NullCheck(L_29);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_29, L_31, NULL);
	}

IL_0102:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a1;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_9;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_0138;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_10 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_10), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_10;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_017b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_10;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_019a;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_10;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_9 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_0241;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_01f7;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_13;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_7;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Golden);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_13;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->___Golden_8;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_58, NULL);
		return;
	}

IL_01f7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_59 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_59, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_60)
		{
			goto IL_0241;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_61 = __this->___CanvasImage_12;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_61);
		float L_63 = __this->____Alpha_7;
		NullCheck(L_62);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_62, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_63)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Golden);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_64 = __this->___CanvasImage_12;
		NullCheck(L_64);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65;
		L_65 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_64);
		float L_66 = __this->___Golden_8;
		NullCheck(L_65);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_65, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_66, NULL);
	}

IL_0241:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldenFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_OnDestroy_m931608069557E6E42425CF64660537E3FFE41553 (_2dxFX_GoldenFX_t21206D984DE5FBEADB1C14CC16127C91C026E1EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_002d:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_11;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_13;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_13, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, 0, NULL);
		return;
	}

IL_0079:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_11;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_12;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_19);
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, 0, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldenFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_OnDisable_m86D65E6239F1C8D549CABE238AA4CF9B3EE9BA62 (_2dxFX_GoldenFX_t21206D984DE5FBEADB1C14CC16127C91C026E1EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_11;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_13;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_11;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_12;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		NullCheck(L_15);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_15, 0, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldenFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX_OnEnable_mDB2E2B4411F0C64567BEF95FB99BBC7D1790632F (_2dxFX_GoldenFX_t21206D984DE5FBEADB1C14CC16127C91C026E1EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_11), (void*)L_3);
	}

IL_0023:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_6 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_10), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_10;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_10;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_10;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20;
		L_20 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_19, NULL);
		NullCheck(L_18);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_18, L_20, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___ForceMaterial_4;
		NullCheck(L_21);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00dc;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		return;
	}

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_28, L_29);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldenFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldenFX__ctor_m9AD0BC59F07D399BE8202275338B50349DF2294B (_2dxFX_GoldenFX_t21206D984DE5FBEADB1C14CC16127C91C026E1EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69C9230FB0C7F891F4264EBA12C85C9C1E073237);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// private string shader = "2DxFX/Standard/GoldenFX";
		__this->___shader_6 = _stringLiteral69C9230FB0C7F891F4264EBA12C85C9C1E073237;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_6), (void*)_stringLiteral69C9230FB0C7F891F4264EBA12C85C9C1E073237);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_7 = (1.0f);
		// [HideInInspector] [Range(0.001f, 4f)] public float Golden = 1.0f;
		__this->___Golden_8 = (1.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_14 = (bool)1;
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
// System.Void _2dxFX_GoldFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldFX_Awake_mD87ED9FBEA2560C4C3B5B01D6CE2BFFEB5BEDA1D (_2dxFX_GoldFX_t78DED9E7706AAC502B94114EB61ACC5A3200A60D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_12), (void*)L_4);
	}

IL_0024:
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_13 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_13), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldFX_Start_mB8C12C02D215997C6266A2D1FAF2B2E8ABAE3EE1 (_2dxFX_GoldFX_t78DED9E7706AAC502B94114EB61ACC5A3200A60D* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_9 = 0;
		// XUpdate();
		_2dxFX_GoldFX_XUpdate_mFE02377BE8E5A2CD976341E1660D40BEB297B6C5(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_GoldFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldFX_CallUpdate_m0C810406D364AC4F7230019BE07773470C4E6521 (_2dxFX_GoldFX_t78DED9E7706AAC502B94114EB61ACC5A3200A60D* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_GoldFX_XUpdate_mFE02377BE8E5A2CD976341E1660D40BEB297B6C5(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_GoldFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldFX_Update_mCB0F2FB3F8D191D65F364008702222CC9AC1AA76 (_2dxFX_GoldFX_t78DED9E7706AAC502B94114EB61ACC5A3200A60D* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_14;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_GoldFX_XUpdate_mFE02377BE8E5A2CD976341E1660D40BEB297B6C5(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldFX_XUpdate_mFE02377BE8E5A2CD976341E1660D40BEB297B6C5 (_2dxFX_GoldFX_t78DED9E7706AAC502B94114EB61ACC5A3200A60D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_12), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_13), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_9;
		if (L_14)
		{
			goto IL_0102;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0102;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_9 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ForceMaterial_4;
		NullCheck(L_26);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
	}

IL_00e0:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_28, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		String_t* L_30 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_31;
		L_31 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_30, NULL);
		NullCheck(L_29);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_29, L_31, NULL);
	}

IL_0102:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a1;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_9;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_0138;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_10 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_10), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_10;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_017b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_10;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_019a;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_10;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_9 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_0241;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_01f7;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_13;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_7;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Gold);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_13;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->___Gold_8;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_58, NULL);
		return;
	}

IL_01f7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_59 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_59, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_60)
		{
			goto IL_0241;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_61 = __this->___CanvasImage_12;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_61);
		float L_63 = __this->____Alpha_7;
		NullCheck(L_62);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_62, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_63)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Gold);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_64 = __this->___CanvasImage_12;
		NullCheck(L_64);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65;
		L_65 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_64);
		float L_66 = __this->___Gold_8;
		NullCheck(L_65);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_65, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_66, NULL);
	}

IL_0241:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldFX_OnDestroy_m82C5E9DECAF2F4C00A5EC5D68D8E7A8D4A8BA11E (_2dxFX_GoldFX_t78DED9E7706AAC502B94114EB61ACC5A3200A60D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_002d:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_11;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_13;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_13, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, 0, NULL);
		return;
	}

IL_0079:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_11;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_12;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_19);
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, 0, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldFX_OnDisable_m219E5DFA0066F3AFA668F75D3D19E86DCD580ACB (_2dxFX_GoldFX_t78DED9E7706AAC502B94114EB61ACC5A3200A60D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_11;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_13;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_11;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_12;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		NullCheck(L_15);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_15, 0, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldFX_OnEnable_mC9B7A1BD93D88756C82B080DDF4C273AE2F6F3D2 (_2dxFX_GoldFX_t78DED9E7706AAC502B94114EB61ACC5A3200A60D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_11), (void*)L_3);
	}

IL_0023:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_6 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_10), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_10;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_10;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_10;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20;
		L_20 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_19, NULL);
		NullCheck(L_18);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_18, L_20, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___ForceMaterial_4;
		NullCheck(L_21);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00dc;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		return;
	}

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00fb;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_28, L_29);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GoldFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GoldFX__ctor_m142FB7B3F995E792421B59AB03A85C29B0C8C103 (_2dxFX_GoldFX_t78DED9E7706AAC502B94114EB61ACC5A3200A60D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral536CE248DF0F8851543CF40C1896A8A6A821B100);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// private string shader = "2DxFX/Standard/GoldFX";
		__this->___shader_6 = _stringLiteral536CE248DF0F8851543CF40C1896A8A6A821B100;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_6), (void*)_stringLiteral536CE248DF0F8851543CF40C1896A8A6A821B100);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_7 = (1.0f);
		// [HideInInspector] [Range(0.001f, 4f)] public float Gold = 1.0f;
		__this->___Gold_8 = (1.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_14 = (bool)1;
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
// System.Void _2dxFX_GrassFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_Awake_m2F7480E9B8AB662D52B62C560F4AFAE5A09C971C (_2dxFX_GrassFX_t367E2A291CFD851B96C000F765205953B30A252A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_15 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_15), (void*)L_4);
	}

IL_0024:
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_16 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_16), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_Start_m775AB34E77A724C53DCEA9EB4B386F2C8ACE6904 (_2dxFX_GrassFX_t367E2A291CFD851B96C000F765205953B30A252A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// Wind = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_0, NULL);
		__this->___Wind_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Wind_10), (void*)L_0);
		// Wind.AddKey(0, 0);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = __this->___Wind_10;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_1, (0.0f), (0.0f), NULL);
		// Wind.keys[0].inTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = __this->___Wind_10;
		NullCheck(L_3);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_4;
		L_4 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_3, NULL);
		NullCheck(L_4);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), (0.0f), NULL);
		// Wind.keys[0].outTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = __this->___Wind_10;
		NullCheck(L_5);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_6;
		L_6 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_5, NULL);
		NullCheck(L_6);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), (0.0f), NULL);
		// Wind.AddKey(0.1004994f, 0.06637689f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = __this->___Wind_10;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_7, (0.100499399f), (0.0663768873f), NULL);
		// Wind.keys[1].inTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9 = __this->___Wind_10;
		NullCheck(L_9);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_10;
		L_10 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_9, NULL);
		NullCheck(L_10);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), (0.0f), NULL);
		// Wind.keys[1].outTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = __this->___Wind_10;
		NullCheck(L_11);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_12;
		L_12 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_11, NULL);
		NullCheck(L_12);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), (0.0f), NULL);
		// Wind.AddKey(0.2430963f, -0.06465532f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_13 = __this->___Wind_10;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_13, (0.243096307f), (-0.0646553189f), NULL);
		// Wind.keys[2].inTangent = -0.07599592f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_15 = __this->___Wind_10;
		NullCheck(L_15);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_16;
		L_16 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_15, NULL);
		NullCheck(L_16);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))), (-0.0759959221f), NULL);
		// Wind.keys[2].outTangent = -0.07599592f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_17 = __this->___Wind_10;
		NullCheck(L_17);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_18;
		L_18 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_17, NULL);
		NullCheck(L_18);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))), (-0.0759959221f), NULL);
		// Wind.AddKey(0.3425266f, 0.02290122f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_19 = __this->___Wind_10;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_19, (0.342526615f), (0.0229012202f), NULL);
		// Wind.keys[3].inTangent = 0.03580004f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_21 = __this->___Wind_10;
		NullCheck(L_21);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_22;
		L_22 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_21, NULL);
		NullCheck(L_22);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))), (0.0358000398f), NULL);
		// Wind.keys[3].outTangent = 0.03580004f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_23 = __this->___Wind_10;
		NullCheck(L_23);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_24;
		L_24 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_23, NULL);
		NullCheck(L_24);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))), (0.0358000398f), NULL);
		// Wind.AddKey(0.4246872f, -0.02232522f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_25 = __this->___Wind_10;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_25, (0.424687207f), (-0.0223252196f), NULL);
		// Wind.keys[4].inTangent = -0.006025657f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_27 = __this->___Wind_10;
		NullCheck(L_27);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_28;
		L_28 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_27, NULL);
		NullCheck(L_28);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(4))), (-0.00602565706f), NULL);
		// Wind.keys[4].outTangent = -0.006025657f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_29 = __this->___Wind_10;
		NullCheck(L_29);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_30;
		L_30 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_29, NULL);
		NullCheck(L_30);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(4))), (-0.00602565706f), NULL);
		// Wind.AddKey(0.5104106f, 0.1647801f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_31 = __this->___Wind_10;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_31, (0.510410607f), (0.164780095f), NULL);
		// Wind.keys[5].inTangent = 0.02981164f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_33 = __this->___Wind_10;
		NullCheck(L_33);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_34;
		L_34 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_33, NULL);
		NullCheck(L_34);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(5))), (0.0298116393f), NULL);
		// Wind.keys[5].outTangent = 0.02981164f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_35 = __this->___Wind_10;
		NullCheck(L_35);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_36;
		L_36 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_35, NULL);
		NullCheck(L_36);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(5))), (0.0298116393f), NULL);
		// Wind.AddKey(0.6082056f, -0.04679203f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37 = __this->___Wind_10;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_37, (0.608205616f), (-0.0467920303f), NULL);
		// Wind.keys[6].inTangent = -0.3176928f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39 = __this->___Wind_10;
		NullCheck(L_39);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_40;
		L_40 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_39, NULL);
		NullCheck(L_40);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(6))), (-0.317692786f), NULL);
		// Wind.keys[6].outTangent = -0.3176928f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41 = __this->___Wind_10;
		NullCheck(L_41);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_42;
		L_42 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_41, NULL);
		NullCheck(L_42);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(6))), (-0.317692786f), NULL);
		// Wind.AddKey(0.7794942f, 0.2234365f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_43 = __this->___Wind_10;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_43, (0.779494226f), (0.223436505f), NULL);
		// Wind.keys[7].inTangent = 0.2063811f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_45 = __this->___Wind_10;
		NullCheck(L_45);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_46;
		L_46 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_45, NULL);
		NullCheck(L_46);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(7))), (0.206381097f), NULL);
		// Wind.keys[7].outTangent = 0.2063811f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_47 = __this->___Wind_10;
		NullCheck(L_47);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_48;
		L_48 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_47, NULL);
		NullCheck(L_48);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(7))), (0.206381097f), NULL);
		// Wind.AddKey(0.8546611f, -0.003165513f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_49 = __this->___Wind_10;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_49, (0.854661107f), (-0.00316551304f), NULL);
		// Wind.keys[8].inTangent = 0.02264977f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51 = __this->___Wind_10;
		NullCheck(L_51);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_52;
		L_52 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_51, NULL);
		NullCheck(L_52);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(8))), (0.0226497706f), NULL);
		// Wind.keys[8].outTangent = 0.02264977f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53 = __this->___Wind_10;
		NullCheck(L_53);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_54;
		L_54 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_53, NULL);
		NullCheck(L_54);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(8))), (0.0226497706f), NULL);
		// Wind.AddKey(1.022495f, -0.07358052f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_55 = __this->___Wind_10;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_55, (1.02249503f), (-0.0735805184f), NULL);
		// Wind.keys[9].inTangent = 2.450916f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_57 = __this->___Wind_10;
		NullCheck(L_57);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_58;
		L_58 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_57, NULL);
		NullCheck(L_58);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)9)))), (2.45091605f), NULL);
		// Wind.keys[9].outTangent = 2.450916f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_59 = __this->___Wind_10;
		NullCheck(L_59);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_60;
		L_60 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_59, NULL);
		NullCheck(L_60);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)9)))), (2.45091605f), NULL);
		// Wind.AddKey(1.250894f, -0.1813075f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_61 = __this->___Wind_10;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_61, (1.25089395f), (-0.181307495f), NULL);
		// Wind.keys[10].inTangent = 0.02214685f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_63 = __this->___Wind_10;
		NullCheck(L_63);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_64;
		L_64 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_63, NULL);
		NullCheck(L_64);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)10)))), (0.0221468508f), NULL);
		// Wind.keys[10].outTangent = 0.02214685f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_65 = __this->___Wind_10;
		NullCheck(L_65);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_66;
		L_66 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_65, NULL);
		NullCheck(L_66);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)10)))), (0.0221468508f), NULL);
		// Wind.AddKey(1.369877f, -0.06861454f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_67 = __this->___Wind_10;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_67, (1.36987698f), (-0.0686145425f), NULL);
		// Wind.keys[11].inTangent = -1.860534f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_69 = __this->___Wind_10;
		NullCheck(L_69);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_70;
		L_70 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_69, NULL);
		NullCheck(L_70);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)11)))), (-1.86053395f), NULL);
		// Wind.keys[11].outTangent = -1.860534f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_71 = __this->___Wind_10;
		NullCheck(L_71);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_72;
		L_72 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_71, NULL);
		NullCheck(L_72);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)11)))), (-1.86053395f), NULL);
		// Wind.AddKey(1.484951f, -0.1543293f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_73 = __this->___Wind_10;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_73, (1.48495102f), (-0.1543293f), NULL);
		// Wind.keys[12].inTangent = 0.0602752f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_75 = __this->___Wind_10;
		NullCheck(L_75);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_76;
		L_76 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_75, NULL);
		NullCheck(L_76);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)12)))), (0.0602752008f), NULL);
		// Wind.keys[12].outTangent = 0.0602752f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_77 = __this->___Wind_10;
		NullCheck(L_77);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_78;
		L_78 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_77, NULL);
		NullCheck(L_78);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)12)))), (0.0602752008f), NULL);
		// Wind.AddKey(1.583562f, 0.100938f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_79 = __this->___Wind_10;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_79, (1.58356202f), (0.100938f), NULL);
		// Wind.keys[13].inTangent = 0.08665025f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_81 = __this->___Wind_10;
		NullCheck(L_81);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_82;
		L_82 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_81, NULL);
		NullCheck(L_82);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)13)))), (0.0866502523f), NULL);
		// Wind.keys[13].outTangent = 0.08665025f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_83 = __this->___Wind_10;
		NullCheck(L_83);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_84;
		L_84 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_83, NULL);
		NullCheck(L_84);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)13)))), (0.0866502523f), NULL);
		// Wind.AddKey(1.687307f, -0.100769f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_85 = __this->___Wind_10;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_85, (1.687307f), (-0.100768998f), NULL);
		// Wind.keys[14].inTangent = 0.01110137f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_87 = __this->___Wind_10;
		NullCheck(L_87);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_88;
		L_88 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_87, NULL);
		NullCheck(L_88);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)14)))), (0.0111013697f), NULL);
		// Wind.keys[14].outTangent = 0.01110137f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_89 = __this->___Wind_10;
		NullCheck(L_89);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_90;
		L_90 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_89, NULL);
		NullCheck(L_90);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)14)))), (0.0111013697f), NULL);
		// Wind.AddKey(1.797593f, 0.04921142f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_91 = __this->___Wind_10;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_91, (1.797593f), (0.0492114201f), NULL);
		// Wind.keys[15].inTangent = 3.407104f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_93 = __this->___Wind_10;
		NullCheck(L_93);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_94;
		L_94 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_93, NULL);
		NullCheck(L_94);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)15)))), (3.40710402f), NULL);
		// Wind.keys[15].outTangent = 3.407104f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_95 = __this->___Wind_10;
		NullCheck(L_95);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_96;
		L_96 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_95, NULL);
		NullCheck(L_96);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_96)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)15)))), (3.40710402f), NULL);
		// Wind.AddKey(1.927248f, -0.1877219f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_97 = __this->___Wind_10;
		NullCheck(L_97);
		int32_t L_98;
		L_98 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_97, (1.927248f), (-0.187721893f), NULL);
		// Wind.keys[16].inTangent = -0.001117587f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_99 = __this->___Wind_10;
		NullCheck(L_99);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_100;
		L_100 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_99, NULL);
		NullCheck(L_100);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)16)))), (-0.00111758697f), NULL);
		// Wind.keys[16].outTangent = -0.001117587f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_101 = __this->___Wind_10;
		NullCheck(L_101);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_102;
		L_102 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_101, NULL);
		NullCheck(L_102);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)16)))), (-0.00111758697f), NULL);
		// Wind.AddKey(2.067694f, 0.2742145f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_103 = __this->___Wind_10;
		NullCheck(L_103);
		int32_t L_104;
		L_104 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_103, (2.06769395f), (0.274214506f), NULL);
		// Wind.keys[17].inTangent = 4.736587f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_105 = __this->___Wind_10;
		NullCheck(L_105);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_106;
		L_106 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_105, NULL);
		NullCheck(L_106);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_106)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)17)))), (4.73658705f), NULL);
		// Wind.keys[17].outTangent = 4.736587f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_107 = __this->___Wind_10;
		NullCheck(L_107);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_108;
		L_108 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_107, NULL);
		NullCheck(L_108);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)17)))), (4.73658705f), NULL);
		// Wind.AddKey(2.184602f, -0.06127208f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_109 = __this->___Wind_10;
		NullCheck(L_109);
		int32_t L_110;
		L_110 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_109, (2.18460202f), (-0.061272081f), NULL);
		// Wind.keys[18].inTangent = -0.1308322f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_111 = __this->___Wind_10;
		NullCheck(L_111);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_112;
		L_112 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_111, NULL);
		NullCheck(L_112);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_112)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)18)))), (-0.130832195f), NULL);
		// Wind.keys[18].outTangent = -0.1308322f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_113 = __this->___Wind_10;
		NullCheck(L_113);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_114;
		L_114 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_113, NULL);
		NullCheck(L_114);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_114)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)18)))), (-0.130832195f), NULL);
		// Wind.AddKey(2.305948f, 0.1891117f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_115 = __this->___Wind_10;
		NullCheck(L_115);
		int32_t L_116;
		L_116 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_115, (2.30594802f), (0.189111695f), NULL);
		// Wind.keys[19].inTangent = 0.04030764f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_117 = __this->___Wind_10;
		NullCheck(L_117);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_118;
		L_118 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_117, NULL);
		NullCheck(L_118);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_118)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)19)))), (0.040307641f), NULL);
		// Wind.keys[19].outTangent = 0.04030764f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_119 = __this->___Wind_10;
		NullCheck(L_119);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_120;
		L_120 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_119, NULL);
		NullCheck(L_120);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_120)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)19)))), (0.040307641f), NULL);
		// Wind.AddKey(2.428946f, -0.1695723f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_121 = __this->___Wind_10;
		NullCheck(L_121);
		int32_t L_122;
		L_122 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_121, (2.42894602f), (-0.169572294f), NULL);
		// Wind.keys[20].inTangent = -0.2463162f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_123 = __this->___Wind_10;
		NullCheck(L_123);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_124;
		L_124 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_123, NULL);
		NullCheck(L_124);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_124)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)20)))), (-0.246316195f), NULL);
		// Wind.keys[20].outTangent = -0.2463162f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_125 = __this->___Wind_10;
		NullCheck(L_125);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_126;
		L_126 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_125, NULL);
		NullCheck(L_126);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_126)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)20)))), (-0.246316195f), NULL);
		// Wind.AddKey(2.55922f, 0.0359862f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_127 = __this->___Wind_10;
		NullCheck(L_127);
		int32_t L_128;
		L_128 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_127, (2.55922008f), (0.0359862f), NULL);
		// Wind.keys[21].inTangent = 0.3967434f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_129 = __this->___Wind_10;
		NullCheck(L_129);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_130;
		L_130 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_129, NULL);
		NullCheck(L_130);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_130)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)21)))), (0.396743387f), NULL);
		// Wind.keys[21].outTangent = 0.3967434f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_131 = __this->___Wind_10;
		NullCheck(L_131);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_132;
		L_132 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_131, NULL);
		NullCheck(L_132);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_132)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)21)))), (0.396743387f), NULL);
		// Wind.AddKey(2.785119f, -0.08398628f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_133 = __this->___Wind_10;
		NullCheck(L_133);
		int32_t L_134;
		L_134 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_133, (2.78511906f), (-0.0839862823f), NULL);
		// Wind.keys[22].inTangent = -0.2388284f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_135 = __this->___Wind_10;
		NullCheck(L_135);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_136;
		L_136 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_135, NULL);
		NullCheck(L_136);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_136)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)22)))), (-0.238828406f), NULL);
		// Wind.keys[22].outTangent = -0.2388284f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_137 = __this->___Wind_10;
		NullCheck(L_137);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_138;
		L_138 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_137, NULL);
		NullCheck(L_138);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_138)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)22)))), (-0.238828406f), NULL);
		// Wind.AddKey(3f, 0f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_139 = __this->___Wind_10;
		NullCheck(L_139);
		int32_t L_140;
		L_140 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_139, (3.0f), (0.0f), NULL);
		// Wind.keys[23].inTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_141 = __this->___Wind_10;
		NullCheck(L_141);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_142;
		L_142 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_141, NULL);
		NullCheck(L_142);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_142)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)23)))), (0.0f), NULL);
		// Wind.keys[23].outTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_143 = __this->___Wind_10;
		NullCheck(L_143);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_144;
		L_144 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_143, NULL);
		NullCheck(L_144);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_144)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)23)))), (0.0f), NULL);
		// Wind.postWrapMode = WrapMode.Loop;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_145 = __this->___Wind_10;
		NullCheck(L_145);
		AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9(L_145, 2, NULL);
		// Wind.preWrapMode = WrapMode.Loop;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_146 = __this->___Wind_10;
		NullCheck(L_146);
		AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D(L_146, 2, NULL);
		// XUpdate();
		_2dxFX_GrassFX_XUpdate_mA50D1B12B346D004EEBA27117BE5EDB779F53747(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_GrassFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_CallUpdate_m5AE65D6755EDE6BA7043C1D43AB2F9468F9ECC2F (_2dxFX_GrassFX_t367E2A291CFD851B96C000F765205953B30A252A* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_GrassFX_XUpdate_mA50D1B12B346D004EEBA27117BE5EDB779F53747(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_GrassFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_Update_m293E758CBB1946C652BDC7C1564D3EEC5DE8429B (_2dxFX_GrassFX_t367E2A291CFD851B96C000F765205953B30A252A* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_17;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_GrassFX_XUpdate_mA50D1B12B346D004EEBA27117BE5EDB779F53747(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_XUpdate_mA50D1B12B346D004EEBA27117BE5EDB779F53747 (_2dxFX_GrassFX_t367E2A291CFD851B96C000F765205953B30A252A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_15), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_16 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_16), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_12;
		if (L_14)
		{
			goto IL_0102;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0102;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_12 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ForceMaterial_4;
		NullCheck(L_26);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
	}

IL_00e0:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_28, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		String_t* L_30 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_31;
		L_31 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_30, NULL);
		NullCheck(L_29);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_29, L_31, NULL);
	}

IL_0102:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a1;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_12;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_0138;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_13 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_13), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_13;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_017b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_13;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_019a;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_13;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_0317;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_0262;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_7;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Heat);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->___Heat_8;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_58, NULL);
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_59 = __this->___Wind_10;
		if (!L_59)
		{
			goto IL_0227;
		}
	}
	{
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_60);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_61;
		L_61 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_60, NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_62 = __this->___Wind_10;
		float L_63 = __this->___WindTime1_11;
		NullCheck(L_62);
		float L_64;
		L_64 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_62, L_63, NULL);
		NullCheck(L_61);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_61, _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716, L_64, NULL);
	}

IL_0227:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Speed", Speed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_65);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66;
		L_66 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_65, NULL);
		float L_67 = __this->___Speed_9;
		NullCheck(L_66);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_66, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_67, NULL);
		// WindTime1 += (Time.deltaTime / 8) * Speed;
		float L_68 = __this->___WindTime1_11;
		float L_69;
		L_69 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_70 = __this->___Speed_9;
		__this->___WindTime1_11 = ((float)il2cpp_codegen_add(L_68, ((float)il2cpp_codegen_multiply(((float)(L_69/(8.0f))), L_70))));
		return;
	}

IL_0262:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_71 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_71, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_72)
		{
			goto IL_0317;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_73 = __this->___CanvasImage_15;
		NullCheck(L_73);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74;
		L_74 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_73);
		float L_75 = __this->____Alpha_7;
		NullCheck(L_74);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_74, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_75)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Heat);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_76 = __this->___CanvasImage_15;
		NullCheck(L_76);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77;
		L_77 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_76);
		float L_78 = __this->___Heat_8;
		NullCheck(L_77);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_77, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_78, NULL);
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_79 = __this->___Wind_10;
		if (!L_79)
		{
			goto IL_02dd;
		}
	}
	{
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_80 = __this->___CanvasImage_15;
		NullCheck(L_80);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_81;
		L_81 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_80);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_82 = __this->___Wind_10;
		float L_83 = __this->___WindTime1_11;
		NullCheck(L_82);
		float L_84;
		L_84 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_82, L_83, NULL);
		NullCheck(L_81);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_81, _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716, L_84, NULL);
	}

IL_02dd:
	{
		// CanvasImage.material.SetFloat("_Speed", Speed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_85 = __this->___CanvasImage_15;
		NullCheck(L_85);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_86;
		L_86 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_85);
		float L_87 = __this->___Speed_9;
		NullCheck(L_86);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_86, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_87, NULL);
		// WindTime1 += (Time.deltaTime / 8) * Speed;
		float L_88 = __this->___WindTime1_11;
		float L_89;
		L_89 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_90 = __this->___Speed_9;
		__this->___WindTime1_11 = ((float)il2cpp_codegen_add(L_88, ((float)il2cpp_codegen_multiply(((float)(L_89/(8.0f))), L_90))));
	}

IL_0317:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_OnDestroy_m9DBACBFADDC7316EA8ED88CF3FAB02571022E1E1 (_2dxFX_GrassFX_t367E2A291CFD851B96C000F765205953B30A252A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_002d:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_14;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_13, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, 0, NULL);
		return;
	}

IL_0079:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_14;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_15;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_19);
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, 0, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_OnDisable_mA874FE40AB42890FADD2F4B490512F6E1A5DB262 (_2dxFX_GrassFX_t367E2A291CFD851B96C000F765205953B30A252A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_14;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_14;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_15;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		NullCheck(L_15);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_15, 0, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX_OnEnable_m15E5B148F620F3E0E491F2FA0AE0F9981E5289A5 (_2dxFX_GrassFX_t367E2A291CFD851B96C000F765205953B30A252A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WindTime1 = 0;
		__this->___WindTime1_11 = (0.0f);
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_14), (void*)L_3);
	}

IL_002e:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_00a5;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_6 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_13 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_13), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_13;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0085;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_13;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_0085:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0106;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_13;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_00a5:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20;
		L_20 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_19, NULL);
		NullCheck(L_18);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_18, L_20, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___ForceMaterial_4;
		NullCheck(L_21);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00e7;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		return;
	}

IL_00e7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_0106;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_28, L_29);
	}

IL_0106:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassFX__ctor_mFCF093A3BBF6DC517CBB520834E06B63B43E86AD (_2dxFX_GrassFX_t367E2A291CFD851B96C000F765205953B30A252A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EEC191F53AD169AC62F0A08F647DA34EB1911A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// private string shader = "2DxFX/Standard/GrassFX";
		__this->___shader_6 = _stringLiteral9EEC191F53AD169AC62F0A08F647DA34EB1911A7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_6), (void*)_stringLiteral9EEC191F53AD169AC62F0A08F647DA34EB1911A7);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_7 = (1.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Heat = 1.0f;
		__this->___Heat_8 = (1.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Speed = 1.0f;
		__this->___Speed_9 = (1.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_17 = (bool)1;
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
// System.Void _2dxFX_GrassMultiFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_Awake_mA0DA8FA7F53A5E90CAE40B4C6B1B899E5734364C (_2dxFX_GrassMultiFX_tF4B2168A4F821268CFC0A463338A9D854EAC03E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_18 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_18), (void*)L_4);
	}

IL_0024:
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_5, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_8, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_19 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_19), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassMultiFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_Start_m0AB02B9719691A6B40B9928F50E6B5D4D26239DE (_2dxFX_GrassMultiFX_tF4B2168A4F821268CFC0A463338A9D854EAC03E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ShaderChange = 0;
		__this->___ShaderChange_15 = 0;
		// Wind = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_0, NULL);
		__this->___Wind_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Wind_10), (void*)L_0);
		// Wind.AddKey(0, 0);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = __this->___Wind_10;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_1, (0.0f), (0.0f), NULL);
		// Wind.keys[0].inTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = __this->___Wind_10;
		NullCheck(L_3);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_4;
		L_4 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_3, NULL);
		NullCheck(L_4);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), (0.0f), NULL);
		// Wind.keys[0].outTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = __this->___Wind_10;
		NullCheck(L_5);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_6;
		L_6 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_5, NULL);
		NullCheck(L_6);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), (0.0f), NULL);
		// Wind.AddKey(0.1004994f, 0.06637689f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = __this->___Wind_10;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_7, (0.100499399f), (0.0663768873f), NULL);
		// Wind.keys[1].inTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9 = __this->___Wind_10;
		NullCheck(L_9);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_10;
		L_10 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_9, NULL);
		NullCheck(L_10);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), (0.0f), NULL);
		// Wind.keys[1].outTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = __this->___Wind_10;
		NullCheck(L_11);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_12;
		L_12 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_11, NULL);
		NullCheck(L_12);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), (0.0f), NULL);
		// Wind.AddKey(0.2430963f, -0.06465532f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_13 = __this->___Wind_10;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_13, (0.243096307f), (-0.0646553189f), NULL);
		// Wind.keys[2].inTangent = -0.07599592f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_15 = __this->___Wind_10;
		NullCheck(L_15);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_16;
		L_16 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_15, NULL);
		NullCheck(L_16);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))), (-0.0759959221f), NULL);
		// Wind.keys[2].outTangent = -0.07599592f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_17 = __this->___Wind_10;
		NullCheck(L_17);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_18;
		L_18 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_17, NULL);
		NullCheck(L_18);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))), (-0.0759959221f), NULL);
		// Wind.AddKey(0.3425266f, 0.02290122f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_19 = __this->___Wind_10;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_19, (0.342526615f), (0.0229012202f), NULL);
		// Wind.keys[3].inTangent = 0.03580004f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_21 = __this->___Wind_10;
		NullCheck(L_21);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_22;
		L_22 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_21, NULL);
		NullCheck(L_22);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))), (0.0358000398f), NULL);
		// Wind.keys[3].outTangent = 0.03580004f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_23 = __this->___Wind_10;
		NullCheck(L_23);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_24;
		L_24 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_23, NULL);
		NullCheck(L_24);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))), (0.0358000398f), NULL);
		// Wind.AddKey(0.4246872f, -0.02232522f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_25 = __this->___Wind_10;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_25, (0.424687207f), (-0.0223252196f), NULL);
		// Wind.keys[4].inTangent = -0.006025657f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_27 = __this->___Wind_10;
		NullCheck(L_27);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_28;
		L_28 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_27, NULL);
		NullCheck(L_28);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(4))), (-0.00602565706f), NULL);
		// Wind.keys[4].outTangent = -0.006025657f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_29 = __this->___Wind_10;
		NullCheck(L_29);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_30;
		L_30 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_29, NULL);
		NullCheck(L_30);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(4))), (-0.00602565706f), NULL);
		// Wind.AddKey(0.5104106f, 0.1647801f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_31 = __this->___Wind_10;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_31, (0.510410607f), (0.164780095f), NULL);
		// Wind.keys[5].inTangent = 0.02981164f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_33 = __this->___Wind_10;
		NullCheck(L_33);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_34;
		L_34 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_33, NULL);
		NullCheck(L_34);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(5))), (0.0298116393f), NULL);
		// Wind.keys[5].outTangent = 0.02981164f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_35 = __this->___Wind_10;
		NullCheck(L_35);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_36;
		L_36 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_35, NULL);
		NullCheck(L_36);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(5))), (0.0298116393f), NULL);
		// Wind.AddKey(0.6082056f, -0.04679203f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37 = __this->___Wind_10;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_37, (0.608205616f), (-0.0467920303f), NULL);
		// Wind.keys[6].inTangent = -0.3176928f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39 = __this->___Wind_10;
		NullCheck(L_39);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_40;
		L_40 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_39, NULL);
		NullCheck(L_40);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(6))), (-0.317692786f), NULL);
		// Wind.keys[6].outTangent = -0.3176928f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41 = __this->___Wind_10;
		NullCheck(L_41);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_42;
		L_42 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_41, NULL);
		NullCheck(L_42);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(6))), (-0.317692786f), NULL);
		// Wind.AddKey(0.7794942f, 0.2234365f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_43 = __this->___Wind_10;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_43, (0.779494226f), (0.223436505f), NULL);
		// Wind.keys[7].inTangent = 0.2063811f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_45 = __this->___Wind_10;
		NullCheck(L_45);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_46;
		L_46 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_45, NULL);
		NullCheck(L_46);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(7))), (0.206381097f), NULL);
		// Wind.keys[7].outTangent = 0.2063811f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_47 = __this->___Wind_10;
		NullCheck(L_47);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_48;
		L_48 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_47, NULL);
		NullCheck(L_48);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(7))), (0.206381097f), NULL);
		// Wind.AddKey(0.8546611f, -0.003165513f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_49 = __this->___Wind_10;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_49, (0.854661107f), (-0.00316551304f), NULL);
		// Wind.keys[8].inTangent = 0.02264977f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51 = __this->___Wind_10;
		NullCheck(L_51);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_52;
		L_52 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_51, NULL);
		NullCheck(L_52);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(8))), (0.0226497706f), NULL);
		// Wind.keys[8].outTangent = 0.02264977f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53 = __this->___Wind_10;
		NullCheck(L_53);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_54;
		L_54 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_53, NULL);
		NullCheck(L_54);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(8))), (0.0226497706f), NULL);
		// Wind.AddKey(1.022495f, -0.07358052f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_55 = __this->___Wind_10;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_55, (1.02249503f), (-0.0735805184f), NULL);
		// Wind.keys[9].inTangent = 2.450916f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_57 = __this->___Wind_10;
		NullCheck(L_57);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_58;
		L_58 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_57, NULL);
		NullCheck(L_58);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)9)))), (2.45091605f), NULL);
		// Wind.keys[9].outTangent = 2.450916f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_59 = __this->___Wind_10;
		NullCheck(L_59);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_60;
		L_60 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_59, NULL);
		NullCheck(L_60);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)9)))), (2.45091605f), NULL);
		// Wind.AddKey(1.250894f, -0.1813075f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_61 = __this->___Wind_10;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_61, (1.25089395f), (-0.181307495f), NULL);
		// Wind.keys[10].inTangent = 0.02214685f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_63 = __this->___Wind_10;
		NullCheck(L_63);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_64;
		L_64 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_63, NULL);
		NullCheck(L_64);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)10)))), (0.0221468508f), NULL);
		// Wind.keys[10].outTangent = 0.02214685f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_65 = __this->___Wind_10;
		NullCheck(L_65);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_66;
		L_66 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_65, NULL);
		NullCheck(L_66);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)10)))), (0.0221468508f), NULL);
		// Wind.AddKey(1.369877f, -0.06861454f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_67 = __this->___Wind_10;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_67, (1.36987698f), (-0.0686145425f), NULL);
		// Wind.keys[11].inTangent = -1.860534f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_69 = __this->___Wind_10;
		NullCheck(L_69);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_70;
		L_70 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_69, NULL);
		NullCheck(L_70);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)11)))), (-1.86053395f), NULL);
		// Wind.keys[11].outTangent = -1.860534f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_71 = __this->___Wind_10;
		NullCheck(L_71);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_72;
		L_72 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_71, NULL);
		NullCheck(L_72);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)11)))), (-1.86053395f), NULL);
		// Wind.AddKey(1.484951f, -0.1543293f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_73 = __this->___Wind_10;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_73, (1.48495102f), (-0.1543293f), NULL);
		// Wind.keys[12].inTangent = 0.0602752f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_75 = __this->___Wind_10;
		NullCheck(L_75);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_76;
		L_76 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_75, NULL);
		NullCheck(L_76);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)12)))), (0.0602752008f), NULL);
		// Wind.keys[12].outTangent = 0.0602752f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_77 = __this->___Wind_10;
		NullCheck(L_77);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_78;
		L_78 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_77, NULL);
		NullCheck(L_78);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)12)))), (0.0602752008f), NULL);
		// Wind.AddKey(1.583562f, 0.100938f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_79 = __this->___Wind_10;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_79, (1.58356202f), (0.100938f), NULL);
		// Wind.keys[13].inTangent = 0.08665025f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_81 = __this->___Wind_10;
		NullCheck(L_81);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_82;
		L_82 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_81, NULL);
		NullCheck(L_82);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)13)))), (0.0866502523f), NULL);
		// Wind.keys[13].outTangent = 0.08665025f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_83 = __this->___Wind_10;
		NullCheck(L_83);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_84;
		L_84 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_83, NULL);
		NullCheck(L_84);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)13)))), (0.0866502523f), NULL);
		// Wind.AddKey(1.687307f, -0.100769f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_85 = __this->___Wind_10;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_85, (1.687307f), (-0.100768998f), NULL);
		// Wind.keys[14].inTangent = 0.01110137f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_87 = __this->___Wind_10;
		NullCheck(L_87);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_88;
		L_88 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_87, NULL);
		NullCheck(L_88);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)14)))), (0.0111013697f), NULL);
		// Wind.keys[14].outTangent = 0.01110137f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_89 = __this->___Wind_10;
		NullCheck(L_89);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_90;
		L_90 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_89, NULL);
		NullCheck(L_90);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)14)))), (0.0111013697f), NULL);
		// Wind.AddKey(1.797593f, 0.04921142f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_91 = __this->___Wind_10;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_91, (1.797593f), (0.0492114201f), NULL);
		// Wind.keys[15].inTangent = 3.407104f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_93 = __this->___Wind_10;
		NullCheck(L_93);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_94;
		L_94 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_93, NULL);
		NullCheck(L_94);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)15)))), (3.40710402f), NULL);
		// Wind.keys[15].outTangent = 3.407104f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_95 = __this->___Wind_10;
		NullCheck(L_95);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_96;
		L_96 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_95, NULL);
		NullCheck(L_96);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_96)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)15)))), (3.40710402f), NULL);
		// Wind.AddKey(1.927248f, -0.1877219f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_97 = __this->___Wind_10;
		NullCheck(L_97);
		int32_t L_98;
		L_98 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_97, (1.927248f), (-0.187721893f), NULL);
		// Wind.keys[16].inTangent = -0.001117587f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_99 = __this->___Wind_10;
		NullCheck(L_99);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_100;
		L_100 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_99, NULL);
		NullCheck(L_100);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)16)))), (-0.00111758697f), NULL);
		// Wind.keys[16].outTangent = -0.001117587f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_101 = __this->___Wind_10;
		NullCheck(L_101);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_102;
		L_102 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_101, NULL);
		NullCheck(L_102);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)16)))), (-0.00111758697f), NULL);
		// Wind.AddKey(2.067694f, 0.2742145f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_103 = __this->___Wind_10;
		NullCheck(L_103);
		int32_t L_104;
		L_104 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_103, (2.06769395f), (0.274214506f), NULL);
		// Wind.keys[17].inTangent = 4.736587f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_105 = __this->___Wind_10;
		NullCheck(L_105);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_106;
		L_106 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_105, NULL);
		NullCheck(L_106);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_106)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)17)))), (4.73658705f), NULL);
		// Wind.keys[17].outTangent = 4.736587f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_107 = __this->___Wind_10;
		NullCheck(L_107);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_108;
		L_108 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_107, NULL);
		NullCheck(L_108);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)17)))), (4.73658705f), NULL);
		// Wind.AddKey(2.184602f, -0.06127208f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_109 = __this->___Wind_10;
		NullCheck(L_109);
		int32_t L_110;
		L_110 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_109, (2.18460202f), (-0.061272081f), NULL);
		// Wind.keys[18].inTangent = -0.1308322f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_111 = __this->___Wind_10;
		NullCheck(L_111);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_112;
		L_112 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_111, NULL);
		NullCheck(L_112);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_112)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)18)))), (-0.130832195f), NULL);
		// Wind.keys[18].outTangent = -0.1308322f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_113 = __this->___Wind_10;
		NullCheck(L_113);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_114;
		L_114 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_113, NULL);
		NullCheck(L_114);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_114)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)18)))), (-0.130832195f), NULL);
		// Wind.AddKey(2.305948f, 0.1891117f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_115 = __this->___Wind_10;
		NullCheck(L_115);
		int32_t L_116;
		L_116 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_115, (2.30594802f), (0.189111695f), NULL);
		// Wind.keys[19].inTangent = 0.04030764f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_117 = __this->___Wind_10;
		NullCheck(L_117);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_118;
		L_118 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_117, NULL);
		NullCheck(L_118);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_118)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)19)))), (0.040307641f), NULL);
		// Wind.keys[19].outTangent = 0.04030764f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_119 = __this->___Wind_10;
		NullCheck(L_119);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_120;
		L_120 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_119, NULL);
		NullCheck(L_120);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_120)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)19)))), (0.040307641f), NULL);
		// Wind.AddKey(2.428946f, -0.1695723f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_121 = __this->___Wind_10;
		NullCheck(L_121);
		int32_t L_122;
		L_122 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_121, (2.42894602f), (-0.169572294f), NULL);
		// Wind.keys[20].inTangent = -0.2463162f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_123 = __this->___Wind_10;
		NullCheck(L_123);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_124;
		L_124 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_123, NULL);
		NullCheck(L_124);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_124)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)20)))), (-0.246316195f), NULL);
		// Wind.keys[20].outTangent = -0.2463162f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_125 = __this->___Wind_10;
		NullCheck(L_125);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_126;
		L_126 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_125, NULL);
		NullCheck(L_126);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_126)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)20)))), (-0.246316195f), NULL);
		// Wind.AddKey(2.55922f, 0.0359862f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_127 = __this->___Wind_10;
		NullCheck(L_127);
		int32_t L_128;
		L_128 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_127, (2.55922008f), (0.0359862f), NULL);
		// Wind.keys[21].inTangent = 0.3967434f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_129 = __this->___Wind_10;
		NullCheck(L_129);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_130;
		L_130 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_129, NULL);
		NullCheck(L_130);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_130)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)21)))), (0.396743387f), NULL);
		// Wind.keys[21].outTangent = 0.3967434f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_131 = __this->___Wind_10;
		NullCheck(L_131);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_132;
		L_132 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_131, NULL);
		NullCheck(L_132);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_132)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)21)))), (0.396743387f), NULL);
		// Wind.AddKey(2.785119f, -0.08398628f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_133 = __this->___Wind_10;
		NullCheck(L_133);
		int32_t L_134;
		L_134 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_133, (2.78511906f), (-0.0839862823f), NULL);
		// Wind.keys[22].inTangent = -0.2388284f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_135 = __this->___Wind_10;
		NullCheck(L_135);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_136;
		L_136 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_135, NULL);
		NullCheck(L_136);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_136)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)22)))), (-0.238828406f), NULL);
		// Wind.keys[22].outTangent = -0.2388284f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_137 = __this->___Wind_10;
		NullCheck(L_137);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_138;
		L_138 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_137, NULL);
		NullCheck(L_138);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_138)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)22)))), (-0.238828406f), NULL);
		// Wind.AddKey(3f, 0f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_139 = __this->___Wind_10;
		NullCheck(L_139);
		int32_t L_140;
		L_140 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_139, (3.0f), (0.0f), NULL);
		// Wind.keys[23].inTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_141 = __this->___Wind_10;
		NullCheck(L_141);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_142;
		L_142 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_141, NULL);
		NullCheck(L_142);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_142)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)23)))), (0.0f), NULL);
		// Wind.keys[23].outTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_143 = __this->___Wind_10;
		NullCheck(L_143);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_144;
		L_144 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_143, NULL);
		NullCheck(L_144);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_144)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)23)))), (0.0f), NULL);
		// Wind.postWrapMode = WrapMode.Loop;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_145 = __this->___Wind_10;
		NullCheck(L_145);
		AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9(L_145, 2, NULL);
		// Wind.preWrapMode = WrapMode.Loop;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_146 = __this->___Wind_10;
		NullCheck(L_146);
		AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D(L_146, 2, NULL);
		// XUpdate();
		_2dxFX_GrassMultiFX_XUpdate_mF0172E2CC1AF375CC4C3EBB77D2FFF63E0D44F85(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_GrassMultiFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_CallUpdate_m0D062D49575447D2D2CD210A9378B8DA6F0092FC (_2dxFX_GrassMultiFX_tF4B2168A4F821268CFC0A463338A9D854EAC03E6* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_GrassMultiFX_XUpdate_mF0172E2CC1AF375CC4C3EBB77D2FFF63E0D44F85(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_GrassMultiFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_Update_m01FAECF8465CDFBB85BC2F64157C16964B66759F (_2dxFX_GrassMultiFX_tF4B2168A4F821268CFC0A463338A9D854EAC03E6* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_20;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_GrassMultiFX_XUpdate_mF0172E2CC1AF375CC4C3EBB77D2FFF63E0D44F85(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassMultiFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_XUpdate_mF0172E2CC1AF375CC4C3EBB77D2FFF63E0D44F85 (_2dxFX_GrassMultiFX_tF4B2168A4F821268CFC0A463338A9D854EAC03E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58AAFF72F520DA2B9EE6AA369289D02EDB353A4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B75E738B55ED8EF009980C3AC6820D195BB18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF8E1F5EF1340BB4DE17EAA7636D1021F91E9C17);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null) CanvasImage = this.gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___CanvasImage_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_18), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.gameObject.GetComponent<SpriteRenderer>() != null) CanvasSpriteRenderer = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___CanvasSpriteRenderer_19 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_19), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_15;
		if (L_14)
		{
			goto IL_0102;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0102;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_15 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ForceMaterial_4;
		NullCheck(L_26);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
	}

IL_00e0:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_28, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		String_t* L_30 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_31;
		L_31 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_30, NULL);
		NullCheck(L_29);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_29, L_31, NULL);
	}

IL_0102:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a1;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_15;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_0138;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_16 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_16), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_16;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_017b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_16;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_019a;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_16;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_15 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_046d;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_02d1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_7;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Heat);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->___Heat_8;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_58, NULL);
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_59 = __this->___Wind_10;
		if (!L_59)
		{
			goto IL_0227;
		}
	}
	{
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_60);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_61;
		L_61 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_60, NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_62 = __this->___Wind_10;
		float L_63 = __this->___WindTime1_11;
		NullCheck(L_62);
		float L_64;
		L_64 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_62, L_63, NULL);
		NullCheck(L_61);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_61, _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716, L_64, NULL);
	}

IL_0227:
	{
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind2", Wind.Evaluate(WindTime2));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_65 = __this->___Wind_10;
		if (!L_65)
		{
			goto IL_0255;
		}
	}
	{
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind2", Wind.Evaluate(WindTime2));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_68 = __this->___Wind_10;
		float L_69 = __this->___WindTime2_12;
		NullCheck(L_68);
		float L_70;
		L_70 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_68, L_69, NULL);
		NullCheck(L_67);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_67, _stringLiteralFF8E1F5EF1340BB4DE17EAA7636D1021F91E9C17, L_70, NULL);
	}

IL_0255:
	{
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind3", Wind.Evaluate(WindTime3));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_71 = __this->___Wind_10;
		if (!L_71)
		{
			goto IL_0283;
		}
	}
	{
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind3", Wind.Evaluate(WindTime3));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_74 = __this->___Wind_10;
		float L_75 = __this->___WindTime3_13;
		NullCheck(L_74);
		float L_76;
		L_76 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_74, L_75, NULL);
		NullCheck(L_73);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_73, _stringLiteral725B75E738B55ED8EF009980C3AC6820D195BB18, L_76, NULL);
	}

IL_0283:
	{
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind4", Wind.Evaluate(WindTime4));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_77 = __this->___Wind_10;
		if (!L_77)
		{
			goto IL_02b1;
		}
	}
	{
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind4", Wind.Evaluate(WindTime4));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_78 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_78);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_79;
		L_79 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_78, NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_80 = __this->___Wind_10;
		float L_81 = __this->___WindTime4_14;
		NullCheck(L_80);
		float L_82;
		L_82 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_80, L_81, NULL);
		NullCheck(L_79);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_79, _stringLiteral58AAFF72F520DA2B9EE6AA369289D02EDB353A4F, L_82, NULL);
	}

IL_02b1:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Speed", Speed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_83 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_83);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_84;
		L_84 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_83, NULL);
		float L_85 = __this->___Speed_9;
		NullCheck(L_84);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_84, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_85, NULL);
		goto IL_03f1;
	}

IL_02d1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_86 = __this->___CanvasImage_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_87;
		L_87 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_86, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_87)
		{
			goto IL_03f1;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_88 = __this->___CanvasImage_18;
		NullCheck(L_88);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89;
		L_89 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_88);
		float L_90 = __this->____Alpha_7;
		NullCheck(L_89);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_89, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_90)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Heat);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_91 = __this->___CanvasImage_18;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_91);
		float L_93 = __this->___Heat_8;
		NullCheck(L_92);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_92, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_93, NULL);
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_94 = __this->___Wind_10;
		if (!L_94)
		{
			goto IL_034c;
		}
	}
	{
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_95 = __this->___CanvasImage_18;
		NullCheck(L_95);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96;
		L_96 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_95);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_97 = __this->___Wind_10;
		float L_98 = __this->___WindTime1_11;
		NullCheck(L_97);
		float L_99;
		L_99 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_97, L_98, NULL);
		NullCheck(L_96);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_96, _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716, L_99, NULL);
	}

IL_034c:
	{
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind2", Wind.Evaluate(WindTime2));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_100 = __this->___Wind_10;
		if (!L_100)
		{
			goto IL_037a;
		}
	}
	{
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind2", Wind.Evaluate(WindTime2));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_101 = __this->___CanvasImage_18;
		NullCheck(L_101);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_102;
		L_102 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_101);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_103 = __this->___Wind_10;
		float L_104 = __this->___WindTime2_12;
		NullCheck(L_103);
		float L_105;
		L_105 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_103, L_104, NULL);
		NullCheck(L_102);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_102, _stringLiteralFF8E1F5EF1340BB4DE17EAA7636D1021F91E9C17, L_105, NULL);
	}

IL_037a:
	{
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind3", Wind.Evaluate(WindTime3));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_106 = __this->___Wind_10;
		if (!L_106)
		{
			goto IL_03a8;
		}
	}
	{
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind3", Wind.Evaluate(WindTime3));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_107 = __this->___CanvasImage_18;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_107);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_109 = __this->___Wind_10;
		float L_110 = __this->___WindTime3_13;
		NullCheck(L_109);
		float L_111;
		L_111 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_109, L_110, NULL);
		NullCheck(L_108);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_108, _stringLiteral725B75E738B55ED8EF009980C3AC6820D195BB18, L_111, NULL);
	}

IL_03a8:
	{
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind4", Wind.Evaluate(WindTime4));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_112 = __this->___Wind_10;
		if (!L_112)
		{
			goto IL_03d6;
		}
	}
	{
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind4", Wind.Evaluate(WindTime4));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_113 = __this->___CanvasImage_18;
		NullCheck(L_113);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_114;
		L_114 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_113);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_115 = __this->___Wind_10;
		float L_116 = __this->___WindTime4_14;
		NullCheck(L_115);
		float L_117;
		L_117 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_115, L_116, NULL);
		NullCheck(L_114);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_114, _stringLiteral58AAFF72F520DA2B9EE6AA369289D02EDB353A4F, L_117, NULL);
	}

IL_03d6:
	{
		// CanvasImage.material.SetFloat("_Speed", Speed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_118 = __this->___CanvasImage_18;
		NullCheck(L_118);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_119;
		L_119 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_118);
		float L_120 = __this->___Speed_9;
		NullCheck(L_119);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_119, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_120, NULL);
	}

IL_03f1:
	{
		// WindTime1 += (Time.deltaTime / 8) * Speed;
		float L_121 = __this->___WindTime1_11;
		float L_122;
		L_122 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_123 = __this->___Speed_9;
		__this->___WindTime1_11 = ((float)il2cpp_codegen_add(L_121, ((float)il2cpp_codegen_multiply(((float)(L_122/(8.0f))), L_123))));
		// WindTime2 += (Time.deltaTime / 8) * Speed;
		float L_124 = __this->___WindTime2_12;
		float L_125;
		L_125 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_126 = __this->___Speed_9;
		__this->___WindTime2_12 = ((float)il2cpp_codegen_add(L_124, ((float)il2cpp_codegen_multiply(((float)(L_125/(8.0f))), L_126))));
		// WindTime3 += (Time.deltaTime / 8) * Speed;
		float L_127 = __this->___WindTime3_13;
		float L_128;
		L_128 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_129 = __this->___Speed_9;
		__this->___WindTime3_13 = ((float)il2cpp_codegen_add(L_127, ((float)il2cpp_codegen_multiply(((float)(L_128/(8.0f))), L_129))));
		// WindTime4 += (Time.deltaTime / 8) * Speed;
		float L_130 = __this->___WindTime4_14;
		float L_131;
		L_131 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_132 = __this->___Speed_9;
		__this->___WindTime4_14 = ((float)il2cpp_codegen_add(L_130, ((float)il2cpp_codegen_multiply(((float)(L_131/(8.0f))), L_132))));
	}

IL_046d:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassMultiFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_OnDestroy_mE50AAC23132C8B152FD84D02D43F5BD8EA046EA2 (_2dxFX_GrassMultiFX_tF4B2168A4F821268CFC0A463338A9D854EAC03E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
	}

IL_002d:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_17;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_13, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, 0, NULL);
		return;
	}

IL_0079:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_17;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_18;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_19);
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, 0, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassMultiFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_OnDisable_m73AEC497C119A10079385D69696BB7F047EAC001 (_2dxFX_GrassMultiFX_tF4B2168A4F821268CFC0A463338A9D854EAC03E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_17;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_17;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_18;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		NullCheck(L_15);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_15, 0, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassMultiFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX_OnEnable_m22878AFD9AB4C0E80499D473DC47C5919737E499 (_2dxFX_GrassMultiFX_tF4B2168A4F821268CFC0A463338A9D854EAC03E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WindTime1 = 0;
		__this->___WindTime1_11 = (0.0f);
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_17), (void*)L_3);
	}

IL_002e:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_00a5;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_6 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_16 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_16), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_16;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0085;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_16;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_0085:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0106;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_16;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_00a5:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_6;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20;
		L_20 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_19, NULL);
		NullCheck(L_18);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_18, L_20, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___ForceMaterial_4;
		NullCheck(L_21);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00e7;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		return;
	}

IL_00e7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_0106;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_28, L_29);
	}

IL_0106:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_GrassMultiFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_GrassMultiFX__ctor_m8FB559A8EC45AEA582B720615F971B3833403A5A (_2dxFX_GrassMultiFX_tF4B2168A4F821268CFC0A463338A9D854EAC03E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBF46CBBBD7F63FB47A67AE4772CAA081A121020);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// private string shader = "2DxFX/Standard/GrassMultiFX";
		__this->___shader_6 = _stringLiteralBBF46CBBBD7F63FB47A67AE4772CAA081A121020;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_6), (void*)_stringLiteralBBF46CBBBD7F63FB47A67AE4772CAA081A121020);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_7 = (1.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Heat = 1.0f;
		__this->___Heat_8 = (1.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Speed = 1.0f;
		__this->___Speed_9 = (1.0f);
		// private float WindTime2 = 0.015f;
		__this->___WindTime2_12 = (0.0149999997f);
		// private float WindTime3 = 0.030f;
		__this->___WindTime3_13 = (0.0299999993f);
		// private float WindTime4 = 0.045f;
		__this->___WindTime4_14 = (0.0450000018f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_20 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
