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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
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
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// _2dxFX_AL_IcedFX
struct _2dxFX_AL_IcedFX_t2D062A51C8AA534405AB1095AE63A3D2629187D3;
// _2dxFX_AL_Jelly
struct _2dxFX_AL_Jelly_t192944D2E0291CD5E84F1C8B602338EDC9DA5752;
// _2dxFX_AL_JellyAutoMove
struct _2dxFX_AL_JellyAutoMove_t1242E81A241FBC3BD2EED0DA8C95057F1DC22998;
// _2dxFX_AL_Lightning
struct _2dxFX_AL_Lightning_tE87811CBE5B3DC448C527BFCD67385761E3E1A43;
// _2dxFX_AL_LightningBolt
struct _2dxFX_AL_LightningBolt_t3CD70AB7B2C5A37C476E7F9A8218205A04000B71;
// _2dxFX_AL_Liquid
struct _2dxFX_AL_Liquid_t15185217512D03F4FE8614882C3631ADF46F7117;
// _2dxFX_AL_Liquify
struct _2dxFX_AL_Liquify_t393CCF04B0E2DC69E6F9FA3FF64310210C6720AE;
// _2dxFX_AL_MetalFX
struct _2dxFX_AL_MetalFX_t368D31AC926B9BE1C44F29C90458EB1F19ADE730;
// _2dxFX_AL_Mystic_Distortion
struct _2dxFX_AL_Mystic_Distortion_t5D3F53F5A9F3F07A6AE4F84E0489863E63559620;
// _2dxFX_AL_Negative
struct _2dxFX_AL_Negative_t5FE9AC9A6E70EFFFA7E59684E1079EB7731D2DB5;
// _2dxFX_AL_Noise
struct _2dxFX_AL_Noise_t129E280547B21D3DD348120D389DDA7F40EAFC00;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3;
IL2CPP_EXTERN_C String_t* _stringLiteral159776EAAF28A03FCC1FEE39ACCED774337D627A;
IL2CPP_EXTERN_C String_t* _stringLiteral18829825585E73836828059E04190D6A9FABF36B;
IL2CPP_EXTERN_C String_t* _stringLiteral19B8DCA1F8D30C81688BB1DDF7ADFFBBD211FFD4;
IL2CPP_EXTERN_C String_t* _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E;
IL2CPP_EXTERN_C String_t* _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7;
IL2CPP_EXTERN_C String_t* _stringLiteral240E009D42283D9AF1F4D5CA564205C5255A9960;
IL2CPP_EXTERN_C String_t* _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266;
IL2CPP_EXTERN_C String_t* _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59;
IL2CPP_EXTERN_C String_t* _stringLiteral34DFDC6C4D531D9913656FF00D22172453F9D3C1;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75;
IL2CPP_EXTERN_C String_t* _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25;
IL2CPP_EXTERN_C String_t* _stringLiteral4CE17EF64DD6907898AF5ABEAB1AA425782AE8BB;
IL2CPP_EXTERN_C String_t* _stringLiteral5CE36D1049E621945C0048E2ACEBBD3BAA0E02B3;
IL2CPP_EXTERN_C String_t* _stringLiteral6BC8D56751E37C6B4A11D742870D42E79C2E9F06;
IL2CPP_EXTERN_C String_t* _stringLiteral71B4586515E591495A06C85A6B4181170122615D;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1;
IL2CPP_EXTERN_C String_t* _stringLiteral8079F30FC14D3057FE39610A9AA6E9D3963559AC;
IL2CPP_EXTERN_C String_t* _stringLiteral824092EE4B7C17699523752352107118E98D2778;
IL2CPP_EXTERN_C String_t* _stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F;
IL2CPP_EXTERN_C String_t* _stringLiteralA95D6AE5299C9989F1125CE1052AE19C2732B4FC;
IL2CPP_EXTERN_C String_t* _stringLiteralAC5FA76BD402040C0453625EC15A8C92646058CE;
IL2CPP_EXTERN_C String_t* _stringLiteralB7231A3A37CC75B3377FE325D232642190CF029B;
IL2CPP_EXTERN_C String_t* _stringLiteralC20DCA4FAC181BC1E26F2DC821B7FEC3ED791BE5;
IL2CPP_EXTERN_C String_t* _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527;
IL2CPP_EXTERN_C String_t* _stringLiteralD0EE4D31F10E62C580D840D183523654CB563FF2;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A90695775E1E1455F2A9C11C74D424DD90EDB4;
IL2CPP_EXTERN_C String_t* _stringLiteralD678F4CA88B311E84935640E1244CC2707625352;
IL2CPP_EXTERN_C String_t* _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F;
IL2CPP_EXTERN_C String_t* _stringLiteralDF7611218CE4A25AF7B4D705197BB9D01498C842;
IL2CPP_EXTERN_C String_t* _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A;
IL2CPP_EXTERN_C String_t* _stringLiteralF14EC446EC325BC01693E16983FDFE12EB09A7F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF339292529EAD5C67FF529A82E470E1DEAF24438;
IL2CPP_EXTERN_C String_t* _stringLiteralF39A7C502D867AE33C5C95F6344CEA9FBF429FCA;
IL2CPP_EXTERN_C String_t* _stringLiteralFDB52EC77C2F899D10663288A26E496634A7DAE2;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;


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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// _2DxFX
struct _2DxFX_tCD46040614106090AED2D234E643795A67576439  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct _2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields
{
	// System.Boolean _2DxFX::ActiveShadow
	bool ___ActiveShadow_4;
};

// _2dxFX_AL_IcedFX
struct _2dxFX_AL_IcedFX_t2D062A51C8AA534405AB1095AE63A3D2629187D3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_IcedFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_IcedFX::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_IcedFX::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_IcedFX::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_IcedFX::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_IcedFX::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_IcedFX::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_IcedFX::Iced
	float ___Iced_11;
	// System.Int32 _2dxFX_AL_IcedFX::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_AL_IcedFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_AL_IcedFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_AL_IcedFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_AL_IcedFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_AL_IcedFX::ActiveUpdate
	bool ___ActiveUpdate_17;
};

// _2dxFX_AL_Jelly
struct _2dxFX_AL_Jelly_t192944D2E0291CD5E84F1C8B602338EDC9DA5752  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Jelly::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Jelly::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Jelly::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Jelly::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Jelly::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Jelly::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Jelly::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Jelly::Heat
	float ___Heat_11;
	// System.Single _2dxFX_AL_Jelly::Inside
	float ___Inside_12;
	// System.Single _2dxFX_AL_Jelly::Speed
	float ___Speed_13;
	// System.Int32 _2dxFX_AL_Jelly::ShaderChange
	int32_t ___ShaderChange_14;
	// UnityEngine.Material _2dxFX_AL_Jelly::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_15;
	// UnityEngine.Material _2dxFX_AL_Jelly::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_16;
	// UnityEngine.UI.Image _2dxFX_AL_Jelly::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_17;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Jelly::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_18;
	// System.Boolean _2dxFX_AL_Jelly::ActiveUpdate
	bool ___ActiveUpdate_19;
};

// _2dxFX_AL_JellyAutoMove
struct _2dxFX_AL_JellyAutoMove_t1242E81A241FBC3BD2EED0DA8C95057F1DC22998  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_JellyAutoMove::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_JellyAutoMove::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_JellyAutoMove::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_JellyAutoMove::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_JellyAutoMove::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_JellyAutoMove::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_JellyAutoMove::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_JellyAutoMove::Heat
	float ___Heat_11;
	// System.Single _2dxFX_AL_JellyAutoMove::RandomPos
	float ___RandomPos_12;
	// System.Single _2dxFX_AL_JellyAutoMove::Inside
	float ___Inside_13;
	// System.Single _2dxFX_AL_JellyAutoMove::Stabilisation
	float ___Stabilisation_14;
	// System.Single _2dxFX_AL_JellyAutoMove::Speed
	float ___Speed_15;
	// System.Int32 _2dxFX_AL_JellyAutoMove::ShaderChange
	int32_t ___ShaderChange_16;
	// UnityEngine.Material _2dxFX_AL_JellyAutoMove::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_17;
	// UnityEngine.Material _2dxFX_AL_JellyAutoMove::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_18;
	// UnityEngine.UI.Image _2dxFX_AL_JellyAutoMove::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_19;
	// UnityEngine.Vector3 _2dxFX_AL_JellyAutoMove::SaveMove1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___SaveMove1_20;
	// UnityEngine.Vector3 _2dxFX_AL_JellyAutoMove::SaveMove2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___SaveMove2_21;
	// UnityEngine.SpriteRenderer _2dxFX_AL_JellyAutoMove::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_22;
	// System.Boolean _2dxFX_AL_JellyAutoMove::ActiveUpdate
	bool ___ActiveUpdate_23;
};

// _2dxFX_AL_Lightning
struct _2dxFX_AL_Lightning_tE87811CBE5B3DC448C527BFCD67385761E3E1A43  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Lightning::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Lightning::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Lightning::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Lightning::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Lightning::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Lightning::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Lightning::_Alpha
	float ____Alpha_10;
	// UnityEngine.Texture2D _2dxFX_AL_Lightning::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_11;
	// System.Single _2dxFX_AL_Lightning::_Value1
	float ____Value1_12;
	// System.Single _2dxFX_AL_Lightning::_Value2
	float ____Value2_13;
	// System.Single _2dxFX_AL_Lightning::_Value3
	float ____Value3_14;
	// System.Single _2dxFX_AL_Lightning::_Value4
	float ____Value4_15;
	// System.Boolean _2dxFX_AL_Lightning::_AutoScrollX
	bool ____AutoScrollX_16;
	// System.Single _2dxFX_AL_Lightning::_AutoScrollSpeedX
	float ____AutoScrollSpeedX_17;
	// System.Boolean _2dxFX_AL_Lightning::_AutoScrollY
	bool ____AutoScrollY_18;
	// System.Single _2dxFX_AL_Lightning::_AutoScrollSpeedY
	float ____AutoScrollSpeedY_19;
	// System.Single _2dxFX_AL_Lightning::_AutoScrollCountX
	float ____AutoScrollCountX_20;
	// System.Single _2dxFX_AL_Lightning::_AutoScrollCountY
	float ____AutoScrollCountY_21;
	// System.Int32 _2dxFX_AL_Lightning::ShaderChange
	int32_t ___ShaderChange_22;
	// UnityEngine.Material _2dxFX_AL_Lightning::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_23;
	// UnityEngine.Material _2dxFX_AL_Lightning::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_24;
	// UnityEngine.UI.Image _2dxFX_AL_Lightning::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_25;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Lightning::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_26;
	// System.Boolean _2dxFX_AL_Lightning::ActiveUpdate
	bool ___ActiveUpdate_27;
};

// _2dxFX_AL_LightningBolt
struct _2dxFX_AL_LightningBolt_t3CD70AB7B2C5A37C476E7F9A8218205A04000B71  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_LightningBolt::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_LightningBolt::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_LightningBolt::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_LightningBolt::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_LightningBolt::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_LightningBolt::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_LightningBolt::_Alpha
	float ____Alpha_10;
	// UnityEngine.Texture2D _2dxFX_AL_LightningBolt::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_11;
	// System.Single _2dxFX_AL_LightningBolt::_Value1
	float ____Value1_12;
	// System.Single _2dxFX_AL_LightningBolt::_Value2
	float ____Value2_13;
	// System.Single _2dxFX_AL_LightningBolt::_Value3
	float ____Value3_14;
	// System.Single _2dxFX_AL_LightningBolt::_Value4
	float ____Value4_15;
	// System.Boolean _2dxFX_AL_LightningBolt::_AutoScrollX
	bool ____AutoScrollX_16;
	// System.Single _2dxFX_AL_LightningBolt::_AutoScrollSpeedX
	float ____AutoScrollSpeedX_17;
	// System.Boolean _2dxFX_AL_LightningBolt::_AutoScrollY
	bool ____AutoScrollY_18;
	// System.Single _2dxFX_AL_LightningBolt::_AutoScrollSpeedY
	float ____AutoScrollSpeedY_19;
	// System.Single _2dxFX_AL_LightningBolt::_AutoScrollCountX
	float ____AutoScrollCountX_20;
	// System.Single _2dxFX_AL_LightningBolt::_AutoScrollCountY
	float ____AutoScrollCountY_21;
	// System.Int32 _2dxFX_AL_LightningBolt::ShaderChange
	int32_t ___ShaderChange_22;
	// UnityEngine.Material _2dxFX_AL_LightningBolt::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_23;
	// UnityEngine.Material _2dxFX_AL_LightningBolt::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_24;
	// UnityEngine.UI.Image _2dxFX_AL_LightningBolt::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_25;
	// UnityEngine.SpriteRenderer _2dxFX_AL_LightningBolt::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_26;
	// System.Boolean _2dxFX_AL_LightningBolt::ActiveUpdate
	bool ___ActiveUpdate_27;
};

// _2dxFX_AL_Liquid
struct _2dxFX_AL_Liquid_t15185217512D03F4FE8614882C3631ADF46F7117  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Liquid::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Liquid::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Liquid::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Liquid::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Liquid::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Liquid::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Liquid::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Liquid::Heat
	float ___Heat_11;
	// System.Single _2dxFX_AL_Liquid::Speed
	float ___Speed_12;
	// System.Single _2dxFX_AL_Liquid::EValue
	float ___EValue_13;
	// System.Single _2dxFX_AL_Liquid::Light
	float ___Light_14;
	// System.Int32 _2dxFX_AL_Liquid::ShaderChange
	int32_t ___ShaderChange_15;
	// UnityEngine.Material _2dxFX_AL_Liquid::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_16;
	// UnityEngine.Material _2dxFX_AL_Liquid::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_17;
	// UnityEngine.UI.Image _2dxFX_AL_Liquid::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_18;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Liquid::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_19;
	// System.Boolean _2dxFX_AL_Liquid::ActiveUpdate
	bool ___ActiveUpdate_20;
};

// _2dxFX_AL_Liquify
struct _2dxFX_AL_Liquify_t393CCF04B0E2DC69E6F9FA3FF64310210C6720AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Liquify::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Liquify::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Liquify::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Liquify::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Liquify::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Liquify::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Liquify::_Alpha
	float ____Alpha_10;
	// UnityEngine.Texture2D _2dxFX_AL_Liquify::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_11;
	// System.Single _2dxFX_AL_Liquify::TurnToLiquid
	float ___TurnToLiquid_12;
	// System.Single _2dxFX_AL_Liquify::Heat
	float ___Heat_13;
	// System.Single _2dxFX_AL_Liquify::Speed
	float ___Speed_14;
	// System.Single _2dxFX_AL_Liquify::EValue
	float ___EValue_15;
	// System.Single _2dxFX_AL_Liquify::Light
	float ___Light_16;
	// System.Int32 _2dxFX_AL_Liquify::ShaderChange
	int32_t ___ShaderChange_17;
	// UnityEngine.Material _2dxFX_AL_Liquify::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_18;
	// UnityEngine.Material _2dxFX_AL_Liquify::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_19;
	// UnityEngine.UI.Image _2dxFX_AL_Liquify::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_20;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Liquify::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_21;
	// System.Boolean _2dxFX_AL_Liquify::ActiveUpdate
	bool ___ActiveUpdate_22;
};

// _2dxFX_AL_MetalFX
struct _2dxFX_AL_MetalFX_t368D31AC926B9BE1C44F29C90458EB1F19ADE730  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_MetalFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_MetalFX::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_MetalFX::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_MetalFX::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_MetalFX::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_MetalFX::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_MetalFX::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_MetalFX::Metal
	float ___Metal_11;
	// System.Int32 _2dxFX_AL_MetalFX::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_AL_MetalFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_AL_MetalFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_AL_MetalFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_AL_MetalFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_AL_MetalFX::ActiveUpdate
	bool ___ActiveUpdate_17;
};

// _2dxFX_AL_Mystic_Distortion
struct _2dxFX_AL_Mystic_Distortion_t5D3F53F5A9F3F07A6AE4F84E0489863E63559620  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Mystic_Distortion::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Mystic_Distortion::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Mystic_Distortion::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Mystic_Distortion::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Mystic_Distortion::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Mystic_Distortion::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Mystic_Distortion::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Mystic_Distortion::_Pitch
	float ____Pitch_11;
	// System.Boolean _2dxFX_AL_Mystic_Distortion::Pitch_Wave
	bool ___Pitch_Wave_12;
	// System.Single _2dxFX_AL_Mystic_Distortion::_Pitch_Speed
	float ____Pitch_Speed_13;
	// System.Single _2dxFX_AL_Mystic_Distortion::_Pitch_Offset
	float ____Pitch_Offset_14;
	// System.Single _2dxFX_AL_Mystic_Distortion::_OffsetX
	float ____OffsetX_15;
	// System.Single _2dxFX_AL_Mystic_Distortion::_OffsetY
	float ____OffsetY_16;
	// System.Single _2dxFX_AL_Mystic_Distortion::_DistanceX
	float ____DistanceX_17;
	// System.Single _2dxFX_AL_Mystic_Distortion::_DistanceY
	float ____DistanceY_18;
	// System.Single _2dxFX_AL_Mystic_Distortion::_WaveTimeX
	float ____WaveTimeX_19;
	// System.Single _2dxFX_AL_Mystic_Distortion::_WaveTimeY
	float ____WaveTimeY_20;
	// System.Boolean _2dxFX_AL_Mystic_Distortion::AutoPlayWaveX
	bool ___AutoPlayWaveX_21;
	// System.Single _2dxFX_AL_Mystic_Distortion::AutoPlaySpeedX
	float ___AutoPlaySpeedX_22;
	// System.Boolean _2dxFX_AL_Mystic_Distortion::AutoPlayWaveY
	bool ___AutoPlayWaveY_23;
	// System.Single _2dxFX_AL_Mystic_Distortion::AutoPlaySpeedY
	float ___AutoPlaySpeedY_24;
	// System.Boolean _2dxFX_AL_Mystic_Distortion::AutoRandom
	bool ___AutoRandom_25;
	// System.Single _2dxFX_AL_Mystic_Distortion::AutoRandomRange
	float ___AutoRandomRange_26;
	// System.Int32 _2dxFX_AL_Mystic_Distortion::ShaderChange
	int32_t ___ShaderChange_27;
	// UnityEngine.Material _2dxFX_AL_Mystic_Distortion::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_28;
	// UnityEngine.Material _2dxFX_AL_Mystic_Distortion::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_29;
	// UnityEngine.UI.Image _2dxFX_AL_Mystic_Distortion::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_30;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Mystic_Distortion::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_31;
	// System.Boolean _2dxFX_AL_Mystic_Distortion::ActiveUpdate
	bool ___ActiveUpdate_32;
};

// _2dxFX_AL_Negative
struct _2dxFX_AL_Negative_t5FE9AC9A6E70EFFFA7E59684E1079EB7731D2DB5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Negative::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Negative::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Negative::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Negative::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Negative::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Negative::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Negative::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Negative::Negative
	float ___Negative_11;
	// System.Int32 _2dxFX_AL_Negative::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_AL_Negative::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_AL_Negative::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_AL_Negative::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Negative::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_AL_Negative::ActiveUpdate
	bool ___ActiveUpdate_17;
};

// _2dxFX_AL_Noise
struct _2dxFX_AL_Noise_t129E280547B21D3DD348120D389DDA7F40EAFC00  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Noise::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Noise::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Noise::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Noise::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Noise::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Noise::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Noise::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Noise::Noise
	float ___Noise_11;
	// System.Int32 _2dxFX_AL_Noise::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_AL_Noise::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_AL_Noise::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_AL_Noise::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Noise::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_AL_Noise::ActiveUpdate
	bool ___ActiveUpdate_17;
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
// System.Void _2dxFX_AL_IcedFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_IcedFX_XUpdate_m04275AED0EF40B0A51495AD7FD6A437494F1AAA8 (_2dxFX_AL_IcedFX_t2D062A51C8AA534405AB1095AE63A3D2629187D3* __this, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Jelly::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Jelly_XUpdate_mEC30CF537B6DB6BA124918501D24A1F84E619ED9 (_2dxFX_AL_Jelly_t192944D2E0291CD5E84F1C8B602338EDC9DA5752* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_JellyAutoMove::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_JellyAutoMove_XUpdate_m388C5B47A3B66D23E4B0E50D8AE1C74FA9D53E7C (_2dxFX_AL_JellyAutoMove_t1242E81A241FBC3BD2EED0DA8C95057F1DC22998* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Lightning::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Lightning_XUpdate_mA1A4A0D18D9A3AF770703B214D604F3F8984FB49 (_2dxFX_AL_Lightning_tE87811CBE5B3DC448C527BFCD67385761E3E1A43* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_LightningBolt::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_LightningBolt_XUpdate_m8923FB93E884DC3368563994C15FB3E5E80A1DE9 (_2dxFX_AL_LightningBolt_t3CD70AB7B2C5A37C476E7F9A8218205A04000B71* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Liquid::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquid_XUpdate_m8F9D600CDBD04EF1A8E7A51BCBE89AE9A7BEE1F7 (_2dxFX_AL_Liquid_t15185217512D03F4FE8614882C3631ADF46F7117* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Liquify::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquify_XUpdate_m3CBBC6ED5F83010376A2A7792603FEB9816F277D (_2dxFX_AL_Liquify_t393CCF04B0E2DC69E6F9FA3FF64310210C6720AE* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_MetalFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_MetalFX_XUpdate_m999701826E10BC0AE6B5E0B6760523DE8EC47F0B (_2dxFX_AL_MetalFX_t368D31AC926B9BE1C44F29C90458EB1F19ADE730* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Mystic_Distortion::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Mystic_Distortion_XUpdate_mE4998AAC4B7AFFF37E8C49EA63D9750DDDF28FA1 (_2dxFX_AL_Mystic_Distortion_t5D3F53F5A9F3F07A6AE4F84E0489863E63559620* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Negative::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Negative_XUpdate_m7C4B8DBF45566229EB7613E0762377A193709570 (_2dxFX_AL_Negative_t5FE9AC9A6E70EFFFA7E59684E1079EB7731D2DB5* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Noise::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Noise_XUpdate_m851BCDD2D1AC8183C8442A913C1DF5631F986D26 (_2dxFX_AL_Noise_t129E280547B21D3DD348120D389DDA7F40EAFC00* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void _2dxFX_AL_IcedFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_IcedFX_Awake_m55FDE0EC68E0404AF112252D7D4BA1A11DADEF16 (_2dxFX_AL_IcedFX_t2D062A51C8AA534405AB1095AE63A3D2629187D3* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_IcedFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_IcedFX_Start_mBA45E0193F0815EF73CD64CB80AC9FAE60FF1B2D (_2dxFX_AL_IcedFX_t2D062A51C8AA534405AB1095AE63A3D2629187D3* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// XUpdate();
		_2dxFX_AL_IcedFX_XUpdate_m04275AED0EF40B0A51495AD7FD6A437494F1AAA8(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_IcedFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_IcedFX_CallUpdate_mC2B63643E69DF516692561919BE94E40C2B4688F (_2dxFX_AL_IcedFX_t2D062A51C8AA534405AB1095AE63A3D2629187D3* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_IcedFX_XUpdate_m04275AED0EF40B0A51495AD7FD6A437494F1AAA8(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_IcedFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_IcedFX_Update_m6E64EC15D2E308718A854A21DC709348FFBAA1CF (_2dxFX_AL_IcedFX_t2D062A51C8AA534405AB1095AE63A3D2629187D3* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_IcedFX_XUpdate_m04275AED0EF40B0A51495AD7FD6A437494F1AAA8(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_IcedFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_IcedFX_XUpdate_m04275AED0EF40B0A51495AD7FD6A437494F1AAA8 (_2dxFX_AL_IcedFX_t2D062A51C8AA534405AB1095AE63A3D2629187D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
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
		String_t* L_30 = __this->___shader_9;
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
		String_t* L_38 = __this->___shader_9;
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
			goto IL_05c8;
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
			goto IL_057e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_10;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// if (_2DxFX.ActiveShadow && AddShadow)
		il2cpp_codegen_runtime_class_init_inline(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		bool L_56 = ((_2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields*)il2cpp_codegen_static_fields_for(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var))->___ActiveShadow_4;
		if (!L_56)
		{
			goto IL_0279;
		}
	}
	{
		bool L_57 = __this->___AddShadow_6;
		if (!L_57)
		{
			goto IL_0279;
		}
	}
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_58);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_58, 1, NULL);
		// if (ReceivedShadow)
		bool L_59 = __this->___ReceivedShadow_7;
		if (!L_59)
		{
			goto IL_0240;
		}
	}
	{
		// CanvasSpriteRenderer.receiveShadows = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_60);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_60, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		NullCheck(L_62);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_62, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_63);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_64;
		L_64 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_63, NULL);
		NullCheck(L_64);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_64, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 1, NULL);
		goto IL_02bc;
	}

IL_0240:
	{
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_65);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_65, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_67, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_68);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69;
		L_69 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_68, NULL);
		NullCheck(L_69);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_69, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
		goto IL_02bc;
	}

IL_0279:
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_71);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_71, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_73, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_74);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_75;
		L_75 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_74, NULL);
		NullCheck(L_75);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_75, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
	}

IL_02bc:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_76 = __this->___BlendMode_8;
		if (L_76)
		{
			goto IL_0307;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_81);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82;
		L_82 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_81, NULL);
		NullCheck(L_82);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_82, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0307:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_83 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_0352;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_88);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89;
		L_89 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_88, NULL);
		NullCheck(L_89);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_89, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0352:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_90 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_90) == ((uint32_t)2))))
		{
			goto IL_039d;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_95);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96;
		L_96 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_95, NULL);
		NullCheck(L_96);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_96, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_039d:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_97 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_97) == ((uint32_t)3))))
		{
			goto IL_03e8;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_102);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103;
		L_103 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_102, NULL);
		NullCheck(L_103);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_103, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_03e8:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_104 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_104) == ((uint32_t)4))))
		{
			goto IL_0433;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_109);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_110;
		L_110 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_109, NULL);
		NullCheck(L_110);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_110, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0433:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_111 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_111) == ((uint32_t)5))))
		{
			goto IL_0480;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_116);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_117;
		L_117 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_116, NULL);
		NullCheck(L_117);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_117, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0480:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_118 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_118) == ((uint32_t)6))))
		{
			goto IL_04cc;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_123);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_124;
		L_124 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_123, NULL);
		NullCheck(L_124);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_124, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_04cc:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_125 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_125) == ((uint32_t)7))))
		{
			goto IL_0517;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_130);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_131;
		L_131 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_130, NULL);
		NullCheck(L_131);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_131, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0517:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_132 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_132) == ((uint32_t)8))))
		{
			goto IL_0562;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0562:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Iced);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Iced_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_141, NULL);
		return;
	}

IL_057e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_142 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_143;
		L_143 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_142, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_143)
		{
			goto IL_05c8;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_144 = __this->___CanvasImage_15;
		NullCheck(L_144);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_145;
		L_145 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_144);
		float L_146 = __this->____Alpha_10;
		NullCheck(L_145);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_145, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_146)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Iced);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = __this->___CanvasImage_15;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_147);
		float L_149 = __this->___Iced_11;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_149, NULL);
	}

IL_05c8:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_IcedFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_IcedFX_OnDestroy_m7162960B9F574D476592D634854BC45E6EE8D343 (_2dxFX_AL_IcedFX_t2D062A51C8AA534405AB1095AE63A3D2629187D3* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_IcedFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_IcedFX_OnDisable_m857953D11FA76B0B639C2EC81E95C0071DBD4A7A (_2dxFX_AL_IcedFX_t2D062A51C8AA534405AB1095AE63A3D2629187D3* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_IcedFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_IcedFX_OnEnable_m7CAD825B04A6ED1C87CF1A02E5015BB4B957E8DA (_2dxFX_AL_IcedFX_t2D062A51C8AA534405AB1095AE63A3D2629187D3* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_14;
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
		__this->___defaultMaterial_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_14), (void*)L_3);
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
		String_t* L_6 = __this->___shader_9;
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
			goto IL_007a;
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

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_15;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_13;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_9;
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
			goto IL_00dc;
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

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_15;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_15;
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
// System.Void _2dxFX_AL_IcedFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_IcedFX__ctor_m5585646B0C57B16E82D833613286445F00C7726B (_2dxFX_AL_IcedFX_t2D062A51C8AA534405AB1095AE63A3D2629187D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7231A3A37CC75B3377FE325D232642190CF029B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/IcedFX";
		__this->___shader_9 = _stringLiteralB7231A3A37CC75B3377FE325D232642190CF029B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralB7231A3A37CC75B3377FE325D232642190CF029B);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.001f, 4f)] public float Iced = 1.0f;
		__this->___Iced_11 = (1.0f);
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
// System.Void _2dxFX_AL_Jelly::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Jelly_Awake_m0D618221781031B89AF76194A084515415E66EF7 (_2dxFX_AL_Jelly_t192944D2E0291CD5E84F1C8B602338EDC9DA5752* __this, const RuntimeMethod* method) 
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
		__this->___CanvasImage_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_17), (void*)L_4);
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
		__this->___CanvasSpriteRenderer_18 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_18), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Jelly::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Jelly_Start_mC731A9F364B011C3391755C59E3F7883E8AED1D1 (_2dxFX_AL_Jelly_t192944D2E0291CD5E84F1C8B602338EDC9DA5752* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_14 = 0;
		// XUpdate();
		_2dxFX_AL_Jelly_XUpdate_mEC30CF537B6DB6BA124918501D24A1F84E619ED9(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Jelly::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Jelly_CallUpdate_mABB1E3254BCAAC3729FCEE7AF06ED0A9AFBBCAB9 (_2dxFX_AL_Jelly_t192944D2E0291CD5E84F1C8B602338EDC9DA5752* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Jelly_XUpdate_mEC30CF537B6DB6BA124918501D24A1F84E619ED9(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Jelly::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Jelly_Update_m4CC8AA99E844BBE3EE87FF485C818A141A16DB6C (_2dxFX_AL_Jelly_t192944D2E0291CD5E84F1C8B602338EDC9DA5752* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_19;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_AL_Jelly_XUpdate_mEC30CF537B6DB6BA124918501D24A1F84E619ED9(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Jelly::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Jelly_XUpdate_mEC30CF537B6DB6BA124918501D24A1F84E619ED9 (_2dxFX_AL_Jelly_t192944D2E0291CD5E84F1C8B602338EDC9DA5752* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC20DCA4FAC181BC1E26F2DC821B7FEC3ED791BE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_17;
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
		__this->___CanvasImage_17 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_17), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_18;
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
		__this->___CanvasSpriteRenderer_18 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_18), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_14;
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
		__this->___ShaderChange_14 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_15;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_18;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_17;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_17;
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
		String_t* L_30 = __this->___shader_9;
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
		int32_t L_34 = __this->___ShaderChange_14;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_15;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_15 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_15), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_15;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_18;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_15;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_17;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_15;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_14 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_0634;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_05b4;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_10;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// if (_2DxFX.ActiveShadow && AddShadow)
		il2cpp_codegen_runtime_class_init_inline(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		bool L_56 = ((_2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields*)il2cpp_codegen_static_fields_for(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var))->___ActiveShadow_4;
		if (!L_56)
		{
			goto IL_0279;
		}
	}
	{
		bool L_57 = __this->___AddShadow_6;
		if (!L_57)
		{
			goto IL_0279;
		}
	}
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_58);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_58, 1, NULL);
		// if (ReceivedShadow)
		bool L_59 = __this->___ReceivedShadow_7;
		if (!L_59)
		{
			goto IL_0240;
		}
	}
	{
		// CanvasSpriteRenderer.receiveShadows = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_60);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_60, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		NullCheck(L_62);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_62, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_63);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_64;
		L_64 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_63, NULL);
		NullCheck(L_64);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_64, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 1, NULL);
		goto IL_02bc;
	}

IL_0240:
	{
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_65);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_65, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_67, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_68);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69;
		L_69 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_68, NULL);
		NullCheck(L_69);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_69, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
		goto IL_02bc;
	}

IL_0279:
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_71);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_71, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_73, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_74);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_75;
		L_75 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_74, NULL);
		NullCheck(L_75);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_75, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
	}

IL_02bc:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_76 = __this->___BlendMode_8;
		if (L_76)
		{
			goto IL_0307;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_81);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82;
		L_82 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_81, NULL);
		NullCheck(L_82);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_82, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0307:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_83 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_0352;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_88);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89;
		L_89 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_88, NULL);
		NullCheck(L_89);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_89, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0352:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_90 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_90) == ((uint32_t)2))))
		{
			goto IL_039d;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_95);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96;
		L_96 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_95, NULL);
		NullCheck(L_96);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_96, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_039d:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_97 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_97) == ((uint32_t)3))))
		{
			goto IL_03e8;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_102);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103;
		L_103 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_102, NULL);
		NullCheck(L_103);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_103, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_03e8:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_104 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_104) == ((uint32_t)4))))
		{
			goto IL_0433;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_109);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_110;
		L_110 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_109, NULL);
		NullCheck(L_110);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_110, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0433:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_111 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_111) == ((uint32_t)5))))
		{
			goto IL_0480;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_116);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_117;
		L_117 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_116, NULL);
		NullCheck(L_117);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_117, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0480:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_118 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_118) == ((uint32_t)6))))
		{
			goto IL_04cc;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_123);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_124;
		L_124 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_123, NULL);
		NullCheck(L_124);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_124, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_04cc:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_125 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_125) == ((uint32_t)7))))
		{
			goto IL_0517;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_130);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_131;
		L_131 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_130, NULL);
		NullCheck(L_131);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_131, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0517:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_132 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_132) == ((uint32_t)8))))
		{
			goto IL_0562;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0562:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Heat);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Heat_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Inside", Inside);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->___Inside_12;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteralC20DCA4FAC181BC1E26F2DC821B7FEC3ED791BE5, L_144, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Speed", Speed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_145 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_145);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146;
		L_146 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_145, NULL);
		float L_147 = __this->___Speed_13;
		NullCheck(L_146);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_146, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_147, NULL);
		return;
	}

IL_05b4:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_148 = __this->___CanvasImage_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_149;
		L_149 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_148, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_149)
		{
			goto IL_0634;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_150 = __this->___CanvasImage_17;
		NullCheck(L_150);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_151;
		L_151 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_150);
		float L_152 = __this->____Alpha_10;
		NullCheck(L_151);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_151, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_152)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Heat);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_153 = __this->___CanvasImage_17;
		NullCheck(L_153);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154;
		L_154 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_153);
		float L_155 = __this->___Heat_11;
		NullCheck(L_154);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_154, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_155, NULL);
		// CanvasImage.material.SetFloat("_Inside", Inside);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_156 = __this->___CanvasImage_17;
		NullCheck(L_156);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_157;
		L_157 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_156);
		float L_158 = __this->___Inside_12;
		NullCheck(L_157);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_157, _stringLiteralC20DCA4FAC181BC1E26F2DC821B7FEC3ED791BE5, L_158, NULL);
		// CanvasImage.material.SetFloat("_Speed", Speed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_159 = __this->___CanvasImage_17;
		NullCheck(L_159);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160;
		L_160 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_159);
		float L_161 = __this->___Speed_13;
		NullCheck(L_160);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_160, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_161, NULL);
	}

IL_0634:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Jelly::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Jelly_OnDestroy_mAAD057C67172DD57C307DC552197CB3B90E7518B (_2dxFX_AL_Jelly_t192944D2E0291CD5E84F1C8B602338EDC9DA5752* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_15;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_15;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_16;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_18;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_16;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_18;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_17;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_16;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_17;
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
// System.Void _2dxFX_AL_Jelly::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Jelly_OnDisable_mD98FC167EDAA6360298B6D43598DBB69932A155D (_2dxFX_AL_Jelly_t192944D2E0291CD5E84F1C8B602338EDC9DA5752* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_16;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_18;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_16;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_18;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_17;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_16;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_17;
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
// System.Void _2dxFX_AL_Jelly::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Jelly_OnEnable_m0A7AAF948FF3EE2636DA42B6730290E897EDDCAA (_2dxFX_AL_Jelly_t192944D2E0291CD5E84F1C8B602338EDC9DA5752* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_16;
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
		__this->___defaultMaterial_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_16), (void*)L_3);
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
		String_t* L_6 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_15), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_15;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_18;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_15;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_17;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_15;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20;
		L_20 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_19, NULL);
		NullCheck(L_18);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_18, L_20, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___ForceMaterial_4;
		NullCheck(L_21);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_18;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		return;
	}

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_17;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_17;
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
// System.Void _2dxFX_AL_Jelly::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Jelly__ctor_mD7D0B25F41F59DBC1C9B55CEFEFF4A9252B62F7E (_2dxFX_AL_Jelly_t192944D2E0291CD5E84F1C8B602338EDC9DA5752* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA95D6AE5299C9989F1125CE1052AE19C2732B4FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Jelly";
		__this->___shader_9 = _stringLiteralA95D6AE5299C9989F1125CE1052AE19C2732B4FC;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralA95D6AE5299C9989F1125CE1052AE19C2732B4FC);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Heat = 1.0f;
		__this->___Heat_11 = (1.0f);
		// [HideInInspector] [Range(1f, 2f)] public float Inside = 1.1f;
		__this->___Inside_12 = (1.10000002f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Speed = 1.0f;
		__this->___Speed_13 = (1.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_19 = (bool)1;
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
// System.Void _2dxFX_AL_JellyAutoMove::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_JellyAutoMove_Awake_m4E7FEA3F8B4FC40C97D2E20DF3F9756DD2A9A2F8 (_2dxFX_AL_JellyAutoMove_t1242E81A241FBC3BD2EED0DA8C95057F1DC22998* __this, const RuntimeMethod* method) 
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
		__this->___CanvasImage_19 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_19), (void*)L_4);
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
		__this->___CanvasSpriteRenderer_22 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_22), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_JellyAutoMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_JellyAutoMove_Start_mB3D897D8F2EE3BCDA00F03FB337EE875D0913166 (_2dxFX_AL_JellyAutoMove_t1242E81A241FBC3BD2EED0DA8C95057F1DC22998* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_16 = 0;
		// Heat = 0;
		__this->___Heat_11 = (0.0f);
		// XUpdate();
		_2dxFX_AL_JellyAutoMove_XUpdate_m388C5B47A3B66D23E4B0E50D8AE1C74FA9D53E7C(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_JellyAutoMove::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_JellyAutoMove_CallUpdate_m395CAD3563A7657387292C72CD2D3BB70806E5FF (_2dxFX_AL_JellyAutoMove_t1242E81A241FBC3BD2EED0DA8C95057F1DC22998* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_JellyAutoMove_XUpdate_m388C5B47A3B66D23E4B0E50D8AE1C74FA9D53E7C(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_JellyAutoMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_JellyAutoMove_Update_m7FC95AF210A979D8A737D7D4A23959D0A0368A14 (_2dxFX_AL_JellyAutoMove_t1242E81A241FBC3BD2EED0DA8C95057F1DC22998* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_23;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_AL_JellyAutoMove_XUpdate_m388C5B47A3B66D23E4B0E50D8AE1C74FA9D53E7C(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_JellyAutoMove::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_JellyAutoMove_XUpdate_m388C5B47A3B66D23E4B0E50D8AE1C74FA9D53E7C (_2dxFX_AL_JellyAutoMove_t1242E81A241FBC3BD2EED0DA8C95057F1DC22998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC20DCA4FAC181BC1E26F2DC821B7FEC3ED791BE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF7611218CE4A25AF7B4D705197BB9D01498C842);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_19;
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
		__this->___CanvasImage_19 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_19), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_22;
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
		__this->___CanvasSpriteRenderer_22 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_22), (void*)L_13);
	}

IL_0064:
	{
		// SaveMove1 = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		__this->___SaveMove1_20 = L_15;
		// if (SaveMove1.x != SaveMove2.x) Heat += 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___SaveMove1_20);
		float L_17 = L_16->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = (&__this->___SaveMove2_21);
		float L_19 = L_18->___x_2;
		if ((((float)L_17) == ((float)L_19)))
		{
			goto IL_009f;
		}
	}
	{
		// if (SaveMove1.x != SaveMove2.x) Heat += 0.5f;
		float L_20 = __this->___Heat_11;
		__this->___Heat_11 = ((float)il2cpp_codegen_add(L_20, (0.5f)));
	}

IL_009f:
	{
		// if (SaveMove1.y != SaveMove2.y) Heat += 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___SaveMove1_20);
		float L_22 = L_21->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___SaveMove2_21);
		float L_24 = L_23->___y_3;
		if ((((float)L_22) == ((float)L_24)))
		{
			goto IL_00c9;
		}
	}
	{
		// if (SaveMove1.y != SaveMove2.y) Heat += 0.5f;
		float L_25 = __this->___Heat_11;
		__this->___Heat_11 = ((float)il2cpp_codegen_add(L_25, (0.5f)));
	}

IL_00c9:
	{
		// if (SaveMove1.z != SaveMove2.z) Heat += 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&__this->___SaveMove1_20);
		float L_27 = L_26->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___SaveMove2_21);
		float L_29 = L_28->___z_4;
		if ((((float)L_27) == ((float)L_29)))
		{
			goto IL_00f3;
		}
	}
	{
		// if (SaveMove1.z != SaveMove2.z) Heat += 0.5f;
		float L_30 = __this->___Heat_11;
		__this->___Heat_11 = ((float)il2cpp_codegen_add(L_30, (0.5f)));
	}

IL_00f3:
	{
		// Heat -= Time.deltaTime * Stabilisation;
		float L_31 = __this->___Heat_11;
		float L_32;
		L_32 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_33 = __this->___Stabilisation_14;
		__this->___Heat_11 = ((float)il2cpp_codegen_subtract(L_31, ((float)il2cpp_codegen_multiply(L_32, L_33))));
		// if (Heat > 4) Heat = 4;
		float L_34 = __this->___Heat_11;
		if ((!(((float)L_34) > ((float)(4.0f)))))
		{
			goto IL_0124;
		}
	}
	{
		// if (Heat > 4) Heat = 4;
		__this->___Heat_11 = (4.0f);
	}

IL_0124:
	{
		// if (Heat < 0) { RandomPos = Random.Range(0, 256); Heat = 0; }
		float L_35 = __this->___Heat_11;
		if ((!(((float)L_35) < ((float)(0.0f)))))
		{
			goto IL_014e;
		}
	}
	{
		// if (Heat < 0) { RandomPos = Random.Range(0, 256); Heat = 0; }
		int32_t L_36;
		L_36 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)256), NULL);
		__this->___RandomPos_12 = ((float)L_36);
		// if (Heat < 0) { RandomPos = Random.Range(0, 256); Heat = 0; }
		__this->___Heat_11 = (0.0f);
	}

IL_014e:
	{
		// SaveMove2 = SaveMove1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = __this->___SaveMove1_20;
		__this->___SaveMove2_21 = L_37;
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_38 = __this->___ShaderChange_16;
		if (L_38)
		{
			goto IL_01f8;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_39, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_40)
		{
			goto IL_01f8;
		}
	}
	{
		// ShaderChange = 1;
		__this->___ShaderChange_16 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_41, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_42)
		{
			goto IL_0196;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43 = __this->___tempMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_43, NULL);
	}

IL_0196:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_44, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_45)
		{
			goto IL_01b7;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_46 = __this->___CanvasSpriteRenderer_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = __this->___ForceMaterial_4;
		NullCheck(L_46);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_46, L_47, NULL);
		goto IL_01d6;
	}

IL_01b7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_48, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_49)
		{
			goto IL_01d6;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_50 = __this->___CanvasImage_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_51 = __this->___ForceMaterial_4;
		NullCheck(L_50);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_50, L_51);
	}

IL_01d6:
	{
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___ForceMaterial_4;
		NullCheck(L_52);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_52, 0, NULL);
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_53 = __this->___ForceMaterial_4;
		String_t* L_54 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_55;
		L_55 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_54, NULL);
		NullCheck(L_53);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_53, L_55, NULL);
	}

IL_01f8:
	{
		// if ((ForceMaterial == null) && (ShaderChange == 1))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_56 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_57;
		L_57 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_56, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_57)
		{
			goto IL_0297;
		}
	}
	{
		int32_t L_58 = __this->___ShaderChange_16;
		if ((!(((uint32_t)L_58) == ((uint32_t)1))))
		{
			goto IL_0297;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_59 = __this->___tempMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_59, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_60)
		{
			goto IL_022e;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_61 = __this->___tempMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_61, NULL);
	}

IL_022e:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_62 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_63;
		L_63 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_62, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_64 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_64, L_63, NULL);
		__this->___tempMaterial_17 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_17), (void*)L_64);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65 = __this->___tempMaterial_17;
		NullCheck(L_65);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_65, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_67;
		L_67 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_66, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_67)
		{
			goto IL_0271;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69 = __this->___tempMaterial_17;
		NullCheck(L_68);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_68, L_69, NULL);
		goto IL_0290;
	}

IL_0271:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_70 = __this->___CanvasImage_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_71;
		L_71 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_70, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_71)
		{
			goto IL_0290;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_72 = __this->___CanvasImage_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73 = __this->___tempMaterial_17;
		NullCheck(L_72);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_72, L_73);
	}

IL_0290:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_16 = 0;
	}

IL_0297:
	{
		// if (ActiveChange)
		bool L_74 = __this->___ActiveChange_5;
		if (!L_74)
		{
			goto IL_0763;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_75 = __this->___CanvasSpriteRenderer_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_76;
		L_76 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_75, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_76)
		{
			goto IL_06c5;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		float L_79 = __this->____Alpha_10;
		NullCheck(L_78);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_78, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_79)), NULL);
		// if (_2DxFX.ActiveShadow && AddShadow)
		il2cpp_codegen_runtime_class_init_inline(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		bool L_80 = ((_2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields*)il2cpp_codegen_static_fields_for(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var))->___ActiveShadow_4;
		if (!L_80)
		{
			goto IL_036f;
		}
	}
	{
		bool L_81 = __this->___AddShadow_6;
		if (!L_81)
		{
			goto IL_036f;
		}
	}
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_82 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_82);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_82, 1, NULL);
		// if (ReceivedShadow)
		bool L_83 = __this->___ReceivedShadow_7;
		if (!L_83)
		{
			goto IL_0336;
		}
	}
	{
		// CanvasSpriteRenderer.receiveShadows = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_84);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_84, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_85 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_85);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_86;
		L_86 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_85, NULL);
		NullCheck(L_86);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_86, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_87 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_87);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_88;
		L_88 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_87, NULL);
		NullCheck(L_88);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_88, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 1, NULL);
		goto IL_03b2;
	}

IL_0336:
	{
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_89 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_89);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_89, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_90 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_90);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_91;
		L_91 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_90, NULL);
		NullCheck(L_91);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_91, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_92 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_92);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_93;
		L_93 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_92, NULL);
		NullCheck(L_93);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_93, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
		goto IL_03b2;
	}

IL_036f:
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_94 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_94);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_94, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_95);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_95, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_96 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_96);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_97;
		L_97 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_96, NULL);
		NullCheck(L_97);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_97, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
	}

IL_03b2:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_100 = __this->___BlendMode_8;
		if (L_100)
		{
			goto IL_03fd;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_101 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_101);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_102;
		L_102 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_101, NULL);
		NullCheck(L_102);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_102, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_103 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_103);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_104;
		L_104 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_103, NULL);
		NullCheck(L_104);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_104, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_03fd:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_107 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_107) == ((uint32_t)1))))
		{
			goto IL_0448;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_108 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_108);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_109;
		L_109 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_108, NULL);
		NullCheck(L_109);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_109, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_110 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_110);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_111;
		L_111 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_110, NULL);
		NullCheck(L_111);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_111, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0448:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_114 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_114) == ((uint32_t)2))))
		{
			goto IL_0493;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_115 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_115);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_116;
		L_116 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_115, NULL);
		NullCheck(L_116);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_116, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_117 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_117);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_118;
		L_118 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_117, NULL);
		NullCheck(L_118);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_118, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0493:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_121 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_121) == ((uint32_t)3))))
		{
			goto IL_04de;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_122 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_122);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_123;
		L_123 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_122, NULL);
		NullCheck(L_123);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_123, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_124 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_124);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_125;
		L_125 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_124, NULL);
		NullCheck(L_125);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_125, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_04de:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_128 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_128) == ((uint32_t)4))))
		{
			goto IL_0529;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_129 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_129);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_130;
		L_130 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_129, NULL);
		NullCheck(L_130);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_130, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_131 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_131);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_132;
		L_132 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_131, NULL);
		NullCheck(L_132);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_132, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0529:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_135 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_135) == ((uint32_t)5))))
		{
			goto IL_0576;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_136 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_136);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_137;
		L_137 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_136, NULL);
		NullCheck(L_137);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_137, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_138 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_138);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_139;
		L_139 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_138, NULL);
		NullCheck(L_139);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_139, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_140 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_140);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_141;
		L_141 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_140, NULL);
		NullCheck(L_141);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_141, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0576:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_142 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_142) == ((uint32_t)6))))
		{
			goto IL_05c2;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_143 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_143);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_144;
		L_144 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_143, NULL);
		NullCheck(L_144);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_144, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_145 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_145);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146;
		L_146 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_145, NULL);
		NullCheck(L_146);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_146, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_147 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_147, NULL);
		NullCheck(L_148);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_148, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_05c2:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_149 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_149) == ((uint32_t)7))))
		{
			goto IL_060d;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_150 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_150);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_151;
		L_151 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_150, NULL);
		NullCheck(L_151);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_151, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_152 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_152);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_153;
		L_153 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_152, NULL);
		NullCheck(L_153);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_153, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_154 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_154);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_155;
		L_155 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_154, NULL);
		NullCheck(L_155);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_155, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_060d:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_156 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_156) == ((uint32_t)8))))
		{
			goto IL_0658;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_157 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_157);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_158;
		L_158 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_157, NULL);
		NullCheck(L_158);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_158, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_159 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_159);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160;
		L_160 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_159, NULL);
		NullCheck(L_160);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_160, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_161 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_161);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_162;
		L_162 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_161, NULL);
		NullCheck(L_162);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_162, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0658:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Heat);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_163 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_163);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_164;
		L_164 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_163, NULL);
		float L_165 = __this->___Heat_11;
		NullCheck(L_164);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_164, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_165, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_RandomPos", RandomPos);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_166 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_166);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_167;
		L_167 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_166, NULL);
		float L_168 = __this->___RandomPos_12;
		NullCheck(L_167);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_167, _stringLiteralDF7611218CE4A25AF7B4D705197BB9D01498C842, L_168, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Inside", Inside);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_169 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_169);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_170;
		L_170 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_169, NULL);
		float L_171 = __this->___Inside_13;
		NullCheck(L_170);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_170, _stringLiteralC20DCA4FAC181BC1E26F2DC821B7FEC3ED791BE5, L_171, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Speed", Speed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_172 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_172);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_173;
		L_173 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_172, NULL);
		float L_174 = __this->___Speed_15;
		NullCheck(L_173);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_173, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_174, NULL);
		return;
	}

IL_06c5:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_175 = __this->___CanvasImage_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_176;
		L_176 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_175, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_176)
		{
			goto IL_0763;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_177 = __this->___CanvasImage_19;
		NullCheck(L_177);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_178;
		L_178 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_177);
		float L_179 = __this->____Alpha_10;
		NullCheck(L_178);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_178, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_179)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Heat);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_180 = __this->___CanvasImage_19;
		NullCheck(L_180);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_181;
		L_181 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_180);
		float L_182 = __this->___Heat_11;
		NullCheck(L_181);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_181, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_182, NULL);
		// CanvasImage.material.SetFloat("_RandomPos", RandomPos);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_183 = __this->___CanvasImage_19;
		NullCheck(L_183);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_184;
		L_184 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_183);
		float L_185 = __this->___RandomPos_12;
		NullCheck(L_184);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_184, _stringLiteralDF7611218CE4A25AF7B4D705197BB9D01498C842, L_185, NULL);
		// CanvasImage.material.SetFloat("_Inside", Inside);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_186 = __this->___CanvasImage_19;
		NullCheck(L_186);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_187;
		L_187 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_186);
		float L_188 = __this->___Inside_13;
		NullCheck(L_187);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_187, _stringLiteralC20DCA4FAC181BC1E26F2DC821B7FEC3ED791BE5, L_188, NULL);
		// CanvasImage.material.SetFloat("_Speed", Speed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_189 = __this->___CanvasImage_19;
		NullCheck(L_189);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_190;
		L_190 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_189);
		float L_191 = __this->___Speed_15;
		NullCheck(L_190);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_190, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_191, NULL);
	}

IL_0763:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_JellyAutoMove::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_JellyAutoMove_OnDestroy_m2BACEAE1AF48CC761E2DF2A1EC3028A25969C7FD (_2dxFX_AL_JellyAutoMove_t1242E81A241FBC3BD2EED0DA8C95057F1DC22998* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_17;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_17;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_18;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_18;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_22;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_19;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_18;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_19;
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
// System.Void _2dxFX_AL_JellyAutoMove::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_JellyAutoMove_OnDisable_m6C9418E7F0799AA929CC3F9367A0E7F048C766F1 (_2dxFX_AL_JellyAutoMove_t1242E81A241FBC3BD2EED0DA8C95057F1DC22998* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_18;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_18;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_22;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_19;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_18;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_19;
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
// System.Void _2dxFX_AL_JellyAutoMove::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_JellyAutoMove_OnEnable_m5C6E291636009F8823D679431DC17882B1D43085 (_2dxFX_AL_JellyAutoMove_t1242E81A241FBC3BD2EED0DA8C95057F1DC22998* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_18;
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
		__this->___defaultMaterial_18 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_18), (void*)L_3);
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
		String_t* L_6 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_17 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_17), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_17;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_17;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_19;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_17;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20;
		L_20 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_19, NULL);
		NullCheck(L_18);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_18, L_20, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___ForceMaterial_4;
		NullCheck(L_21);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		return;
	}

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_19;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_19;
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
// System.Void _2dxFX_AL_JellyAutoMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_JellyAutoMove__ctor_m7B1394A0969843AEC4F508383C1E6EFCCC51A911 (_2dxFX_AL_JellyAutoMove_t1242E81A241FBC3BD2EED0DA8C95057F1DC22998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA95D6AE5299C9989F1125CE1052AE19C2732B4FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Jelly";
		__this->___shader_9 = _stringLiteralA95D6AE5299C9989F1125CE1052AE19C2732B4FC;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralA95D6AE5299C9989F1125CE1052AE19C2732B4FC);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Heat = 1.0f;
		__this->___Heat_11 = (1.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float RandomPos = 1.0f;
		__this->___RandomPos_12 = (1.0f);
		// [HideInInspector] [Range(1f, 2f)] public float Inside = 1.0f;
		__this->___Inside_13 = (1.0f);
		// [HideInInspector] [Range(1f, 8f)] public float Stabilisation = 4.0f;
		__this->___Stabilisation_14 = (4.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Speed = 1.0f;
		__this->___Speed_15 = (1.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_23 = (bool)1;
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
// System.Void _2dxFX_AL_Lightning::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Lightning_Awake_m89D5621871734A22CE52AADDC6E659EBBF44016B (_2dxFX_AL_Lightning_tE87811CBE5B3DC448C527BFCD67385761E3E1A43* __this, const RuntimeMethod* method) 
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
		__this->___CanvasImage_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_25), (void*)L_4);
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
		__this->___CanvasSpriteRenderer_26 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_26), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Lightning::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Lightning_Start_m03D39F2903414A33E420A5C45BCECD9F4BE0C3E8 (_2dxFX_AL_Lightning_tE87811CBE5B3DC448C527BFCD67385761E3E1A43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDB52EC77C2F899D10663288A26E496634A7DAE2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// __MainTex2 = Resources.Load("_2dxFX_Lightning2TXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralFDB52EC77C2F899D10663288A26E496634A7DAE2, NULL);
		__this->_____MainTex2_11 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_11), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		// ShaderChange = 0;
		__this->___ShaderChange_22 = 0;
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->_____MainTex2_11;
		NullCheck(L_4);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_4, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_5, NULL);
		goto IL_0070;
	}

IL_0047:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___CanvasImage_25;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_8);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->_____MainTex2_11;
		NullCheck(L_9);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_9, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_10, NULL);
	}

IL_0070:
	{
		// XUpdate();
		_2dxFX_AL_Lightning_XUpdate_mA1A4A0D18D9A3AF770703B214D604F3F8984FB49(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Lightning::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Lightning_CallUpdate_m6C03026E96AE27ABF0C95EEC5329C9EC9A5D7999 (_2dxFX_AL_Lightning_tE87811CBE5B3DC448C527BFCD67385761E3E1A43* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Lightning_XUpdate_mA1A4A0D18D9A3AF770703B214D604F3F8984FB49(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Lightning::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Lightning_Update_m9FBA847D5928A036800304A8124A6C01C74736DE (_2dxFX_AL_Lightning_tE87811CBE5B3DC448C527BFCD67385761E3E1A43* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_27;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_AL_Lightning_XUpdate_mA1A4A0D18D9A3AF770703B214D604F3F8984FB49(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Lightning::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Lightning_XUpdate_mA1A4A0D18D9A3AF770703B214D604F3F8984FB49 (_2dxFX_AL_Lightning_tE87811CBE5B3DC448C527BFCD67385761E3E1A43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_25;
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
		__this->___CanvasImage_25 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_25), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_26;
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
		__this->___CanvasSpriteRenderer_26 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_26), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_22;
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
		__this->___ShaderChange_22 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_23;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_25;
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
		String_t* L_30 = __this->___shader_9;
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
		int32_t L_34 = __this->___ShaderChange_22;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_23;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_23 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_23), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_23;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_23;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_23;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_22 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_066d;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_05cf;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_10;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// if (_2DxFX.ActiveShadow && AddShadow)
		il2cpp_codegen_runtime_class_init_inline(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		bool L_56 = ((_2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields*)il2cpp_codegen_static_fields_for(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var))->___ActiveShadow_4;
		if (!L_56)
		{
			goto IL_0279;
		}
	}
	{
		bool L_57 = __this->___AddShadow_6;
		if (!L_57)
		{
			goto IL_0279;
		}
	}
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_58);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_58, 1, NULL);
		// if (ReceivedShadow)
		bool L_59 = __this->___ReceivedShadow_7;
		if (!L_59)
		{
			goto IL_0240;
		}
	}
	{
		// CanvasSpriteRenderer.receiveShadows = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_60);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_60, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		NullCheck(L_62);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_62, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_63);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_64;
		L_64 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_63, NULL);
		NullCheck(L_64);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_64, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 1, NULL);
		goto IL_02bc;
	}

IL_0240:
	{
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_65);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_65, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_67, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_68);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69;
		L_69 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_68, NULL);
		NullCheck(L_69);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_69, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
		goto IL_02bc;
	}

IL_0279:
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_71);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_71, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_73, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_74);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_75;
		L_75 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_74, NULL);
		NullCheck(L_75);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_75, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
	}

IL_02bc:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_76 = __this->___BlendMode_8;
		if (L_76)
		{
			goto IL_0307;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_81);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82;
		L_82 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_81, NULL);
		NullCheck(L_82);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_82, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0307:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_83 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_0352;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_88);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89;
		L_89 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_88, NULL);
		NullCheck(L_89);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_89, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0352:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_90 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_90) == ((uint32_t)2))))
		{
			goto IL_039d;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_95);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96;
		L_96 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_95, NULL);
		NullCheck(L_96);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_96, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_039d:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_97 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_97) == ((uint32_t)3))))
		{
			goto IL_03e8;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_102);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103;
		L_103 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_102, NULL);
		NullCheck(L_103);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_103, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_03e8:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_104 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_104) == ((uint32_t)4))))
		{
			goto IL_0433;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_109);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_110;
		L_110 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_109, NULL);
		NullCheck(L_110);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_110, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0433:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_111 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_111) == ((uint32_t)5))))
		{
			goto IL_0480;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_116);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_117;
		L_117 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_116, NULL);
		NullCheck(L_117);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_117, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0480:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_118 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_118) == ((uint32_t)6))))
		{
			goto IL_04cc;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_123);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_124;
		L_124 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_123, NULL);
		NullCheck(L_124);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_124, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_04cc:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_125 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_125) == ((uint32_t)7))))
		{
			goto IL_0517;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_130);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_131;
		L_131 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_130, NULL);
		NullCheck(L_131);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_131, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0517:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_132 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_132) == ((uint32_t)8))))
		{
			goto IL_0562;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0562:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value1", _Value1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->____Value1_12;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value2", _Value2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->____Value2_13;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, L_144, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value3", _Value3);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_145 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_145);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146;
		L_146 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_145, NULL);
		float L_147 = __this->____Value3_14;
		NullCheck(L_146);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_146, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, L_147, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value4", _Value4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_148 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_148);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_149;
		L_149 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_148, NULL);
		float L_150 = __this->____Value4_15;
		NullCheck(L_149);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_149, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_150, NULL);
		return;
	}

IL_05cf:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_151 = __this->___CanvasImage_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_152;
		L_152 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_151, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_152)
		{
			goto IL_066d;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_153 = __this->___CanvasImage_25;
		NullCheck(L_153);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154;
		L_154 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_153);
		float L_155 = __this->____Alpha_10;
		NullCheck(L_154);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_154, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_155)), NULL);
		// CanvasImage.material.SetFloat("_Value1", _Value1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_156 = __this->___CanvasImage_25;
		NullCheck(L_156);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_157;
		L_157 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_156);
		float L_158 = __this->____Value1_12;
		NullCheck(L_157);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_157, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_158, NULL);
		// CanvasImage.material.SetFloat("_Value2", _Value2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_159 = __this->___CanvasImage_25;
		NullCheck(L_159);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160;
		L_160 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_159);
		float L_161 = __this->____Value2_13;
		NullCheck(L_160);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_160, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, L_161, NULL);
		// CanvasImage.material.SetFloat("_Value3", _Value3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_162 = __this->___CanvasImage_25;
		NullCheck(L_162);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_163;
		L_163 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_162);
		float L_164 = __this->____Value3_14;
		NullCheck(L_163);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_163, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, L_164, NULL);
		// CanvasImage.material.SetFloat("_Value4", _Value4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_165 = __this->___CanvasImage_25;
		NullCheck(L_165);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_166;
		L_166 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_165);
		float L_167 = __this->____Value4_15;
		NullCheck(L_166);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_166, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_167, NULL);
	}

IL_066d:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Lightning::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Lightning_OnDestroy_m799366C1A3AA1B00053985BF43CB5469A39EF2D1 (_2dxFX_AL_Lightning_tE87811CBE5B3DC448C527BFCD67385761E3E1A43* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_23;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_23;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_24;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_26;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_24;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_25;
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
// System.Void _2dxFX_AL_Lightning::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Lightning_OnDisable_m30EFBE4ACC28EB76AF2254D3B059887DE41A8D4C (_2dxFX_AL_Lightning_tE87811CBE5B3DC448C527BFCD67385761E3E1A43* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_24;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_26;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_24;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_25;
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
// System.Void _2dxFX_AL_Lightning::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Lightning_OnEnable_m951ECBC128661FF609EB2B006AE19C0252D9C781 (_2dxFX_AL_Lightning_tE87811CBE5B3DC448C527BFCD67385761E3E1A43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDB52EC77C2F899D10663288A26E496634A7DAE2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_24;
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
		__this->___defaultMaterial_24 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_24), (void*)L_3);
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
		String_t* L_6 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_23 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_23), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_23;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_23;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		goto IL_009d;
	}

IL_007e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_23;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
	}

IL_009d:
	{
		// __MainTex2 = Resources.Load("_2dxFX_Lightning2TXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralFDB52EC77C2F899D10663288A26E496634A7DAE2, NULL);
		__this->_____MainTex2_11 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_11), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		goto IL_012b;
	}

IL_00b4:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___ForceMaterial_4;
		String_t* L_20 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_21;
		L_21 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_20, NULL);
		NullCheck(L_19);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_19, L_21, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_22, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_23 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_25 = __this->___CanvasSpriteRenderer_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___ForceMaterial_4;
		NullCheck(L_25);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_25, L_26, NULL);
		goto IL_0116;
	}

IL_00f7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___CanvasImage_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___ForceMaterial_4;
		NullCheck(L_29);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_29, L_30);
	}

IL_0116:
	{
		// __MainTex2 = Resources.Load("_2dxFX_Lightning2TXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31;
		L_31 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralFDB52EC77C2F899D10663288A26E496634A7DAE2, NULL);
		__this->_____MainTex2_11 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_11), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
	}

IL_012b:
	{
		// if (__MainTex2)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_32 = __this->_____MainTex2_11;
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
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = __this->_____MainTex2_11;
		NullCheck(L_34);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_34, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_35 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_37 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_37);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38;
		L_38 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_37, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = __this->_____MainTex2_11;
		NullCheck(L_38);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_38, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_39, NULL);
		return;
	}

IL_016e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___CanvasImage_25;
		NullCheck(L_42);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43;
		L_43 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_42);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = __this->_____MainTex2_11;
		NullCheck(L_43);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_43, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_44, NULL);
	}

IL_0197:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Lightning::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Lightning__ctor_m0ABE9F56B70D7467B3B7590FF9740D5C67B78F62 (_2dxFX_AL_Lightning_tE87811CBE5B3DC448C527BFCD67385761E3E1A43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19B8DCA1F8D30C81688BB1DDF7ADFFBBD211FFD4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Lightning";
		__this->___shader_9 = _stringLiteral19B8DCA1F8D30C81688BB1DDF7ADFFBBD211FFD4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral19B8DCA1F8D30C81688BB1DDF7ADFFBBD211FFD4);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(16, 256)] public float _Value1 = 64;
		__this->____Value1_12 = (64.0f);
		// [HideInInspector] [Range(0, 2)] public float _Value2 = 1;
		__this->____Value2_13 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float _Value3 = 1;
		__this->____Value3_14 = (1.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_27 = (bool)1;
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
// System.Void _2dxFX_AL_LightningBolt::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_LightningBolt_Awake_mE89AFDA61D7B6EA943455BC06A8757CA1B72E4B4 (_2dxFX_AL_LightningBolt_t3CD70AB7B2C5A37C476E7F9A8218205A04000B71* __this, const RuntimeMethod* method) 
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
		__this->___CanvasImage_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_25), (void*)L_4);
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
		__this->___CanvasSpriteRenderer_26 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_26), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_LightningBolt::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_LightningBolt_Start_mDDB04D17991794F75DE5FB0A274CBC49AD3C9D34 (_2dxFX_AL_LightningBolt_t3CD70AB7B2C5A37C476E7F9A8218205A04000B71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0EE4D31F10E62C580D840D183523654CB563FF2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// __MainTex2 = Resources.Load("_2dxFX_LightningTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralD0EE4D31F10E62C580D840D183523654CB563FF2, NULL);
		__this->_____MainTex2_11 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_11), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		// ShaderChange = 0;
		__this->___ShaderChange_22 = 0;
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->_____MainTex2_11;
		NullCheck(L_4);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_4, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_5, NULL);
		goto IL_0070;
	}

IL_0047:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___CanvasImage_25;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_8);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->_____MainTex2_11;
		NullCheck(L_9);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_9, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_10, NULL);
	}

IL_0070:
	{
		// XUpdate();
		_2dxFX_AL_LightningBolt_XUpdate_m8923FB93E884DC3368563994C15FB3E5E80A1DE9(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_LightningBolt::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_LightningBolt_CallUpdate_m72B200F8E16D2B328FEC2EA5C64D5279F2A35705 (_2dxFX_AL_LightningBolt_t3CD70AB7B2C5A37C476E7F9A8218205A04000B71* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_LightningBolt_XUpdate_m8923FB93E884DC3368563994C15FB3E5E80A1DE9(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_LightningBolt::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_LightningBolt_Update_m726EFD6A31757102B1945CC036985D606810CAA7 (_2dxFX_AL_LightningBolt_t3CD70AB7B2C5A37C476E7F9A8218205A04000B71* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_27;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_AL_LightningBolt_XUpdate_m8923FB93E884DC3368563994C15FB3E5E80A1DE9(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_LightningBolt::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_LightningBolt_XUpdate_m8923FB93E884DC3368563994C15FB3E5E80A1DE9 (_2dxFX_AL_LightningBolt_t3CD70AB7B2C5A37C476E7F9A8218205A04000B71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_25;
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
		__this->___CanvasImage_25 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_25), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_26;
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
		__this->___CanvasSpriteRenderer_26 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_26), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_22;
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
		__this->___ShaderChange_22 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_23;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_25;
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
		String_t* L_30 = __this->___shader_9;
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
		int32_t L_34 = __this->___ShaderChange_22;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_23;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_23 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_23), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_23;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_23;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_23;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_22 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_066d;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_05cf;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_10;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// if (_2DxFX.ActiveShadow && AddShadow)
		il2cpp_codegen_runtime_class_init_inline(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		bool L_56 = ((_2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields*)il2cpp_codegen_static_fields_for(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var))->___ActiveShadow_4;
		if (!L_56)
		{
			goto IL_0279;
		}
	}
	{
		bool L_57 = __this->___AddShadow_6;
		if (!L_57)
		{
			goto IL_0279;
		}
	}
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_58);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_58, 1, NULL);
		// if (ReceivedShadow)
		bool L_59 = __this->___ReceivedShadow_7;
		if (!L_59)
		{
			goto IL_0240;
		}
	}
	{
		// CanvasSpriteRenderer.receiveShadows = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_60);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_60, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		NullCheck(L_62);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_62, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_63);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_64;
		L_64 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_63, NULL);
		NullCheck(L_64);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_64, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 1, NULL);
		goto IL_02bc;
	}

IL_0240:
	{
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_65);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_65, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_67, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_68);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69;
		L_69 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_68, NULL);
		NullCheck(L_69);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_69, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
		goto IL_02bc;
	}

IL_0279:
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_71);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_71, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_73, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_74);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_75;
		L_75 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_74, NULL);
		NullCheck(L_75);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_75, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
	}

IL_02bc:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_76 = __this->___BlendMode_8;
		if (L_76)
		{
			goto IL_0307;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_81);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82;
		L_82 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_81, NULL);
		NullCheck(L_82);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_82, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0307:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_83 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_0352;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_88);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89;
		L_89 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_88, NULL);
		NullCheck(L_89);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_89, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0352:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_90 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_90) == ((uint32_t)2))))
		{
			goto IL_039d;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_95);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96;
		L_96 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_95, NULL);
		NullCheck(L_96);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_96, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_039d:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_97 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_97) == ((uint32_t)3))))
		{
			goto IL_03e8;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_102);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103;
		L_103 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_102, NULL);
		NullCheck(L_103);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_103, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_03e8:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_104 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_104) == ((uint32_t)4))))
		{
			goto IL_0433;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_109);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_110;
		L_110 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_109, NULL);
		NullCheck(L_110);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_110, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0433:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_111 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_111) == ((uint32_t)5))))
		{
			goto IL_0480;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_116);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_117;
		L_117 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_116, NULL);
		NullCheck(L_117);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_117, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0480:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_118 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_118) == ((uint32_t)6))))
		{
			goto IL_04cc;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_123);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_124;
		L_124 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_123, NULL);
		NullCheck(L_124);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_124, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_04cc:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_125 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_125) == ((uint32_t)7))))
		{
			goto IL_0517;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_130);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_131;
		L_131 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_130, NULL);
		NullCheck(L_131);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_131, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0517:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_132 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_132) == ((uint32_t)8))))
		{
			goto IL_0562;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0562:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value1", _Value1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->____Value1_12;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value2", _Value2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->____Value2_13;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, L_144, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value3", _Value3);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_145 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_145);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146;
		L_146 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_145, NULL);
		float L_147 = __this->____Value3_14;
		NullCheck(L_146);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_146, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, L_147, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value4", _Value4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_148 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_148);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_149;
		L_149 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_148, NULL);
		float L_150 = __this->____Value4_15;
		NullCheck(L_149);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_149, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_150, NULL);
		return;
	}

IL_05cf:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_151 = __this->___CanvasImage_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_152;
		L_152 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_151, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_152)
		{
			goto IL_066d;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_153 = __this->___CanvasImage_25;
		NullCheck(L_153);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154;
		L_154 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_153);
		float L_155 = __this->____Alpha_10;
		NullCheck(L_154);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_154, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_155)), NULL);
		// CanvasImage.material.SetFloat("_Value1", _Value1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_156 = __this->___CanvasImage_25;
		NullCheck(L_156);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_157;
		L_157 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_156);
		float L_158 = __this->____Value1_12;
		NullCheck(L_157);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_157, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_158, NULL);
		// CanvasImage.material.SetFloat("_Value2", _Value2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_159 = __this->___CanvasImage_25;
		NullCheck(L_159);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160;
		L_160 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_159);
		float L_161 = __this->____Value2_13;
		NullCheck(L_160);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_160, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, L_161, NULL);
		// CanvasImage.material.SetFloat("_Value3", _Value3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_162 = __this->___CanvasImage_25;
		NullCheck(L_162);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_163;
		L_163 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_162);
		float L_164 = __this->____Value3_14;
		NullCheck(L_163);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_163, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, L_164, NULL);
		// CanvasImage.material.SetFloat("_Value4", _Value4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_165 = __this->___CanvasImage_25;
		NullCheck(L_165);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_166;
		L_166 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_165);
		float L_167 = __this->____Value4_15;
		NullCheck(L_166);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_166, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_167, NULL);
	}

IL_066d:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_LightningBolt::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_LightningBolt_OnDestroy_m7D63DE99C9616491E9AB6C336E7907CBA5D39CE4 (_2dxFX_AL_LightningBolt_t3CD70AB7B2C5A37C476E7F9A8218205A04000B71* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_23;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_23;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_24;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_26;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_24;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_25;
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
// System.Void _2dxFX_AL_LightningBolt::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_LightningBolt_OnDisable_m738B913E79DF4D81E3678A31B3268ECBC3406E4C (_2dxFX_AL_LightningBolt_t3CD70AB7B2C5A37C476E7F9A8218205A04000B71* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_24;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_26;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_24;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_25;
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
// System.Void _2dxFX_AL_LightningBolt::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_LightningBolt_OnEnable_mF268B4D638795926E21126F898644B9138F797D3 (_2dxFX_AL_LightningBolt_t3CD70AB7B2C5A37C476E7F9A8218205A04000B71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0EE4D31F10E62C580D840D183523654CB563FF2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_24;
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
		__this->___defaultMaterial_24 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_24), (void*)L_3);
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
		String_t* L_6 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_23 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_23), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_23;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_23;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		goto IL_009d;
	}

IL_007e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_23;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
	}

IL_009d:
	{
		// __MainTex2 = Resources.Load("_2dxFX_LightningTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralD0EE4D31F10E62C580D840D183523654CB563FF2, NULL);
		__this->_____MainTex2_11 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_11), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		goto IL_012b;
	}

IL_00b4:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___ForceMaterial_4;
		String_t* L_20 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_21;
		L_21 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_20, NULL);
		NullCheck(L_19);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_19, L_21, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_22, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_23 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_25 = __this->___CanvasSpriteRenderer_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___ForceMaterial_4;
		NullCheck(L_25);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_25, L_26, NULL);
		goto IL_0116;
	}

IL_00f7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___CanvasImage_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___ForceMaterial_4;
		NullCheck(L_29);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_29, L_30);
	}

IL_0116:
	{
		// __MainTex2 = Resources.Load("_2dxFX_LightningTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31;
		L_31 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralD0EE4D31F10E62C580D840D183523654CB563FF2, NULL);
		__this->_____MainTex2_11 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_11), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
	}

IL_012b:
	{
		// if (__MainTex2)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_32 = __this->_____MainTex2_11;
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
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = __this->_____MainTex2_11;
		NullCheck(L_34);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_34, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_35 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_37 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_37);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38;
		L_38 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_37, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = __this->_____MainTex2_11;
		NullCheck(L_38);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_38, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_39, NULL);
		return;
	}

IL_016e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___CanvasImage_25;
		NullCheck(L_42);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43;
		L_43 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_42);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = __this->_____MainTex2_11;
		NullCheck(L_43);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_43, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_44, NULL);
	}

IL_0197:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_LightningBolt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_LightningBolt__ctor_m1D2C223DFAD155CCC57544E2865E906163DFFABD (_2dxFX_AL_LightningBolt_t3CD70AB7B2C5A37C476E7F9A8218205A04000B71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CE17EF64DD6907898AF5ABEAB1AA425782AE8BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/LightningBolt";
		__this->___shader_9 = _stringLiteral4CE17EF64DD6907898AF5ABEAB1AA425782AE8BB;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral4CE17EF64DD6907898AF5ABEAB1AA425782AE8BB);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(16, 256)] public float _Value1 = 64;
		__this->____Value1_12 = (64.0f);
		// [HideInInspector] [Range(0, 2)] public float _Value2 = 1;
		__this->____Value2_13 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float _Value3 = 1;
		__this->____Value3_14 = (1.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_27 = (bool)1;
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
// System.Void _2dxFX_AL_Liquid::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquid_Awake_m65514E28DA7F0DB72DE6B61AB50516D2D543CA74 (_2dxFX_AL_Liquid_t15185217512D03F4FE8614882C3631ADF46F7117* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Liquid::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquid_Start_m183B3F4C55511F52EF62F9FC808592D8BD5FF2FB (_2dxFX_AL_Liquid_t15185217512D03F4FE8614882C3631ADF46F7117* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_15 = 0;
		// XUpdate();
		_2dxFX_AL_Liquid_XUpdate_m8F9D600CDBD04EF1A8E7A51BCBE89AE9A7BEE1F7(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Liquid::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquid_CallUpdate_m9432BA3F076625D0BB8F1E7083714E470818ACA6 (_2dxFX_AL_Liquid_t15185217512D03F4FE8614882C3631ADF46F7117* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Liquid_XUpdate_m8F9D600CDBD04EF1A8E7A51BCBE89AE9A7BEE1F7(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Liquid::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquid_Update_mCAA28BD200EF09C5B72490953EB0066696B9CB57 (_2dxFX_AL_Liquid_t15185217512D03F4FE8614882C3631ADF46F7117* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Liquid_XUpdate_m8F9D600CDBD04EF1A8E7A51BCBE89AE9A7BEE1F7(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Liquid::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquid_XUpdate_m8F9D600CDBD04EF1A8E7A51BCBE89AE9A7BEE1F7 (_2dxFX_AL_Liquid_t15185217512D03F4FE8614882C3631ADF46F7117* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CE36D1049E621945C0048E2ACEBBD3BAA0E02B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC5FA76BD402040C0453625EC15A8C92646058CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
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
		String_t* L_30 = __this->___shader_9;
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
		int32_t L_34 = __this->___ShaderChange_15;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a8;
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
			goto IL_013f;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_013f:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_9;
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
			goto IL_0182;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_16;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_01a1;
	}

IL_0182:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_18;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_16;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_01a1:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_15 = 0;
	}

IL_01a8:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_0674;
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
			goto IL_05d6;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_10;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// if (_2DxFX.ActiveShadow && AddShadow)
		il2cpp_codegen_runtime_class_init_inline(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		bool L_56 = ((_2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields*)il2cpp_codegen_static_fields_for(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var))->___ActiveShadow_4;
		if (!L_56)
		{
			goto IL_0280;
		}
	}
	{
		bool L_57 = __this->___AddShadow_6;
		if (!L_57)
		{
			goto IL_0280;
		}
	}
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_58);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_58, 1, NULL);
		// if (ReceivedShadow)
		bool L_59 = __this->___ReceivedShadow_7;
		if (!L_59)
		{
			goto IL_0247;
		}
	}
	{
		// CanvasSpriteRenderer.receiveShadows = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_60);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_60, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		NullCheck(L_62);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_62, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_63);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_64;
		L_64 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_63, NULL);
		NullCheck(L_64);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_64, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 1, NULL);
		goto IL_02c3;
	}

IL_0247:
	{
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_65);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_65, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_67, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_68);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69;
		L_69 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_68, NULL);
		NullCheck(L_69);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_69, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
		goto IL_02c3;
	}

IL_0280:
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_71);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_71, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_73, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_74);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_75;
		L_75 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_74, NULL);
		NullCheck(L_75);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_75, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
	}

IL_02c3:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_76 = __this->___BlendMode_8;
		if (L_76)
		{
			goto IL_030e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_81);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82;
		L_82 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_81, NULL);
		NullCheck(L_82);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_82, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_030e:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_83 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_0359;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_88);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89;
		L_89 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_88, NULL);
		NullCheck(L_89);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_89, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0359:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_90 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_90) == ((uint32_t)2))))
		{
			goto IL_03a4;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_95);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96;
		L_96 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_95, NULL);
		NullCheck(L_96);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_96, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_03a4:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_97 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_97) == ((uint32_t)3))))
		{
			goto IL_03ef;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_102);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103;
		L_103 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_102, NULL);
		NullCheck(L_103);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_103, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_03ef:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_104 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_104) == ((uint32_t)4))))
		{
			goto IL_043a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_109);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_110;
		L_110 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_109, NULL);
		NullCheck(L_110);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_110, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_043a:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_111 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_111) == ((uint32_t)5))))
		{
			goto IL_0487;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_116);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_117;
		L_117 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_116, NULL);
		NullCheck(L_117);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_117, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0487:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_118 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_118) == ((uint32_t)6))))
		{
			goto IL_04d3;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_123);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_124;
		L_124 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_123, NULL);
		NullCheck(L_124);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_124, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_04d3:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_125 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_125) == ((uint32_t)7))))
		{
			goto IL_051e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_130);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_131;
		L_131 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_130, NULL);
		NullCheck(L_131);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_131, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_051e:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_132 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_132) == ((uint32_t)8))))
		{
			goto IL_0569;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0569:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Heat);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Heat_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Speed", Speed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->___Speed_12;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_144, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("EValue", EValue);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_145 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_145);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146;
		L_146 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_145, NULL);
		float L_147 = __this->___EValue_13;
		NullCheck(L_146);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_146, _stringLiteralAC5FA76BD402040C0453625EC15A8C92646058CE, L_147, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("Light", Light);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_148 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_148);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_149;
		L_149 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_148, NULL);
		float L_150 = __this->___Light_14;
		NullCheck(L_149);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_149, _stringLiteral5CE36D1049E621945C0048E2ACEBBD3BAA0E02B3, L_150, NULL);
		return;
	}

IL_05d6:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_151 = __this->___CanvasImage_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_152;
		L_152 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_151, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_152)
		{
			goto IL_0674;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_153 = __this->___CanvasImage_18;
		NullCheck(L_153);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154;
		L_154 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_153);
		float L_155 = __this->____Alpha_10;
		NullCheck(L_154);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_154, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_155)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Heat);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_156 = __this->___CanvasImage_18;
		NullCheck(L_156);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_157;
		L_157 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_156);
		float L_158 = __this->___Heat_11;
		NullCheck(L_157);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_157, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_158, NULL);
		// CanvasImage.material.SetFloat("_Speed", Speed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_159 = __this->___CanvasImage_18;
		NullCheck(L_159);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160;
		L_160 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_159);
		float L_161 = __this->___Speed_12;
		NullCheck(L_160);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_160, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_161, NULL);
		// CanvasImage.material.SetFloat("EValue", EValue);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_162 = __this->___CanvasImage_18;
		NullCheck(L_162);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_163;
		L_163 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_162);
		float L_164 = __this->___EValue_13;
		NullCheck(L_163);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_163, _stringLiteralAC5FA76BD402040C0453625EC15A8C92646058CE, L_164, NULL);
		// CanvasImage.material.SetFloat("Light", Light);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_165 = __this->___CanvasImage_18;
		NullCheck(L_165);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_166;
		L_166 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_165);
		float L_167 = __this->___Light_14;
		NullCheck(L_166);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_166, _stringLiteral5CE36D1049E621945C0048E2ACEBBD3BAA0E02B3, L_167, NULL);
	}

IL_0674:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Liquid::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquid_OnDestroy_m0A49D7C03296F33D4025D66FAFE6941FB2F190B1 (_2dxFX_AL_Liquid_t15185217512D03F4FE8614882C3631ADF46F7117* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Liquid::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquid_OnDisable_mC095020E77CBFBE283FD88A142217B8194B582DD (_2dxFX_AL_Liquid_t15185217512D03F4FE8614882C3631ADF46F7117* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Liquid::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquid_OnEnable_m03D664726AB6A25CEED1FBE4EE420FCD1BDAAB21 (_2dxFX_AL_Liquid_t15185217512D03F4FE8614882C3631ADF46F7117* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_17;
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
		__this->___defaultMaterial_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_17), (void*)L_3);
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
		String_t* L_6 = __this->___shader_9;
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
			goto IL_007a;
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

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_18;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_16;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_9;
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
			goto IL_00dc;
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

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_18;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_18;
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
// System.Void _2dxFX_AL_Liquid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquid__ctor_mBA178083D6298C051F1A3D66CE7FD873FBC0C29A (_2dxFX_AL_Liquid_t15185217512D03F4FE8614882C3631ADF46F7117* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral824092EE4B7C17699523752352107118E98D2778);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Liquid";
		__this->___shader_9 = _stringLiteral824092EE4B7C17699523752352107118E98D2778;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral824092EE4B7C17699523752352107118E98D2778);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Heat = 1.0f;
		__this->___Heat_11 = (1.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Speed = 1.0f;
		__this->___Speed_12 = (1.0f);
		// [HideInInspector] [Range(0.0f, 1f)] public float EValue = 1.0f;
		__this->___EValue_13 = (1.0f);
		// [HideInInspector] [Range(-4.0f, 4f)] public float Light = 3.0f;
		__this->___Light_14 = (3.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_20 = (bool)1;
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
// System.Void _2dxFX_AL_Liquify::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquify_Awake_m6FB15797CBC40C4CBE4BD3BC6130C24CA2C59CDF (_2dxFX_AL_Liquify_t393CCF04B0E2DC69E6F9FA3FF64310210C6720AE* __this, const RuntimeMethod* method) 
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
		__this->___CanvasImage_20 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_20), (void*)L_4);
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
		__this->___CanvasSpriteRenderer_21 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_21), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Liquify::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquify_Start_mB4EEB08A8BDA8616CF768D4E4D8ACDE9EDAA46A3 (_2dxFX_AL_Liquify_t393CCF04B0E2DC69E6F9FA3FF64310210C6720AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF339292529EAD5C67FF529A82E470E1DEAF24438);
		s_Il2CppMethodInitialized = true;
	}
	{
		// __MainTex2 = Resources.Load("_2dxFX_WaterTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralF339292529EAD5C67FF529A82E470E1DEAF24438, NULL);
		__this->_____MainTex2_11 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_11), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		// ShaderChange = 0;
		__this->___ShaderChange_17 = 0;
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___CanvasSpriteRenderer_21;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->_____MainTex2_11;
		NullCheck(L_4);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_4, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_5, NULL);
		goto IL_0070;
	}

IL_0047:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___CanvasImage_20;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___CanvasImage_20;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_8);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->_____MainTex2_11;
		NullCheck(L_9);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_9, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_10, NULL);
	}

IL_0070:
	{
		// XUpdate();
		_2dxFX_AL_Liquify_XUpdate_m3CBBC6ED5F83010376A2A7792603FEB9816F277D(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Liquify::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquify_CallUpdate_m13A1C275B9D343E237C749A4D3252471E33B4127 (_2dxFX_AL_Liquify_t393CCF04B0E2DC69E6F9FA3FF64310210C6720AE* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Liquify_XUpdate_m3CBBC6ED5F83010376A2A7792603FEB9816F277D(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Liquify::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquify_Update_m68BCC6B8949FEE2D976C3794E5B6F5E2E63B184C (_2dxFX_AL_Liquify_t393CCF04B0E2DC69E6F9FA3FF64310210C6720AE* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_22;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_AL_Liquify_XUpdate_m3CBBC6ED5F83010376A2A7792603FEB9816F277D(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Liquify::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquify_XUpdate_m3CBBC6ED5F83010376A2A7792603FEB9816F277D (_2dxFX_AL_Liquify_t393CCF04B0E2DC69E6F9FA3FF64310210C6720AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CE36D1049E621945C0048E2ACEBBD3BAA0E02B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8079F30FC14D3057FE39610A9AA6E9D3963559AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC5FA76BD402040C0453625EC15A8C92646058CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_20;
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
		__this->___CanvasImage_20 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_20), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_21;
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
		__this->___CanvasSpriteRenderer_21 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_21), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_17;
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
		__this->___ShaderChange_17 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_18;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_21;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_21;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_20;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_20;
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
		String_t* L_30 = __this->___shader_9;
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
		int32_t L_34 = __this->___ShaderChange_17;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a8;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_18;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_013f:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_18 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_18), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_18;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_21;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_21;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_18;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_01a1;
	}

IL_0182:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_20;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_18;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_01a1:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_17 = 0;
	}

IL_01a8:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_06aa;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_05f1;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_10;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// if (_2DxFX.ActiveShadow && AddShadow)
		il2cpp_codegen_runtime_class_init_inline(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		bool L_56 = ((_2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields*)il2cpp_codegen_static_fields_for(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var))->___ActiveShadow_4;
		if (!L_56)
		{
			goto IL_0280;
		}
	}
	{
		bool L_57 = __this->___AddShadow_6;
		if (!L_57)
		{
			goto IL_0280;
		}
	}
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_58);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_58, 1, NULL);
		// if (ReceivedShadow)
		bool L_59 = __this->___ReceivedShadow_7;
		if (!L_59)
		{
			goto IL_0247;
		}
	}
	{
		// CanvasSpriteRenderer.receiveShadows = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_60);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_60, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		NullCheck(L_62);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_62, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_63);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_64;
		L_64 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_63, NULL);
		NullCheck(L_64);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_64, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 1, NULL);
		goto IL_02c3;
	}

IL_0247:
	{
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_65);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_65, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_67, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_68);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69;
		L_69 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_68, NULL);
		NullCheck(L_69);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_69, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
		goto IL_02c3;
	}

IL_0280:
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_71);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_71, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_73, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_74);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_75;
		L_75 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_74, NULL);
		NullCheck(L_75);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_75, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
	}

IL_02c3:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_76 = __this->___BlendMode_8;
		if (L_76)
		{
			goto IL_030e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_81);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82;
		L_82 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_81, NULL);
		NullCheck(L_82);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_82, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_030e:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_83 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_0359;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_88);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89;
		L_89 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_88, NULL);
		NullCheck(L_89);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_89, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0359:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_90 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_90) == ((uint32_t)2))))
		{
			goto IL_03a4;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_95);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96;
		L_96 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_95, NULL);
		NullCheck(L_96);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_96, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_03a4:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_97 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_97) == ((uint32_t)3))))
		{
			goto IL_03ef;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_102);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103;
		L_103 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_102, NULL);
		NullCheck(L_103);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_103, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_03ef:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_104 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_104) == ((uint32_t)4))))
		{
			goto IL_043a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_109);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_110;
		L_110 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_109, NULL);
		NullCheck(L_110);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_110, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_043a:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_111 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_111) == ((uint32_t)5))))
		{
			goto IL_0487;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_116);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_117;
		L_117 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_116, NULL);
		NullCheck(L_117);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_117, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0487:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_118 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_118) == ((uint32_t)6))))
		{
			goto IL_04d3;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_123);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_124;
		L_124 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_123, NULL);
		NullCheck(L_124);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_124, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_04d3:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_125 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_125) == ((uint32_t)7))))
		{
			goto IL_051e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_130);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_131;
		L_131 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_130, NULL);
		NullCheck(L_131);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_131, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_051e:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_132 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_132) == ((uint32_t)8))))
		{
			goto IL_0569;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0569:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Heat);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Heat_13;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Speed", Speed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->___Speed_14;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_144, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("EValue", EValue);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_145 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_145);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146;
		L_146 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_145, NULL);
		float L_147 = __this->___EValue_15;
		NullCheck(L_146);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_146, _stringLiteralAC5FA76BD402040C0453625EC15A8C92646058CE, L_147, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("Light", Light);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_148 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_148);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_149;
		L_149 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_148, NULL);
		float L_150 = __this->___Light_16;
		NullCheck(L_149);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_149, _stringLiteral5CE36D1049E621945C0048E2ACEBBD3BAA0E02B3, L_150, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("TurnToLiquid", TurnToLiquid);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_151 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_151);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_152;
		L_152 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_151, NULL);
		float L_153 = __this->___TurnToLiquid_12;
		NullCheck(L_152);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_152, _stringLiteral8079F30FC14D3057FE39610A9AA6E9D3963559AC, L_153, NULL);
		return;
	}

IL_05f1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_154 = __this->___CanvasImage_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_155;
		L_155 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_154, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_155)
		{
			goto IL_06aa;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_156 = __this->___CanvasImage_20;
		NullCheck(L_156);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_157;
		L_157 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_156);
		float L_158 = __this->____Alpha_10;
		NullCheck(L_157);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_157, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_158)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Heat);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_159 = __this->___CanvasImage_20;
		NullCheck(L_159);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160;
		L_160 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_159);
		float L_161 = __this->___Heat_13;
		NullCheck(L_160);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_160, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_161, NULL);
		// CanvasImage.material.SetFloat("_Speed", Speed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_162 = __this->___CanvasImage_20;
		NullCheck(L_162);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_163;
		L_163 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_162);
		float L_164 = __this->___Speed_14;
		NullCheck(L_163);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_163, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_164, NULL);
		// CanvasImage.material.SetFloat("EValue", EValue);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_165 = __this->___CanvasImage_20;
		NullCheck(L_165);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_166;
		L_166 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_165);
		float L_167 = __this->___EValue_15;
		NullCheck(L_166);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_166, _stringLiteralAC5FA76BD402040C0453625EC15A8C92646058CE, L_167, NULL);
		// CanvasImage.material.SetFloat("Light", Light);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_168 = __this->___CanvasImage_20;
		NullCheck(L_168);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_169;
		L_169 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_168);
		float L_170 = __this->___Light_16;
		NullCheck(L_169);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_169, _stringLiteral5CE36D1049E621945C0048E2ACEBBD3BAA0E02B3, L_170, NULL);
		// CanvasImage.material.SetFloat("TurnToLiquid", TurnToLiquid);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_171 = __this->___CanvasImage_20;
		NullCheck(L_171);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_172;
		L_172 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_171);
		float L_173 = __this->___TurnToLiquid_12;
		NullCheck(L_172);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_172, _stringLiteral8079F30FC14D3057FE39610A9AA6E9D3963559AC, L_173, NULL);
	}

IL_06aa:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Liquify::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquify_OnDestroy_mE412E86668161F69B90E045D4206D24ED4DD40BE (_2dxFX_AL_Liquify_t393CCF04B0E2DC69E6F9FA3FF64310210C6720AE* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_18;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_18;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_19;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_21;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_21;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_19;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_21;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_20;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_19;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_20;
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
// System.Void _2dxFX_AL_Liquify::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquify_OnDisable_m03993FD56D5C5B2E03A08D46291F905B2E0BA3CB (_2dxFX_AL_Liquify_t393CCF04B0E2DC69E6F9FA3FF64310210C6720AE* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_19;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_21;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_21;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_19;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_21;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_20;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_19;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_20;
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
// System.Void _2dxFX_AL_Liquify::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquify_OnEnable_m4BFE96C62768735B337F0898871B87742D641BB2 (_2dxFX_AL_Liquify_t393CCF04B0E2DC69E6F9FA3FF64310210C6720AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF339292529EAD5C67FF529A82E470E1DEAF24438);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_19;
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
		__this->___defaultMaterial_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_19), (void*)L_3);
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
		String_t* L_6 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_18 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_18), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_18;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_21;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_21;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_18;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		goto IL_009d;
	}

IL_007e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_20;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_18;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
	}

IL_009d:
	{
		// __MainTex2 = Resources.Load("_2dxFX_WaterTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralF339292529EAD5C67FF529A82E470E1DEAF24438, NULL);
		__this->_____MainTex2_11 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_11), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		goto IL_012b;
	}

IL_00b4:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___ForceMaterial_4;
		String_t* L_20 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_21;
		L_21 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_20, NULL);
		NullCheck(L_19);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_19, L_21, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_22, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_23 = __this->___CanvasSpriteRenderer_21;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_25 = __this->___CanvasSpriteRenderer_21;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___ForceMaterial_4;
		NullCheck(L_25);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_25, L_26, NULL);
		goto IL_0116;
	}

IL_00f7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = __this->___CanvasImage_20;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___CanvasImage_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___ForceMaterial_4;
		NullCheck(L_29);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_29, L_30);
	}

IL_0116:
	{
		// __MainTex2 = Resources.Load("_2dxFX_WaterTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31;
		L_31 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralF339292529EAD5C67FF529A82E470E1DEAF24438, NULL);
		__this->_____MainTex2_11 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_11), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
	}

IL_012b:
	{
		// if (__MainTex2)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_32 = __this->_____MainTex2_11;
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
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = __this->_____MainTex2_11;
		NullCheck(L_34);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_34, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_35 = __this->___CanvasSpriteRenderer_21;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_37 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_37);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38;
		L_38 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_37, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = __this->_____MainTex2_11;
		NullCheck(L_38);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_38, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_39, NULL);
		return;
	}

IL_016e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40 = __this->___CanvasImage_20;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___CanvasImage_20;
		NullCheck(L_42);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43;
		L_43 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_42);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = __this->_____MainTex2_11;
		NullCheck(L_43);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_43, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_44, NULL);
	}

IL_0197:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Liquify::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Liquify__ctor_m403749DA63AB4ADE344F4076637780A2E976625D (_2dxFX_AL_Liquify_t393CCF04B0E2DC69E6F9FA3FF64310210C6720AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71B4586515E591495A06C85A6B4181170122615D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Liquify";
		__this->___shader_9 = _stringLiteral71B4586515E591495A06C85A6B4181170122615D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral71B4586515E591495A06C85A6B4181170122615D);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0f, 1f)] public float TurnToLiquid = 0.052f;
		__this->___TurnToLiquid_12 = (0.0520000011f);
		// [HideInInspector] [Range(0.0f, 32f)] public float Heat = 4.0f;
		__this->___Heat_13 = (4.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Speed = 1.0f;
		__this->___Speed_14 = (1.0f);
		// [HideInInspector] [Range(0.0f, 1f)] public float EValue = 1.0f;
		__this->___EValue_15 = (1.0f);
		// [HideInInspector] [Range(-4.0f, 4f)] public float Light = 3.0f;
		__this->___Light_16 = (3.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_22 = (bool)1;
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
// System.Void _2dxFX_AL_MetalFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_MetalFX_Awake_m80A18365B91D71C953254E47A16A57D7CA64CF29 (_2dxFX_AL_MetalFX_t368D31AC926B9BE1C44F29C90458EB1F19ADE730* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_MetalFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_MetalFX_Start_mE942697077CA26405D78988FF7F8539A28229DB2 (_2dxFX_AL_MetalFX_t368D31AC926B9BE1C44F29C90458EB1F19ADE730* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// XUpdate();
		_2dxFX_AL_MetalFX_XUpdate_m999701826E10BC0AE6B5E0B6760523DE8EC47F0B(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_MetalFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_MetalFX_CallUpdate_mF436D28421F02B0B43B6A267242E78C81C892A64 (_2dxFX_AL_MetalFX_t368D31AC926B9BE1C44F29C90458EB1F19ADE730* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_MetalFX_XUpdate_m999701826E10BC0AE6B5E0B6760523DE8EC47F0B(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_MetalFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_MetalFX_Update_mB2CCFB35B584946BA48B429E500E695FC229BECB (_2dxFX_AL_MetalFX_t368D31AC926B9BE1C44F29C90458EB1F19ADE730* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_MetalFX_XUpdate_m999701826E10BC0AE6B5E0B6760523DE8EC47F0B(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_MetalFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_MetalFX_XUpdate_m999701826E10BC0AE6B5E0B6760523DE8EC47F0B (_2dxFX_AL_MetalFX_t368D31AC926B9BE1C44F29C90458EB1F19ADE730* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
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
		String_t* L_30 = __this->___shader_9;
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
		int32_t L_34 = __this->___ShaderChange_12;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a8;
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
			goto IL_013f;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_013f:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_9;
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
			goto IL_0182;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_13;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_01a1;
	}

IL_0182:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_15;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_13;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_01a1:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
	}

IL_01a8:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_05cf;
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
			goto IL_0585;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_10;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// if (_2DxFX.ActiveShadow && AddShadow)
		il2cpp_codegen_runtime_class_init_inline(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		bool L_56 = ((_2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields*)il2cpp_codegen_static_fields_for(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var))->___ActiveShadow_4;
		if (!L_56)
		{
			goto IL_0280;
		}
	}
	{
		bool L_57 = __this->___AddShadow_6;
		if (!L_57)
		{
			goto IL_0280;
		}
	}
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_58);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_58, 1, NULL);
		// if (ReceivedShadow)
		bool L_59 = __this->___ReceivedShadow_7;
		if (!L_59)
		{
			goto IL_0247;
		}
	}
	{
		// CanvasSpriteRenderer.receiveShadows = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_60);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_60, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		NullCheck(L_62);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_62, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_63);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_64;
		L_64 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_63, NULL);
		NullCheck(L_64);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_64, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 1, NULL);
		goto IL_02c3;
	}

IL_0247:
	{
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_65);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_65, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_67, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_68);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69;
		L_69 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_68, NULL);
		NullCheck(L_69);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_69, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
		goto IL_02c3;
	}

IL_0280:
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_71);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_71, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_73, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_74);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_75;
		L_75 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_74, NULL);
		NullCheck(L_75);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_75, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
	}

IL_02c3:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_76 = __this->___BlendMode_8;
		if (L_76)
		{
			goto IL_030e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_81);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82;
		L_82 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_81, NULL);
		NullCheck(L_82);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_82, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_030e:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_83 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_0359;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_88);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89;
		L_89 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_88, NULL);
		NullCheck(L_89);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_89, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0359:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_90 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_90) == ((uint32_t)2))))
		{
			goto IL_03a4;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_95);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96;
		L_96 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_95, NULL);
		NullCheck(L_96);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_96, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_03a4:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_97 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_97) == ((uint32_t)3))))
		{
			goto IL_03ef;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_102);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103;
		L_103 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_102, NULL);
		NullCheck(L_103);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_103, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_03ef:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_104 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_104) == ((uint32_t)4))))
		{
			goto IL_043a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_109);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_110;
		L_110 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_109, NULL);
		NullCheck(L_110);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_110, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_043a:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_111 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_111) == ((uint32_t)5))))
		{
			goto IL_0487;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_116);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_117;
		L_117 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_116, NULL);
		NullCheck(L_117);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_117, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0487:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_118 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_118) == ((uint32_t)6))))
		{
			goto IL_04d3;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_123);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_124;
		L_124 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_123, NULL);
		NullCheck(L_124);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_124, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_04d3:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_125 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_125) == ((uint32_t)7))))
		{
			goto IL_051e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_130);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_131;
		L_131 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_130, NULL);
		NullCheck(L_131);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_131, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_051e:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_132 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_132) == ((uint32_t)8))))
		{
			goto IL_0569;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0569:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Metal);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Metal_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_141, NULL);
		return;
	}

IL_0585:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_142 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_143;
		L_143 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_142, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_143)
		{
			goto IL_05cf;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_144 = __this->___CanvasImage_15;
		NullCheck(L_144);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_145;
		L_145 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_144);
		float L_146 = __this->____Alpha_10;
		NullCheck(L_145);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_145, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_146)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Metal);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = __this->___CanvasImage_15;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_147);
		float L_149 = __this->___Metal_11;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_149, NULL);
	}

IL_05cf:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_MetalFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_MetalFX_OnDestroy_mED503E448D8CAF246C2E7DF5847D88373797C979 (_2dxFX_AL_MetalFX_t368D31AC926B9BE1C44F29C90458EB1F19ADE730* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_MetalFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_MetalFX_OnDisable_m1308EF86AD0139572310D2FC0DA154102D988CF4 (_2dxFX_AL_MetalFX_t368D31AC926B9BE1C44F29C90458EB1F19ADE730* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_MetalFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_MetalFX_OnEnable_m5D73F26F755B8B2D508CAF96658AF5F71EC214B3 (_2dxFX_AL_MetalFX_t368D31AC926B9BE1C44F29C90458EB1F19ADE730* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_14;
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
		__this->___defaultMaterial_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_14), (void*)L_3);
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
		String_t* L_6 = __this->___shader_9;
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
			goto IL_007a;
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

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_15;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_13;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_9;
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
			goto IL_00dc;
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

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_15;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_15;
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
// System.Void _2dxFX_AL_MetalFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_MetalFX__ctor_m4FD821986A05016DAB6B6D5E15C8187DE4BFDC73 (_2dxFX_AL_MetalFX_t368D31AC926B9BE1C44F29C90458EB1F19ADE730* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF14EC446EC325BC01693E16983FDFE12EB09A7F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/MetalFX";
		__this->___shader_9 = _stringLiteralF14EC446EC325BC01693E16983FDFE12EB09A7F3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralF14EC446EC325BC01693E16983FDFE12EB09A7F3);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.001f, 6f)] public float Metal = 1.0f;
		__this->___Metal_11 = (1.0f);
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
// System.Void _2dxFX_AL_Mystic_Distortion::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Mystic_Distortion_Awake_m3AB4680562AE13DDE68CCCB2D4E7A5FACB0C16DF (_2dxFX_AL_Mystic_Distortion_t5D3F53F5A9F3F07A6AE4F84E0489863E63559620* __this, const RuntimeMethod* method) 
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
		__this->___CanvasImage_30 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_30), (void*)L_4);
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
		__this->___CanvasSpriteRenderer_31 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_31), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Mystic_Distortion::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Mystic_Distortion_Start_m810B7244A6148469CE7EB7F33261D71772DCE725 (_2dxFX_AL_Mystic_Distortion_t5D3F53F5A9F3F07A6AE4F84E0489863E63559620* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_27 = 0;
		// XUpdate();
		_2dxFX_AL_Mystic_Distortion_XUpdate_mE4998AAC4B7AFFF37E8C49EA63D9750DDDF28FA1(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Mystic_Distortion::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Mystic_Distortion_CallUpdate_m1064C36CE7BEE18E5D9816E10CFFFE5D101C182F (_2dxFX_AL_Mystic_Distortion_t5D3F53F5A9F3F07A6AE4F84E0489863E63559620* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Mystic_Distortion_XUpdate_mE4998AAC4B7AFFF37E8C49EA63D9750DDDF28FA1(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Mystic_Distortion::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Mystic_Distortion_Update_m59CF4F3CE480D5FA44B70706A40B61FB690BA4D1 (_2dxFX_AL_Mystic_Distortion_t5D3F53F5A9F3F07A6AE4F84E0489863E63559620* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_32;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_AL_Mystic_Distortion_XUpdate_mE4998AAC4B7AFFF37E8C49EA63D9750DDDF28FA1(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Mystic_Distortion::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Mystic_Distortion_XUpdate_mE4998AAC4B7AFFF37E8C49EA63D9750DDDF28FA1 (_2dxFX_AL_Mystic_Distortion_t5D3F53F5A9F3F07A6AE4F84E0489863E63559620* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral240E009D42283D9AF1F4D5CA564205C5255A9960);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BC8D56751E37C6B4A11D742870D42E79C2E9F06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A90695775E1E1455F2A9C11C74D424DD90EDB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD678F4CA88B311E84935640E1244CC2707625352);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF39A7C502D867AE33C5C95F6344CEA9FBF429FCA);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_30;
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
		__this->___CanvasImage_30 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_30), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_31;
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
		__this->___CanvasSpriteRenderer_31 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_31), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_27;
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
		__this->___ShaderChange_27 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_28;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_31;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_31;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_30;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_30;
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
		String_t* L_30 = __this->___shader_9;
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
		int32_t L_34 = __this->___ShaderChange_27;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_28;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_28 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_28), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_28;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_31;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_31;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_28;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_30;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_30;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_28;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_27 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_07ea;
		}
	}
	{
		// if (Pitch_Wave)
		bool L_51 = __this->___Pitch_Wave_12;
		if (!L_51)
		{
			goto IL_01d3;
		}
	}
	{
		// _Pitch_Offset = Mathf.Sin(Time.time * _Pitch_Speed) * 0.05f;
		float L_52;
		L_52 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_53 = __this->____Pitch_Speed_13;
		float L_54;
		L_54 = sinf(((float)il2cpp_codegen_multiply(L_52, L_53)));
		__this->____Pitch_Offset_14 = ((float)il2cpp_codegen_multiply(L_54, (0.0500000007f)));
		goto IL_01de;
	}

IL_01d3:
	{
		// _Pitch_Offset = 0;
		__this->____Pitch_Offset_14 = (0.0f);
	}

IL_01de:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_55 = __this->___CanvasSpriteRenderer_31;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_55, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_56)
		{
			goto IL_065d;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_57 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_57);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_58;
		L_58 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_57, NULL);
		float L_59 = __this->____Alpha_10;
		NullCheck(L_58);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_58, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_59)), NULL);
		// if (_2DxFX.ActiveShadow && AddShadow)
		il2cpp_codegen_runtime_class_init_inline(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		bool L_60 = ((_2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields*)il2cpp_codegen_static_fields_for(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var))->___ActiveShadow_4;
		if (!L_60)
		{
			goto IL_02ab;
		}
	}
	{
		bool L_61 = __this->___AddShadow_6;
		if (!L_61)
		{
			goto IL_02ab;
		}
	}
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_62 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_62);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_62, 1, NULL);
		// if (ReceivedShadow)
		bool L_63 = __this->___ReceivedShadow_7;
		if (!L_63)
		{
			goto IL_0272;
		}
	}
	{
		// CanvasSpriteRenderer.receiveShadows = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_64 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_64);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_64, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_65);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66;
		L_66 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_65, NULL);
		NullCheck(L_66);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_66, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_67 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_67);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_68;
		L_68 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_67, NULL);
		NullCheck(L_68);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_68, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 1, NULL);
		goto IL_02ee;
	}

IL_0272:
	{
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_69 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_69);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_69, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_70);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71;
		L_71 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_70, NULL);
		NullCheck(L_71);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_71, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_73, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
		goto IL_02ee;
	}

IL_02ab:
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_74);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_74, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_75 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_75);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_75, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_76 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_76);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77;
		L_77 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_76, NULL);
		NullCheck(L_77);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_77, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_78 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_78);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_79;
		L_79 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_78, NULL);
		NullCheck(L_79);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_79, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
	}

IL_02ee:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_80 = __this->___BlendMode_8;
		if (L_80)
		{
			goto IL_0339;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_81);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82;
		L_82 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_81, NULL);
		NullCheck(L_82);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_82, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_83 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_83);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_84;
		L_84 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_83, NULL);
		NullCheck(L_84);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_84, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_85 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_85);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_86;
		L_86 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_85, NULL);
		NullCheck(L_86);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_86, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0339:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_87 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_87) == ((uint32_t)1))))
		{
			goto IL_0384;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_88);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89;
		L_89 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_88, NULL);
		NullCheck(L_89);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_89, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_90 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_90);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_91;
		L_91 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_90, NULL);
		NullCheck(L_91);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_91, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_92 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_92);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_93;
		L_93 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_92, NULL);
		NullCheck(L_93);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_93, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0384:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_94 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_94) == ((uint32_t)2))))
		{
			goto IL_03cf;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_95);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96;
		L_96 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_95, NULL);
		NullCheck(L_96);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_96, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_97 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_97);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_98;
		L_98 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_97, NULL);
		NullCheck(L_98);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_98, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_99 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_99);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_100;
		L_100 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_99, NULL);
		NullCheck(L_100);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_100, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_03cf:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_101 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_101) == ((uint32_t)3))))
		{
			goto IL_041a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_102);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103;
		L_103 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_102, NULL);
		NullCheck(L_103);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_103, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_104 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_104);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_105;
		L_105 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_104, NULL);
		NullCheck(L_105);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_105, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_106 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_106);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_107;
		L_107 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_106, NULL);
		NullCheck(L_107);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_107, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_041a:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_108 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_108) == ((uint32_t)4))))
		{
			goto IL_0465;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_109);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_110;
		L_110 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_109, NULL);
		NullCheck(L_110);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_110, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_111 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_111);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_112;
		L_112 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_111, NULL);
		NullCheck(L_112);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_112, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_113 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_113);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_114;
		L_114 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_113, NULL);
		NullCheck(L_114);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_114, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0465:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_115 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_115) == ((uint32_t)5))))
		{
			goto IL_04b2;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_116);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_117;
		L_117 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_116, NULL);
		NullCheck(L_117);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_117, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_118 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_118);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_119;
		L_119 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_118, NULL);
		NullCheck(L_119);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_119, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_120 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_120);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_121;
		L_121 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_120, NULL);
		NullCheck(L_121);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_121, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_04b2:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_122 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_122) == ((uint32_t)6))))
		{
			goto IL_04fe;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_123);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_124;
		L_124 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_123, NULL);
		NullCheck(L_124);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_124, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_125 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_125);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_126;
		L_126 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_125, NULL);
		NullCheck(L_126);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_126, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_127 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_127);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_128;
		L_128 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_127, NULL);
		NullCheck(L_128);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_128, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_04fe:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_129 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_129) == ((uint32_t)7))))
		{
			goto IL_0549;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_130);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_131;
		L_131 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_130, NULL);
		NullCheck(L_131);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_131, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_132 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_132);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_133;
		L_133 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_132, NULL);
		NullCheck(L_133);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_133, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_134 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_134);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_135;
		L_135 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_134, NULL);
		NullCheck(L_135);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_135, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0549:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_136 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_136) == ((uint32_t)8))))
		{
			goto IL_0594;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		NullCheck(L_140);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_140, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_141 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_141);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_142;
		L_142 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_141, NULL);
		NullCheck(L_142);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_142, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0594:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Pitch", _Pitch + _Pitch_Offset);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_143 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_143);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_144;
		L_144 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_143, NULL);
		float L_145 = __this->____Pitch_11;
		float L_146 = __this->____Pitch_Offset_14;
		NullCheck(L_144);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_144, _stringLiteralF39A7C502D867AE33C5C95F6344CEA9FBF429FCA, ((float)il2cpp_codegen_add(L_145, L_146)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetX", _OffsetX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_147 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_147, NULL);
		float L_149 = __this->____OffsetX_15;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_149, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetY", _OffsetY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_150 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_150);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_151;
		L_151 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_150, NULL);
		float L_152 = __this->____OffsetY_16;
		NullCheck(L_151);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_151, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_152, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_DistanceX", _DistanceX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_153 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_153);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154;
		L_154 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_153, NULL);
		float L_155 = __this->____DistanceX_17;
		NullCheck(L_154);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_154, _stringLiteral240E009D42283D9AF1F4D5CA564205C5255A9960, L_155, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_DistanceY", _DistanceY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_156 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_156);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_157;
		L_157 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_156, NULL);
		float L_158 = __this->____DistanceY_18;
		NullCheck(L_157);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_157, _stringLiteralD678F4CA88B311E84935640E1244CC2707625352, L_158, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_WaveTimeX", _WaveTimeX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_159 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_159);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160;
		L_160 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_159, NULL);
		float L_161 = __this->____WaveTimeX_19;
		NullCheck(L_160);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_160, _stringLiteral6BC8D56751E37C6B4A11D742870D42E79C2E9F06, L_161, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_WaveTimeY", _WaveTimeY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_162 = __this->___CanvasSpriteRenderer_31;
		NullCheck(L_162);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_163;
		L_163 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_162, NULL);
		float L_164 = __this->____WaveTimeY_20;
		NullCheck(L_163);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_163, _stringLiteralD4A90695775E1E1455F2A9C11C74D424DD90EDB4, L_164, NULL);
		goto IL_0753;
	}

IL_065d:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_165 = __this->___CanvasImage_30;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_166;
		L_166 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_165, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_166)
		{
			goto IL_0753;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_167 = __this->___CanvasImage_30;
		NullCheck(L_167);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_168;
		L_168 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_167);
		float L_169 = __this->____Alpha_10;
		NullCheck(L_168);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_168, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_169)), NULL);
		// CanvasImage.material.SetFloat("_Pitch", _Pitch + _Pitch_Offset);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_170 = __this->___CanvasImage_30;
		NullCheck(L_170);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_171;
		L_171 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_170);
		float L_172 = __this->____Pitch_11;
		float L_173 = __this->____Pitch_Offset_14;
		NullCheck(L_171);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_171, _stringLiteralF39A7C502D867AE33C5C95F6344CEA9FBF429FCA, ((float)il2cpp_codegen_add(L_172, L_173)), NULL);
		// CanvasImage.material.SetFloat("_OffsetX", _OffsetX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_174 = __this->___CanvasImage_30;
		NullCheck(L_174);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_175;
		L_175 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_174);
		float L_176 = __this->____OffsetX_15;
		NullCheck(L_175);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_175, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_176, NULL);
		// CanvasImage.material.SetFloat("_OffsetY", _OffsetY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_177 = __this->___CanvasImage_30;
		NullCheck(L_177);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_178;
		L_178 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_177);
		float L_179 = __this->____OffsetY_16;
		NullCheck(L_178);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_178, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_179, NULL);
		// CanvasImage.material.SetFloat("_DistanceX", _DistanceX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_180 = __this->___CanvasImage_30;
		NullCheck(L_180);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_181;
		L_181 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_180);
		float L_182 = __this->____DistanceX_17;
		NullCheck(L_181);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_181, _stringLiteral240E009D42283D9AF1F4D5CA564205C5255A9960, L_182, NULL);
		// CanvasImage.material.SetFloat("_DistanceY", _DistanceY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_183 = __this->___CanvasImage_30;
		NullCheck(L_183);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_184;
		L_184 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_183);
		float L_185 = __this->____DistanceY_18;
		NullCheck(L_184);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_184, _stringLiteralD678F4CA88B311E84935640E1244CC2707625352, L_185, NULL);
		// CanvasImage.material.SetFloat("_WaveTimeX", _WaveTimeX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_186 = __this->___CanvasImage_30;
		NullCheck(L_186);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_187;
		L_187 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_186);
		float L_188 = __this->____WaveTimeX_19;
		NullCheck(L_187);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_187, _stringLiteral6BC8D56751E37C6B4A11D742870D42E79C2E9F06, L_188, NULL);
		// CanvasImage.material.SetFloat("_WaveTimeY", _WaveTimeY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_189 = __this->___CanvasImage_30;
		NullCheck(L_189);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_190;
		L_190 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_189);
		float L_191 = __this->____WaveTimeY_20;
		NullCheck(L_190);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_190, _stringLiteralD4A90695775E1E1455F2A9C11C74D424DD90EDB4, L_191, NULL);
	}

IL_0753:
	{
		// if (AutoRandom)
		bool L_192 = __this->___AutoRandom_25;
		if (!L_192)
		{
			goto IL_077a;
		}
	}
	{
		// timerange = (Random.Range(1, AutoRandomRange) / 5) * Time.deltaTime;
		float L_193 = __this->___AutoRandomRange_26;
		float L_194;
		L_194 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((1.0f), L_193, NULL);
		float L_195;
		L_195 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)(L_194/(5.0f))), L_195));
		goto IL_0780;
	}

IL_077a:
	{
		// timerange = Time.deltaTime;
		float L_196;
		L_196 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_196;
	}

IL_0780:
	{
		// if (AutoPlayWaveX) _WaveTimeX += AutoPlaySpeedX * timerange;
		bool L_197 = __this->___AutoPlayWaveX_21;
		if (!L_197)
		{
			goto IL_079d;
		}
	}
	{
		// if (AutoPlayWaveX) _WaveTimeX += AutoPlaySpeedX * timerange;
		float L_198 = __this->____WaveTimeX_19;
		float L_199 = __this->___AutoPlaySpeedX_22;
		float L_200 = V_0;
		__this->____WaveTimeX_19 = ((float)il2cpp_codegen_add(L_198, ((float)il2cpp_codegen_multiply(L_199, L_200))));
	}

IL_079d:
	{
		// if (AutoPlayWaveY) _WaveTimeY += AutoPlaySpeedY * timerange;
		bool L_201 = __this->___AutoPlayWaveY_23;
		if (!L_201)
		{
			goto IL_07ba;
		}
	}
	{
		// if (AutoPlayWaveY) _WaveTimeY += AutoPlaySpeedY * timerange;
		float L_202 = __this->____WaveTimeY_20;
		float L_203 = __this->___AutoPlaySpeedY_24;
		float L_204 = V_0;
		__this->____WaveTimeY_20 = ((float)il2cpp_codegen_add(L_202, ((float)il2cpp_codegen_multiply(L_203, L_204))));
	}

IL_07ba:
	{
		// if (_WaveTimeX > 6.28f) _WaveTimeX = 0f;
		float L_205 = __this->____WaveTimeX_19;
		if ((!(((float)L_205) > ((float)(6.28000021f)))))
		{
			goto IL_07d2;
		}
	}
	{
		// if (_WaveTimeX > 6.28f) _WaveTimeX = 0f;
		__this->____WaveTimeX_19 = (0.0f);
	}

IL_07d2:
	{
		// if (_WaveTimeY > 6.28f) _WaveTimeY = 0f;
		float L_206 = __this->____WaveTimeY_20;
		if ((!(((float)L_206) > ((float)(6.28000021f)))))
		{
			goto IL_07ea;
		}
	}
	{
		// if (_WaveTimeY > 6.28f) _WaveTimeY = 0f;
		__this->____WaveTimeY_20 = (0.0f);
	}

IL_07ea:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Mystic_Distortion::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Mystic_Distortion_OnDestroy_m6E850CEB685907C2F255BE8295AF8E8E121E11A2 (_2dxFX_AL_Mystic_Distortion_t5D3F53F5A9F3F07A6AE4F84E0489863E63559620* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_28;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_28;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_29;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_31;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_31;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_29;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_31;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_30;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_30;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_29;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_30;
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
// System.Void _2dxFX_AL_Mystic_Distortion::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Mystic_Distortion_OnDisable_m272F135F8A9A0143BF4AB36380A5E79EA306985D (_2dxFX_AL_Mystic_Distortion_t5D3F53F5A9F3F07A6AE4F84E0489863E63559620* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_29;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_31;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_31;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_29;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_31;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_30;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_30;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_29;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_30;
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
// System.Void _2dxFX_AL_Mystic_Distortion::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Mystic_Distortion_OnEnable_mA42E2CA564B03298652DF11B6F2A7FBE0407001C (_2dxFX_AL_Mystic_Distortion_t5D3F53F5A9F3F07A6AE4F84E0489863E63559620* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_29;
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
		__this->___defaultMaterial_29 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_29), (void*)L_3);
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
		String_t* L_6 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_28 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_28), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_28;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_31;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_31;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_28;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_30;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_30;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_28;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20;
		L_20 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_19, NULL);
		NullCheck(L_18);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_18, L_20, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___ForceMaterial_4;
		NullCheck(L_21);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_31;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_31;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		return;
	}

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_30;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_30;
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
// System.Void _2dxFX_AL_Mystic_Distortion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Mystic_Distortion__ctor_m67BD7672971DBABC03C78DAB2B34F39A372D9552 (_2dxFX_AL_Mystic_Distortion_t5D3F53F5A9F3F07A6AE4F84E0489863E63559620* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18829825585E73836828059E04190D6A9FABF36B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Mystic_Distortion";
		__this->___shader_9 = _stringLiteral18829825585E73836828059E04190D6A9FABF36B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral18829825585E73836828059E04190D6A9FABF36B);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0f, 0.45f)] public float _Pitch = 0.45f;
		__this->____Pitch_11 = (0.449999988f);
		// [HideInInspector] public bool Pitch_Wave = true;
		__this->___Pitch_Wave_12 = (bool)1;
		// [HideInInspector] [Range(0f, 16f)] public float _Pitch_Speed = 1.0f;
		__this->____Pitch_Speed_13 = (1.0f);
		// [HideInInspector] [Range(0f, 128f)] public float _OffsetX = 56f;
		__this->____OffsetX_15 = (56.0f);
		// [HideInInspector] [Range(0f, 128f)] public float _OffsetY = 28f;
		__this->____OffsetY_16 = (28.0f);
		// [HideInInspector] [Range(0f, 1f)] public float _DistanceX = 0.01f;
		__this->____DistanceX_17 = (0.00999999978f);
		// [HideInInspector] [Range(0f, 1f)] public float _DistanceY = 0.04f;
		__this->____DistanceY_18 = (0.0399999991f);
		// [HideInInspector] [Range(0f, 6.28f)] public float _WaveTimeX = 1.16f;
		__this->____WaveTimeX_19 = (1.15999997f);
		// [HideInInspector] [Range(0f, 6.28f)] public float _WaveTimeY = 5.12f;
		__this->____WaveTimeY_20 = (5.11999989f);
		// [HideInInspector] [Range(0f, 5f)] public float AutoPlaySpeedX = 5f;
		__this->___AutoPlaySpeedX_22 = (5.0f);
		// [HideInInspector] [Range(0f, 50f)] public float AutoPlaySpeedY = 5f;
		__this->___AutoPlaySpeedY_24 = (5.0f);
		// [HideInInspector] [Range(0f, 50f)] public float AutoRandomRange = 10f;
		__this->___AutoRandomRange_26 = (10.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_32 = (bool)1;
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
// System.Void _2dxFX_AL_Negative::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Negative_Awake_mCDA34EE820F5F01F007C603AAF88A7FD5B70DE16 (_2dxFX_AL_Negative_t5FE9AC9A6E70EFFFA7E59684E1079EB7731D2DB5* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Negative::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Negative_Start_m40149233B8AF026133BC406E91D8CBD2E00684C9 (_2dxFX_AL_Negative_t5FE9AC9A6E70EFFFA7E59684E1079EB7731D2DB5* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// XUpdate();
		_2dxFX_AL_Negative_XUpdate_m7C4B8DBF45566229EB7613E0762377A193709570(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Negative::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Negative_CallUpdate_m4055E29D3893FD0746532CFF9635BF2CE878C748 (_2dxFX_AL_Negative_t5FE9AC9A6E70EFFFA7E59684E1079EB7731D2DB5* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Negative_XUpdate_m7C4B8DBF45566229EB7613E0762377A193709570(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Negative::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Negative_Update_m3F617687526936A41E2219C4BF05B05EDD2D9047 (_2dxFX_AL_Negative_t5FE9AC9A6E70EFFFA7E59684E1079EB7731D2DB5* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Negative_XUpdate_m7C4B8DBF45566229EB7613E0762377A193709570(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Negative::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Negative_XUpdate_m7C4B8DBF45566229EB7613E0762377A193709570 (_2dxFX_AL_Negative_t5FE9AC9A6E70EFFFA7E59684E1079EB7731D2DB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
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
		String_t* L_30 = __this->___shader_9;
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
		int32_t L_34 = __this->___ShaderChange_12;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a8;
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
			goto IL_013f;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_013f:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_9;
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
			goto IL_0182;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_13;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_01a1;
	}

IL_0182:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_15;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_13;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_01a1:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
	}

IL_01a8:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_05cf;
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
			goto IL_0585;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_10;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// if (_2DxFX.ActiveShadow && AddShadow)
		il2cpp_codegen_runtime_class_init_inline(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		bool L_56 = ((_2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields*)il2cpp_codegen_static_fields_for(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var))->___ActiveShadow_4;
		if (!L_56)
		{
			goto IL_0280;
		}
	}
	{
		bool L_57 = __this->___AddShadow_6;
		if (!L_57)
		{
			goto IL_0280;
		}
	}
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_58);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_58, 1, NULL);
		// if (ReceivedShadow)
		bool L_59 = __this->___ReceivedShadow_7;
		if (!L_59)
		{
			goto IL_0247;
		}
	}
	{
		// CanvasSpriteRenderer.receiveShadows = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_60);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_60, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		NullCheck(L_62);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_62, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_63);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_64;
		L_64 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_63, NULL);
		NullCheck(L_64);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_64, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 1, NULL);
		goto IL_02c3;
	}

IL_0247:
	{
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_65);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_65, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_67, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_68);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69;
		L_69 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_68, NULL);
		NullCheck(L_69);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_69, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
		goto IL_02c3;
	}

IL_0280:
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_71);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_71, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_73, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_74);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_75;
		L_75 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_74, NULL);
		NullCheck(L_75);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_75, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
	}

IL_02c3:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_76 = __this->___BlendMode_8;
		if (L_76)
		{
			goto IL_030e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_81);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82;
		L_82 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_81, NULL);
		NullCheck(L_82);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_82, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_030e:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_83 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_0359;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_88);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89;
		L_89 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_88, NULL);
		NullCheck(L_89);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_89, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0359:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_90 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_90) == ((uint32_t)2))))
		{
			goto IL_03a4;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_95);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96;
		L_96 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_95, NULL);
		NullCheck(L_96);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_96, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_03a4:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_97 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_97) == ((uint32_t)3))))
		{
			goto IL_03ef;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_102);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103;
		L_103 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_102, NULL);
		NullCheck(L_103);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_103, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_03ef:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_104 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_104) == ((uint32_t)4))))
		{
			goto IL_043a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_109);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_110;
		L_110 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_109, NULL);
		NullCheck(L_110);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_110, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_043a:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_111 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_111) == ((uint32_t)5))))
		{
			goto IL_0487;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_116);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_117;
		L_117 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_116, NULL);
		NullCheck(L_117);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_117, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0487:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_118 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_118) == ((uint32_t)6))))
		{
			goto IL_04d3;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_123);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_124;
		L_124 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_123, NULL);
		NullCheck(L_124);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_124, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_04d3:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_125 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_125) == ((uint32_t)7))))
		{
			goto IL_051e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_130);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_131;
		L_131 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_130, NULL);
		NullCheck(L_131);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_131, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_051e:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_132 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_132) == ((uint32_t)8))))
		{
			goto IL_0569;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0569:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Negative);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Negative_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_141, NULL);
		return;
	}

IL_0585:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_142 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_143;
		L_143 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_142, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_143)
		{
			goto IL_05cf;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_144 = __this->___CanvasImage_15;
		NullCheck(L_144);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_145;
		L_145 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_144);
		float L_146 = __this->____Alpha_10;
		NullCheck(L_145);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_145, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_146)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Negative);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = __this->___CanvasImage_15;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_147);
		float L_149 = __this->___Negative_11;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_149, NULL);
	}

IL_05cf:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Negative::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Negative_OnDestroy_m80DD075A4B20129C81D3F17FE6666554311BA9AE (_2dxFX_AL_Negative_t5FE9AC9A6E70EFFFA7E59684E1079EB7731D2DB5* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Negative::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Negative_OnDisable_m0F36DDF2736F4FA7CE8038E10A6275CEFF665A46 (_2dxFX_AL_Negative_t5FE9AC9A6E70EFFFA7E59684E1079EB7731D2DB5* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Negative::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Negative_OnEnable_mD32FD3391710F0C4C4426BB4DE9F036250289FBE (_2dxFX_AL_Negative_t5FE9AC9A6E70EFFFA7E59684E1079EB7731D2DB5* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_14;
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
		__this->___defaultMaterial_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_14), (void*)L_3);
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
		String_t* L_6 = __this->___shader_9;
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
			goto IL_007a;
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

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_15;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_13;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_9;
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
			goto IL_00dc;
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

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_15;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_15;
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
// System.Void _2dxFX_AL_Negative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Negative__ctor_m642F4C0FFEED7FF3110958BEA352C64F356AA528 (_2dxFX_AL_Negative_t5FE9AC9A6E70EFFFA7E59684E1079EB7731D2DB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral159776EAAF28A03FCC1FEE39ACCED774337D627A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Negative";
		__this->___shader_9 = _stringLiteral159776EAAF28A03FCC1FEE39ACCED774337D627A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral159776EAAF28A03FCC1FEE39ACCED774337D627A);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float Negative = 1.0f;
		__this->___Negative_11 = (1.0f);
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
// System.Void _2dxFX_AL_Noise::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Noise_Awake_m4C5E29C484DD45A774C77B91CCB3381EBBF2044C (_2dxFX_AL_Noise_t129E280547B21D3DD348120D389DDA7F40EAFC00* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Noise::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Noise_Start_m12407EFCBE1EF403CA513F290E3DAD5876B38BED (_2dxFX_AL_Noise_t129E280547B21D3DD348120D389DDA7F40EAFC00* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// XUpdate();
		_2dxFX_AL_Noise_XUpdate_m851BCDD2D1AC8183C8442A913C1DF5631F986D26(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Noise::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Noise_CallUpdate_m2EA948E36989A9C263350F3BB1983569DAA4BF59 (_2dxFX_AL_Noise_t129E280547B21D3DD348120D389DDA7F40EAFC00* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Noise_XUpdate_m851BCDD2D1AC8183C8442A913C1DF5631F986D26(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Noise::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Noise_Update_m1451A710BDE6C121984EE021027E81F96D76E39D (_2dxFX_AL_Noise_t129E280547B21D3DD348120D389DDA7F40EAFC00* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Noise_XUpdate_m851BCDD2D1AC8183C8442A913C1DF5631F986D26(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Noise::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Noise_XUpdate_m851BCDD2D1AC8183C8442A913C1DF5631F986D26 (_2dxFX_AL_Noise_t129E280547B21D3DD348120D389DDA7F40EAFC00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
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
		String_t* L_30 = __this->___shader_9;
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
		int32_t L_34 = __this->___ShaderChange_12;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a8;
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
			goto IL_013f;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_013f:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_9;
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
			goto IL_0182;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_13;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_01a1;
	}

IL_0182:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_15;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_13;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_01a1:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
	}

IL_01a8:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_05cf;
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
			goto IL_0585;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_10;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// if (_2DxFX.ActiveShadow && AddShadow)
		il2cpp_codegen_runtime_class_init_inline(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		bool L_56 = ((_2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields*)il2cpp_codegen_static_fields_for(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var))->___ActiveShadow_4;
		if (!L_56)
		{
			goto IL_0280;
		}
	}
	{
		bool L_57 = __this->___AddShadow_6;
		if (!L_57)
		{
			goto IL_0280;
		}
	}
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_58);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_58, 1, NULL);
		// if (ReceivedShadow)
		bool L_59 = __this->___ReceivedShadow_7;
		if (!L_59)
		{
			goto IL_0247;
		}
	}
	{
		// CanvasSpriteRenderer.receiveShadows = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_60);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_60, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		NullCheck(L_62);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_62, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_63);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_64;
		L_64 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_63, NULL);
		NullCheck(L_64);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_64, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 1, NULL);
		goto IL_02c3;
	}

IL_0247:
	{
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_65);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_65, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_67, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_68);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69;
		L_69 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_68, NULL);
		NullCheck(L_69);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_69, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
		goto IL_02c3;
	}

IL_0280:
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_71);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_71, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_73, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_74);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_75;
		L_75 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_74, NULL);
		NullCheck(L_75);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_75, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
	}

IL_02c3:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_76 = __this->___BlendMode_8;
		if (L_76)
		{
			goto IL_030e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_81);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82;
		L_82 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_81, NULL);
		NullCheck(L_82);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_82, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_030e:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_83 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_0359;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_88);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89;
		L_89 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_88, NULL);
		NullCheck(L_89);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_89, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0359:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_90 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_90) == ((uint32_t)2))))
		{
			goto IL_03a4;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_95);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96;
		L_96 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_95, NULL);
		NullCheck(L_96);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_96, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_03a4:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_97 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_97) == ((uint32_t)3))))
		{
			goto IL_03ef;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_102);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103;
		L_103 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_102, NULL);
		NullCheck(L_103);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_103, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_03ef:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_104 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_104) == ((uint32_t)4))))
		{
			goto IL_043a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_109);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_110;
		L_110 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_109, NULL);
		NullCheck(L_110);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_110, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_043a:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_111 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_111) == ((uint32_t)5))))
		{
			goto IL_0487;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_116);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_117;
		L_117 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_116, NULL);
		NullCheck(L_117);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_117, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0487:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_118 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_118) == ((uint32_t)6))))
		{
			goto IL_04d3;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_123);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_124;
		L_124 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_123, NULL);
		NullCheck(L_124);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_124, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_04d3:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_125 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_125) == ((uint32_t)7))))
		{
			goto IL_051e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_130);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_131;
		L_131 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_130, NULL);
		NullCheck(L_131);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_131, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_051e:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_132 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_132) == ((uint32_t)8))))
		{
			goto IL_0569;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0569:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Noise);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Noise_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_141, NULL);
		return;
	}

IL_0585:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_142 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_143;
		L_143 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_142, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_143)
		{
			goto IL_05cf;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_144 = __this->___CanvasImage_15;
		NullCheck(L_144);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_145;
		L_145 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_144);
		float L_146 = __this->____Alpha_10;
		NullCheck(L_145);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_145, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_146)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Noise);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = __this->___CanvasImage_15;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_147);
		float L_149 = __this->___Noise_11;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_149, NULL);
	}

IL_05cf:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Noise::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Noise_OnDestroy_mA67602F39EF5C506D6A93B9097DB86C832C97386 (_2dxFX_AL_Noise_t129E280547B21D3DD348120D389DDA7F40EAFC00* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Noise::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Noise_OnDisable_mE86A173556578478F6FECAFC44D3F999BCCB35AE (_2dxFX_AL_Noise_t129E280547B21D3DD348120D389DDA7F40EAFC00* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Noise::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Noise_OnEnable_m53789BC4C1E14692410008FC8F9DD553D2B185FD (_2dxFX_AL_Noise_t129E280547B21D3DD348120D389DDA7F40EAFC00* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_14;
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
		__this->___defaultMaterial_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_14), (void*)L_3);
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
		String_t* L_6 = __this->___shader_9;
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
			goto IL_007a;
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

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_15;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_13;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_009a:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ForceMaterial_4;
		String_t* L_19 = __this->___shader_9;
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
			goto IL_00dc;
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

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_15;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_15;
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
// System.Void _2dxFX_AL_Noise::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Noise__ctor_m69C0B7FB6DCA683B8F18A12A4DD0919A1148FE63 (_2dxFX_AL_Noise_t129E280547B21D3DD348120D389DDA7F40EAFC00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34DFDC6C4D531D9913656FF00D22172453F9D3C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Noise";
		__this->___shader_9 = _stringLiteral34DFDC6C4D531D9913656FF00D22172453F9D3C1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral34DFDC6C4D531D9913656FF00D22172453F9D3C1);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float Noise = 0.5f;
		__this->___Noise_11 = (0.5f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_17 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
