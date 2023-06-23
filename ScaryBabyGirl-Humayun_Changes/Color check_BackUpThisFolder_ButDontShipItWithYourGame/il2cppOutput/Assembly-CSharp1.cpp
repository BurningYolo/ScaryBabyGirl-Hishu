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
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// _2dxFX_AL_CompressionFX
struct _2dxFX_AL_CompressionFX_tE5A2E34A772166359345F4D65CFAF21C80CEE5FB;
// _2dxFX_AL_DesintegrationFX
struct _2dxFX_AL_DesintegrationFX_t63363AED44814F2202CC9598C8C72A9068562093;
// _2dxFX_AL_DestroyedFX
struct _2dxFX_AL_DestroyedFX_tF4A82E711E49786BAE62C440ADC56636358FA3C9;
// _2dxFX_AL_Distortion
struct _2dxFX_AL_Distortion_t5FC24E37F3E5C193CC69C55802F2FCA298D07339;
// _2dxFX_AL_EdgeColor
struct _2dxFX_AL_EdgeColor_t3DC39DC297F04EB417AACB2DABFA0CCC48F0734A;
// _2dxFX_AL_EnergyBar
struct _2dxFX_AL_EnergyBar_tBE5C710496AE3CFDC0360E7CD7CB79F700E2785F;
// _2dxFX_AL_Fire
struct _2dxFX_AL_Fire_t87EB5BB1F346367A97088A03C026998A6EEA556A;
// _2dxFX_AL_Flame
struct _2dxFX_AL_Flame_tD17FE00732791D14EF2022C8F6A1EE3FD1D9E9E0;
// _2dxFX_AL_Frozen
struct _2dxFX_AL_Frozen_t31CA9722683C39694A0F5C4E5D654DFC9768EBE6;
// _2dxFX_AL_Ghost
struct _2dxFX_AL_Ghost_t3D336EDC19FBE167A454F834E8261DDD4962753A;
// _2dxFX_AL_GoldenFX
struct _2dxFX_AL_GoldenFX_t37F959FB0D0827FFAC27C0B511A57FAF285870F8;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3;
IL2CPP_EXTERN_C String_t* _stringLiteral1C26F33C0DE4C81DCEA6058BFCECF194E6A820D1;
IL2CPP_EXTERN_C String_t* _stringLiteral1D353D53F4C8F559C72530CD77E0A1517FA9447B;
IL2CPP_EXTERN_C String_t* _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E;
IL2CPP_EXTERN_C String_t* _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7;
IL2CPP_EXTERN_C String_t* _stringLiteral240E009D42283D9AF1F4D5CA564205C5255A9960;
IL2CPP_EXTERN_C String_t* _stringLiteral2B320216F6F6FE23325BCE983AAB3CE5DF975015;
IL2CPP_EXTERN_C String_t* _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266;
IL2CPP_EXTERN_C String_t* _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59;
IL2CPP_EXTERN_C String_t* _stringLiteral3428C548976E662D3E7C427291DE0DE044FA9CBB;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral39E3446F939EA6E1EAF7A4BDFA5DE287D99144EA;
IL2CPP_EXTERN_C String_t* _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75;
IL2CPP_EXTERN_C String_t* _stringLiteral455192F2C6C0DDD922218931AB63F3F8AB307544;
IL2CPP_EXTERN_C String_t* _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25;
IL2CPP_EXTERN_C String_t* _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E;
IL2CPP_EXTERN_C String_t* _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227;
IL2CPP_EXTERN_C String_t* _stringLiteral55C14E004F846FB099A44A6870DA7B59B01FF067;
IL2CPP_EXTERN_C String_t* _stringLiteral58EE991C0D62941158D2C3989C441E4E000D65E0;
IL2CPP_EXTERN_C String_t* _stringLiteral5C328221EC29787E96EFDF8E03B9A8367B5DD360;
IL2CPP_EXTERN_C String_t* _stringLiteral5CD364028726F8C126B7CB41B1DF1D96B6FDF157;
IL2CPP_EXTERN_C String_t* _stringLiteral62956ED0D92D65B51D730B8E115A8277D3BB9C02;
IL2CPP_EXTERN_C String_t* _stringLiteral6BC8D56751E37C6B4A11D742870D42E79C2E9F06;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1;
IL2CPP_EXTERN_C String_t* _stringLiteral7880DFD2BB8B1AF08410611642E049BBBA064411;
IL2CPP_EXTERN_C String_t* _stringLiteral7B2E394C745A9FA989279137456A6B330EDE6E47;
IL2CPP_EXTERN_C String_t* _stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117;
IL2CPP_EXTERN_C String_t* _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F;
IL2CPP_EXTERN_C String_t* _stringLiteralA8EABE35E4B424A8A270ADF170C9E981DF3AB9AF;
IL2CPP_EXTERN_C String_t* _stringLiteralACD0837812B6D65A6BA484B4DF0DD37F0120C3B3;
IL2CPP_EXTERN_C String_t* _stringLiteralBABCE21F6236857B5A96729B58CF1F3FD05271AA;
IL2CPP_EXTERN_C String_t* _stringLiteralC027B6E7BCC4F8F7D81CABD9F14E79C86D6C1415;
IL2CPP_EXTERN_C String_t* _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A90695775E1E1455F2A9C11C74D424DD90EDB4;
IL2CPP_EXTERN_C String_t* _stringLiteralD678F4CA88B311E84935640E1244CC2707625352;
IL2CPP_EXTERN_C String_t* _stringLiteralDA072EB754C30E9D13AA23AA4AB225FECC2493CD;
IL2CPP_EXTERN_C String_t* _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F;
IL2CPP_EXTERN_C String_t* _stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1;
IL2CPP_EXTERN_C String_t* _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A;
IL2CPP_EXTERN_C String_t* _stringLiteralEDBE41FD6B93510E111F938FA8A1071CCE4D1874;
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

// _2dxFX_AL_CompressionFX
struct _2dxFX_AL_CompressionFX_tE5A2E34A772166359345F4D65CFAF21C80CEE5FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_CompressionFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_CompressionFX::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_CompressionFX::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_CompressionFX::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_CompressionFX::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_CompressionFX::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_CompressionFX::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_CompressionFX::Parasite
	float ___Parasite_11;
	// System.Int32 _2dxFX_AL_CompressionFX::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_AL_CompressionFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_AL_CompressionFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_AL_CompressionFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_AL_CompressionFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_AL_CompressionFX::ActiveUpdate
	bool ___ActiveUpdate_17;
};

// _2dxFX_AL_DesintegrationFX
struct _2dxFX_AL_DesintegrationFX_t63363AED44814F2202CC9598C8C72A9068562093  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_DesintegrationFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_DesintegrationFX::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_DesintegrationFX::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_DesintegrationFX::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_DesintegrationFX::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_DesintegrationFX::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_DesintegrationFX::_Alpha
	float ____Alpha_10;
	// UnityEngine.Color _2dxFX_AL_DesintegrationFX::_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____Color_11;
	// System.Single _2dxFX_AL_DesintegrationFX::Seed
	float ___Seed_12;
	// System.Single _2dxFX_AL_DesintegrationFX::Desintegration
	float ___Desintegration_13;
	// System.Int32 _2dxFX_AL_DesintegrationFX::ShaderChange
	int32_t ___ShaderChange_14;
	// UnityEngine.Material _2dxFX_AL_DesintegrationFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_15;
	// UnityEngine.Material _2dxFX_AL_DesintegrationFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_16;
	// UnityEngine.UI.Image _2dxFX_AL_DesintegrationFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_17;
	// UnityEngine.SpriteRenderer _2dxFX_AL_DesintegrationFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_18;
	// System.Boolean _2dxFX_AL_DesintegrationFX::ActiveUpdate
	bool ___ActiveUpdate_19;
};

// _2dxFX_AL_DestroyedFX
struct _2dxFX_AL_DestroyedFX_tF4A82E711E49786BAE62C440ADC56636358FA3C9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_DestroyedFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_DestroyedFX::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_DestroyedFX::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_DestroyedFX::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_DestroyedFX::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_DestroyedFX::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_DestroyedFX::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_DestroyedFX::Seed
	float ___Seed_11;
	// System.Single _2dxFX_AL_DestroyedFX::Destroyed
	float ___Destroyed_12;
	// System.Int32 _2dxFX_AL_DestroyedFX::ShaderChange
	int32_t ___ShaderChange_13;
	// UnityEngine.Material _2dxFX_AL_DestroyedFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_14;
	// UnityEngine.Material _2dxFX_AL_DestroyedFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_15;
	// UnityEngine.UI.Image _2dxFX_AL_DestroyedFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_16;
	// UnityEngine.SpriteRenderer _2dxFX_AL_DestroyedFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_17;
	// System.Boolean _2dxFX_AL_DestroyedFX::ActiveUpdate
	bool ___ActiveUpdate_18;
};

// _2dxFX_AL_Distortion
struct _2dxFX_AL_Distortion_t5FC24E37F3E5C193CC69C55802F2FCA298D07339  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Distortion::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Distortion::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Distortion::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Distortion::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Distortion::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Distortion::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Distortion::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Distortion::_OffsetX
	float ____OffsetX_11;
	// System.Single _2dxFX_AL_Distortion::_OffsetY
	float ____OffsetY_12;
	// System.Single _2dxFX_AL_Distortion::_DistanceX
	float ____DistanceX_13;
	// System.Single _2dxFX_AL_Distortion::_DistanceY
	float ____DistanceY_14;
	// System.Single _2dxFX_AL_Distortion::_WaveTimeX
	float ____WaveTimeX_15;
	// System.Single _2dxFX_AL_Distortion::_WaveTimeY
	float ____WaveTimeY_16;
	// System.Boolean _2dxFX_AL_Distortion::AutoPlayWaveX
	bool ___AutoPlayWaveX_17;
	// System.Single _2dxFX_AL_Distortion::AutoPlaySpeedX
	float ___AutoPlaySpeedX_18;
	// System.Boolean _2dxFX_AL_Distortion::AutoPlayWaveY
	bool ___AutoPlayWaveY_19;
	// System.Single _2dxFX_AL_Distortion::AutoPlaySpeedY
	float ___AutoPlaySpeedY_20;
	// System.Boolean _2dxFX_AL_Distortion::AutoRandom
	bool ___AutoRandom_21;
	// System.Single _2dxFX_AL_Distortion::AutoRandomRange
	float ___AutoRandomRange_22;
	// System.Int32 _2dxFX_AL_Distortion::ShaderChange
	int32_t ___ShaderChange_23;
	// UnityEngine.Material _2dxFX_AL_Distortion::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_24;
	// UnityEngine.Material _2dxFX_AL_Distortion::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_25;
	// UnityEngine.UI.Image _2dxFX_AL_Distortion::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_26;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Distortion::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_27;
	// System.Boolean _2dxFX_AL_Distortion::ActiveUpdate
	bool ___ActiveUpdate_28;
};

// _2dxFX_AL_EdgeColor
struct _2dxFX_AL_EdgeColor_t3DC39DC297F04EB417AACB2DABFA0CCC48F0734A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_EdgeColor::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_EdgeColor::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_EdgeColor::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_EdgeColor::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_EdgeColor::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_EdgeColor::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_EdgeColor::_Alpha
	float ____Alpha_10;
	// UnityEngine.Color _2dxFX_AL_EdgeColor::_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____Color_11;
	// System.Int32 _2dxFX_AL_EdgeColor::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_AL_EdgeColor::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_AL_EdgeColor::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_AL_EdgeColor::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_AL_EdgeColor::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_AL_EdgeColor::ActiveUpdate
	bool ___ActiveUpdate_17;
};

// _2dxFX_AL_EnergyBar
struct _2dxFX_AL_EnergyBar_tBE5C710496AE3CFDC0360E7CD7CB79F700E2785F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_EnergyBar::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_EnergyBar::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_EnergyBar::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_EnergyBar::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_EnergyBar::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_EnergyBar::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_EnergyBar::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_EnergyBar::BarProgress
	float ___BarProgress_11;
	// System.Single _2dxFX_AL_EnergyBar::_Value2
	float ____Value2_12;
	// System.Single _2dxFX_AL_EnergyBar::_Value3
	float ____Value3_13;
	// System.Single _2dxFX_AL_EnergyBar::_Value4
	float ____Value4_14;
	// System.Single _2dxFX_AL_EnergyBar::_Value5
	float ____Value5_15;
	// System.Int32 _2dxFX_AL_EnergyBar::ShaderChange
	int32_t ___ShaderChange_16;
	// UnityEngine.Material _2dxFX_AL_EnergyBar::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_17;
	// UnityEngine.Material _2dxFX_AL_EnergyBar::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_18;
	// UnityEngine.UI.Image _2dxFX_AL_EnergyBar::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_19;
	// UnityEngine.SpriteRenderer _2dxFX_AL_EnergyBar::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_20;
	// System.Boolean _2dxFX_AL_EnergyBar::ActiveUpdate
	bool ___ActiveUpdate_21;
};

// _2dxFX_AL_Fire
struct _2dxFX_AL_Fire_t87EB5BB1F346367A97088A03C026998A6EEA556A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Fire::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Fire::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Fire::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Fire::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Fire::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Fire::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Fire::_Alpha
	float ____Alpha_10;
	// UnityEngine.Texture2D _2dxFX_AL_Fire::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_11;
	// System.Single _2dxFX_AL_Fire::_Value1
	float ____Value1_12;
	// System.Single _2dxFX_AL_Fire::_Value2
	float ____Value2_13;
	// System.Single _2dxFX_AL_Fire::_Value3
	float ____Value3_14;
	// System.Single _2dxFX_AL_Fire::_Value4
	float ____Value4_15;
	// System.Boolean _2dxFX_AL_Fire::_AutoScrollX
	bool ____AutoScrollX_16;
	// System.Single _2dxFX_AL_Fire::_AutoScrollSpeedX
	float ____AutoScrollSpeedX_17;
	// System.Boolean _2dxFX_AL_Fire::_AutoScrollY
	bool ____AutoScrollY_18;
	// System.Single _2dxFX_AL_Fire::_AutoScrollSpeedY
	float ____AutoScrollSpeedY_19;
	// System.Single _2dxFX_AL_Fire::_AutoScrollCountX
	float ____AutoScrollCountX_20;
	// System.Single _2dxFX_AL_Fire::_AutoScrollCountY
	float ____AutoScrollCountY_21;
	// System.Int32 _2dxFX_AL_Fire::ShaderChange
	int32_t ___ShaderChange_22;
	// UnityEngine.Material _2dxFX_AL_Fire::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_23;
	// UnityEngine.Material _2dxFX_AL_Fire::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_24;
	// UnityEngine.UI.Image _2dxFX_AL_Fire::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_25;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Fire::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_26;
	// System.Boolean _2dxFX_AL_Fire::ActiveUpdate
	bool ___ActiveUpdate_27;
};

// _2dxFX_AL_Flame
struct _2dxFX_AL_Flame_tD17FE00732791D14EF2022C8F6A1EE3FD1D9E9E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Flame::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Flame::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Flame::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Flame::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Flame::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Flame::shader
	String_t* ___shader_9;
	// UnityEngine.Texture2D _2dxFX_AL_Flame::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_10;
	// System.Single _2dxFX_AL_Flame::_Alpha
	float ____Alpha_11;
	// System.Single _2dxFX_AL_Flame::_Speed
	float ____Speed_12;
	// System.Single _2dxFX_AL_Flame::_Intensity
	float ____Intensity_13;
	// System.Int32 _2dxFX_AL_Flame::ShaderChange
	int32_t ___ShaderChange_14;
	// UnityEngine.Material _2dxFX_AL_Flame::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_15;
	// UnityEngine.Material _2dxFX_AL_Flame::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_16;
	// UnityEngine.UI.Image _2dxFX_AL_Flame::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_17;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Flame::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_18;
	// System.Boolean _2dxFX_AL_Flame::ActiveUpdate
	bool ___ActiveUpdate_19;
};

// _2dxFX_AL_Frozen
struct _2dxFX_AL_Frozen_t31CA9722683C39694A0F5C4E5D654DFC9768EBE6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Frozen::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Frozen::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Frozen::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Frozen::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Frozen::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Frozen::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Frozen::_Alpha
	float ____Alpha_10;
	// UnityEngine.Texture2D _2dxFX_AL_Frozen::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_11;
	// System.Single _2dxFX_AL_Frozen::_Value1
	float ____Value1_12;
	// System.Single _2dxFX_AL_Frozen::_Value2
	float ____Value2_13;
	// System.Single _2dxFX_AL_Frozen::_Value3
	float ____Value3_14;
	// System.Single _2dxFX_AL_Frozen::_Value4
	float ____Value4_15;
	// System.Boolean _2dxFX_AL_Frozen::_AutoScrollX
	bool ____AutoScrollX_16;
	// System.Single _2dxFX_AL_Frozen::_AutoScrollSpeedX
	float ____AutoScrollSpeedX_17;
	// System.Boolean _2dxFX_AL_Frozen::_AutoScrollY
	bool ____AutoScrollY_18;
	// System.Single _2dxFX_AL_Frozen::_AutoScrollSpeedY
	float ____AutoScrollSpeedY_19;
	// System.Single _2dxFX_AL_Frozen::_AutoScrollCountX
	float ____AutoScrollCountX_20;
	// System.Single _2dxFX_AL_Frozen::_AutoScrollCountY
	float ____AutoScrollCountY_21;
	// System.Int32 _2dxFX_AL_Frozen::ShaderChange
	int32_t ___ShaderChange_22;
	// UnityEngine.Material _2dxFX_AL_Frozen::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_23;
	// UnityEngine.Material _2dxFX_AL_Frozen::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_24;
	// UnityEngine.UI.Image _2dxFX_AL_Frozen::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_25;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Frozen::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_26;
	// System.Boolean _2dxFX_AL_Frozen::ActiveUpdate
	bool ___ActiveUpdate_27;
};

// _2dxFX_AL_Ghost
struct _2dxFX_AL_Ghost_t3D336EDC19FBE167A454F834E8261DDD4962753A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Ghost::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Ghost::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Ghost::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Ghost::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Ghost::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Ghost::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Ghost::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Ghost::_offset
	float ____offset_11;
	// System.Single _2dxFX_AL_Ghost::_ClipLeft
	float ____ClipLeft_12;
	// System.Single _2dxFX_AL_Ghost::_ClipRight
	float ____ClipRight_13;
	// System.Single _2dxFX_AL_Ghost::_ClipUp
	float ____ClipUp_14;
	// System.Single _2dxFX_AL_Ghost::_ClipDown
	float ____ClipDown_15;
	// System.Int32 _2dxFX_AL_Ghost::ShaderChange
	int32_t ___ShaderChange_16;
	// UnityEngine.Material _2dxFX_AL_Ghost::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_17;
	// UnityEngine.Material _2dxFX_AL_Ghost::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_18;
	// UnityEngine.UI.Image _2dxFX_AL_Ghost::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_19;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Ghost::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_20;
	// System.Boolean _2dxFX_AL_Ghost::ActiveUpdate
	bool ___ActiveUpdate_21;
};

// _2dxFX_AL_GoldenFX
struct _2dxFX_AL_GoldenFX_t37F959FB0D0827FFAC27C0B511A57FAF285870F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_GoldenFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_GoldenFX::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_GoldenFX::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_GoldenFX::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_GoldenFX::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_GoldenFX::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_GoldenFX::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_GoldenFX::Golden
	float ___Golden_11;
	// System.Int32 _2dxFX_AL_GoldenFX::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_AL_GoldenFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_AL_GoldenFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_AL_GoldenFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_AL_GoldenFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_AL_GoldenFX::ActiveUpdate
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
// System.Void _2dxFX_AL_CompressionFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_CompressionFX_XUpdate_m1E72B1540F1FD1111C77B7FACF61C0DF7682191E (_2dxFX_AL_CompressionFX_tE5A2E34A772166359345F4D65CFAF21C80CEE5FB* __this, const RuntimeMethod* method) ;
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
// System.Void _2dxFX_AL_DesintegrationFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DesintegrationFX_XUpdate_mA2F28ACFA15BA197361F7900DB33D042DE7437DD (_2dxFX_AL_DesintegrationFX_t63363AED44814F2202CC9598C8C72A9068562093* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_DestroyedFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DestroyedFX_XUpdate_m0CB848E62C5AA20582DC72A46E8D9F3F3FFE643B (_2dxFX_AL_DestroyedFX_tF4A82E711E49786BAE62C440ADC56636358FA3C9* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Distortion::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Distortion_XUpdate_mE9DC98CF394E8AEB90FBA0784338DFCB2A018DC9 (_2dxFX_AL_Distortion_t5FC24E37F3E5C193CC69C55802F2FCA298D07339* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_EdgeColor::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EdgeColor_XUpdate_mAD814DBD8F7C0CF8FDAEF88D73EAE4544B8B1542 (_2dxFX_AL_EdgeColor_t3DC39DC297F04EB417AACB2DABFA0CCC48F0734A* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_EnergyBar::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EnergyBar_XUpdate_m4DE762E8F2035D45D776F37439038AD4799DAD68 (_2dxFX_AL_EnergyBar_tBE5C710496AE3CFDC0360E7CD7CB79F700E2785F* __this, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Fire::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Fire_XUpdate_mA8D9225BAF8363C072DB37FB090D170D93E1A263 (_2dxFX_AL_Fire_t87EB5BB1F346367A97088A03C026998A6EEA556A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Flame::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Flame_XUpdate_m1E27AE7DF3B3ABAF1876508C25375B7DE1683540 (_2dxFX_AL_Flame_tD17FE00732791D14EF2022C8F6A1EE3FD1D9E9E0* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Frozen::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Frozen_XUpdate_m0D5A1A0B78E2144D7F8E3FCC616EF8E7F69FD457 (_2dxFX_AL_Frozen_t31CA9722683C39694A0F5C4E5D654DFC9768EBE6* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Ghost::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ghost_XUpdate_mE364235663C5DBC116186B6D740322EF2CE718E3 (_2dxFX_AL_Ghost_t3D336EDC19FBE167A454F834E8261DDD4962753A* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_GoldenFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldenFX_XUpdate_m7CC6175AFADEBEC2AF5123F37A4EB3172DC42F6B (_2dxFX_AL_GoldenFX_t37F959FB0D0827FFAC27C0B511A57FAF285870F8* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void _2dxFX_AL_CompressionFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_CompressionFX_Awake_m25FFBCCC6E79745D98700EB0C619D94472146908 (_2dxFX_AL_CompressionFX_tE5A2E34A772166359345F4D65CFAF21C80CEE5FB* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_CompressionFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_CompressionFX_Start_mDB02841F644A5B52E4D3D5437F0E2CDDB7744BFC (_2dxFX_AL_CompressionFX_tE5A2E34A772166359345F4D65CFAF21C80CEE5FB* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// XUpdate();
		_2dxFX_AL_CompressionFX_XUpdate_m1E72B1540F1FD1111C77B7FACF61C0DF7682191E(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_CompressionFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_CompressionFX_CallUpdate_mC94970D1DE67B2FD5954EF85317AF56622396072 (_2dxFX_AL_CompressionFX_tE5A2E34A772166359345F4D65CFAF21C80CEE5FB* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_CompressionFX_XUpdate_m1E72B1540F1FD1111C77B7FACF61C0DF7682191E(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_CompressionFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_CompressionFX_Update_mF08D2ECD0185AFC389D9B455086A1D6293BE7C9A (_2dxFX_AL_CompressionFX_tE5A2E34A772166359345F4D65CFAF21C80CEE5FB* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_CompressionFX_XUpdate_m1E72B1540F1FD1111C77B7FACF61C0DF7682191E(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_CompressionFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_CompressionFX_XUpdate_m1E72B1540F1FD1111C77B7FACF61C0DF7682191E (_2dxFX_AL_CompressionFX_tE5A2E34A772166359345F4D65CFAF21C80CEE5FB* __this, const RuntimeMethod* method) 
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
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Parasite);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Parasite_11;
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
		// CanvasImage.material.SetFloat("_Distortion", Parasite);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = __this->___CanvasImage_15;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_147);
		float L_149 = __this->___Parasite_11;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_149, NULL);
	}

IL_05c8:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_CompressionFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_CompressionFX_OnDestroy_mD69E0A52657BE2AC1366A4BBF18651C8B5EF2BCE (_2dxFX_AL_CompressionFX_tE5A2E34A772166359345F4D65CFAF21C80CEE5FB* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_CompressionFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_CompressionFX_OnDisable_mA20C3EC5FBEC876C557886CB2BEAD42531966F67 (_2dxFX_AL_CompressionFX_tE5A2E34A772166359345F4D65CFAF21C80CEE5FB* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_CompressionFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_CompressionFX_OnEnable_mBA174C42287D62536C8E5936208986C0FF374C02 (_2dxFX_AL_CompressionFX_tE5A2E34A772166359345F4D65CFAF21C80CEE5FB* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_CompressionFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_CompressionFX__ctor_m0F9FE10848822F761AB75BA7047CB62FD17056B9 (_2dxFX_AL_CompressionFX_tE5A2E34A772166359345F4D65CFAF21C80CEE5FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDBE41FD6B93510E111F938FA8A1071CCE4D1874);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/CompressionFX";
		__this->___shader_9 = _stringLiteralEDBE41FD6B93510E111F938FA8A1071CCE4D1874;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralEDBE41FD6B93510E111F938FA8A1071CCE4D1874);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(1, 128)] public float Parasite = 64.0f;
		__this->___Parasite_11 = (64.0f);
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
// System.Void _2dxFX_AL_DesintegrationFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DesintegrationFX_Awake_mA85284FD39B2601A63DDC88DC14C034AC7E25B0E (_2dxFX_AL_DesintegrationFX_t63363AED44814F2202CC9598C8C72A9068562093* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_DesintegrationFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DesintegrationFX_Start_m5E5C53981E7C0261608DE9522CC1B4CEB677998F (_2dxFX_AL_DesintegrationFX_t63363AED44814F2202CC9598C8C72A9068562093* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_14 = 0;
		// XUpdate();
		_2dxFX_AL_DesintegrationFX_XUpdate_mA2F28ACFA15BA197361F7900DB33D042DE7437DD(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_DesintegrationFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DesintegrationFX_CallUpdate_mE2EA7EE4C165EDB2D94956EDCBC44C1785CB7700 (_2dxFX_AL_DesintegrationFX_t63363AED44814F2202CC9598C8C72A9068562093* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_DesintegrationFX_XUpdate_mA2F28ACFA15BA197361F7900DB33D042DE7437DD(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_DesintegrationFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DesintegrationFX_Update_mA3ECF6C6DD883E6AE2317BDAFE90514FC1E94F53 (_2dxFX_AL_DesintegrationFX_t63363AED44814F2202CC9598C8C72A9068562093* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_DesintegrationFX_XUpdate_mA2F28ACFA15BA197361F7900DB33D042DE7437DD(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_DesintegrationFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DesintegrationFX_XUpdate_mA2F28ACFA15BA197361F7900DB33D042DE7437DD (_2dxFX_AL_DesintegrationFX_t63363AED44814F2202CC9598C8C72A9068562093* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
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
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Desintegration);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Desintegration_13;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetColor("_ColorX", _Color);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_144 = __this->____Color_11;
		NullCheck(L_143);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_143, _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227, L_144, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Size", Seed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_145 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_145);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146;
		L_146 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_145, NULL);
		float L_147 = __this->___Seed_12;
		NullCheck(L_146);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_146, _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117, L_147, NULL);
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
		// CanvasImage.material.SetFloat("_Distortion", Desintegration);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_153 = __this->___CanvasImage_17;
		NullCheck(L_153);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154;
		L_154 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_153);
		float L_155 = __this->___Desintegration_13;
		NullCheck(L_154);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_154, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_155, NULL);
		// CanvasImage.material.SetColor("_ColorX", _Color);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_156 = __this->___CanvasImage_17;
		NullCheck(L_156);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_157;
		L_157 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_156);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_158 = __this->____Color_11;
		NullCheck(L_157);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_157, _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227, L_158, NULL);
		// CanvasImage.material.SetFloat("_Size", Seed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_159 = __this->___CanvasImage_17;
		NullCheck(L_159);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160;
		L_160 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_159);
		float L_161 = __this->___Seed_12;
		NullCheck(L_160);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_160, _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117, L_161, NULL);
	}

IL_0634:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_DesintegrationFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DesintegrationFX_OnDestroy_m53B1243ED5D785255CF6BA06F8F8A4B637030FE9 (_2dxFX_AL_DesintegrationFX_t63363AED44814F2202CC9598C8C72A9068562093* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_DesintegrationFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DesintegrationFX_OnDisable_mDA8BDEEAC41F416448BD1F5BE622774012C39C4F (_2dxFX_AL_DesintegrationFX_t63363AED44814F2202CC9598C8C72A9068562093* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_DesintegrationFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DesintegrationFX_OnEnable_m35513295A6AA50E0FBBB625C50C87C31B0BA6DA4 (_2dxFX_AL_DesintegrationFX_t63363AED44814F2202CC9598C8C72A9068562093* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_DesintegrationFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DesintegrationFX__ctor_mFA037E5AAE898403A7B2783D53FE5551D0352E30 (_2dxFX_AL_DesintegrationFX_t63363AED44814F2202CC9598C8C72A9068562093* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7880DFD2BB8B1AF08410611642E049BBBA064411);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/DesintegrationFX";
		__this->___shader_9 = _stringLiteral7880DFD2BB8B1AF08410611642E049BBBA064411;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral7880DFD2BB8B1AF08410611642E049BBBA064411);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] public Color _Color = new Color(0f, 1f, 1f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->____Color_11 = L_0;
		// [HideInInspector] [Range(0, 1)] public float Seed = 1.0f;
		__this->___Seed_12 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float Desintegration = 0.5f;
		__this->___Desintegration_13 = (0.5f);
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
// System.Void _2dxFX_AL_DestroyedFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DestroyedFX_Awake_m51F32358D063A8301E523FD550A77F277FC6EA66 (_2dxFX_AL_DestroyedFX_tF4A82E711E49786BAE62C440ADC56636358FA3C9* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_DestroyedFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DestroyedFX_Start_m61A6FC2A08DA761436B08DFDC2C0C3373B0088BE (_2dxFX_AL_DestroyedFX_tF4A82E711E49786BAE62C440ADC56636358FA3C9* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_13 = 0;
		// XUpdate();
		_2dxFX_AL_DestroyedFX_XUpdate_m0CB848E62C5AA20582DC72A46E8D9F3F3FFE643B(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_DestroyedFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DestroyedFX_CallUpdate_m1A09D2C7408C76F0BD0B7781BC76B9EB78F9504D (_2dxFX_AL_DestroyedFX_tF4A82E711E49786BAE62C440ADC56636358FA3C9* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_DestroyedFX_XUpdate_m0CB848E62C5AA20582DC72A46E8D9F3F3FFE643B(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_DestroyedFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DestroyedFX_Update_m4EEF0BD50103ED05A46CD5B1FD0C5F00F07DCA2C (_2dxFX_AL_DestroyedFX_tF4A82E711E49786BAE62C440ADC56636358FA3C9* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_DestroyedFX_XUpdate_m0CB848E62C5AA20582DC72A46E8D9F3F3FFE643B(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_DestroyedFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DestroyedFX_XUpdate_m0CB848E62C5AA20582DC72A46E8D9F3F3FFE643B (_2dxFX_AL_DestroyedFX_tF4A82E711E49786BAE62C440ADC56636358FA3C9* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
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
		String_t* L_38 = __this->___shader_9;
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
			goto IL_05fe;
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
			goto IL_0599;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_17;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_17;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_60);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_60, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		NullCheck(L_62);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_62, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_17;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_65);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_65, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_67, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_17;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_71);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_71, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_73, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_17;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_17;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_17;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_17;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_17;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_17;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_17;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_17;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_17;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0562:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Destroyed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Destroyed_12;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Size", Seed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->___Seed_11;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117, L_144, NULL);
		return;
	}

IL_0599:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_145 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_146;
		L_146 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_145, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_146)
		{
			goto IL_05fe;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = __this->___CanvasImage_16;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_147);
		float L_149 = __this->____Alpha_10;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_149)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Destroyed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_150 = __this->___CanvasImage_16;
		NullCheck(L_150);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_151;
		L_151 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_150);
		float L_152 = __this->___Destroyed_12;
		NullCheck(L_151);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_151, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_152, NULL);
		// CanvasImage.material.SetFloat("_Size", Seed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_153 = __this->___CanvasImage_16;
		NullCheck(L_153);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154;
		L_154 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_153);
		float L_155 = __this->___Seed_11;
		NullCheck(L_154);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_154, _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117, L_155, NULL);
	}

IL_05fe:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_DestroyedFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DestroyedFX_OnDestroy_m6FA3CE77A0BB5C326DAB92CF2D21561394BF5010 (_2dxFX_AL_DestroyedFX_tF4A82E711E49786BAE62C440ADC56636358FA3C9* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_DestroyedFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DestroyedFX_OnDisable_m7BEC165CC48123115B911F3D1F25666524EF9068 (_2dxFX_AL_DestroyedFX_tF4A82E711E49786BAE62C440ADC56636358FA3C9* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_DestroyedFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DestroyedFX_OnEnable_m136BA47C382B754FA3BDC23E36E35FB044787F69 (_2dxFX_AL_DestroyedFX_tF4A82E711E49786BAE62C440ADC56636358FA3C9* __this, const RuntimeMethod* method) 
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
		String_t* L_6 = __this->___shader_9;
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
// System.Void _2dxFX_AL_DestroyedFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_DestroyedFX__ctor_m040E2015309470490686E091E205169D35DDD9A8 (_2dxFX_AL_DestroyedFX_tF4A82E711E49786BAE62C440ADC56636358FA3C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3446F939EA6E1EAF7A4BDFA5DE287D99144EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/DestroyedFX";
		__this->___shader_9 = _stringLiteral39E3446F939EA6E1EAF7A4BDFA5DE287D99144EA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral39E3446F939EA6E1EAF7A4BDFA5DE287D99144EA);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.001f, 1)] public float Seed = 1.0f;
		__this->___Seed_11 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float Destroyed = 0.5f;
		__this->___Destroyed_12 = (0.5f);
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
// System.Void _2dxFX_AL_Distortion::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Distortion_Awake_m5954CF9525783DAFA6EA0E67F34DE86B6604C569 (_2dxFX_AL_Distortion_t5FC24E37F3E5C193CC69C55802F2FCA298D07339* __this, const RuntimeMethod* method) 
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
		__this->___CanvasImage_26 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_26), (void*)L_4);
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
		__this->___CanvasSpriteRenderer_27 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_27), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Distortion::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Distortion_Start_m37F58C4BA8A5532E84B180429F490437D55E704B (_2dxFX_AL_Distortion_t5FC24E37F3E5C193CC69C55802F2FCA298D07339* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_23 = 0;
		// XUpdate();
		_2dxFX_AL_Distortion_XUpdate_mE9DC98CF394E8AEB90FBA0784338DFCB2A018DC9(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Distortion::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Distortion_CallUpdate_mFE7A4F40C30F60920D52D6DF80BB437A394F88A3 (_2dxFX_AL_Distortion_t5FC24E37F3E5C193CC69C55802F2FCA298D07339* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Distortion_XUpdate_mE9DC98CF394E8AEB90FBA0784338DFCB2A018DC9(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Distortion::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Distortion_Update_m9F0707104768F3180FBA86AD4D05327CCF60AE95 (_2dxFX_AL_Distortion_t5FC24E37F3E5C193CC69C55802F2FCA298D07339* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_28;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_AL_Distortion_XUpdate_mE9DC98CF394E8AEB90FBA0784338DFCB2A018DC9(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Distortion::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Distortion_XUpdate_mE9DC98CF394E8AEB90FBA0784338DFCB2A018DC9 (_2dxFX_AL_Distortion_t5FC24E37F3E5C193CC69C55802F2FCA298D07339* __this, const RuntimeMethod* method) 
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
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_26;
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
		__this->___CanvasImage_26 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_26), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_27;
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
		__this->___CanvasSpriteRenderer_27 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_27), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_23;
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
		__this->___ShaderChange_23 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_24;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_27;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_26;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_26;
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
		int32_t L_34 = __this->___ShaderChange_23;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_24;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_24;
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
		__this->___tempMaterial_24 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_24), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_24;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_27;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_24;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_26;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_24;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_23 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_0774;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_0609;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_60);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_60, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		NullCheck(L_62);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_62, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_65);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_65, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_67, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_71);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_71, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_73, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0562:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetX", _OffsetX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->____OffsetX_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetY", _OffsetY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->____OffsetY_12;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_144, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_DistanceX", _DistanceX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_145 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_145);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146;
		L_146 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_145, NULL);
		float L_147 = __this->____DistanceX_13;
		NullCheck(L_146);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_146, _stringLiteral240E009D42283D9AF1F4D5CA564205C5255A9960, L_147, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_DistanceY", _DistanceY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_148 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_148);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_149;
		L_149 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_148, NULL);
		float L_150 = __this->____DistanceY_14;
		NullCheck(L_149);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_149, _stringLiteralD678F4CA88B311E84935640E1244CC2707625352, L_150, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_WaveTimeX", _WaveTimeX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_151 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_151);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_152;
		L_152 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_151, NULL);
		float L_153 = __this->____WaveTimeX_15;
		NullCheck(L_152);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_152, _stringLiteral6BC8D56751E37C6B4A11D742870D42E79C2E9F06, L_153, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_WaveTimeY", _WaveTimeY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_154 = __this->___CanvasSpriteRenderer_27;
		NullCheck(L_154);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_155;
		L_155 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_154, NULL);
		float L_156 = __this->____WaveTimeY_16;
		NullCheck(L_155);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_155, _stringLiteralD4A90695775E1E1455F2A9C11C74D424DD90EDB4, L_156, NULL);
		goto IL_06dd;
	}

IL_0609:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_157 = __this->___CanvasImage_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_158;
		L_158 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_157, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_158)
		{
			goto IL_06dd;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_159 = __this->___CanvasImage_26;
		NullCheck(L_159);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160;
		L_160 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_159);
		float L_161 = __this->____Alpha_10;
		NullCheck(L_160);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_160, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_161)), NULL);
		// CanvasImage.material.SetFloat("_OffsetX", _OffsetX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_162 = __this->___CanvasImage_26;
		NullCheck(L_162);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_163;
		L_163 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_162);
		float L_164 = __this->____OffsetX_11;
		NullCheck(L_163);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_163, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_164, NULL);
		// CanvasImage.material.SetFloat("_OffsetY", _OffsetY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_165 = __this->___CanvasImage_26;
		NullCheck(L_165);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_166;
		L_166 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_165);
		float L_167 = __this->____OffsetY_12;
		NullCheck(L_166);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_166, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_167, NULL);
		// CanvasImage.material.SetFloat("_DistanceX", _DistanceX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_168 = __this->___CanvasImage_26;
		NullCheck(L_168);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_169;
		L_169 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_168);
		float L_170 = __this->____DistanceX_13;
		NullCheck(L_169);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_169, _stringLiteral240E009D42283D9AF1F4D5CA564205C5255A9960, L_170, NULL);
		// CanvasImage.material.SetFloat("_DistanceY", _DistanceY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_171 = __this->___CanvasImage_26;
		NullCheck(L_171);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_172;
		L_172 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_171);
		float L_173 = __this->____DistanceY_14;
		NullCheck(L_172);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_172, _stringLiteralD678F4CA88B311E84935640E1244CC2707625352, L_173, NULL);
		// CanvasImage.material.SetFloat("_WaveTimeX", _WaveTimeX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_174 = __this->___CanvasImage_26;
		NullCheck(L_174);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_175;
		L_175 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_174);
		float L_176 = __this->____WaveTimeX_15;
		NullCheck(L_175);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_175, _stringLiteral6BC8D56751E37C6B4A11D742870D42E79C2E9F06, L_176, NULL);
		// CanvasImage.material.SetFloat("_WaveTimeY", _WaveTimeY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_177 = __this->___CanvasImage_26;
		NullCheck(L_177);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_178;
		L_178 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_177);
		float L_179 = __this->____WaveTimeY_16;
		NullCheck(L_178);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_178, _stringLiteralD4A90695775E1E1455F2A9C11C74D424DD90EDB4, L_179, NULL);
	}

IL_06dd:
	{
		// if (AutoRandom)
		bool L_180 = __this->___AutoRandom_21;
		if (!L_180)
		{
			goto IL_0704;
		}
	}
	{
		// timerange = (Random.Range(1, AutoRandomRange) / 5) * Time.deltaTime;
		float L_181 = __this->___AutoRandomRange_22;
		float L_182;
		L_182 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((1.0f), L_181, NULL);
		float L_183;
		L_183 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)(L_182/(5.0f))), L_183));
		goto IL_070a;
	}

IL_0704:
	{
		// timerange = Time.deltaTime;
		float L_184;
		L_184 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_184;
	}

IL_070a:
	{
		// if (AutoPlayWaveX) _WaveTimeX += AutoPlaySpeedX * timerange;
		bool L_185 = __this->___AutoPlayWaveX_17;
		if (!L_185)
		{
			goto IL_0727;
		}
	}
	{
		// if (AutoPlayWaveX) _WaveTimeX += AutoPlaySpeedX * timerange;
		float L_186 = __this->____WaveTimeX_15;
		float L_187 = __this->___AutoPlaySpeedX_18;
		float L_188 = V_0;
		__this->____WaveTimeX_15 = ((float)il2cpp_codegen_add(L_186, ((float)il2cpp_codegen_multiply(L_187, L_188))));
	}

IL_0727:
	{
		// if (AutoPlayWaveY) _WaveTimeY += AutoPlaySpeedY * timerange;
		bool L_189 = __this->___AutoPlayWaveY_19;
		if (!L_189)
		{
			goto IL_0744;
		}
	}
	{
		// if (AutoPlayWaveY) _WaveTimeY += AutoPlaySpeedY * timerange;
		float L_190 = __this->____WaveTimeY_16;
		float L_191 = __this->___AutoPlaySpeedY_20;
		float L_192 = V_0;
		__this->____WaveTimeY_16 = ((float)il2cpp_codegen_add(L_190, ((float)il2cpp_codegen_multiply(L_191, L_192))));
	}

IL_0744:
	{
		// if (_WaveTimeX > 6.28f) _WaveTimeX = 0f;
		float L_193 = __this->____WaveTimeX_15;
		if ((!(((float)L_193) > ((float)(6.28000021f)))))
		{
			goto IL_075c;
		}
	}
	{
		// if (_WaveTimeX > 6.28f) _WaveTimeX = 0f;
		__this->____WaveTimeX_15 = (0.0f);
	}

IL_075c:
	{
		// if (_WaveTimeY > 6.28f) _WaveTimeY = 0f;
		float L_194 = __this->____WaveTimeY_16;
		if ((!(((float)L_194) > ((float)(6.28000021f)))))
		{
			goto IL_0774;
		}
	}
	{
		// if (_WaveTimeY > 6.28f) _WaveTimeY = 0f;
		__this->____WaveTimeY_16 = (0.0f);
	}

IL_0774:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Distortion::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Distortion_OnDestroy_mB342A95017D8A8524284EA299E0BCE465EA0B3D2 (_2dxFX_AL_Distortion_t5FC24E37F3E5C193CC69C55802F2FCA298D07339* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_24;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_24;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_27;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_25;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_27;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_26;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_25;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_26;
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
// System.Void _2dxFX_AL_Distortion::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Distortion_OnDisable_m9CA8B54D0D3A30249DEF781636180E4DACECF515 (_2dxFX_AL_Distortion_t5FC24E37F3E5C193CC69C55802F2FCA298D07339* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_27;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_25;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_27;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_26;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_25;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_26;
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
// System.Void _2dxFX_AL_Distortion::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Distortion_OnEnable_mD6145C65D5114084968CF357A9CD807D6537EEB1 (_2dxFX_AL_Distortion_t5FC24E37F3E5C193CC69C55802F2FCA298D07339* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_25;
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
		__this->___defaultMaterial_25 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_25), (void*)L_3);
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
		__this->___tempMaterial_24 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_24), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_24;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_27;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_24;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_26;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_27;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_27;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		return;
	}

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_26;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_26;
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
// System.Void _2dxFX_AL_Distortion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Distortion__ctor_mD6E1FBFA604C7D107F662B21BD4959D412412CF4 (_2dxFX_AL_Distortion_t5FC24E37F3E5C193CC69C55802F2FCA298D07339* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8EABE35E4B424A8A270ADF170C9E981DF3AB9AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Distortion";
		__this->___shader_9 = _stringLiteralA8EABE35E4B424A8A270ADF170C9E981DF3AB9AF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralA8EABE35E4B424A8A270ADF170C9E981DF3AB9AF);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0f, 128f)] public float _OffsetX = 10f;
		__this->____OffsetX_11 = (10.0f);
		// [HideInInspector] [Range(0f, 128f)] public float _OffsetY = 10f;
		__this->____OffsetY_12 = (10.0f);
		// [HideInInspector] [Range(0f, 1f)] public float _DistanceX = 0.03f;
		__this->____DistanceX_13 = (0.0299999993f);
		// [HideInInspector] [Range(0f, 1f)] public float _DistanceY = 0.03f;
		__this->____DistanceY_14 = (0.0299999993f);
		// [HideInInspector] [Range(0f, 6.28f)] public float _WaveTimeX = 0.16f;
		__this->____WaveTimeX_15 = (0.159999996f);
		// [HideInInspector] [Range(0f, 6.28f)] public float _WaveTimeY = 0.12f;
		__this->____WaveTimeY_16 = (0.119999997f);
		// [HideInInspector] [Range(0f, 5f)] public float AutoPlaySpeedX = 5f;
		__this->___AutoPlaySpeedX_18 = (5.0f);
		// [HideInInspector] [Range(0f, 50f)] public float AutoPlaySpeedY = 5f;
		__this->___AutoPlaySpeedY_20 = (5.0f);
		// [HideInInspector] [Range(0f, 50f)] public float AutoRandomRange = 10f;
		__this->___AutoRandomRange_22 = (10.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_28 = (bool)1;
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
// System.Void _2dxFX_AL_EdgeColor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EdgeColor_Awake_m10F79F1F32E875FA9EB4DB0323C046DDCBEBD12C (_2dxFX_AL_EdgeColor_t3DC39DC297F04EB417AACB2DABFA0CCC48F0734A* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_EdgeColor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EdgeColor_Start_m7278442E05398FD28EFF171B7EE29F559B0AABE3 (_2dxFX_AL_EdgeColor_t3DC39DC297F04EB417AACB2DABFA0CCC48F0734A* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// XUpdate();
		_2dxFX_AL_EdgeColor_XUpdate_mAD814DBD8F7C0CF8FDAEF88D73EAE4544B8B1542(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_EdgeColor::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EdgeColor_CallUpdate_m63302C003216ED9DF6617B4E37B97909706DAB4B (_2dxFX_AL_EdgeColor_t3DC39DC297F04EB417AACB2DABFA0CCC48F0734A* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_EdgeColor_XUpdate_mAD814DBD8F7C0CF8FDAEF88D73EAE4544B8B1542(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_EdgeColor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EdgeColor_Update_mEA0E5AD366A0E7204F4974412D9C7DB84AA03D1C (_2dxFX_AL_EdgeColor_t3DC39DC297F04EB417AACB2DABFA0CCC48F0734A* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_EdgeColor_XUpdate_mAD814DBD8F7C0CF8FDAEF88D73EAE4544B8B1542(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_EdgeColor::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EdgeColor_XUpdate_mAD814DBD8F7C0CF8FDAEF88D73EAE4544B8B1542 (_2dxFX_AL_EdgeColor_t3DC39DC297F04EB417AACB2DABFA0CCC48F0734A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227);
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
		// CanvasSpriteRenderer.sharedMaterial.SetColor("_ColorX", _Color);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_141 = __this->____Color_11;
		NullCheck(L_140);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_140, _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227, L_141, NULL);
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
		// CanvasImage.material.SetColor("_ColorX", _Color);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = __this->___CanvasImage_15;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_147);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_149 = __this->____Color_11;
		NullCheck(L_148);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_148, _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227, L_149, NULL);
	}

IL_05c8:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_EdgeColor::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EdgeColor_OnDestroy_m0BEF8570669FDBD2D9715BCBC8D6BF37B29E1A96 (_2dxFX_AL_EdgeColor_t3DC39DC297F04EB417AACB2DABFA0CCC48F0734A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null)
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
			goto IL_0032;
		}
	}
	{
		// if (CanvasImage == null) CanvasImage = this.gameObject.GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (CanvasImage == null) CanvasImage = this.gameObject.GetComponent<Image>();
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
		// if ((Application.isPlaying == false) && (Application.isEditor == true))
		bool L_7;
		L_7 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_7)
		{
			goto IL_00db;
		}
	}
	{
		bool L_8;
		L_8 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_8)
		{
			goto IL_00db;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___tempMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_11, NULL);
	}

IL_005f:
	{
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_12, NULL);
		if (!L_13)
		{
			goto IL_00db;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___defaultMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00db;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_16 = __this->___CanvasSpriteRenderer_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_00ab;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_18 = __this->___CanvasSpriteRenderer_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___defaultMaterial_14;
		NullCheck(L_18);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_18, L_19, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_20);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21;
		L_21 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_20, NULL);
		NullCheck(L_21);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, 0, NULL);
		return;
	}

IL_00ab:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00db;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___defaultMaterial_14;
		NullCheck(L_24);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_24, L_25);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_15;
		NullCheck(L_26);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27;
		L_27 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_26);
		NullCheck(L_27);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_27, 0, NULL);
	}

IL_00db:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_EdgeColor::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EdgeColor_OnDisable_m4F43972E93E17E787674817A2A1DD5D8403D62D9 (_2dxFX_AL_EdgeColor_t3DC39DC297F04EB417AACB2DABFA0CCC48F0734A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null)
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
			goto IL_0032;
		}
	}
	{
		// if (CanvasImage == null) CanvasImage = this.gameObject.GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (CanvasImage == null) CanvasImage = this.gameObject.GetComponent<Image>();
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
		// if (gameObject.activeSelf && defaultMaterial != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_7, NULL);
		if (!L_8)
		{
			goto IL_00ae;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___defaultMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_00ae;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_007e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___defaultMaterial_14;
		NullCheck(L_13);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_13, L_14, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_15 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_15);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16;
		L_16 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_15, NULL);
		NullCheck(L_16);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_16, 0, NULL);
		return;
	}

IL_007e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00ae;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___defaultMaterial_14;
		NullCheck(L_19);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_19, L_20);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = __this->___CanvasImage_15;
		NullCheck(L_21);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22;
		L_22 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_21);
		NullCheck(L_22);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_22, 0, NULL);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_EdgeColor::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EdgeColor_OnEnable_m04808FF98279D6477FE1D5DA01341843ABCD87C4 (_2dxFX_AL_EdgeColor_t3DC39DC297F04EB417AACB2DABFA0CCC48F0734A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<Image>() != null)
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
			goto IL_0032;
		}
	}
	{
		// if (CanvasImage == null) CanvasImage = this.gameObject.GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (CanvasImage == null) CanvasImage = this.gameObject.GetComponent<Image>();
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
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9;
		L_9 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_10, L_9, NULL);
		__this->___defaultMaterial_14 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_14), (void*)L_10);
	}

IL_0055:
	{
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_00cc;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_13 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_14;
		L_14 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_13, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_15, L_14, NULL);
		__this->___tempMaterial_13 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_13), (void*)L_15);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___tempMaterial_13;
		NullCheck(L_16);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_16, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_17 = __this->___CanvasSpriteRenderer_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00ac;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_19 = __this->___CanvasSpriteRenderer_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___tempMaterial_13;
		NullCheck(L_19);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_19, L_20, NULL);
		return;
	}

IL_00ac:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_012d;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_23 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = __this->___tempMaterial_13;
		NullCheck(L_23);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_23, L_24);
		return;
	}

IL_00cc:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		String_t* L_26 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_27;
		L_27 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_26, NULL);
		NullCheck(L_25);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_25, L_27, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___ForceMaterial_4;
		NullCheck(L_28);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_28, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_29 = __this->___CanvasSpriteRenderer_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_30)
		{
			goto IL_010e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_31 = __this->___CanvasSpriteRenderer_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		NullCheck(L_31);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_31, L_32, NULL);
		return;
	}

IL_010e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_33, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_34)
		{
			goto IL_012d;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = __this->___ForceMaterial_4;
		NullCheck(L_35);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_35, L_36);
	}

IL_012d:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_EdgeColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EdgeColor__ctor_m80D11AF54CE646335EF2EB87AEF89B0683F96D1A (_2dxFX_AL_EdgeColor_t3DC39DC297F04EB417AACB2DABFA0CCC48F0734A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C328221EC29787E96EFDF8E03B9A8367B5DD360);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/EdgeColor";
		__this->___shader_9 = _stringLiteral5C328221EC29787E96EFDF8E03B9A8367B5DD360;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral5C328221EC29787E96EFDF8E03B9A8367B5DD360);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] public Color _Color = new Color(0f, 1f, 1f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->____Color_11 = L_0;
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
// System.Void _2dxFX_AL_EnergyBar::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EnergyBar_Awake_m4994685B4F7842B03D4E1CC04BFF733AF023AE7C (_2dxFX_AL_EnergyBar_tBE5C710496AE3CFDC0360E7CD7CB79F700E2785F* __this, const RuntimeMethod* method) 
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
		__this->___CanvasSpriteRenderer_20 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_20), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_EnergyBar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EnergyBar_Start_m2B83E1BC9977FA010275B2F9009411D7821E7568 (_2dxFX_AL_EnergyBar_tBE5C710496AE3CFDC0360E7CD7CB79F700E2785F* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_16 = 0;
		// XUpdate();
		_2dxFX_AL_EnergyBar_XUpdate_m4DE762E8F2035D45D776F37439038AD4799DAD68(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_EnergyBar::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EnergyBar_CallUpdate_m872931D838F34525F037205321FCBCD369F85015 (_2dxFX_AL_EnergyBar_tBE5C710496AE3CFDC0360E7CD7CB79F700E2785F* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_EnergyBar_XUpdate_m4DE762E8F2035D45D776F37439038AD4799DAD68(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_EnergyBar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EnergyBar_Update_m9F889AC41AE7E6FCB3CDCA3DA29C21BDDD90F536 (_2dxFX_AL_EnergyBar_tBE5C710496AE3CFDC0360E7CD7CB79F700E2785F* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_21;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_AL_EnergyBar_XUpdate_m4DE762E8F2035D45D776F37439038AD4799DAD68(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_EnergyBar::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EnergyBar_XUpdate_m4DE762E8F2035D45D776F37439038AD4799DAD68 (_2dxFX_AL_EnergyBar_tBE5C710496AE3CFDC0360E7CD7CB79F700E2785F* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455192F2C6C0DDD922218931AB63F3F8AB307544);
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_20;
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
		__this->___CanvasSpriteRenderer_20 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_20), (void*)L_13);
	}

IL_0064:
	{
		// if (BarProgress > 1) BarProgress = 1;
		float L_14 = __this->___BarProgress_11;
		if ((!(((float)L_14) > ((float)(1.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		// if (BarProgress > 1) BarProgress = 1;
		__this->___BarProgress_11 = (1.0f);
	}

IL_007c:
	{
		// if (BarProgress < 0) BarProgress = 0;
		float L_15 = __this->___BarProgress_11;
		if ((!(((float)L_15) < ((float)(0.0f)))))
		{
			goto IL_0094;
		}
	}
	{
		// if (BarProgress < 0) BarProgress = 0;
		__this->___BarProgress_11 = (0.0f);
	}

IL_0094:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_16 = __this->___ShaderChange_16;
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
		__this->___ShaderChange_16 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_17;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___tempMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_21, NULL);
	}

IL_00d0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_20;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		goto IL_0110;
	}

IL_00f1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_19;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_19;
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
		String_t* L_32 = __this->___shader_9;
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
		int32_t L_36 = __this->___ShaderChange_16;
		if ((!(((uint32_t)L_36) == ((uint32_t)1))))
		{
			goto IL_01d1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_17;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = __this->___tempMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_39, NULL);
	}

IL_0168:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_40 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_41;
		L_41 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_40, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_42, L_41, NULL);
		__this->___tempMaterial_17 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_17), (void*)L_42);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43 = __this->___tempMaterial_17;
		NullCheck(L_43);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_43, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_20;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_46 = __this->___CanvasSpriteRenderer_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = __this->___tempMaterial_17;
		NullCheck(L_46);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_46, L_47, NULL);
		goto IL_01ca;
	}

IL_01ab:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_19;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_50 = __this->___CanvasImage_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_51 = __this->___tempMaterial_17;
		NullCheck(L_50);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_50, L_51);
	}

IL_01ca:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_16 = 0;
	}

IL_01d1:
	{
		// if (ActiveChange)
		bool L_52 = __this->___ActiveChange_5;
		if (!L_52)
		{
			goto IL_06eb;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_53, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_54)
		{
			goto IL_0626;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_55 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_55);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_56;
		L_56 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_55, NULL);
		float L_57 = __this->____Alpha_10;
		NullCheck(L_56);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_56, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_57)), NULL);
		// if (_2DxFX.ActiveShadow && AddShadow)
		il2cpp_codegen_runtime_class_init_inline(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		bool L_58 = ((_2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields*)il2cpp_codegen_static_fields_for(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var))->___ActiveShadow_4;
		if (!L_58)
		{
			goto IL_02a9;
		}
	}
	{
		bool L_59 = __this->___AddShadow_6;
		if (!L_59)
		{
			goto IL_02a9;
		}
	}
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_60);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_60, 1, NULL);
		// if (ReceivedShadow)
		bool L_61 = __this->___ReceivedShadow_7;
		if (!L_61)
		{
			goto IL_0270;
		}
	}
	{
		// CanvasSpriteRenderer.receiveShadows = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_62 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_62);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_62, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_63);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_64;
		L_64 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_63, NULL);
		NullCheck(L_64);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_64, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_65);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66;
		L_66 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_65, NULL);
		NullCheck(L_66);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_66, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 1, NULL);
		goto IL_02ec;
	}

IL_0270:
	{
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_67 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_67);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_67, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_68);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69;
		L_69 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_68, NULL);
		NullCheck(L_69);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_69, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_70);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71;
		L_71 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_70, NULL);
		NullCheck(L_71);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_71, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
		goto IL_02ec;
	}

IL_02a9:
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_72);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_72, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_73 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_73);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_73, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_74);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_75;
		L_75 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_74, NULL);
		NullCheck(L_75);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_75, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_76 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_76);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77;
		L_77 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_76, NULL);
		NullCheck(L_77);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_77, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
	}

IL_02ec:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_78 = __this->___BlendMode_8;
		if (L_78)
		{
			goto IL_0337;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_81);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82;
		L_82 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_81, NULL);
		NullCheck(L_82);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_82, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_83 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_83);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_84;
		L_84 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_83, NULL);
		NullCheck(L_84);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_84, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0337:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_85 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_85) == ((uint32_t)1))))
		{
			goto IL_0382;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_88);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89;
		L_89 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_88, NULL);
		NullCheck(L_89);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_89, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_90 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_90);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_91;
		L_91 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_90, NULL);
		NullCheck(L_91);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_91, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0382:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_92 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_92) == ((uint32_t)2))))
		{
			goto IL_03cd;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_95);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96;
		L_96 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_95, NULL);
		NullCheck(L_96);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_96, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_97 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_97);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_98;
		L_98 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_97, NULL);
		NullCheck(L_98);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_98, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_03cd:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_99 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_99) == ((uint32_t)3))))
		{
			goto IL_0418;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_102);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103;
		L_103 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_102, NULL);
		NullCheck(L_103);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_103, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_104 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_104);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_105;
		L_105 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_104, NULL);
		NullCheck(L_105);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_105, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0418:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_106 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_106) == ((uint32_t)4))))
		{
			goto IL_0463;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_109);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_110;
		L_110 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_109, NULL);
		NullCheck(L_110);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_110, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_111 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_111);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_112;
		L_112 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_111, NULL);
		NullCheck(L_112);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_112, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0463:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_113 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_113) == ((uint32_t)5))))
		{
			goto IL_04b0;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_116);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_117;
		L_117 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_116, NULL);
		NullCheck(L_117);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_117, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_118 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_118);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_119;
		L_119 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_118, NULL);
		NullCheck(L_119);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_119, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_04b0:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_120 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_120) == ((uint32_t)6))))
		{
			goto IL_04fc;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_123);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_124;
		L_124 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_123, NULL);
		NullCheck(L_124);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_124, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_125 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_125);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_126;
		L_126 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_125, NULL);
		NullCheck(L_126);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_126, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_04fc:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_127 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_127) == ((uint32_t)7))))
		{
			goto IL_0547;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_130);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_131;
		L_131 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_130, NULL);
		NullCheck(L_131);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_131, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_132 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_132);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_133;
		L_133 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_132, NULL);
		NullCheck(L_133);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_133, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0547:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_134 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_134) == ((uint32_t)8))))
		{
			goto IL_0592;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		NullCheck(L_140);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_140, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0592:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value1", BarProgress);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_141 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_141);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_142;
		L_142 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_141, NULL);
		float L_143 = __this->___BarProgress_11;
		NullCheck(L_142);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_142, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_143, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value2", 1 - _Value2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_144 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_144);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_145;
		L_145 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_144, NULL);
		float L_146 = __this->____Value2_12;
		NullCheck(L_145);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_145, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, ((float)il2cpp_codegen_subtract((1.0f), L_146)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value3", 1 - _Value3);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_147 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_147, NULL);
		float L_149 = __this->____Value3_13;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, ((float)il2cpp_codegen_subtract((1.0f), L_149)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value4", _Value4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_150 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_150);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_151;
		L_151 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_150, NULL);
		float L_152 = __this->____Value4_14;
		NullCheck(L_151);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_151, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_152, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value5", _Value5);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_153 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_153);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154;
		L_154 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_153, NULL);
		float L_155 = __this->____Value5_15;
		NullCheck(L_154);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_154, _stringLiteral455192F2C6C0DDD922218931AB63F3F8AB307544, L_155, NULL);
		return;
	}

IL_0626:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_156 = __this->___CanvasImage_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_157;
		L_157 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_156, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_157)
		{
			goto IL_06eb;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_158 = __this->___CanvasImage_19;
		NullCheck(L_158);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_159;
		L_159 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_158);
		float L_160 = __this->____Alpha_10;
		NullCheck(L_159);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_159, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_160)), NULL);
		// CanvasImage.material.SetFloat("_Value1", BarProgress);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_161 = __this->___CanvasImage_19;
		NullCheck(L_161);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_162;
		L_162 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_161);
		float L_163 = __this->___BarProgress_11;
		NullCheck(L_162);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_162, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_163, NULL);
		// CanvasImage.material.SetFloat("_Value2", 1 - _Value2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_164 = __this->___CanvasImage_19;
		NullCheck(L_164);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_165;
		L_165 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_164);
		float L_166 = __this->____Value2_12;
		NullCheck(L_165);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_165, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, ((float)il2cpp_codegen_subtract((1.0f), L_166)), NULL);
		// CanvasImage.material.SetFloat("_Value3", 1 - _Value3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_167 = __this->___CanvasImage_19;
		NullCheck(L_167);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_168;
		L_168 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_167);
		float L_169 = __this->____Value3_13;
		NullCheck(L_168);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_168, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, ((float)il2cpp_codegen_subtract((1.0f), L_169)), NULL);
		// CanvasImage.material.SetFloat("_Value4", _Value4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_170 = __this->___CanvasImage_19;
		NullCheck(L_170);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_171;
		L_171 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_170);
		float L_172 = __this->____Value4_14;
		NullCheck(L_171);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_171, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_172, NULL);
		// CanvasImage.material.SetFloat("_Value5", _Value5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_173 = __this->___CanvasImage_19;
		NullCheck(L_173);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_174;
		L_174 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_173);
		float L_175 = __this->____Value5_15;
		NullCheck(L_174);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_174, _stringLiteral455192F2C6C0DDD922218931AB63F3F8AB307544, L_175, NULL);
	}

IL_06eb:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_EnergyBar::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EnergyBar_OnDestroy_m5DCB025C11FDA1FEC7CF6CAE05269557931C680E (_2dxFX_AL_EnergyBar_tBE5C710496AE3CFDC0360E7CD7CB79F700E2785F* __this, const RuntimeMethod* method) 
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_20;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_18;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_20;
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
// System.Void _2dxFX_AL_EnergyBar::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EnergyBar_OnDisable_m05E2A1B1AEB9E6733164AD047028F3BFCC02476A (_2dxFX_AL_EnergyBar_tBE5C710496AE3CFDC0360E7CD7CB79F700E2785F* __this, const RuntimeMethod* method) 
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_20;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_18;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_20;
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
// System.Void _2dxFX_AL_EnergyBar::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EnergyBar_OnEnable_m05889AF09A91F19916660EEB335577E62ACA6ABB (_2dxFX_AL_EnergyBar_tBE5C710496AE3CFDC0360E7CD7CB79F700E2785F* __this, const RuntimeMethod* method) 
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_20;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_20;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_20;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_20;
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
// System.Void _2dxFX_AL_EnergyBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_EnergyBar__ctor_m996468DB34625F86A92E2CDF9F5E0E96BA8F2964 (_2dxFX_AL_EnergyBar_tBE5C710496AE3CFDC0360E7CD7CB79F700E2785F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CD364028726F8C126B7CB41B1DF1D96B6FDF157);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/EnergyBar";
		__this->___shader_9 = _stringLiteral5CD364028726F8C126B7CB41B1DF1D96B6FDF157;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral5CD364028726F8C126B7CB41B1DF1D96B6FDF157);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0f, 1f)] public float BarProgress = 0.5f;
		__this->___BarProgress_11 = (0.5f);
		// [HideInInspector] [Range(0.9f, 1f)] public float _Value2 = 0.975f;
		__this->____Value2_12 = (0.975000024f);
		// [HideInInspector] [Range(0f, 0.5f)] public float _Value3 = 0.5f;
		__this->____Value3_13 = (0.5f);
		// [HideInInspector] [Range(0f, 1f)] public float _Value4 = 1.0f;
		__this->____Value4_14 = (1.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_21 = (bool)1;
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
// System.Void _2dxFX_AL_Fire::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Fire_Awake_m632BE56E6F5826341676AB0BDEF6ECF616657F2E (_2dxFX_AL_Fire_t87EB5BB1F346367A97088A03C026998A6EEA556A* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Fire::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Fire_Start_mF901E12AB23A749A1E611B1CE814C141DBC906D2 (_2dxFX_AL_Fire_t87EB5BB1F346367A97088A03C026998A6EEA556A* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Fire_XUpdate_mA8D9225BAF8363C072DB37FB090D170D93E1A263(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Fire::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Fire_CallUpdate_mA6598CBBDF94D2D5C7D14D41A7F001CC41C8E68E (_2dxFX_AL_Fire_t87EB5BB1F346367A97088A03C026998A6EEA556A* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Fire_XUpdate_mA8D9225BAF8363C072DB37FB090D170D93E1A263(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Fire::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Fire_Update_m2CFB1C55166029AE97E9EA0CD12116A495CAD5B7 (_2dxFX_AL_Fire_t87EB5BB1F346367A97088A03C026998A6EEA556A* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Fire_XUpdate_mA8D9225BAF8363C072DB37FB090D170D93E1A263(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Fire::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Fire_XUpdate_mA8D9225BAF8363C072DB37FB090D170D93E1A263 (_2dxFX_AL_Fire_t87EB5BB1F346367A97088A03C026998A6EEA556A* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Fire::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Fire_OnDestroy_m33D21CA93C0068078710AD806ED173A75ABE888E (_2dxFX_AL_Fire_t87EB5BB1F346367A97088A03C026998A6EEA556A* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Fire::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Fire_OnDisable_mD3D4565583B0CECBF30B0C48FAA451FD7DF4540B (_2dxFX_AL_Fire_t87EB5BB1F346367A97088A03C026998A6EEA556A* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Fire::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Fire_OnEnable_mE1116770D6DC2A7825EAA04B37D2BE8115DFBB69 (_2dxFX_AL_Fire_t87EB5BB1F346367A97088A03C026998A6EEA556A* __this, const RuntimeMethod* method) 
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
		// __MainTex2 = Resources.Load("_2dxFX_FireTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1, NULL);
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
		// __MainTex2 = Resources.Load("_2dxFX_FireTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31;
		L_31 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1, NULL);
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
// System.Void _2dxFX_AL_Fire::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Fire__ctor_m271E19B3D482B1B530FB7A54CF5C2406E49D3FDF (_2dxFX_AL_Fire_t87EB5BB1F346367A97088A03C026998A6EEA556A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBABCE21F6236857B5A96729B58CF1F3FD05271AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Fire";
		__this->___shader_9 = _stringLiteralBABCE21F6236857B5A96729B58CF1F3FD05271AA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralBABCE21F6236857B5A96729B58CF1F3FD05271AA);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(64, 256)] public float _Value1 = 64;
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
// System.Void _2dxFX_AL_Flame::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Flame_Awake_mD77A1785FB6F5503F4E0B09BB3F1AEF644D8348E (_2dxFX_AL_Flame_tD17FE00732791D14EF2022C8F6A1EE3FD1D9E9E0* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Flame::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Flame_Start_m7C019D29A74CD7C1EE8BC38F6ADD286578551A95 (_2dxFX_AL_Flame_tD17FE00732791D14EF2022C8F6A1EE3FD1D9E9E0* __this, const RuntimeMethod* method) 
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
		__this->_____MainTex2_10 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_10), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		// ShaderChange = 0;
		__this->___ShaderChange_14 = 0;
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___CanvasSpriteRenderer_18;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->_____MainTex2_10;
		NullCheck(L_4);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_4, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_5, NULL);
		goto IL_0070;
	}

IL_0047:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___CanvasImage_17;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___CanvasImage_17;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_8);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->_____MainTex2_10;
		NullCheck(L_9);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_9, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_10, NULL);
	}

IL_0070:
	{
		// XUpdate();
		_2dxFX_AL_Flame_XUpdate_m1E27AE7DF3B3ABAF1876508C25375B7DE1683540(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Flame::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Flame_CallUpdate_mCE5F65F295F0D72D5C56D143E8E1D716F9D38903 (_2dxFX_AL_Flame_tD17FE00732791D14EF2022C8F6A1EE3FD1D9E9E0* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Flame_XUpdate_m1E27AE7DF3B3ABAF1876508C25375B7DE1683540(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Flame::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Flame_Update_m63F77B7CCD02CE6D7A746AAD78F31580AF6FD3AF (_2dxFX_AL_Flame_tD17FE00732791D14EF2022C8F6A1EE3FD1D9E9E0* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Flame_XUpdate_m1E27AE7DF3B3ABAF1876508C25375B7DE1683540(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Flame::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Flame_XUpdate_m1E27AE7DF3B3ABAF1876508C25375B7DE1683540 (_2dxFX_AL_Flame_tD17FE00732791D14EF2022C8F6A1EE3FD1D9E9E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
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
		int32_t L_34 = __this->___ShaderChange_14;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a8;
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
			goto IL_013f;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_15;
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
			goto IL_0182;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_15;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_01a1;
	}

IL_0182:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_17;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_15;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_01a1:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_14 = 0;
	}

IL_01a8:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_05f9;
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
			goto IL_059a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_11;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, L_55, NULL);
		// if (_2DxFX.ActiveShadow && AddShadow)
		il2cpp_codegen_runtime_class_init_inline(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		bool L_56 = ((_2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields*)il2cpp_codegen_static_fields_for(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var))->___ActiveShadow_4;
		if (!L_56)
		{
			goto IL_027a;
		}
	}
	{
		bool L_57 = __this->___AddShadow_6;
		if (!L_57)
		{
			goto IL_027a;
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
			goto IL_0241;
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
		goto IL_02bd;
	}

IL_0241:
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
		goto IL_02bd;
	}

IL_027a:
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

IL_02bd:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_76 = __this->___BlendMode_8;
		if (L_76)
		{
			goto IL_0308;
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

IL_0308:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_83 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_0353;
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

IL_0353:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_90 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_90) == ((uint32_t)2))))
		{
			goto IL_039e;
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

IL_039e:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_97 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_97) == ((uint32_t)3))))
		{
			goto IL_03e9;
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

IL_03e9:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_104 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_104) == ((uint32_t)4))))
		{
			goto IL_0434;
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

IL_0434:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_111 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_111) == ((uint32_t)5))))
		{
			goto IL_0481;
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

IL_0481:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_118 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_118) == ((uint32_t)6))))
		{
			goto IL_04cd;
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

IL_04cd:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_125 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_125) == ((uint32_t)7))))
		{
			goto IL_0518;
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

IL_0518:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_132 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_132) == ((uint32_t)8))))
		{
			goto IL_0563;
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

IL_0563:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Speed", _Speed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->____Speed_12;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Intensity", _Intensity);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->____Intensity_13;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_144, NULL);
		return;
	}

IL_059a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_145 = __this->___CanvasImage_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_146;
		L_146 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_145, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_146)
		{
			goto IL_05f9;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = __this->___CanvasImage_17;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_147);
		float L_149 = __this->____Alpha_11;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, L_149, NULL);
		// CanvasImage.material.SetFloat("_Intensity", _Intensity);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_150 = __this->___CanvasImage_17;
		NullCheck(L_150);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_151;
		L_151 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_150);
		float L_152 = __this->____Intensity_13;
		NullCheck(L_151);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_151, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_152, NULL);
		// CanvasImage.material.SetFloat("_Speed", _Speed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_153 = __this->___CanvasImage_17;
		NullCheck(L_153);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154;
		L_154 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_153);
		float L_155 = __this->____Speed_12;
		NullCheck(L_154);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_154, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_155, NULL);
	}

IL_05f9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Flame::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Flame_OnDestroy_m3418C14319899168F0121EC19AF70190E9418503 (_2dxFX_AL_Flame_tD17FE00732791D14EF2022C8F6A1EE3FD1D9E9E0* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Flame::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Flame_OnDisable_m0CD879E3EFD6A187CDDE8A3580D52DEFD4C8C60D (_2dxFX_AL_Flame_tD17FE00732791D14EF2022C8F6A1EE3FD1D9E9E0* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Flame::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Flame_OnEnable_mCEA7DE0476D46BBC58B79EFE62D1D5DDE06B1135 (_2dxFX_AL_Flame_tD17FE00732791D14EF2022C8F6A1EE3FD1D9E9E0* __this, const RuntimeMethod* method) 
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
			goto IL_007e;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_15;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		goto IL_009d;
	}

IL_007e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_17;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_15;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
	}

IL_009d:
	{
		// __MainTex2 = Resources.Load("_2dxFX_FlameTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral7B2E394C745A9FA989279137456A6B330EDE6E47, NULL);
		__this->_____MainTex2_10 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_10), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_23 = __this->___CanvasSpriteRenderer_18;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_25 = __this->___CanvasSpriteRenderer_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___ForceMaterial_4;
		NullCheck(L_25);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_25, L_26, NULL);
		goto IL_0116;
	}

IL_00f7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = __this->___CanvasImage_17;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___CanvasImage_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___ForceMaterial_4;
		NullCheck(L_29);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_29, L_30);
	}

IL_0116:
	{
		// __MainTex2 = Resources.Load("_2dxFX_FlameTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31;
		L_31 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral7B2E394C745A9FA989279137456A6B330EDE6E47, NULL);
		__this->_____MainTex2_10 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_10), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
	}

IL_012b:
	{
		// if (__MainTex2)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_32 = __this->_____MainTex2_10;
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
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = __this->_____MainTex2_10;
		NullCheck(L_34);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_34, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_35 = __this->___CanvasSpriteRenderer_18;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_37 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_37);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38;
		L_38 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_37, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = __this->_____MainTex2_10;
		NullCheck(L_38);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_38, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_39, NULL);
		return;
	}

IL_016e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40 = __this->___CanvasImage_17;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___CanvasImage_17;
		NullCheck(L_42);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43;
		L_43 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_42);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = __this->_____MainTex2_10;
		NullCheck(L_43);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_43, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_44, NULL);
	}

IL_0197:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Flame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Flame__ctor_m1DCC9D21D39CAD201E641F6D3A65C3943C88872E (_2dxFX_AL_Flame_tD17FE00732791D14EF2022C8F6A1EE3FD1D9E9E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62956ED0D92D65B51D730B8E115A8277D3BB9C02);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Flame";
		__this->___shader_9 = _stringLiteral62956ED0D92D65B51D730B8E115A8277D3BB9C02;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral62956ED0D92D65B51D730B8E115A8277D3BB9C02);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_11 = (1.0f);
		// [HideInInspector] [Range(-2f, 2f)] public float _Speed = 1f;
		__this->____Speed_12 = (1.0f);
		// [HideInInspector] [Range(0f, 2f)] public float _Intensity = 1f;
		__this->____Intensity_13 = (1.0f);
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
// System.Void _2dxFX_AL_Frozen::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Frozen_Awake_mE03CF843AFAB0CED801911D166DBE995328853B9 (_2dxFX_AL_Frozen_t31CA9722683C39694A0F5C4E5D654DFC9768EBE6* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Frozen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Frozen_Start_mFC729A9CAA043A3B9DEDEC50C30F6FFBF8BAFCD2 (_2dxFX_AL_Frozen_t31CA9722683C39694A0F5C4E5D654DFC9768EBE6* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Frozen_XUpdate_m0D5A1A0B78E2144D7F8E3FCC616EF8E7F69FD457(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Frozen::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Frozen_CallUpdate_mA82F5FCBE400114D4701F9581D71BE1F817C5EE2 (_2dxFX_AL_Frozen_t31CA9722683C39694A0F5C4E5D654DFC9768EBE6* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Frozen_XUpdate_m0D5A1A0B78E2144D7F8E3FCC616EF8E7F69FD457(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Frozen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Frozen_Update_mA9AD50EC2D595BC52A72427EB6F41D2284B1A1C0 (_2dxFX_AL_Frozen_t31CA9722683C39694A0F5C4E5D654DFC9768EBE6* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Frozen_XUpdate_m0D5A1A0B78E2144D7F8E3FCC616EF8E7F69FD457(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Frozen::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Frozen_XUpdate_m0D5A1A0B78E2144D7F8E3FCC616EF8E7F69FD457 (_2dxFX_AL_Frozen_t31CA9722683C39694A0F5C4E5D654DFC9768EBE6* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Frozen::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Frozen_OnDestroy_m1B064601DC95B5D85927CD039583B29E14ACF094 (_2dxFX_AL_Frozen_t31CA9722683C39694A0F5C4E5D654DFC9768EBE6* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Frozen::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Frozen_OnDisable_m86673E7DF3779481504A6430DECC89BC3AA9A26D (_2dxFX_AL_Frozen_t31CA9722683C39694A0F5C4E5D654DFC9768EBE6* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Frozen::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Frozen_OnEnable_m9777D4092F8778F2A5F50527E722005825058801 (_2dxFX_AL_Frozen_t31CA9722683C39694A0F5C4E5D654DFC9768EBE6* __this, const RuntimeMethod* method) 
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
		// __MainTex2 = Resources.Load("_2dxFX_FrozenTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral2B320216F6F6FE23325BCE983AAB3CE5DF975015, NULL);
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
		// __MainTex2 = Resources.Load("_2dxFX_FrozenTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31;
		L_31 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral2B320216F6F6FE23325BCE983AAB3CE5DF975015, NULL);
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
// System.Void _2dxFX_AL_Frozen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Frozen__ctor_m02924E9BE69B974D83AE0B32A00B13FEE61CCD7C (_2dxFX_AL_Frozen_t31CA9722683C39694A0F5C4E5D654DFC9768EBE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3428C548976E662D3E7C427291DE0DE044FA9CBB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Frozen";
		__this->___shader_9 = _stringLiteral3428C548976E662D3E7C427291DE0DE044FA9CBB;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral3428C548976E662D3E7C427291DE0DE044FA9CBB);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float _Value1 = 0.5f;
		__this->____Value1_12 = (0.5f);
		// [HideInInspector] [Range(0, 1)] public float _Value2 = 1;
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
// System.Void _2dxFX_AL_Ghost::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ghost_Awake_m12F8DBB0C41C2C95B57FC907B28C83531312D8C1 (_2dxFX_AL_Ghost_t3D336EDC19FBE167A454F834E8261DDD4962753A* __this, const RuntimeMethod* method) 
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
		__this->___CanvasSpriteRenderer_20 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_20), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Ghost::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ghost_Start_mC5D5DD1F54FD28442DBEBF20FA7667C0173D3E69 (_2dxFX_AL_Ghost_t3D336EDC19FBE167A454F834E8261DDD4962753A* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_16 = 0;
		// XUpdate();
		_2dxFX_AL_Ghost_XUpdate_mE364235663C5DBC116186B6D740322EF2CE718E3(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Ghost::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ghost_CallUpdate_m84C9E6FA55E2469F3A932CF8BFDD2A45DF775099 (_2dxFX_AL_Ghost_t3D336EDC19FBE167A454F834E8261DDD4962753A* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Ghost_XUpdate_mE364235663C5DBC116186B6D740322EF2CE718E3(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Ghost::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ghost_Update_m759F04DB2CEE7011B671113CF07615F525973F04 (_2dxFX_AL_Ghost_t3D336EDC19FBE167A454F834E8261DDD4962753A* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_21;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_AL_Ghost_XUpdate_mE364235663C5DBC116186B6D740322EF2CE718E3(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Ghost::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ghost_XUpdate_mE364235663C5DBC116186B6D740322EF2CE718E3 (_2dxFX_AL_Ghost_t3D336EDC19FBE167A454F834E8261DDD4962753A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C26F33C0DE4C81DCEA6058BFCECF194E6A820D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D353D53F4C8F559C72530CD77E0A1517FA9447B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55C14E004F846FB099A44A6870DA7B59B01FF067);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58EE991C0D62941158D2C3989C441E4E000D65E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA072EB754C30E9D13AA23AA4AB225FECC2493CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_20;
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
		__this->___CanvasSpriteRenderer_20 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_20), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_16;
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
		__this->___ShaderChange_16 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_17;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_20;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_19;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_19;
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
		int32_t L_34 = __this->___ShaderChange_16;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_17;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_17;
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
		__this->___tempMaterial_17 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_17), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_17;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_20;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_17;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_19;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_17;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_16 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_06d3;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_0602;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_ClipLeft", 1 - _ClipLeft);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____ClipLeft_12;
		NullCheck(L_54);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_54, _stringLiteralDA072EB754C30E9D13AA23AA4AB225FECC2493CD, ((float)il2cpp_codegen_subtract((1.0f), L_55)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_ClipRight", 1 - _ClipRight);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->____ClipRight_13;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteral55C14E004F846FB099A44A6870DA7B59B01FF067, ((float)il2cpp_codegen_subtract((1.0f), L_58)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_ClipUp", 1 - _ClipUp);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_59 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_59);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60;
		L_60 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_59, NULL);
		float L_61 = __this->____ClipUp_14;
		NullCheck(L_60);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_60, _stringLiteral1D353D53F4C8F559C72530CD77E0A1517FA9447B, ((float)il2cpp_codegen_subtract((1.0f), L_61)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_ClipDown", 1 - _ClipDown);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_62 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_62);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_63;
		L_63 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_62, NULL);
		float L_64 = __this->____ClipDown_15;
		NullCheck(L_63);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_63, _stringLiteral1C26F33C0DE4C81DCEA6058BFCECF194E6A820D1, ((float)il2cpp_codegen_subtract((1.0f), L_64)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_65);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66;
		L_66 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_65, NULL);
		float L_67 = __this->____Alpha_10;
		NullCheck(L_66);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_66, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_67)), NULL);
		// if (_2DxFX.ActiveShadow && AddShadow)
		il2cpp_codegen_runtime_class_init_inline(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		bool L_68 = ((_2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields*)il2cpp_codegen_static_fields_for(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var))->___ActiveShadow_4;
		if (!L_68)
		{
			goto IL_02fd;
		}
	}
	{
		bool L_69 = __this->___AddShadow_6;
		if (!L_69)
		{
			goto IL_02fd;
		}
	}
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 1, NULL);
		// if (ReceivedShadow)
		bool L_71 = __this->___ReceivedShadow_7;
		if (!L_71)
		{
			goto IL_02c4;
		}
	}
	{
		// CanvasSpriteRenderer.receiveShadows = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_72);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_72, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_73 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_73);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74;
		L_74 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_73, NULL);
		NullCheck(L_74);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_74, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_75 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_75);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_76;
		L_76 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_75, NULL);
		NullCheck(L_76);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_76, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 1, NULL);
		goto IL_0340;
	}

IL_02c4:
	{
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_77);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_77, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_78 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_78);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_79;
		L_79 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_78, NULL);
		NullCheck(L_79);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_79, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_80 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_80);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_81;
		L_81 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_80, NULL);
		NullCheck(L_81);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_81, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
		goto IL_0340;
	}

IL_02fd:
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_82 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_82);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_82, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_83 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_83);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_83, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_85, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
	}

IL_0340:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_88 = __this->___BlendMode_8;
		if (L_88)
		{
			goto IL_038b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_89 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_89);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_90;
		L_90 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_89, NULL);
		NullCheck(L_90);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_90, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_038b:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_95 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_95) == ((uint32_t)1))))
		{
			goto IL_03d6;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_96 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_96);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_97;
		L_97 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_96, NULL);
		NullCheck(L_97);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_97, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_03d6:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_102 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_102) == ((uint32_t)2))))
		{
			goto IL_0421;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_103 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_103);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_104;
		L_104 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_103, NULL);
		NullCheck(L_104);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_104, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0421:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_109 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_109) == ((uint32_t)3))))
		{
			goto IL_046c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_110 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_110);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_111;
		L_111 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_110, NULL);
		NullCheck(L_111);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_111, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_046c:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_116 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_116) == ((uint32_t)4))))
		{
			goto IL_04b7;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_117 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_117);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_118;
		L_118 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_117, NULL);
		NullCheck(L_118);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_118, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_04b7:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_123 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_123) == ((uint32_t)5))))
		{
			goto IL_0504;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_124 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_124);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_125;
		L_125 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_124, NULL);
		NullCheck(L_125);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_125, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0504:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_130 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_130) == ((uint32_t)6))))
		{
			goto IL_0550;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_131 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_131);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_132;
		L_132 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_131, NULL);
		NullCheck(L_132);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_132, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0550:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_137 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_137) == ((uint32_t)7))))
		{
			goto IL_059b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_138 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_138);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_139;
		L_139 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_138, NULL);
		NullCheck(L_139);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_139, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_140 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_140);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_141;
		L_141 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_140, NULL);
		NullCheck(L_141);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_141, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		NullCheck(L_143);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_143, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_059b:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_144 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_144) == ((uint32_t)8))))
		{
			goto IL_05e6;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_145 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_145);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146;
		L_146 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_145, NULL);
		NullCheck(L_146);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_146, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_147 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_147, NULL);
		NullCheck(L_148);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_148, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_149 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_149);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_150;
		L_150 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_149, NULL);
		NullCheck(L_150);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_150, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_05e6:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_offset", _offset);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_151 = __this->___CanvasSpriteRenderer_20;
		NullCheck(L_151);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_152;
		L_152 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_151, NULL);
		float L_153 = __this->____offset_11;
		NullCheck(L_152);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_152, _stringLiteral58EE991C0D62941158D2C3989C441E4E000D65E0, L_153, NULL);
		return;
	}

IL_0602:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_154 = __this->___CanvasImage_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_155;
		L_155 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_154, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_155)
		{
			goto IL_06d3;
		}
	}
	{
		// CanvasImage.material.SetFloat("_ClipLeft", 1 - _ClipLeft);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_156 = __this->___CanvasImage_19;
		NullCheck(L_156);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_157;
		L_157 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_156);
		float L_158 = __this->____ClipLeft_12;
		NullCheck(L_157);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_157, _stringLiteralDA072EB754C30E9D13AA23AA4AB225FECC2493CD, ((float)il2cpp_codegen_subtract((1.0f), L_158)), NULL);
		// CanvasImage.material.SetFloat("_ClipRight", 1 - _ClipRight);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_159 = __this->___CanvasImage_19;
		NullCheck(L_159);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160;
		L_160 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_159);
		float L_161 = __this->____ClipRight_13;
		NullCheck(L_160);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_160, _stringLiteral55C14E004F846FB099A44A6870DA7B59B01FF067, ((float)il2cpp_codegen_subtract((1.0f), L_161)), NULL);
		// CanvasImage.material.SetFloat("_ClipUp", 1 - _ClipUp);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_162 = __this->___CanvasImage_19;
		NullCheck(L_162);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_163;
		L_163 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_162);
		float L_164 = __this->____ClipUp_14;
		NullCheck(L_163);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_163, _stringLiteral1D353D53F4C8F559C72530CD77E0A1517FA9447B, ((float)il2cpp_codegen_subtract((1.0f), L_164)), NULL);
		// CanvasImage.material.SetFloat("_ClipDown", 1 - _ClipDown);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_165 = __this->___CanvasImage_19;
		NullCheck(L_165);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_166;
		L_166 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_165);
		float L_167 = __this->____ClipDown_15;
		NullCheck(L_166);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_166, _stringLiteral1C26F33C0DE4C81DCEA6058BFCECF194E6A820D1, ((float)il2cpp_codegen_subtract((1.0f), L_167)), NULL);
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_168 = __this->___CanvasImage_19;
		NullCheck(L_168);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_169;
		L_169 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_168);
		float L_170 = __this->____Alpha_10;
		NullCheck(L_169);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_169, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_170)), NULL);
		// CanvasImage.material.SetFloat("_offset", _offset);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_171 = __this->___CanvasImage_19;
		NullCheck(L_171);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_172;
		L_172 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_171);
		float L_173 = __this->____offset_11;
		NullCheck(L_172);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_172, _stringLiteral58EE991C0D62941158D2C3989C441E4E000D65E0, L_173, NULL);
	}

IL_06d3:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Ghost::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ghost_OnDestroy_m43C14006B7AAE27A0CF9040E7962949CA9010B4A (_2dxFX_AL_Ghost_t3D336EDC19FBE167A454F834E8261DDD4962753A* __this, const RuntimeMethod* method) 
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_20;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_18;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_20;
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
// System.Void _2dxFX_AL_Ghost::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ghost_OnDisable_m147C991920C6C03C97EE6BB6ED1CA74B9001554C (_2dxFX_AL_Ghost_t3D336EDC19FBE167A454F834E8261DDD4962753A* __this, const RuntimeMethod* method) 
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_20;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_18;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_20;
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
// System.Void _2dxFX_AL_Ghost::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ghost_OnEnable_m032BFA25FD78846D65A58918401CAA59D53794D5 (_2dxFX_AL_Ghost_t3D336EDC19FBE167A454F834E8261DDD4962753A* __this, const RuntimeMethod* method) 
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_20;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_20;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_20;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_20;
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
// System.Void _2dxFX_AL_Ghost::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ghost__ctor_m0C816F50A3D88474F5EBAAB860C53D6F2F801A97 (_2dxFX_AL_Ghost_t3D336EDC19FBE167A454F834E8261DDD4962753A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACD0837812B6D65A6BA484B4DF0DD37F0120C3B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Ghost";
		__this->___shader_9 = _stringLiteralACD0837812B6D65A6BA484B4DF0DD37F0120C3B3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralACD0837812B6D65A6BA484B4DF0DD37F0120C3B3);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0f, 1f)] public float _offset = 0.4f;
		__this->____offset_11 = (0.400000006f);
		// [HideInInspector] [Range(0f, 1f)] public float _ClipLeft = 0.4f;
		__this->____ClipLeft_12 = (0.400000006f);
		// [HideInInspector] [Range(0f, 1f)] public float _ClipRight = 0.2f;
		__this->____ClipRight_13 = (0.200000003f);
		// [HideInInspector] [Range(0f, 1f)] public float _ClipUp = 0.1f;
		__this->____ClipUp_14 = (0.100000001f);
		// [HideInInspector] [Range(0f, 1f)] public float _ClipDown = 0.5f;
		__this->____ClipDown_15 = (0.5f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_21 = (bool)1;
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
// System.Void _2dxFX_AL_GoldenFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldenFX_Awake_mB287DA9AF786AC74A05950CAAC97F729E3074A94 (_2dxFX_AL_GoldenFX_t37F959FB0D0827FFAC27C0B511A57FAF285870F8* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_GoldenFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldenFX_Start_mCD62EDE96B30EAC57780846B1305679E81694B78 (_2dxFX_AL_GoldenFX_t37F959FB0D0827FFAC27C0B511A57FAF285870F8* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// XUpdate();
		_2dxFX_AL_GoldenFX_XUpdate_m7CC6175AFADEBEC2AF5123F37A4EB3172DC42F6B(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GoldenFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldenFX_CallUpdate_mDEF5EF29B118FFBB47E4B02A47B04F38EA2BF31E (_2dxFX_AL_GoldenFX_t37F959FB0D0827FFAC27C0B511A57FAF285870F8* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_GoldenFX_XUpdate_m7CC6175AFADEBEC2AF5123F37A4EB3172DC42F6B(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GoldenFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldenFX_Update_mF868951BC8173366298D6DE0548F0878FE9A83D9 (_2dxFX_AL_GoldenFX_t37F959FB0D0827FFAC27C0B511A57FAF285870F8* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_GoldenFX_XUpdate_m7CC6175AFADEBEC2AF5123F37A4EB3172DC42F6B(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GoldenFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldenFX_XUpdate_m7CC6175AFADEBEC2AF5123F37A4EB3172DC42F6B (_2dxFX_AL_GoldenFX_t37F959FB0D0827FFAC27C0B511A57FAF285870F8* __this, const RuntimeMethod* method) 
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
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Golden);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Golden_11;
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
		// CanvasImage.material.SetFloat("_Distortion", Golden);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = __this->___CanvasImage_15;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_147);
		float L_149 = __this->___Golden_11;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_149, NULL);
	}

IL_05c8:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GoldenFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldenFX_OnDestroy_m841B5460F7E61DF3DA22A7D881C643AC09EF44C4 (_2dxFX_AL_GoldenFX_t37F959FB0D0827FFAC27C0B511A57FAF285870F8* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_GoldenFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldenFX_OnDisable_mDA77D6D87116A9CE6B6F2B46B8F8D2AADC1C085F (_2dxFX_AL_GoldenFX_t37F959FB0D0827FFAC27C0B511A57FAF285870F8* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_GoldenFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldenFX_OnEnable_mC693F55CF7435E31D87875947A57EF3512691920 (_2dxFX_AL_GoldenFX_t37F959FB0D0827FFAC27C0B511A57FAF285870F8* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_GoldenFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldenFX__ctor_m727CD7B1390B7B1DE3F7F2A109D00BE240F27FD2 (_2dxFX_AL_GoldenFX_t37F959FB0D0827FFAC27C0B511A57FAF285870F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC027B6E7BCC4F8F7D81CABD9F14E79C86D6C1415);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/GoldenFX";
		__this->___shader_9 = _stringLiteralC027B6E7BCC4F8F7D81CABD9F14E79C86D6C1415;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralC027B6E7BCC4F8F7D81CABD9F14E79C86D6C1415);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.001f, 4f)] public float Golden = 1.0f;
		__this->___Golden_11 = (1.0f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_17 = (bool)1;
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
