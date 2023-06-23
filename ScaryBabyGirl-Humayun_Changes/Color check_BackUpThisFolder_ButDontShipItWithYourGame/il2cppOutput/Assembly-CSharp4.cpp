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
// _2dxFX_AL_NoiseAnimated
struct _2dxFX_AL_NoiseAnimated_t204A31B0A6270DAAE2C9754B72C1C9BE7F2F3B22;
// _2dxFX_AL_Normal
struct _2dxFX_AL_Normal_t55EC2437B90040D90C0285E8EA1DD414D6665AD8;
// _2dxFX_AL_Offset
struct _2dxFX_AL_Offset_t25A5E91CA8D346CE60DDCF5A4500E522E270AE84;
// _2dxFX_AL_Outline
struct _2dxFX_AL_Outline_t32154326ED13D22F8E85BF10C63F9D31F120E787;
// _2dxFX_AL_Pattern
struct _2dxFX_AL_Pattern_t4FC861731B20EB517B31AA97773CA6DC696058C8;
// _2dxFX_AL_Pixel
struct _2dxFX_AL_Pixel_t647A7C38CCA16B8F2614AA0804B34603D66B634C;
// _2dxFX_AL_Pixel8bitsBW
struct _2dxFX_AL_Pixel8bitsBW_tDE6D0BB1005EA0C449304CE880E3101BF9908029;
// _2dxFX_AL_Pixel8bitsC64
struct _2dxFX_AL_Pixel8bitsC64_t768869754C9C06653EF5A3BAAFE7681B26EE4DD9;
// _2dxFX_AL_Pixel8bitsGB
struct _2dxFX_AL_Pixel8bitsGB_t23124C56FCF662061F3454247FB4AC61F4F30213;
// _2dxFX_AL_PixelDie
struct _2dxFX_AL_PixelDie_t628D77920C844551F6A63232A935AD5C73E5CB8E;
// _2dxFX_AL_PlasmaRainbow
struct _2dxFX_AL_PlasmaRainbow_t19F5DC4E8DE8DFD63B6A7B7FAE3F44FEEF04FA5F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC;
IL2CPP_EXTERN_C String_t* _stringLiteral0F4DFB1E168C552AC34135161CB8E0B71837CA6A;
IL2CPP_EXTERN_C String_t* _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3;
IL2CPP_EXTERN_C String_t* _stringLiteral153CB89BEAAC4AC6A9AEF36F1458227A5C1983BD;
IL2CPP_EXTERN_C String_t* _stringLiteral155F54906096FB115E0583FD2A1F1B82A2874DD8;
IL2CPP_EXTERN_C String_t* _stringLiteral1886A0F5FCFA7EC5B643537C77B5771CAC20A058;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8587814960B2CE9B2A186858076520D5EA6451;
IL2CPP_EXTERN_C String_t* _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E;
IL2CPP_EXTERN_C String_t* _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7;
IL2CPP_EXTERN_C String_t* _stringLiteral26352E98B3C60E44B474AC16987C3059D57E0A5F;
IL2CPP_EXTERN_C String_t* _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266;
IL2CPP_EXTERN_C String_t* _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25;
IL2CPP_EXTERN_C String_t* _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227;
IL2CPP_EXTERN_C String_t* _stringLiteral5FFB48223E4F111D1975C4E94B4A1A39882F096D;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1;
IL2CPP_EXTERN_C String_t* _stringLiteral7BE22A34FA68B5B05E6009296BF887294301BEEA;
IL2CPP_EXTERN_C String_t* _stringLiteral84DB51C3FD490EBABFE348F4FBC7BA7E90372A15;
IL2CPP_EXTERN_C String_t* _stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117;
IL2CPP_EXTERN_C String_t* _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F;
IL2CPP_EXTERN_C String_t* _stringLiteralA1918CF6766A53F233BC9CE73FAD9C676FF7E9ED;
IL2CPP_EXTERN_C String_t* _stringLiteralA86DD8D5F9B6682AC6EFC8AE171696EE997C74DC;
IL2CPP_EXTERN_C String_t* _stringLiteralAD7817C15E2144B4885AA5B9DDE7BCE462822AED;
IL2CPP_EXTERN_C String_t* _stringLiteralBC1D9EAA6FB76652D57541E085108BEE984361E2;
IL2CPP_EXTERN_C String_t* _stringLiteralC0166A4FE75A1EC2F44A073CC8CFB9335F12404C;
IL2CPP_EXTERN_C String_t* _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527;
IL2CPP_EXTERN_C String_t* _stringLiteralD62F6F9DB32D523B330D22F4E217B6711BBE77F1;
IL2CPP_EXTERN_C String_t* _stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5EDD1EBDF7C35FEB2601481535169973B28B4B;
IL2CPP_EXTERN_C String_t* _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F;
IL2CPP_EXTERN_C String_t* _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A;
IL2CPP_EXTERN_C String_t* _stringLiteralF85FC82BBF75AB07426F70B4CA6DAF4951333867;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
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

// _2dxFX_AL_NoiseAnimated
struct _2dxFX_AL_NoiseAnimated_t204A31B0A6270DAAE2C9754B72C1C9BE7F2F3B22  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_NoiseAnimated::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_NoiseAnimated::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_NoiseAnimated::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_NoiseAnimated::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_NoiseAnimated::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_NoiseAnimated::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_NoiseAnimated::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_NoiseAnimated::Noise
	float ___Noise_11;
	// System.Int32 _2dxFX_AL_NoiseAnimated::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_AL_NoiseAnimated::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_AL_NoiseAnimated::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_AL_NoiseAnimated::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_AL_NoiseAnimated::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_AL_NoiseAnimated::ActiveUpdate
	bool ___ActiveUpdate_17;
};

// _2dxFX_AL_Normal
struct _2dxFX_AL_Normal_t55EC2437B90040D90C0285E8EA1DD414D6665AD8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Normal::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Normal::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Normal::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Normal::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Normal::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Normal::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Normal::_Alpha
	float ____Alpha_10;
	// System.Int32 _2dxFX_AL_Normal::ShaderChange
	int32_t ___ShaderChange_11;
	// UnityEngine.Material _2dxFX_AL_Normal::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_12;
	// UnityEngine.Material _2dxFX_AL_Normal::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_13;
	// UnityEngine.UI.Image _2dxFX_AL_Normal::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_14;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Normal::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_15;
	// System.Boolean _2dxFX_AL_Normal::ActiveUpdate
	bool ___ActiveUpdate_16;
};

// _2dxFX_AL_Offset
struct _2dxFX_AL_Offset_t25A5E91CA8D346CE60DDCF5A4500E522E270AE84  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Offset::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Offset::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Offset::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Offset::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Offset::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Offset::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Offset::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Offset::_OffsetX
	float ____OffsetX_11;
	// System.Single _2dxFX_AL_Offset::_OffsetY
	float ____OffsetY_12;
	// System.Single _2dxFX_AL_Offset::_ZoomX
	float ____ZoomX_13;
	// System.Single _2dxFX_AL_Offset::_ZoomY
	float ____ZoomY_14;
	// System.Single _2dxFX_AL_Offset::_ZoomXY
	float ____ZoomXY_15;
	// System.Boolean _2dxFX_AL_Offset::_AutoScrollX
	bool ____AutoScrollX_16;
	// System.Single _2dxFX_AL_Offset::_AutoScrollSpeedX
	float ____AutoScrollSpeedX_17;
	// System.Boolean _2dxFX_AL_Offset::_AutoScrollY
	bool ____AutoScrollY_18;
	// System.Single _2dxFX_AL_Offset::_AutoScrollSpeedY
	float ____AutoScrollSpeedY_19;
	// System.Single _2dxFX_AL_Offset::_AutoScrollCountX
	float ____AutoScrollCountX_20;
	// System.Single _2dxFX_AL_Offset::_AutoScrollCountY
	float ____AutoScrollCountY_21;
	// System.Int32 _2dxFX_AL_Offset::ShaderChange
	int32_t ___ShaderChange_22;
	// UnityEngine.Material _2dxFX_AL_Offset::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_23;
	// UnityEngine.Material _2dxFX_AL_Offset::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_24;
	// UnityEngine.UI.Image _2dxFX_AL_Offset::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_25;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Offset::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_26;
	// System.Boolean _2dxFX_AL_Offset::ActiveUpdate
	bool ___ActiveUpdate_27;
};

// _2dxFX_AL_Outline
struct _2dxFX_AL_Outline_t32154326ED13D22F8E85BF10C63F9D31F120E787  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Outline::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Outline::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Outline::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Outline::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Outline::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Outline::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Outline::_Alpha
	float ____Alpha_10;
	// UnityEngine.Color _2dxFX_AL_Outline::_ColorX
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____ColorX_11;
	// System.Single _2dxFX_AL_Outline::_OutLineSpread
	float ____OutLineSpread_12;
	// System.Int32 _2dxFX_AL_Outline::ShaderChange
	int32_t ___ShaderChange_13;
	// UnityEngine.Material _2dxFX_AL_Outline::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_14;
	// UnityEngine.Material _2dxFX_AL_Outline::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_15;
	// UnityEngine.UI.Image _2dxFX_AL_Outline::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_16;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Outline::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_17;
	// System.Boolean _2dxFX_AL_Outline::ActiveUpdate
	bool ___ActiveUpdate_18;
};

// _2dxFX_AL_Pattern
struct _2dxFX_AL_Pattern_t4FC861731B20EB517B31AA97773CA6DC696058C8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Pattern::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Pattern::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Pattern::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Pattern::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Pattern::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Pattern::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Pattern::_Alpha
	float ____Alpha_10;
	// UnityEngine.Texture2D _2dxFX_AL_Pattern::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_11;
	// System.Single _2dxFX_AL_Pattern::_OffsetX
	float ____OffsetX_12;
	// System.Single _2dxFX_AL_Pattern::_OffsetY
	float ____OffsetY_13;
	// System.Boolean _2dxFX_AL_Pattern::_AutoScrollX
	bool ____AutoScrollX_14;
	// System.Single _2dxFX_AL_Pattern::_AutoScrollSpeedX
	float ____AutoScrollSpeedX_15;
	// System.Boolean _2dxFX_AL_Pattern::_AutoScrollY
	bool ____AutoScrollY_16;
	// System.Single _2dxFX_AL_Pattern::_AutoScrollSpeedY
	float ____AutoScrollSpeedY_17;
	// System.Single _2dxFX_AL_Pattern::_AutoScrollCountX
	float ____AutoScrollCountX_18;
	// System.Single _2dxFX_AL_Pattern::_AutoScrollCountY
	float ____AutoScrollCountY_19;
	// System.Int32 _2dxFX_AL_Pattern::ShaderChange
	int32_t ___ShaderChange_20;
	// UnityEngine.Material _2dxFX_AL_Pattern::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_21;
	// UnityEngine.Material _2dxFX_AL_Pattern::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_22;
	// UnityEngine.UI.Image _2dxFX_AL_Pattern::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_23;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Pattern::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_24;
	// System.Boolean _2dxFX_AL_Pattern::ActiveUpdate
	bool ___ActiveUpdate_25;
};

// _2dxFX_AL_Pixel
struct _2dxFX_AL_Pixel_t647A7C38CCA16B8F2614AA0804B34603D66B634C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Pixel::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Pixel::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Pixel::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Pixel::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Pixel::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Pixel::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Pixel::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Pixel::_Offset
	float ____Offset_11;
	// System.Int32 _2dxFX_AL_Pixel::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_AL_Pixel::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_AL_Pixel::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_AL_Pixel::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Pixel::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_AL_Pixel::ActiveUpdate
	bool ___ActiveUpdate_17;
};

// _2dxFX_AL_Pixel8bitsBW
struct _2dxFX_AL_Pixel8bitsBW_tDE6D0BB1005EA0C449304CE880E3101BF9908029  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Pixel8bitsBW::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Pixel8bitsBW::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Pixel8bitsBW::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Pixel8bitsBW::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Pixel8bitsBW::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Pixel8bitsBW::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Pixel8bitsBW::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Pixel8bitsBW::_Size
	float ____Size_11;
	// System.Single _2dxFX_AL_Pixel8bitsBW::_Offset
	float ____Offset_12;
	// System.Single _2dxFX_AL_Pixel8bitsBW::_Offset2
	float ____Offset2_13;
	// System.Int32 _2dxFX_AL_Pixel8bitsBW::ShaderChange
	int32_t ___ShaderChange_14;
	// UnityEngine.Material _2dxFX_AL_Pixel8bitsBW::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_15;
	// UnityEngine.Material _2dxFX_AL_Pixel8bitsBW::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_16;
	// UnityEngine.UI.Image _2dxFX_AL_Pixel8bitsBW::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_17;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Pixel8bitsBW::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_18;
	// System.Boolean _2dxFX_AL_Pixel8bitsBW::ActiveUpdate
	bool ___ActiveUpdate_19;
};

// _2dxFX_AL_Pixel8bitsC64
struct _2dxFX_AL_Pixel8bitsC64_t768869754C9C06653EF5A3BAAFE7681B26EE4DD9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Pixel8bitsC64::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Pixel8bitsC64::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Pixel8bitsC64::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Pixel8bitsC64::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Pixel8bitsC64::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Pixel8bitsC64::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Pixel8bitsC64::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Pixel8bitsC64::_Size
	float ____Size_11;
	// System.Single _2dxFX_AL_Pixel8bitsC64::_Offset
	float ____Offset_12;
	// System.Single _2dxFX_AL_Pixel8bitsC64::_Offset2
	float ____Offset2_13;
	// System.Int32 _2dxFX_AL_Pixel8bitsC64::ShaderChange
	int32_t ___ShaderChange_14;
	// UnityEngine.Material _2dxFX_AL_Pixel8bitsC64::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_15;
	// UnityEngine.Material _2dxFX_AL_Pixel8bitsC64::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_16;
	// UnityEngine.UI.Image _2dxFX_AL_Pixel8bitsC64::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_17;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Pixel8bitsC64::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_18;
	// System.Boolean _2dxFX_AL_Pixel8bitsC64::ActiveUpdate
	bool ___ActiveUpdate_19;
};

// _2dxFX_AL_Pixel8bitsGB
struct _2dxFX_AL_Pixel8bitsGB_t23124C56FCF662061F3454247FB4AC61F4F30213  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Pixel8bitsGB::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Pixel8bitsGB::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Pixel8bitsGB::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Pixel8bitsGB::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Pixel8bitsGB::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Pixel8bitsGB::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Pixel8bitsGB::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Pixel8bitsGB::_Size
	float ____Size_11;
	// System.Single _2dxFX_AL_Pixel8bitsGB::_Offset
	float ____Offset_12;
	// System.Int32 _2dxFX_AL_Pixel8bitsGB::ShaderChange
	int32_t ___ShaderChange_13;
	// UnityEngine.Material _2dxFX_AL_Pixel8bitsGB::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_14;
	// UnityEngine.Material _2dxFX_AL_Pixel8bitsGB::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_15;
	// UnityEngine.UI.Image _2dxFX_AL_Pixel8bitsGB::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_16;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Pixel8bitsGB::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_17;
	// System.Boolean _2dxFX_AL_Pixel8bitsGB::ActiveUpdate
	bool ___ActiveUpdate_18;
};

// _2dxFX_AL_PixelDie
struct _2dxFX_AL_PixelDie_t628D77920C844551F6A63232A935AD5C73E5CB8E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_PixelDie::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_PixelDie::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_PixelDie::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_PixelDie::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_PixelDie::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_PixelDie::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_PixelDie::_Alpha
	float ____Alpha_10;
	// UnityEngine.Texture2D _2dxFX_AL_PixelDie::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_11;
	// System.Single _2dxFX_AL_PixelDie::_Value1
	float ____Value1_12;
	// System.Single _2dxFX_AL_PixelDie::_Value2
	float ____Value2_13;
	// System.Single _2dxFX_AL_PixelDie::_Value3
	float ____Value3_14;
	// System.Single _2dxFX_AL_PixelDie::_Value4
	float ____Value4_15;
	// System.Boolean _2dxFX_AL_PixelDie::_AutoScrollX
	bool ____AutoScrollX_16;
	// System.Single _2dxFX_AL_PixelDie::_AutoScrollSpeedX
	float ____AutoScrollSpeedX_17;
	// System.Boolean _2dxFX_AL_PixelDie::_AutoScrollY
	bool ____AutoScrollY_18;
	// System.Single _2dxFX_AL_PixelDie::_AutoScrollSpeedY
	float ____AutoScrollSpeedY_19;
	// System.Single _2dxFX_AL_PixelDie::_AutoScrollCountX
	float ____AutoScrollCountX_20;
	// System.Single _2dxFX_AL_PixelDie::_AutoScrollCountY
	float ____AutoScrollCountY_21;
	// System.Int32 _2dxFX_AL_PixelDie::ShaderChange
	int32_t ___ShaderChange_22;
	// UnityEngine.Material _2dxFX_AL_PixelDie::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_23;
	// UnityEngine.Material _2dxFX_AL_PixelDie::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_24;
	// UnityEngine.UI.Image _2dxFX_AL_PixelDie::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_25;
	// UnityEngine.SpriteRenderer _2dxFX_AL_PixelDie::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_26;
	// System.Boolean _2dxFX_AL_PixelDie::ActiveUpdate
	bool ___ActiveUpdate_27;
};

// _2dxFX_AL_PlasmaRainbow
struct _2dxFX_AL_PlasmaRainbow_t19F5DC4E8DE8DFD63B6A7B7FAE3F44FEEF04FA5F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_PlasmaRainbow::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_PlasmaRainbow::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_PlasmaRainbow::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_PlasmaRainbow::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_PlasmaRainbow::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_PlasmaRainbow::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_PlasmaRainbow::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_PlasmaRainbow::_Colors
	float ____Colors_11;
	// System.Single _2dxFX_AL_PlasmaRainbow::_Offset
	float ____Offset_12;
	// System.Single _2dxFX_AL_PlasmaRainbow::_TimeX
	float ____TimeX_13;
	// System.Single _2dxFX_AL_PlasmaRainbow::Speed
	float ___Speed_14;
	// System.Int32 _2dxFX_AL_PlasmaRainbow::ShaderChange
	int32_t ___ShaderChange_15;
	// UnityEngine.Material _2dxFX_AL_PlasmaRainbow::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_16;
	// UnityEngine.Material _2dxFX_AL_PlasmaRainbow::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_17;
	// UnityEngine.UI.Image _2dxFX_AL_PlasmaRainbow::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_18;
	// UnityEngine.SpriteRenderer _2dxFX_AL_PlasmaRainbow::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_19;
	// System.Boolean _2dxFX_AL_PlasmaRainbow::ActiveUpdate
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

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
// System.Void _2dxFX_AL_NoiseAnimated::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_NoiseAnimated_XUpdate_m98EC61C2840F1800F5AEE4D1A7DB75BAA85EF8E7 (_2dxFX_AL_NoiseAnimated_t204A31B0A6270DAAE2C9754B72C1C9BE7F2F3B22* __this, const RuntimeMethod* method) ;
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
// System.Void _2dxFX_AL_Normal::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Normal_XUpdate_mFA5ADDA2E8D3996DD78BA377E398AC3C35BB4153 (_2dxFX_AL_Normal_t55EC2437B90040D90C0285E8EA1DD414D6665AD8* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Offset::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Offset_XUpdate_m1268D3372EAF3DDBE6B01F855C4222EBDBEC5C13 (_2dxFX_AL_Offset_t25A5E91CA8D346CE60DDCF5A4500E522E270AE84* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Outline::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Outline_XUpdate_mC691AED2B56488689951E536675F9FF40BD35933 (_2dxFX_AL_Outline_t32154326ED13D22F8E85BF10C63F9D31F120E787* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Pattern::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pattern_XUpdate_mB121BE75A1FB5D4EFDD649ADCBEA41D4F2BC4C04 (_2dxFX_AL_Pattern_t4FC861731B20EB517B31AA97773CA6DC696058C8* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Pixel::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel_XUpdate_mCA6C14BF4FC79AC8ED6F9EB9FD3093CFD66B643C (_2dxFX_AL_Pixel_t647A7C38CCA16B8F2614AA0804B34603D66B634C* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_mipMapBias(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_mipMapBias_m945790033BD16B51B4EDD12E177207EBF5887286 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Pixel8bitsBW::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsBW_XUpdate_m00ACD0E84C1F2D5424B2E2316143E0E77DB8ABCF (_2dxFX_AL_Pixel8bitsBW_tDE6D0BB1005EA0C449304CE880E3101BF9908029* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Pixel8bitsC64::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsC64_XUpdate_mE740F0BBD62DA34EF9AE5531D08294E47AF0A252 (_2dxFX_AL_Pixel8bitsC64_t768869754C9C06653EF5A3BAAFE7681B26EE4DD9* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Pixel8bitsGB::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsGB_XUpdate_m56BF71773F785CE47F32F0557D937E794F414054 (_2dxFX_AL_Pixel8bitsGB_t23124C56FCF662061F3454247FB4AC61F4F30213* __this, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_PixelDie::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PixelDie_XUpdate_m12F2EA6A14637CE2CC8E21597751B64B38C77313 (_2dxFX_AL_PixelDie_t628D77920C844551F6A63232A935AD5C73E5CB8E* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_PlasmaRainbow::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaRainbow_XUpdate_m3FF87A108C2B223C744B4F73B298F332CB61DD52 (_2dxFX_AL_PlasmaRainbow_t19F5DC4E8DE8DFD63B6A7B7FAE3F44FEEF04FA5F* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void _2dxFX_AL_NoiseAnimated::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_NoiseAnimated_Awake_m500519335077DCB7D3251F334961042C904CA74F (_2dxFX_AL_NoiseAnimated_t204A31B0A6270DAAE2C9754B72C1C9BE7F2F3B22* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_NoiseAnimated::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_NoiseAnimated_Start_m42C17CC2ABE6C62EA7D2CACFB099FCF6EFA1A406 (_2dxFX_AL_NoiseAnimated_t204A31B0A6270DAAE2C9754B72C1C9BE7F2F3B22* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// XUpdate();
		_2dxFX_AL_NoiseAnimated_XUpdate_m98EC61C2840F1800F5AEE4D1A7DB75BAA85EF8E7(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_NoiseAnimated::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_NoiseAnimated_CallUpdate_mC5C72D13641495852CABEE5A9C1CCF0798D48567 (_2dxFX_AL_NoiseAnimated_t204A31B0A6270DAAE2C9754B72C1C9BE7F2F3B22* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_NoiseAnimated_XUpdate_m98EC61C2840F1800F5AEE4D1A7DB75BAA85EF8E7(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_NoiseAnimated::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_NoiseAnimated_Update_m89384F49C58FEF65A51C0AC6893ADE2D57ACA9E6 (_2dxFX_AL_NoiseAnimated_t204A31B0A6270DAAE2C9754B72C1C9BE7F2F3B22* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_NoiseAnimated_XUpdate_m98EC61C2840F1800F5AEE4D1A7DB75BAA85EF8E7(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_NoiseAnimated::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_NoiseAnimated_XUpdate_m98EC61C2840F1800F5AEE4D1A7DB75BAA85EF8E7 (_2dxFX_AL_NoiseAnimated_t204A31B0A6270DAAE2C9754B72C1C9BE7F2F3B22* __this, const RuntimeMethod* method) 
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
			goto IL_01bb;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_12;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01bb;
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
		goto IL_01b4;
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
			goto IL_01b4;
		}
	}
	{
		// Image img = CanvasImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_15;
		// if (img.material == null) CanvasImage.material = tempMaterial;
		NullCheck(L_48);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49;
		L_49 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_48);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_49, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_50)
		{
			goto IL_01b4;
		}
	}
	{
		// if (img.material == null) CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_51 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___tempMaterial_13;
		NullCheck(L_51);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_51, L_52);
	}

IL_01b4:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
	}

IL_01bb:
	{
		// if (ActiveChange)
		bool L_53 = __this->___ActiveChange_5;
		if (!L_53)
		{
			goto IL_05e2;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_54 = __this->___CanvasSpriteRenderer_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_54, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_55)
		{
			goto IL_0598;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->____Alpha_10;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_58)), NULL);
		// if (_2DxFX.ActiveShadow && AddShadow)
		il2cpp_codegen_runtime_class_init_inline(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		bool L_59 = ((_2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields*)il2cpp_codegen_static_fields_for(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var))->___ActiveShadow_4;
		if (!L_59)
		{
			goto IL_0293;
		}
	}
	{
		bool L_60 = __this->___AddShadow_6;
		if (!L_60)
		{
			goto IL_0293;
		}
	}
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_61);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_61, 1, NULL);
		// if (ReceivedShadow)
		bool L_62 = __this->___ReceivedShadow_7;
		if (!L_62)
		{
			goto IL_025a;
		}
	}
	{
		// CanvasSpriteRenderer.receiveShadows = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_63);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_63, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_64 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_64);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65;
		L_65 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_64, NULL);
		NullCheck(L_65);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_65, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_67, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 1, NULL);
		goto IL_02d6;
	}

IL_025a:
	{
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_68);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_68, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_69 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_69);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_70;
		L_70 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_69, NULL);
		NullCheck(L_70);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_70, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_71);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_72;
		L_72 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_71, NULL);
		NullCheck(L_72);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_72, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
		goto IL_02d6;
	}

IL_0293:
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_73 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_73);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_73, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_74);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_74, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_75 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_75);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_76;
		L_76 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_75, NULL);
		NullCheck(L_76);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_76, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
	}

IL_02d6:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_79 = __this->___BlendMode_8;
		if (L_79)
		{
			goto IL_0321;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_80 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_80);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_81;
		L_81 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_80, NULL);
		NullCheck(L_81);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_81, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_82 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_82);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_83;
		L_83 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_82, NULL);
		NullCheck(L_83);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_83, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0321:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_86 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_86) == ((uint32_t)1))))
		{
			goto IL_036c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_87 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_87);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_88;
		L_88 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_87, NULL);
		NullCheck(L_88);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_88, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_89 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_89);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_90;
		L_90 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_89, NULL);
		NullCheck(L_90);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_90, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_036c:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_93 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_93) == ((uint32_t)2))))
		{
			goto IL_03b7;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_94 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_94);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_95;
		L_95 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_94, NULL);
		NullCheck(L_95);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_95, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_96 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_96);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_97;
		L_97 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_96, NULL);
		NullCheck(L_97);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_97, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_03b7:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_100 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_100) == ((uint32_t)3))))
		{
			goto IL_0402;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_101 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_101);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_102;
		L_102 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_101, NULL);
		NullCheck(L_102);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_102, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_103 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_103);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_104;
		L_104 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_103, NULL);
		NullCheck(L_104);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_104, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0402:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_107 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_107) == ((uint32_t)4))))
		{
			goto IL_044d;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_108 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_108);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_109;
		L_109 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_108, NULL);
		NullCheck(L_109);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_109, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_110 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_110);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_111;
		L_111 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_110, NULL);
		NullCheck(L_111);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_111, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_044d:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_114 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_114) == ((uint32_t)5))))
		{
			goto IL_049a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_115 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_115);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_116;
		L_116 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_115, NULL);
		NullCheck(L_116);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_116, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_117 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_117);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_118;
		L_118 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_117, NULL);
		NullCheck(L_118);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_118, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_049a:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_121 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_121) == ((uint32_t)6))))
		{
			goto IL_04e6;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_122 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_122);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_123;
		L_123 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_122, NULL);
		NullCheck(L_123);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_123, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_124 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_124);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_125;
		L_125 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_124, NULL);
		NullCheck(L_125);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_125, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_04e6:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_128 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_128) == ((uint32_t)7))))
		{
			goto IL_0531;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_129 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_129);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_130;
		L_130 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_129, NULL);
		NullCheck(L_130);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_130, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_131 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_131);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_132;
		L_132 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_131, NULL);
		NullCheck(L_132);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_132, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0531:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_135 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_135) == ((uint32_t)8))))
		{
			goto IL_057c;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_136 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_136);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_137;
		L_137 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_136, NULL);
		NullCheck(L_137);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_137, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_138 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_138);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_139;
		L_139 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_138, NULL);
		NullCheck(L_139);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_139, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_140 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_140);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_141;
		L_141 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_140, NULL);
		NullCheck(L_141);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_141, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_057c:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Noise);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->___Noise_11;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_144, NULL);
		return;
	}

IL_0598:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_145 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_146;
		L_146 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_145, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_146)
		{
			goto IL_05e2;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = __this->___CanvasImage_15;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_147);
		float L_149 = __this->____Alpha_10;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_149)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Noise);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_150 = __this->___CanvasImage_15;
		NullCheck(L_150);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_151;
		L_151 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_150);
		float L_152 = __this->___Noise_11;
		NullCheck(L_151);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_151, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_152, NULL);
	}

IL_05e2:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_NoiseAnimated::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_NoiseAnimated_OnDestroy_m45C15BB35674483CA2761A3E3D2F938B8C19C60A (_2dxFX_AL_NoiseAnimated_t204A31B0A6270DAAE2C9754B72C1C9BE7F2F3B22* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_NoiseAnimated::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_NoiseAnimated_OnDisable_mEC603AE92B90A9318F743556829B53CA553F5F18 (_2dxFX_AL_NoiseAnimated_t204A31B0A6270DAAE2C9754B72C1C9BE7F2F3B22* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_NoiseAnimated::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_NoiseAnimated_OnEnable_m87D8857F434FC6C13AE2A27F46D559936270827E (_2dxFX_AL_NoiseAnimated_t204A31B0A6270DAAE2C9754B72C1C9BE7F2F3B22* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_NoiseAnimated::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_NoiseAnimated__ctor_mE59EE81155C0CFD9FAB91E29B550FFC6352CF463 (_2dxFX_AL_NoiseAnimated_t204A31B0A6270DAAE2C9754B72C1C9BE7F2F3B22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5EDD1EBDF7C35FEB2601481535169973B28B4B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/NoiseAnimated";
		__this->___shader_9 = _stringLiteralDB5EDD1EBDF7C35FEB2601481535169973B28B4B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralDB5EDD1EBDF7C35FEB2601481535169973B28B4B);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void _2dxFX_AL_Normal::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Normal_Awake_m6F9303F5561024DFCE9CE847E9C199DC38C45B29 (_2dxFX_AL_Normal_t55EC2437B90040D90C0285E8EA1DD414D6665AD8* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Normal::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Normal_Start_m5972764FBC328934F990314FECFB69AD42F5C4AB (_2dxFX_AL_Normal_t55EC2437B90040D90C0285E8EA1DD414D6665AD8* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_11 = 0;
		// XUpdate();
		_2dxFX_AL_Normal_XUpdate_mFA5ADDA2E8D3996DD78BA377E398AC3C35BB4153(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Normal::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Normal_CallUpdate_mD3350A5E2A5822E0A26D6BA06F7D8D8F14D2A0D5 (_2dxFX_AL_Normal_t55EC2437B90040D90C0285E8EA1DD414D6665AD8* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Normal_XUpdate_mFA5ADDA2E8D3996DD78BA377E398AC3C35BB4153(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Normal::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Normal_Update_m76B1F18BAC5F1F4FEBE683A9307D8C18D3908B15 (_2dxFX_AL_Normal_t55EC2437B90040D90C0285E8EA1DD414D6665AD8* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Normal_XUpdate_mFA5ADDA2E8D3996DD78BA377E398AC3C35BB4153(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Normal::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Normal_XUpdate_mFA5ADDA2E8D3996DD78BA377E398AC3C35BB4153 (_2dxFX_AL_Normal_t55EC2437B90040D90C0285E8EA1DD414D6665AD8* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
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
		String_t* L_38 = __this->___shader_9;
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
			goto IL_0592;
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
			goto IL_0563;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_15;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_15;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_60);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_60, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		NullCheck(L_62);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_62, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_15;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_65);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_65, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_67, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_15;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_71);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_71, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_73, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_15;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_15;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_15;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_15;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_15;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_15;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_15;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_15;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_15;
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
			goto IL_0592;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_15;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
		return;
	}

IL_0563:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_139 = __this->___CanvasImage_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_140;
		L_140 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_139, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_140)
		{
			goto IL_0592;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_141 = __this->___CanvasImage_14;
		NullCheck(L_141);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_142;
		L_142 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_141);
		float L_143 = __this->____Alpha_10;
		NullCheck(L_142);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_142, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_143)), NULL);
	}

IL_0592:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Normal::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Normal_OnDestroy_mB99F59C232B40E180D6BDD655C088E85A7DB8039 (_2dxFX_AL_Normal_t55EC2437B90040D90C0285E8EA1DD414D6665AD8* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Normal::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Normal_OnDisable_m5F5F1613218EF60811B4859170F7E2993D938822 (_2dxFX_AL_Normal_t55EC2437B90040D90C0285E8EA1DD414D6665AD8* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Normal::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Normal_OnEnable_m4D8385F14EC76C8D5695C390176A2091329C95FE (_2dxFX_AL_Normal_t55EC2437B90040D90C0285E8EA1DD414D6665AD8* __this, const RuntimeMethod* method) 
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
		String_t* L_6 = __this->___shader_9;
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
// System.Void _2dxFX_AL_Normal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Normal__ctor_mE105666473198252B8EB2AF6840C25C9B839B4F4 (_2dxFX_AL_Normal_t55EC2437B90040D90C0285E8EA1DD414D6665AD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral153CB89BEAAC4AC6A9AEF36F1458227A5C1983BD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Normal";
		__this->___shader_9 = _stringLiteral153CB89BEAAC4AC6A9AEF36F1458227A5C1983BD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral153CB89BEAAC4AC6A9AEF36F1458227A5C1983BD);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
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
// System.Void _2dxFX_AL_Offset::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Offset_Awake_m39557517F0F7CED59F331380D9FCE688AAEF15A9 (_2dxFX_AL_Offset_t25A5E91CA8D346CE60DDCF5A4500E522E270AE84* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Offset::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Offset_Start_mFA0AC0814E370D1D2B8BBEEA14DEAD5EDDBA5A46 (_2dxFX_AL_Offset_t25A5E91CA8D346CE60DDCF5A4500E522E270AE84* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_22 = 0;
		// XUpdate();
		_2dxFX_AL_Offset_XUpdate_m1268D3372EAF3DDBE6B01F855C4222EBDBEC5C13(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Offset::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Offset_CallUpdate_m36E404F95436C556B61C60259074FDEEFBFBD1D8 (_2dxFX_AL_Offset_t25A5E91CA8D346CE60DDCF5A4500E522E270AE84* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Offset_XUpdate_m1268D3372EAF3DDBE6B01F855C4222EBDBEC5C13(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Offset::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Offset_Update_m6EF43D77C1AE39CE4B8176E17646931DFA7AAFD4 (_2dxFX_AL_Offset_t25A5E91CA8D346CE60DDCF5A4500E522E270AE84* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Offset_XUpdate_m1268D3372EAF3DDBE6B01F855C4222EBDBEC5C13(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Offset::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Offset_XUpdate_m1268D3372EAF3DDBE6B01F855C4222EBDBEC5C13 (_2dxFX_AL_Offset_t25A5E91CA8D346CE60DDCF5A4500E522E270AE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1886A0F5FCFA7EC5B643537C77B5771CAC20A058);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FFB48223E4F111D1975C4E94B4A1A39882F096D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A);
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
			goto IL_0829;
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
			goto IL_06ad;
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
		// if (_AutoScrollX == true)
		bool L_139 = __this->____AutoScrollX_16;
		if (!L_139)
		{
			goto IL_05c4;
		}
	}
	{
		// _AutoScrollCountX += _AutoScrollSpeedX * 0.01f * Time.deltaTime;
		float L_140 = __this->____AutoScrollCountX_20;
		float L_141 = __this->____AutoScrollSpeedX_17;
		float L_142;
		L_142 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountX_20 = ((float)il2cpp_codegen_add(L_140, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_141, (0.00999999978f))), L_142))));
		// if (_AutoScrollCountX < 0) _AutoScrollCountX = 1;
		float L_143 = __this->____AutoScrollCountX_20;
		if ((!(((float)L_143) < ((float)(0.0f)))))
		{
			goto IL_05a1;
		}
	}
	{
		// if (_AutoScrollCountX < 0) _AutoScrollCountX = 1;
		__this->____AutoScrollCountX_20 = (1.0f);
	}

IL_05a1:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetX", 1 + _AutoScrollCountX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_144 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_144);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_145;
		L_145 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_144, NULL);
		float L_146 = __this->____AutoScrollCountX_20;
		NullCheck(L_145);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_145, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, ((float)il2cpp_codegen_add((1.0f), L_146)), NULL);
		goto IL_05e5;
	}

IL_05c4:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetX", 1 + _OffsetX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_147 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_147, NULL);
		float L_149 = __this->____OffsetX_11;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, ((float)il2cpp_codegen_add((1.0f), L_149)), NULL);
	}

IL_05e5:
	{
		// if (_AutoScrollY == true)
		bool L_150 = __this->____AutoScrollY_18;
		if (!L_150)
		{
			goto IL_0647;
		}
	}
	{
		// _AutoScrollCountY += _AutoScrollSpeedY * 0.01f * Time.deltaTime;
		float L_151 = __this->____AutoScrollCountY_21;
		float L_152 = __this->____AutoScrollSpeedY_19;
		float L_153;
		L_153 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountY_21 = ((float)il2cpp_codegen_add(L_151, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_152, (0.00999999978f))), L_153))));
		// if (_AutoScrollCountY < 0) _AutoScrollCountY = 1;
		float L_154 = __this->____AutoScrollCountY_21;
		if ((!(((float)L_154) < ((float)(0.0f)))))
		{
			goto IL_0624;
		}
	}
	{
		// if (_AutoScrollCountY < 0) _AutoScrollCountY = 1;
		__this->____AutoScrollCountY_21 = (1.0f);
	}

IL_0624:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetY", 1 + _AutoScrollCountY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_155 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_155);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_156;
		L_156 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_155, NULL);
		float L_157 = __this->____AutoScrollCountY_21;
		NullCheck(L_156);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_156, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, ((float)il2cpp_codegen_add((1.0f), L_157)), NULL);
		goto IL_0668;
	}

IL_0647:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetY", 1 + _OffsetY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_158 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_158);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_159;
		L_159 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_158, NULL);
		float L_160 = __this->____OffsetY_12;
		NullCheck(L_159);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_159, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, ((float)il2cpp_codegen_add((1.0f), L_160)), NULL);
	}

IL_0668:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_ZoomX", _ZoomX * _ZoomXY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_161 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_161);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_162;
		L_162 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_161, NULL);
		float L_163 = __this->____ZoomX_13;
		float L_164 = __this->____ZoomXY_15;
		NullCheck(L_162);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_162, _stringLiteral1886A0F5FCFA7EC5B643537C77B5771CAC20A058, ((float)il2cpp_codegen_multiply(L_163, L_164)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_ZoomY", _ZoomY * _ZoomXY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_165 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_165);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_166;
		L_166 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_165, NULL);
		float L_167 = __this->____ZoomY_14;
		float L_168 = __this->____ZoomXY_15;
		NullCheck(L_166);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_166, _stringLiteral5FFB48223E4F111D1975C4E94B4A1A39882F096D, ((float)il2cpp_codegen_multiply(L_167, L_168)), NULL);
		return;
	}

IL_06ad:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_169 = __this->___CanvasImage_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_170;
		L_170 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_169, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_170)
		{
			goto IL_0829;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_171 = __this->___CanvasImage_25;
		NullCheck(L_171);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_172;
		L_172 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_171);
		float L_173 = __this->____Alpha_10;
		NullCheck(L_172);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_172, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_173)), NULL);
		// if (_AutoScrollX == true)
		bool L_174 = __this->____AutoScrollX_16;
		if (!L_174)
		{
			goto IL_0741;
		}
	}
	{
		// _AutoScrollCountX += _AutoScrollSpeedX * 0.01f * Time.deltaTime;
		float L_175 = __this->____AutoScrollCountX_20;
		float L_176 = __this->____AutoScrollSpeedX_17;
		float L_177;
		L_177 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountX_20 = ((float)il2cpp_codegen_add(L_175, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_176, (0.00999999978f))), L_177))));
		// if (_AutoScrollCountX < 0) _AutoScrollCountX = 1;
		float L_178 = __this->____AutoScrollCountX_20;
		if ((!(((float)L_178) < ((float)(0.0f)))))
		{
			goto IL_071e;
		}
	}
	{
		// if (_AutoScrollCountX < 0) _AutoScrollCountX = 1;
		__this->____AutoScrollCountX_20 = (1.0f);
	}

IL_071e:
	{
		// CanvasImage.material.SetFloat("_OffsetX", 1 + _AutoScrollCountX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_179 = __this->___CanvasImage_25;
		NullCheck(L_179);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_180;
		L_180 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_179);
		float L_181 = __this->____AutoScrollCountX_20;
		NullCheck(L_180);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_180, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, ((float)il2cpp_codegen_add((1.0f), L_181)), NULL);
		goto IL_0762;
	}

IL_0741:
	{
		// CanvasImage.material.SetFloat("_OffsetX", 1 + _OffsetX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_182 = __this->___CanvasImage_25;
		NullCheck(L_182);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_183;
		L_183 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_182);
		float L_184 = __this->____OffsetX_11;
		NullCheck(L_183);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_183, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, ((float)il2cpp_codegen_add((1.0f), L_184)), NULL);
	}

IL_0762:
	{
		// if (_AutoScrollY == true)
		bool L_185 = __this->____AutoScrollY_18;
		if (!L_185)
		{
			goto IL_07c4;
		}
	}
	{
		// _AutoScrollCountY += _AutoScrollSpeedY * 0.01f * Time.deltaTime;
		float L_186 = __this->____AutoScrollCountY_21;
		float L_187 = __this->____AutoScrollSpeedY_19;
		float L_188;
		L_188 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountY_21 = ((float)il2cpp_codegen_add(L_186, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_187, (0.00999999978f))), L_188))));
		// if (_AutoScrollCountY < 0) _AutoScrollCountY = 1;
		float L_189 = __this->____AutoScrollCountY_21;
		if ((!(((float)L_189) < ((float)(0.0f)))))
		{
			goto IL_07a1;
		}
	}
	{
		// if (_AutoScrollCountY < 0) _AutoScrollCountY = 1;
		__this->____AutoScrollCountY_21 = (1.0f);
	}

IL_07a1:
	{
		// CanvasImage.material.SetFloat("_OffsetY", 1 + _AutoScrollCountY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_190 = __this->___CanvasImage_25;
		NullCheck(L_190);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_191;
		L_191 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_190);
		float L_192 = __this->____AutoScrollCountY_21;
		NullCheck(L_191);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_191, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, ((float)il2cpp_codegen_add((1.0f), L_192)), NULL);
		goto IL_07e5;
	}

IL_07c4:
	{
		// CanvasImage.material.SetFloat("_OffsetY", 1 + _OffsetY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_193 = __this->___CanvasImage_25;
		NullCheck(L_193);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_194;
		L_194 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_193);
		float L_195 = __this->____OffsetY_12;
		NullCheck(L_194);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_194, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, ((float)il2cpp_codegen_add((1.0f), L_195)), NULL);
	}

IL_07e5:
	{
		// CanvasImage.material.SetFloat("_ZoomX", _ZoomX * _ZoomXY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_196 = __this->___CanvasImage_25;
		NullCheck(L_196);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_197;
		L_197 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_196);
		float L_198 = __this->____ZoomX_13;
		float L_199 = __this->____ZoomXY_15;
		NullCheck(L_197);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_197, _stringLiteral1886A0F5FCFA7EC5B643537C77B5771CAC20A058, ((float)il2cpp_codegen_multiply(L_198, L_199)), NULL);
		// CanvasImage.material.SetFloat("_ZoomY", _ZoomY * _ZoomXY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_200 = __this->___CanvasImage_25;
		NullCheck(L_200);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_201;
		L_201 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_200);
		float L_202 = __this->____ZoomY_14;
		float L_203 = __this->____ZoomXY_15;
		NullCheck(L_201);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_201, _stringLiteral5FFB48223E4F111D1975C4E94B4A1A39882F096D, ((float)il2cpp_codegen_multiply(L_202, L_203)), NULL);
	}

IL_0829:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Offset::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Offset_OnDestroy_mD8411E062D82D62CEA9AA7327B9F1C8745D860C0 (_2dxFX_AL_Offset_t25A5E91CA8D346CE60DDCF5A4500E522E270AE84* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Offset::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Offset_OnDisable_m662BD446663BEEF0BF2AAA9E7962B46C1F952E29 (_2dxFX_AL_Offset_t25A5E91CA8D346CE60DDCF5A4500E522E270AE84* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Offset::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Offset_OnEnable_mEB7C5838543D17B243AEBBF56616D6908DE0A33C (_2dxFX_AL_Offset_t25A5E91CA8D346CE60DDCF5A4500E522E270AE84* __this, const RuntimeMethod* method) 
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
			goto IL_007a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_23;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_007a:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_23;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___CanvasSpriteRenderer_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___ForceMaterial_4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		return;
	}

IL_00dc:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_25;
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
// System.Void _2dxFX_AL_Offset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Offset__ctor_m6144E99BD1463F8F3CFC5FCC479ECA62EBA9ADAE (_2dxFX_AL_Offset_t25A5E91CA8D346CE60DDCF5A4500E522E270AE84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral155F54906096FB115E0583FD2A1F1B82A2874DD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Offset";
		__this->___shader_9 = _stringLiteral155F54906096FB115E0583FD2A1F1B82A2874DD8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral155F54906096FB115E0583FD2A1F1B82A2874DD8);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.001f, 8f)] public float _ZoomX = 1f;
		__this->____ZoomX_13 = (1.0f);
		// [HideInInspector] [Range(0.001f, 8f)] public float _ZoomY = 1f;
		__this->____ZoomY_14 = (1.0f);
		// [HideInInspector] [Range(0.001f, 64f)] public float _ZoomXY = 1f;
		__this->____ZoomXY_15 = (1.0f);
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
// System.Void _2dxFX_AL_Outline::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Outline_Awake_m2BC62F9D1341BCC3FBF11B7A8A26696B1124E28C (_2dxFX_AL_Outline_t32154326ED13D22F8E85BF10C63F9D31F120E787* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Outline::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Outline_Start_m1A38B70D1FA62BC0CEBBD055C55E5BB7BFED5D12 (_2dxFX_AL_Outline_t32154326ED13D22F8E85BF10C63F9D31F120E787* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_13 = 0;
		// XUpdate();
		_2dxFX_AL_Outline_XUpdate_mC691AED2B56488689951E536675F9FF40BD35933(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Outline::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Outline_CallUpdate_mF92E956D57785367CF5CB3A3BA95747C6F9057E4 (_2dxFX_AL_Outline_t32154326ED13D22F8E85BF10C63F9D31F120E787* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Outline_XUpdate_mC691AED2B56488689951E536675F9FF40BD35933(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Outline::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Outline_Update_mF2DAF7AF073666B02BB506578AF833951ADA4319 (_2dxFX_AL_Outline_t32154326ED13D22F8E85BF10C63F9D31F120E787* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Outline_XUpdate_mC691AED2B56488689951E536675F9FF40BD35933(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Outline::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Outline_XUpdate_mC691AED2B56488689951E536675F9FF40BD35933 (_2dxFX_AL_Outline_t32154326ED13D22F8E85BF10C63F9D31F120E787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8587814960B2CE9B2A186858076520D5EA6451);
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
		int32_t L_34 = __this->___ShaderChange_13;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a8;
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
			goto IL_013f;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_14;
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
			goto IL_0182;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_14;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_14;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_01a1:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_13 = 0;
	}

IL_01a8:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_0605;
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
			goto IL_05a0;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_17;
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
		goto IL_02c3;
	}

IL_0247:
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
		goto IL_02c3;
	}

IL_0280:
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

IL_0569:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetColor("_ColorX", _ColorX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_141 = __this->____ColorX_11;
		NullCheck(L_140);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_140, _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OutLineSpread", _OutLineSpread);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->____OutLineSpread_12;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteral1D8587814960B2CE9B2A186858076520D5EA6451, L_144, NULL);
		return;
	}

IL_05a0:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_145 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_146;
		L_146 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_145, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_146)
		{
			goto IL_0605;
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
		// CanvasImage.material.SetColor("_ColorX", _ColorX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_150 = __this->___CanvasImage_16;
		NullCheck(L_150);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_151;
		L_151 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_150);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_152 = __this->____ColorX_11;
		NullCheck(L_151);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_151, _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227, L_152, NULL);
		// CanvasImage.material.SetFloat("_OutLineSpread", _OutLineSpread);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_153 = __this->___CanvasImage_16;
		NullCheck(L_153);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154;
		L_154 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_153);
		float L_155 = __this->____OutLineSpread_12;
		NullCheck(L_154);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_154, _stringLiteral1D8587814960B2CE9B2A186858076520D5EA6451, L_155, NULL);
	}

IL_0605:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Outline::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Outline_OnDestroy_mBE94003ED7FD579A5CDCA97AB1FB631F750D311D (_2dxFX_AL_Outline_t32154326ED13D22F8E85BF10C63F9D31F120E787* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Outline::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Outline_OnDisable_m400105B01F97365565CEC7D09C394068DCB5D9A9 (_2dxFX_AL_Outline_t32154326ED13D22F8E85BF10C63F9D31F120E787* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Outline::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Outline_OnEnable_m31B90A97046C1B316C3E50C656B555735C165A71 (_2dxFX_AL_Outline_t32154326ED13D22F8E85BF10C63F9D31F120E787* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Outline::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Outline__ctor_m51759AD47B7D9190956DBC9BF75D293A3F9B2488 (_2dxFX_AL_Outline_t32154326ED13D22F8E85BF10C63F9D31F120E787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC1D9EAA6FB76652D57541E085108BEE984361E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Outline";
		__this->___shader_9 = _stringLiteralBC1D9EAA6FB76652D57541E085108BEE984361E2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralBC1D9EAA6FB76652D57541E085108BEE984361E2);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] public Color _ColorX = new Color(1f, 1f, 1f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->____ColorX_11 = L_0;
		// [HideInInspector] [Range(0f, 0.020f)] public float _OutLineSpread = 0.007f;
		__this->____OutLineSpread_12 = (0.00700000022f);
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
// System.Void _2dxFX_AL_Pattern::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pattern_Awake_mEC934D5EC7BF4FABCB4F1349D8981D334B28F020 (_2dxFX_AL_Pattern_t4FC861731B20EB517B31AA97773CA6DC696058C8* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pattern::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pattern_Start_m7E33891AB07A5D043CB1FD54C38D287C63C64824 (_2dxFX_AL_Pattern_t4FC861731B20EB517B31AA97773CA6DC696058C8* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_20 = 0;
		// XUpdate();
		_2dxFX_AL_Pattern_XUpdate_mB121BE75A1FB5D4EFDD649ADCBEA41D4F2BC4C04(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pattern::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pattern_CallUpdate_m6AA42495AF07A6F8B8C784FBD68316004F71365A (_2dxFX_AL_Pattern_t4FC861731B20EB517B31AA97773CA6DC696058C8* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Pattern_XUpdate_mB121BE75A1FB5D4EFDD649ADCBEA41D4F2BC4C04(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pattern::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pattern_Update_m58582A717B765279482973AB312C37E66840864F (_2dxFX_AL_Pattern_t4FC861731B20EB517B31AA97773CA6DC696058C8* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Pattern_XUpdate_mB121BE75A1FB5D4EFDD649ADCBEA41D4F2BC4C04(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pattern::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pattern_XUpdate_mB121BE75A1FB5D4EFDD649ADCBEA41D4F2BC4C04 (_2dxFX_AL_Pattern_t4FC861731B20EB517B31AA97773CA6DC696058C8* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A);
		s_Il2CppMethodInitialized = true;
	}
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
		int32_t L_34 = __this->___ShaderChange_20;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a8;
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
			goto IL_013f;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_21;
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
			goto IL_0182;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_21;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_01a1;
	}

IL_0182:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_23;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_21;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_01a1:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_20 = 0;
	}

IL_01a8:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_08fe;
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
			goto IL_06f0;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_60);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_60, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		NullCheck(L_62);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_62, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_65);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_65, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_67, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_71);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_71, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_73, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_24;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0569:
	{
		// if ((_AutoScrollX == false) && (_AutoScrollY == false))
		bool L_139 = __this->____AutoScrollX_14;
		if (L_139)
		{
			goto IL_05af;
		}
	}
	{
		bool L_140 = __this->____AutoScrollY_16;
		if (L_140)
		{
			goto IL_05af;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetX", _OffsetX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_141 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_141);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_142;
		L_142 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_141, NULL);
		float L_143 = __this->____OffsetX_12;
		NullCheck(L_142);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_142, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_143, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetY", _OffsetY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_144 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_144);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_145;
		L_145 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_144, NULL);
		float L_146 = __this->____OffsetY_13;
		NullCheck(L_145);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_145, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_146, NULL);
	}

IL_05af:
	{
		// if ((_AutoScrollX == true) && (_AutoScrollY == false))
		bool L_147 = __this->____AutoScrollX_14;
		if (!L_147)
		{
			goto IL_060e;
		}
	}
	{
		bool L_148 = __this->____AutoScrollY_16;
		if (L_148)
		{
			goto IL_060e;
		}
	}
	{
		// _AutoScrollCountX += _AutoScrollSpeedX * Time.deltaTime;
		float L_149 = __this->____AutoScrollCountX_18;
		float L_150 = __this->____AutoScrollSpeedX_15;
		float L_151;
		L_151 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountX_18 = ((float)il2cpp_codegen_add(L_149, ((float)il2cpp_codegen_multiply(L_150, L_151))));
		// CanvasSpriteRenderer.material.SetFloat("_OffsetX", _AutoScrollCountX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_152 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_152);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_153;
		L_153 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_152, NULL);
		float L_154 = __this->____AutoScrollCountX_18;
		NullCheck(L_153);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_153, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_154, NULL);
		// CanvasSpriteRenderer.material.SetFloat("_OffsetY", _OffsetY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_155 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_155);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_156;
		L_156 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_155, NULL);
		float L_157 = __this->____OffsetY_13;
		NullCheck(L_156);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_156, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_157, NULL);
	}

IL_060e:
	{
		// if ((_AutoScrollX == false) && (_AutoScrollY == true))
		bool L_158 = __this->____AutoScrollX_14;
		if (L_158)
		{
			goto IL_066d;
		}
	}
	{
		bool L_159 = __this->____AutoScrollY_16;
		if (!L_159)
		{
			goto IL_066d;
		}
	}
	{
		// _AutoScrollCountY += _AutoScrollSpeedY * Time.deltaTime;
		float L_160 = __this->____AutoScrollCountY_19;
		float L_161 = __this->____AutoScrollSpeedY_17;
		float L_162;
		L_162 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountY_19 = ((float)il2cpp_codegen_add(L_160, ((float)il2cpp_codegen_multiply(L_161, L_162))));
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetX", _OffsetX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_163 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_163);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_164;
		L_164 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_163, NULL);
		float L_165 = __this->____OffsetX_12;
		NullCheck(L_164);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_164, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_165, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetY", _AutoScrollCountY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_166 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_166);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_167;
		L_167 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_166, NULL);
		float L_168 = __this->____AutoScrollCountY_19;
		NullCheck(L_167);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_167, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_168, NULL);
	}

IL_066d:
	{
		// if ((_AutoScrollX == true) && (_AutoScrollY == true))
		bool L_169 = __this->____AutoScrollX_14;
		if (!L_169)
		{
			goto IL_089e;
		}
	}
	{
		bool L_170 = __this->____AutoScrollY_16;
		if (!L_170)
		{
			goto IL_089e;
		}
	}
	{
		// _AutoScrollCountX += _AutoScrollSpeedX * Time.deltaTime;
		float L_171 = __this->____AutoScrollCountX_18;
		float L_172 = __this->____AutoScrollSpeedX_15;
		float L_173;
		L_173 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountX_18 = ((float)il2cpp_codegen_add(L_171, ((float)il2cpp_codegen_multiply(L_172, L_173))));
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetX", _AutoScrollCountX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_174 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_174);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_175;
		L_175 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_174, NULL);
		float L_176 = __this->____AutoScrollCountX_18;
		NullCheck(L_175);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_175, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_176, NULL);
		// _AutoScrollCountY += _AutoScrollSpeedY * Time.deltaTime;
		float L_177 = __this->____AutoScrollCountY_19;
		float L_178 = __this->____AutoScrollSpeedY_17;
		float L_179;
		L_179 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountY_19 = ((float)il2cpp_codegen_add(L_177, ((float)il2cpp_codegen_multiply(L_178, L_179))));
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetY", _AutoScrollCountY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_180 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_180);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_181;
		L_181 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_180, NULL);
		float L_182 = __this->____AutoScrollCountY_19;
		NullCheck(L_181);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_181, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_182, NULL);
		goto IL_089e;
	}

IL_06f0:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_183 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_184;
		L_184 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_183, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_184)
		{
			goto IL_089e;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_185 = __this->___CanvasImage_23;
		NullCheck(L_185);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_186;
		L_186 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_185);
		float L_187 = __this->____Alpha_10;
		NullCheck(L_186);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_186, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_187)), NULL);
		// if ((_AutoScrollX == false) && (_AutoScrollY == false))
		bool L_188 = __this->____AutoScrollX_14;
		if (L_188)
		{
			goto IL_0768;
		}
	}
	{
		bool L_189 = __this->____AutoScrollY_16;
		if (L_189)
		{
			goto IL_0768;
		}
	}
	{
		// CanvasImage.material.SetFloat("_OffsetX", _OffsetX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_190 = __this->___CanvasImage_23;
		NullCheck(L_190);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_191;
		L_191 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_190);
		float L_192 = __this->____OffsetX_12;
		NullCheck(L_191);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_191, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_192, NULL);
		// CanvasImage.material.SetFloat("_OffsetY", _OffsetY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_193 = __this->___CanvasImage_23;
		NullCheck(L_193);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_194;
		L_194 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_193);
		float L_195 = __this->____OffsetY_13;
		NullCheck(L_194);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_194, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_195, NULL);
	}

IL_0768:
	{
		// if ((_AutoScrollX == true) && (_AutoScrollY == false))
		bool L_196 = __this->____AutoScrollX_14;
		if (!L_196)
		{
			goto IL_07c7;
		}
	}
	{
		bool L_197 = __this->____AutoScrollY_16;
		if (L_197)
		{
			goto IL_07c7;
		}
	}
	{
		// _AutoScrollCountX += _AutoScrollSpeedX * Time.deltaTime;
		float L_198 = __this->____AutoScrollCountX_18;
		float L_199 = __this->____AutoScrollSpeedX_15;
		float L_200;
		L_200 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountX_18 = ((float)il2cpp_codegen_add(L_198, ((float)il2cpp_codegen_multiply(L_199, L_200))));
		// CanvasImage.material.SetFloat("_OffsetX", _AutoScrollCountX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_201 = __this->___CanvasImage_23;
		NullCheck(L_201);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_202;
		L_202 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_201);
		float L_203 = __this->____AutoScrollCountX_18;
		NullCheck(L_202);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_202, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_203, NULL);
		// CanvasImage.material.SetFloat("_OffsetY", _OffsetY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_204 = __this->___CanvasImage_23;
		NullCheck(L_204);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_205;
		L_205 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_204);
		float L_206 = __this->____OffsetY_13;
		NullCheck(L_205);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_205, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_206, NULL);
	}

IL_07c7:
	{
		// if ((_AutoScrollX == false) && (_AutoScrollY == true))
		bool L_207 = __this->____AutoScrollX_14;
		if (L_207)
		{
			goto IL_0826;
		}
	}
	{
		bool L_208 = __this->____AutoScrollY_16;
		if (!L_208)
		{
			goto IL_0826;
		}
	}
	{
		// _AutoScrollCountY += _AutoScrollSpeedY * Time.deltaTime;
		float L_209 = __this->____AutoScrollCountY_19;
		float L_210 = __this->____AutoScrollSpeedY_17;
		float L_211;
		L_211 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountY_19 = ((float)il2cpp_codegen_add(L_209, ((float)il2cpp_codegen_multiply(L_210, L_211))));
		// CanvasImage.material.SetFloat("_OffsetX", _OffsetX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_212 = __this->___CanvasImage_23;
		NullCheck(L_212);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_213;
		L_213 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_212);
		float L_214 = __this->____OffsetX_12;
		NullCheck(L_213);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_213, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_214, NULL);
		// CanvasImage.material.SetFloat("_OffsetY", _AutoScrollCountY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_215 = __this->___CanvasImage_23;
		NullCheck(L_215);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_216;
		L_216 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_215);
		float L_217 = __this->____AutoScrollCountY_19;
		NullCheck(L_216);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_216, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_217, NULL);
	}

IL_0826:
	{
		// if ((_AutoScrollX == true) && (_AutoScrollY == true))
		bool L_218 = __this->____AutoScrollX_14;
		if (!L_218)
		{
			goto IL_089e;
		}
	}
	{
		bool L_219 = __this->____AutoScrollY_16;
		if (!L_219)
		{
			goto IL_089e;
		}
	}
	{
		// _AutoScrollCountX += _AutoScrollSpeedX * Time.deltaTime;
		float L_220 = __this->____AutoScrollCountX_18;
		float L_221 = __this->____AutoScrollSpeedX_15;
		float L_222;
		L_222 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountX_18 = ((float)il2cpp_codegen_add(L_220, ((float)il2cpp_codegen_multiply(L_221, L_222))));
		// CanvasImage.material.SetFloat("_OffsetX", _AutoScrollCountX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_223 = __this->___CanvasImage_23;
		NullCheck(L_223);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_224;
		L_224 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_223);
		float L_225 = __this->____AutoScrollCountX_18;
		NullCheck(L_224);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_224, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_225, NULL);
		// _AutoScrollCountY += _AutoScrollSpeedY * Time.deltaTime;
		float L_226 = __this->____AutoScrollCountY_19;
		float L_227 = __this->____AutoScrollSpeedY_17;
		float L_228;
		L_228 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountY_19 = ((float)il2cpp_codegen_add(L_226, ((float)il2cpp_codegen_multiply(L_227, L_228))));
		// CanvasImage.material.SetFloat("_OffsetY", _AutoScrollCountY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_229 = __this->___CanvasImage_23;
		NullCheck(L_229);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_230;
		L_230 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_229);
		float L_231 = __this->____AutoScrollCountY_19;
		NullCheck(L_230);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_230, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_231, NULL);
	}

IL_089e:
	{
		// if (_AutoScrollCountX > 1) _AutoScrollCountX = 0;
		float L_232 = __this->____AutoScrollCountX_18;
		if ((!(((float)L_232) > ((float)(1.0f)))))
		{
			goto IL_08b6;
		}
	}
	{
		// if (_AutoScrollCountX > 1) _AutoScrollCountX = 0;
		__this->____AutoScrollCountX_18 = (0.0f);
	}

IL_08b6:
	{
		// if (_AutoScrollCountX < -1) _AutoScrollCountX = 0;
		float L_233 = __this->____AutoScrollCountX_18;
		if ((!(((float)L_233) < ((float)(-1.0f)))))
		{
			goto IL_08ce;
		}
	}
	{
		// if (_AutoScrollCountX < -1) _AutoScrollCountX = 0;
		__this->____AutoScrollCountX_18 = (0.0f);
	}

IL_08ce:
	{
		// if (_AutoScrollCountY > 1) _AutoScrollCountY = 0;
		float L_234 = __this->____AutoScrollCountY_19;
		if ((!(((float)L_234) > ((float)(1.0f)))))
		{
			goto IL_08e6;
		}
	}
	{
		// if (_AutoScrollCountY > 1) _AutoScrollCountY = 0;
		__this->____AutoScrollCountY_19 = (0.0f);
	}

IL_08e6:
	{
		// if (_AutoScrollCountY < -1) _AutoScrollCountY = 0;
		float L_235 = __this->____AutoScrollCountY_19;
		if ((!(((float)L_235) < ((float)(-1.0f)))))
		{
			goto IL_08fe;
		}
	}
	{
		// if (_AutoScrollCountY < -1) _AutoScrollCountY = 0;
		__this->____AutoScrollCountY_19 = (0.0f);
	}

IL_08fe:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pattern::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pattern_OnDestroy_m37A41148BBA00552B67405EAD2831F9AF83D63F0 (_2dxFX_AL_Pattern_t4FC861731B20EB517B31AA97773CA6DC696058C8* __this, const RuntimeMethod* method) 
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
		// if (ForceMaterial != null && tempMaterial != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___tempMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_6, NULL);
	}

IL_003b:
	{
		// if (gameObject.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_7, NULL);
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
// System.Void _2dxFX_AL_Pattern::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pattern_OnDisable_m049A50E3761224041A0AF0D9467442519AE06E91 (_2dxFX_AL_Pattern_t4FC861731B20EB517B31AA97773CA6DC696058C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ForceMaterial != null && tempMaterial != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0088;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0088;
		}
	}
	{
		// DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___CanvasSpriteRenderer_24;
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___defaultMaterial_22;
		NullCheck(L_7);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_7, L_8, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_9);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_9, NULL);
		NullCheck(L_10);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_10, 0, NULL);
		return;
	}

IL_0058:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0088;
		}
	}
	{
		// CanvasImage.material = defaultMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = __this->___CanvasImage_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___defaultMaterial_22;
		NullCheck(L_13);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_13, L_14);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_23;
		NullCheck(L_15);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16;
		L_16 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_15);
		NullCheck(L_16);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_16, 0, NULL);
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pattern::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pattern_OnEnable_m03D90202D6DE0B22EF2A4E56CA786C13651B6571 (_2dxFX_AL_Pattern_t4FC861731B20EB517B31AA97773CA6DC696058C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// defaultMaterial = new Material(Shader.Find("Sprites/Default"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0;
		L_0 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_1, L_0, NULL);
		__this->___defaultMaterial_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_22), (void*)L_1);
		// if (ForceMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___ForceMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		// ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_4 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_5;
		L_5 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_4, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_6, L_5, NULL);
		__this->___tempMaterial_21 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_21), (void*)L_6);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___tempMaterial_21;
		NullCheck(L_7);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_7, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___tempMaterial_21;
		NullCheck(L_10);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_10, L_11, NULL);
		goto IL_00f3;
	}

IL_0070:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_00f3;
		}
	}
	{
		// CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___tempMaterial_21;
		NullCheck(L_14);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_14, L_15);
		goto IL_00f3;
	}

IL_0091:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___ForceMaterial_4;
		String_t* L_17 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_18;
		L_18 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_17, NULL);
		NullCheck(L_16);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_16, L_18, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___ForceMaterial_4;
		NullCheck(L_19);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_19, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00d4;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = ForceMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00f3;
	}

IL_00d4:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00f3;
		}
	}
	{
		// CanvasImage.material = ForceMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ForceMaterial_4;
		NullCheck(L_26);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_26, L_27);
	}

IL_00f3:
	{
		// if (__MainTex2)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_28 = __this->_____MainTex2_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_28, NULL);
		if (!L_29)
		{
			goto IL_0127;
		}
	}
	{
		// __MainTex2.wrapMode = TextureWrapMode.Repeat;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = __this->_____MainTex2_11;
		NullCheck(L_30);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_30, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetTexture("_MainTex2", __MainTex2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_31 = __this->___CanvasSpriteRenderer_24;
		NullCheck(L_31);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32;
		L_32 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_31, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = __this->_____MainTex2_11;
		NullCheck(L_32);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_32, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_33, NULL);
	}

IL_0127:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pattern::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pattern__ctor_m0738478F28CB7098B875BB4BCFEF3477EBFACDCB (_2dxFX_AL_Pattern_t4FC861731B20EB517B31AA97773CA6DC696058C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26352E98B3C60E44B474AC16987C3059D57E0A5F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Pattern";
		__this->___shader_9 = _stringLiteral26352E98B3C60E44B474AC16987C3059D57E0A5F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral26352E98B3C60E44B474AC16987C3059D57E0A5F);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
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
// System.Void _2dxFX_AL_Pixel::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel_Awake_m961405B2298FB2ED1AC2E8290D73409CF2348F82 (_2dxFX_AL_Pixel_t647A7C38CCA16B8F2614AA0804B34603D66B634C* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pixel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel_Start_mADC41BF6C2E0911AD43144CA64313ED98E612619 (_2dxFX_AL_Pixel_t647A7C38CCA16B8F2614AA0804B34603D66B634C* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// XUpdate();
		_2dxFX_AL_Pixel_XUpdate_mCA6C14BF4FC79AC8ED6F9EB9FD3093CFD66B643C(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pixel::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel_CallUpdate_mDE9E71A6CC6F3F6630C201A0C8E50EE21D70F9AE (_2dxFX_AL_Pixel_t647A7C38CCA16B8F2614AA0804B34603D66B634C* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Pixel_XUpdate_mCA6C14BF4FC79AC8ED6F9EB9FD3093CFD66B643C(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pixel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel_Update_m833A5DC1D3ECB9E00F38A7B029567432F4E86E8F (_2dxFX_AL_Pixel_t647A7C38CCA16B8F2614AA0804B34603D66B634C* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Pixel_XUpdate_mCA6C14BF4FC79AC8ED6F9EB9FD3093CFD66B643C(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pixel::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel_XUpdate_mCA6C14BF4FC79AC8ED6F9EB9FD3093CFD66B643C (_2dxFX_AL_Pixel_t647A7C38CCA16B8F2614AA0804B34603D66B634C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF);
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
			goto IL_05f9;
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
			goto IL_05b5;
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
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Offset", _Offset);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		float L_58 = __this->____Offset_11;
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF, L_58, NULL);
		// if (_2DxFX.ActiveShadow && AddShadow)
		il2cpp_codegen_runtime_class_init_inline(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		bool L_59 = ((_2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields*)il2cpp_codegen_static_fields_for(_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var))->___ActiveShadow_4;
		if (!L_59)
		{
			goto IL_029b;
		}
	}
	{
		bool L_60 = __this->___AddShadow_6;
		if (!L_60)
		{
			goto IL_029b;
		}
	}
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_61);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_61, 1, NULL);
		// if (ReceivedShadow)
		bool L_62 = __this->___ReceivedShadow_7;
		if (!L_62)
		{
			goto IL_0262;
		}
	}
	{
		// CanvasSpriteRenderer.receiveShadows = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_63);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_63, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_64 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_64);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65;
		L_65 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_64, NULL);
		NullCheck(L_65);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_65, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_67, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 1, NULL);
		goto IL_02de;
	}

IL_0262:
	{
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_68);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_68, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_69 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_69);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_70;
		L_70 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_69, NULL);
		NullCheck(L_70);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_70, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_71);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_72;
		L_72 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_71, NULL);
		NullCheck(L_72);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_72, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
		goto IL_02de;
	}

IL_029b:
	{
		// CanvasSpriteRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_73 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_73);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_73, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_74);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_74, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_75 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_75);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_76;
		L_76 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_75, NULL);
		NullCheck(L_76);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_76, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F, 0, NULL);
	}

IL_02de:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_79 = __this->___BlendMode_8;
		if (L_79)
		{
			goto IL_0329;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_80 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_80);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_81;
		L_81 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_80, NULL);
		NullCheck(L_81);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_81, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_82 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_82);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_83;
		L_83 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_82, NULL);
		NullCheck(L_83);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_83, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_0329:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_86 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_86) == ((uint32_t)1))))
		{
			goto IL_0374;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_87 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_87);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_88;
		L_88 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_87, NULL);
		NullCheck(L_88);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_88, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_89 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_89);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_90;
		L_90 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_89, NULL);
		NullCheck(L_90);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_90, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0374:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_93 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_93) == ((uint32_t)2))))
		{
			goto IL_03bf;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_94 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_94);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_95;
		L_95 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_94, NULL);
		NullCheck(L_95);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_95, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_96 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_96);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_97;
		L_97 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_96, NULL);
		NullCheck(L_97);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_97, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_03bf:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_100 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_100) == ((uint32_t)3))))
		{
			goto IL_040a;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_101 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_101);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_102;
		L_102 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_101, NULL);
		NullCheck(L_102);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_102, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_103 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_103);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_104;
		L_104 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_103, NULL);
		NullCheck(L_104);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_104, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_040a:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_107 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_107) == ((uint32_t)4))))
		{
			goto IL_0455;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_108 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_108);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_109;
		L_109 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_108, NULL);
		NullCheck(L_109);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_109, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_110 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_110);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_111;
		L_111 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_110, NULL);
		NullCheck(L_111);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_111, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0455:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_114 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_114) == ((uint32_t)5))))
		{
			goto IL_04a2;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Max);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_115 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_115);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_116;
		L_116 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_115, NULL);
		NullCheck(L_116);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_116, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_117 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_117);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_118;
		L_118 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_117, NULL);
		NullCheck(L_118);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_118, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_04a2:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_121 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_121) == ((uint32_t)6))))
		{
			goto IL_04ee;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_122 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_122);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_123;
		L_123 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_122, NULL);
		NullCheck(L_123);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_123, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_124 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_124);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_125;
		L_125 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_124, NULL);
		NullCheck(L_125);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_125, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
	}

IL_04ee:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_128 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_128) == ((uint32_t)7))))
		{
			goto IL_0539;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.Add);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_129 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_129);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_130;
		L_130 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_129, NULL);
		NullCheck(L_130);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_130, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_131 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_131);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_132;
		L_132 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_131, NULL);
		NullCheck(L_132);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_132, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 1, NULL);
	}

IL_0539:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_135 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_135) == ((uint32_t)8))))
		{
			goto IL_0584;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_BlendOp", (int)UnityEngine.Rendering.BlendOp.ReverseSubtract);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_136 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_136);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_137;
		L_137 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_136, NULL);
		NullCheck(L_137);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_137, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_138 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_138);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_139;
		L_139 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_138, NULL);
		NullCheck(L_139);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_139, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_140 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_140);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_141;
		L_141 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_140, NULL);
		NullCheck(L_141);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_141, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0584:
	{
		// this.GetComponent<SpriteRenderer>().sprite.texture.mipMapBias = -10;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142;
		L_142 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_142);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_143;
		L_143 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_142, NULL);
		NullCheck(L_143);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_144;
		L_144 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_143, NULL);
		NullCheck(L_144);
		Texture_set_mipMapBias_m945790033BD16B51B4EDD12E177207EBF5887286(L_144, (-10.0f), NULL);
		// this.GetComponent<SpriteRenderer>().sprite.texture.filterMode = FilterMode.Point;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_145;
		L_145 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_145);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_146;
		L_146 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_145, NULL);
		NullCheck(L_146);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_147;
		L_147 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_146, NULL);
		NullCheck(L_147);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_147, 0, NULL);
		return;
	}

IL_05b5:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_148 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_149;
		L_149 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_148, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_149)
		{
			goto IL_05f9;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_150 = __this->___CanvasImage_15;
		NullCheck(L_150);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_151;
		L_151 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_150);
		float L_152 = __this->____Alpha_10;
		NullCheck(L_151);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_151, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, L_152, NULL);
		// CanvasImage.material.SetFloat("_Offset", _Offset);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_153 = __this->___CanvasImage_15;
		NullCheck(L_153);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154;
		L_154 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_153);
		float L_155 = __this->____Offset_11;
		NullCheck(L_154);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_154, _stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF, L_155, NULL);
	}

IL_05f9:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pixel::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel_OnDestroy_mDDE71C49D99596417F141206C9D5B93574E84958 (_2dxFX_AL_Pixel_t647A7C38CCA16B8F2614AA0804B34603D66B634C* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pixel::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel_OnDisable_m72CBA6CF8372C151B2033BC60B2021CE33E08AD5 (_2dxFX_AL_Pixel_t647A7C38CCA16B8F2614AA0804B34603D66B634C* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pixel::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel_OnEnable_mD9248A358F2239C0813391DF79FA57510BCDE21A (_2dxFX_AL_Pixel_t647A7C38CCA16B8F2614AA0804B34603D66B634C* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pixel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel__ctor_m6F3B91135386FE87E02CC292C4413040737D6317 (_2dxFX_AL_Pixel_t647A7C38CCA16B8F2614AA0804B34603D66B634C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F4DFB1E168C552AC34135161CB8E0B71837CA6A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Pixel";
		__this->___shader_9 = _stringLiteral0F4DFB1E168C552AC34135161CB8E0B71837CA6A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral0F4DFB1E168C552AC34135161CB8E0B71837CA6A);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(4f, 128f)] public float _Offset = 32f;
		__this->____Offset_11 = (32.0f);
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
// System.Void _2dxFX_AL_Pixel8bitsBW::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsBW_Awake_m3CF70B1F7A713452EC042B374F81ADCB4A315952 (_2dxFX_AL_Pixel8bitsBW_tDE6D0BB1005EA0C449304CE880E3101BF9908029* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pixel8bitsBW::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsBW_Start_mFD225D734D0195C26875C3D22C3E2942724E513A (_2dxFX_AL_Pixel8bitsBW_tDE6D0BB1005EA0C449304CE880E3101BF9908029* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_14 = 0;
		// XUpdate();
		_2dxFX_AL_Pixel8bitsBW_XUpdate_m00ACD0E84C1F2D5424B2E2316143E0E77DB8ABCF(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pixel8bitsBW::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsBW_CallUpdate_m2E1BFBF687509A65B0526FEC48702C039C59F774 (_2dxFX_AL_Pixel8bitsBW_tDE6D0BB1005EA0C449304CE880E3101BF9908029* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Pixel8bitsBW_XUpdate_m00ACD0E84C1F2D5424B2E2316143E0E77DB8ABCF(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pixel8bitsBW::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsBW_Update_m8F37AE4BA4DE40FEB54B1962FC4E33EC748ECCEC (_2dxFX_AL_Pixel8bitsBW_tDE6D0BB1005EA0C449304CE880E3101BF9908029* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Pixel8bitsBW_XUpdate_m00ACD0E84C1F2D5424B2E2316143E0E77DB8ABCF(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pixel8bitsBW::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsBW_XUpdate_m00ACD0E84C1F2D5424B2E2316143E0E77DB8ABCF (_2dxFX_AL_Pixel8bitsBW_tDE6D0BB1005EA0C449304CE880E3101BF9908029* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62F6F9DB32D523B330D22F4E217B6711BBE77F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF);
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
			goto IL_066b;
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
			goto IL_05eb;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_18;
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
		goto IL_02c3;
	}

IL_0247:
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
		goto IL_02c3;
	}

IL_0280:
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

IL_0569:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Size", _Size);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->____Size_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Offset", _Offset);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->____Offset_12;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF, L_144, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Offset2", _Offset2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_145 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_145);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146;
		L_146 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_145, NULL);
		float L_147 = __this->____Offset2_13;
		NullCheck(L_146);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_146, _stringLiteralD62F6F9DB32D523B330D22F4E217B6711BBE77F1, L_147, NULL);
		// this.GetComponent<SpriteRenderer>().sprite.texture.mipMapBias = -10;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_148;
		L_148 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_148);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_149;
		L_149 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_148, NULL);
		NullCheck(L_149);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_150;
		L_150 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_149, NULL);
		NullCheck(L_150);
		Texture_set_mipMapBias_m945790033BD16B51B4EDD12E177207EBF5887286(L_150, (-10.0f), NULL);
		// this.GetComponent<SpriteRenderer>().sprite.texture.filterMode = FilterMode.Point;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_151;
		L_151 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_151);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_152;
		L_152 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_151, NULL);
		NullCheck(L_152);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_153;
		L_153 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_152, NULL);
		NullCheck(L_153);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_153, 0, NULL);
		return;
	}

IL_05eb:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_154 = __this->___CanvasImage_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_155;
		L_155 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_154, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_155)
		{
			goto IL_066b;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_156 = __this->___CanvasImage_17;
		NullCheck(L_156);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_157;
		L_157 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_156);
		float L_158 = __this->____Alpha_10;
		NullCheck(L_157);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_157, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_158)), NULL);
		// CanvasImage.material.SetFloat("_Size", _Size);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_159 = __this->___CanvasImage_17;
		NullCheck(L_159);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160;
		L_160 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_159);
		float L_161 = __this->____Size_11;
		NullCheck(L_160);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_160, _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117, L_161, NULL);
		// CanvasImage.material.SetFloat("_Offset", _Offset);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_162 = __this->___CanvasImage_17;
		NullCheck(L_162);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_163;
		L_163 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_162);
		float L_164 = __this->____Offset_12;
		NullCheck(L_163);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_163, _stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF, L_164, NULL);
		// CanvasImage.material.SetFloat("_Offset2", _Offset2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_165 = __this->___CanvasImage_17;
		NullCheck(L_165);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_166;
		L_166 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_165);
		float L_167 = __this->____Offset2_13;
		NullCheck(L_166);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_166, _stringLiteralD62F6F9DB32D523B330D22F4E217B6711BBE77F1, L_167, NULL);
	}

IL_066b:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pixel8bitsBW::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsBW_OnDestroy_m114B9C2C55923AFD195F188244EB114F139CCD96 (_2dxFX_AL_Pixel8bitsBW_tDE6D0BB1005EA0C449304CE880E3101BF9908029* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pixel8bitsBW::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsBW_OnDisable_m188FB201C382F6AB1B6641A9EEF27835AB6FCE85 (_2dxFX_AL_Pixel8bitsBW_tDE6D0BB1005EA0C449304CE880E3101BF9908029* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pixel8bitsBW::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsBW_OnEnable_m8893ADB700100E2CEFC58F04D879838C300DD9D8 (_2dxFX_AL_Pixel8bitsBW_tDE6D0BB1005EA0C449304CE880E3101BF9908029* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pixel8bitsBW::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsBW__ctor_m59A8B53EA9FF56A0D966CF00832D54B4CB64C2AC (_2dxFX_AL_Pixel8bitsBW_tDE6D0BB1005EA0C449304CE880E3101BF9908029* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF85FC82BBF75AB07426F70B4CA6DAF4951333867);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Pixel8bitsBW";
		__this->___shader_9 = _stringLiteralF85FC82BBF75AB07426F70B4CA6DAF4951333867;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralF85FC82BBF75AB07426F70B4CA6DAF4951333867);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.01f, 10f)] public float _Size = 1f;
		__this->____Size_11 = (1.0f);
		// [HideInInspector] [Range(0.01f, 10f)] public float _Offset = 1f;
		__this->____Offset_12 = (1.0f);
		// [HideInInspector] [Range(0f, 10f)] public float _Offset2 = 1f;
		__this->____Offset2_13 = (1.0f);
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
// System.Void _2dxFX_AL_Pixel8bitsC64::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsC64_Awake_mC86680B19200221C96ED31C1975640D98D222C80 (_2dxFX_AL_Pixel8bitsC64_t768869754C9C06653EF5A3BAAFE7681B26EE4DD9* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pixel8bitsC64::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsC64_Start_m85D6F271170D4A9EE6E383BDE6C0C4B8AB3046B3 (_2dxFX_AL_Pixel8bitsC64_t768869754C9C06653EF5A3BAAFE7681B26EE4DD9* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_14 = 0;
		// XUpdate();
		_2dxFX_AL_Pixel8bitsC64_XUpdate_mE740F0BBD62DA34EF9AE5531D08294E47AF0A252(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pixel8bitsC64::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsC64_CallUpdate_m484B77ECC196480159CAF315916BBDF459B2E7E7 (_2dxFX_AL_Pixel8bitsC64_t768869754C9C06653EF5A3BAAFE7681B26EE4DD9* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Pixel8bitsC64_XUpdate_mE740F0BBD62DA34EF9AE5531D08294E47AF0A252(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pixel8bitsC64::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsC64_Update_m94A3B38834E4DA9B8E9143C34CD7D63650583A0C (_2dxFX_AL_Pixel8bitsC64_t768869754C9C06653EF5A3BAAFE7681B26EE4DD9* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Pixel8bitsC64_XUpdate_mE740F0BBD62DA34EF9AE5531D08294E47AF0A252(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pixel8bitsC64::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsC64_XUpdate_mE740F0BBD62DA34EF9AE5531D08294E47AF0A252 (_2dxFX_AL_Pixel8bitsC64_t768869754C9C06653EF5A3BAAFE7681B26EE4DD9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62F6F9DB32D523B330D22F4E217B6711BBE77F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF);
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
			goto IL_066b;
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
			goto IL_05eb;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_18;
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
		goto IL_02c3;
	}

IL_0247:
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
		goto IL_02c3;
	}

IL_0280:
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

IL_0569:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Size", _Size);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->____Size_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Offset", _Offset);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->____Offset_12;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF, L_144, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Offset2", _Offset2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_145 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_145);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146;
		L_146 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_145, NULL);
		float L_147 = __this->____Offset2_13;
		NullCheck(L_146);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_146, _stringLiteralD62F6F9DB32D523B330D22F4E217B6711BBE77F1, L_147, NULL);
		// this.GetComponent<SpriteRenderer>().sprite.texture.mipMapBias = -10;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_148;
		L_148 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_148);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_149;
		L_149 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_148, NULL);
		NullCheck(L_149);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_150;
		L_150 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_149, NULL);
		NullCheck(L_150);
		Texture_set_mipMapBias_m945790033BD16B51B4EDD12E177207EBF5887286(L_150, (-10.0f), NULL);
		// this.GetComponent<SpriteRenderer>().sprite.texture.filterMode = FilterMode.Point;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_151;
		L_151 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_151);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_152;
		L_152 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_151, NULL);
		NullCheck(L_152);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_153;
		L_153 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_152, NULL);
		NullCheck(L_153);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_153, 0, NULL);
		return;
	}

IL_05eb:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_154 = __this->___CanvasImage_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_155;
		L_155 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_154, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_155)
		{
			goto IL_066b;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_156 = __this->___CanvasImage_17;
		NullCheck(L_156);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_157;
		L_157 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_156);
		float L_158 = __this->____Alpha_10;
		NullCheck(L_157);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_157, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_158)), NULL);
		// CanvasImage.material.SetFloat("_Size", _Size);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_159 = __this->___CanvasImage_17;
		NullCheck(L_159);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160;
		L_160 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_159);
		float L_161 = __this->____Size_11;
		NullCheck(L_160);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_160, _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117, L_161, NULL);
		// CanvasImage.material.SetFloat("_Offset", _Offset);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_162 = __this->___CanvasImage_17;
		NullCheck(L_162);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_163;
		L_163 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_162);
		float L_164 = __this->____Offset_12;
		NullCheck(L_163);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_163, _stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF, L_164, NULL);
		// CanvasImage.material.SetFloat("_Offset2", _Offset2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_165 = __this->___CanvasImage_17;
		NullCheck(L_165);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_166;
		L_166 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_165);
		float L_167 = __this->____Offset2_13;
		NullCheck(L_166);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_166, _stringLiteralD62F6F9DB32D523B330D22F4E217B6711BBE77F1, L_167, NULL);
	}

IL_066b:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pixel8bitsC64::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsC64_OnDestroy_m0CEBCABF8B24541898B9291B9BEE27A7806F6543 (_2dxFX_AL_Pixel8bitsC64_t768869754C9C06653EF5A3BAAFE7681B26EE4DD9* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pixel8bitsC64::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsC64_OnDisable_mEA67614A836A5D257643F5715D8D2272AD87909F (_2dxFX_AL_Pixel8bitsC64_t768869754C9C06653EF5A3BAAFE7681B26EE4DD9* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pixel8bitsC64::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsC64_OnEnable_m6F9040C9E9D98272E77B32850C18E6EBBD5DD79A (_2dxFX_AL_Pixel8bitsC64_t768869754C9C06653EF5A3BAAFE7681B26EE4DD9* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pixel8bitsC64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsC64__ctor_m925F1D462AFB2A89F3772927637B7229D1C22EEA (_2dxFX_AL_Pixel8bitsC64_t768869754C9C06653EF5A3BAAFE7681B26EE4DD9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1918CF6766A53F233BC9CE73FAD9C676FF7E9ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Pixel8bitsC64";
		__this->___shader_9 = _stringLiteralA1918CF6766A53F233BC9CE73FAD9C676FF7E9ED;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralA1918CF6766A53F233BC9CE73FAD9C676FF7E9ED);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.01f, 10f)] public float _Size = 1f;
		__this->____Size_11 = (1.0f);
		// [HideInInspector] [Range(0.01f, 3f)] public float _Offset = 1f;
		__this->____Offset_12 = (1.0f);
		// [HideInInspector] [Range(0f, 3f)] public float _Offset2 = 1f;
		__this->____Offset2_13 = (1.0f);
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
// System.Void _2dxFX_AL_Pixel8bitsGB::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsGB_Awake_m0D7E785DB1702882320020AD3B8654BFB330932F (_2dxFX_AL_Pixel8bitsGB_t23124C56FCF662061F3454247FB4AC61F4F30213* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pixel8bitsGB::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsGB_Start_mADE0A4946910F26DDB617FBEC5DF7C95E69AB4EF (_2dxFX_AL_Pixel8bitsGB_t23124C56FCF662061F3454247FB4AC61F4F30213* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_13 = 0;
		// XUpdate();
		_2dxFX_AL_Pixel8bitsGB_XUpdate_m56BF71773F785CE47F32F0557D937E794F414054(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pixel8bitsGB::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsGB_CallUpdate_m3F41A65EB2B82C1305DD9F138AFA89C66E76CB88 (_2dxFX_AL_Pixel8bitsGB_t23124C56FCF662061F3454247FB4AC61F4F30213* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Pixel8bitsGB_XUpdate_m56BF71773F785CE47F32F0557D937E794F414054(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pixel8bitsGB::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsGB_Update_mC1CAC4416F208B4CD973B0CEFA4082349F1B982F (_2dxFX_AL_Pixel8bitsGB_t23124C56FCF662061F3454247FB4AC61F4F30213* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Pixel8bitsGB_XUpdate_m56BF71773F785CE47F32F0557D937E794F414054(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pixel8bitsGB::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsGB_XUpdate_m56BF71773F785CE47F32F0557D937E794F414054 (_2dxFX_AL_Pixel8bitsGB_t23124C56FCF662061F3454247FB4AC61F4F30213* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62F6F9DB32D523B330D22F4E217B6711BBE77F1);
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
		int32_t L_34 = __this->___ShaderChange_13;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a8;
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
			goto IL_013f;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_14;
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
			goto IL_0182;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_14;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_14;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_01a1:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_13 = 0;
	}

IL_01a8:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_0635;
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
			goto IL_05d0;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_17;
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
		goto IL_02c3;
	}

IL_0247:
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
		goto IL_02c3;
	}

IL_0280:
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

IL_0569:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Size", _Size);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->____Size_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Offset2", _Offset);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->____Offset_12;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteralD62F6F9DB32D523B330D22F4E217B6711BBE77F1, L_144, NULL);
		// this.GetComponent<SpriteRenderer>().sprite.texture.mipMapBias = -10;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_145;
		L_145 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_145);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_146;
		L_146 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_145, NULL);
		NullCheck(L_146);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_147;
		L_147 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_146, NULL);
		NullCheck(L_147);
		Texture_set_mipMapBias_m945790033BD16B51B4EDD12E177207EBF5887286(L_147, (-10.0f), NULL);
		// this.GetComponent<SpriteRenderer>().sprite.texture.filterMode = FilterMode.Point;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_148;
		L_148 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_148);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_149;
		L_149 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_148, NULL);
		NullCheck(L_149);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_150;
		L_150 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_149, NULL);
		NullCheck(L_150);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_150, 0, NULL);
		return;
	}

IL_05d0:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_151 = __this->___CanvasImage_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_152;
		L_152 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_151, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_152)
		{
			goto IL_0635;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_153 = __this->___CanvasImage_16;
		NullCheck(L_153);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154;
		L_154 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_153);
		float L_155 = __this->____Alpha_10;
		NullCheck(L_154);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_154, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_155)), NULL);
		// CanvasImage.material.SetFloat("_Size", _Size);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_156 = __this->___CanvasImage_16;
		NullCheck(L_156);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_157;
		L_157 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_156);
		float L_158 = __this->____Size_11;
		NullCheck(L_157);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_157, _stringLiteral9E697C3514FCD429A08318C830A7FBC7F581D117, L_158, NULL);
		// CanvasImage.material.SetFloat("_Offset2", _Offset);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_159 = __this->___CanvasImage_16;
		NullCheck(L_159);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160;
		L_160 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_159);
		float L_161 = __this->____Offset_12;
		NullCheck(L_160);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_160, _stringLiteralD62F6F9DB32D523B330D22F4E217B6711BBE77F1, L_161, NULL);
	}

IL_0635:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Pixel8bitsGB::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsGB_OnDestroy_m31ABE230ACDF5A4BA4AA1BD1A6B8269017E3C210 (_2dxFX_AL_Pixel8bitsGB_t23124C56FCF662061F3454247FB4AC61F4F30213* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pixel8bitsGB::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsGB_OnDisable_m2BBE4B89FD631AFB9617714D0D4AEDDF3975DC4A (_2dxFX_AL_Pixel8bitsGB_t23124C56FCF662061F3454247FB4AC61F4F30213* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pixel8bitsGB::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsGB_OnEnable_m5690412CCBC92182EDCA36ECB42BA5D409C88A36 (_2dxFX_AL_Pixel8bitsGB_t23124C56FCF662061F3454247FB4AC61F4F30213* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Pixel8bitsGB::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Pixel8bitsGB__ctor_m8512A9451A4351B445A0912254BF68D855F9C36D (_2dxFX_AL_Pixel8bitsGB_t23124C56FCF662061F3454247FB4AC61F4F30213* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BE22A34FA68B5B05E6009296BF887294301BEEA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Pixel8bitsGB";
		__this->___shader_9 = _stringLiteral7BE22A34FA68B5B05E6009296BF887294301BEEA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral7BE22A34FA68B5B05E6009296BF887294301BEEA);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.01f, 10f)] public float _Size = 1f;
		__this->____Size_11 = (1.0f);
		// [HideInInspector] [Range(0f, 3f)] public float _Offset = 1f;
		__this->____Offset_12 = (1.0f);
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
// System.Void _2dxFX_AL_PixelDie::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PixelDie_Awake_m05B9F00F3CA4763E6EC703B48F7CC646D3B18674 (_2dxFX_AL_PixelDie_t628D77920C844551F6A63232A935AD5C73E5CB8E* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_PixelDie::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PixelDie_Start_m242DFCBBD9F52A0F882E611307580661B3C70D07 (_2dxFX_AL_PixelDie_t628D77920C844551F6A63232A935AD5C73E5CB8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84DB51C3FD490EBABFE348F4FBC7BA7E90372A15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// __MainTex2 = Resources.Load("_2dxFX_PixelDieTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral84DB51C3FD490EBABFE348F4FBC7BA7E90372A15, NULL);
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
		_2dxFX_AL_PixelDie_XUpdate_m12F2EA6A14637CE2CC8E21597751B64B38C77313(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_PixelDie::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PixelDie_CallUpdate_m352542A0793B8997D2488746F360E85AC8286B56 (_2dxFX_AL_PixelDie_t628D77920C844551F6A63232A935AD5C73E5CB8E* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_PixelDie_XUpdate_m12F2EA6A14637CE2CC8E21597751B64B38C77313(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_PixelDie::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PixelDie_Update_m57B1F40A6BBE697BF4036485B743E98EA2233FDC (_2dxFX_AL_PixelDie_t628D77920C844551F6A63232A935AD5C73E5CB8E* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_PixelDie_XUpdate_m12F2EA6A14637CE2CC8E21597751B64B38C77313(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_PixelDie::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PixelDie_XUpdate_m12F2EA6A14637CE2CC8E21597751B64B38C77313 (_2dxFX_AL_PixelDie_t628D77920C844551F6A63232A935AD5C73E5CB8E* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_PixelDie::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PixelDie_OnDestroy_m6034FFB4CD42E76B1D7DB8939B4E06F80DE882B7 (_2dxFX_AL_PixelDie_t628D77920C844551F6A63232A935AD5C73E5CB8E* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_PixelDie::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PixelDie_OnDisable_m11A60D397E8CC9BC072BD3C13C5EE6FC257C226C (_2dxFX_AL_PixelDie_t628D77920C844551F6A63232A935AD5C73E5CB8E* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_PixelDie::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PixelDie_OnEnable_m01D8A46A94E416525325C5D7CD90F1D801A97D5E (_2dxFX_AL_PixelDie_t628D77920C844551F6A63232A935AD5C73E5CB8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84DB51C3FD490EBABFE348F4FBC7BA7E90372A15);
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
		// __MainTex2 = Resources.Load("_2dxFX_PixelDieTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral84DB51C3FD490EBABFE348F4FBC7BA7E90372A15, NULL);
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
		// __MainTex2 = Resources.Load("_2dxFX_PixelDieTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31;
		L_31 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral84DB51C3FD490EBABFE348F4FBC7BA7E90372A15, NULL);
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
// System.Void _2dxFX_AL_PixelDie::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PixelDie__ctor_m812E17C1381BF3E748D220F103A42150A5DED086 (_2dxFX_AL_PixelDie_t628D77920C844551F6A63232A935AD5C73E5CB8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0166A4FE75A1EC2F44A073CC8CFB9335F12404C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/PixelDie";
		__this->___shader_9 = _stringLiteralC0166A4FE75A1EC2F44A073CC8CFB9335F12404C;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralC0166A4FE75A1EC2F44A073CC8CFB9335F12404C);
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
// System.Void _2dxFX_AL_PlasmaRainbow::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaRainbow_Awake_m31FEFD53ED54F231B50F0E6B248CFF4181F10081 (_2dxFX_AL_PlasmaRainbow_t19F5DC4E8DE8DFD63B6A7B7FAE3F44FEEF04FA5F* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_PlasmaRainbow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaRainbow_Start_m0042A473E8699D313F196EE54B46324DDCCC0B1B (_2dxFX_AL_PlasmaRainbow_t19F5DC4E8DE8DFD63B6A7B7FAE3F44FEEF04FA5F* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_15 = 0;
		// XUpdate();
		_2dxFX_AL_PlasmaRainbow_XUpdate_m3FF87A108C2B223C744B4F73B298F332CB61DD52(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_PlasmaRainbow::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaRainbow_CallUpdate_m3BB6F2CFEA967645475B649A074864F249F6EE39 (_2dxFX_AL_PlasmaRainbow_t19F5DC4E8DE8DFD63B6A7B7FAE3F44FEEF04FA5F* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_PlasmaRainbow_XUpdate_m3FF87A108C2B223C744B4F73B298F332CB61DD52(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_PlasmaRainbow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaRainbow_Update_m05CA43BED6EC316CE45614A7DD3314DA69E9BD76 (_2dxFX_AL_PlasmaRainbow_t19F5DC4E8DE8DFD63B6A7B7FAE3F44FEEF04FA5F* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_PlasmaRainbow_XUpdate_m3FF87A108C2B223C744B4F73B298F332CB61DD52(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_PlasmaRainbow::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaRainbow_XUpdate_m3FF87A108C2B223C744B4F73B298F332CB61DD52 (_2dxFX_AL_PlasmaRainbow_t19F5DC4E8DE8DFD63B6A7B7FAE3F44FEEF04FA5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA86DD8D5F9B6682AC6EFC8AE171696EE997C74DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF);
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
			goto IL_06a0;
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
			goto IL_05ec;
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
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Colors", _Colors);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->____Colors_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteralA86DD8D5F9B6682AC6EFC8AE171696EE997C74DC, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Offset", _Offset);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->____Offset_12;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF, L_144, NULL);
		// _TimeX += Time.deltaTime * Speed;
		float L_145 = __this->____TimeX_13;
		float L_146;
		L_146 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_147 = __this->___Speed_14;
		__this->____TimeX_13 = ((float)il2cpp_codegen_add(L_145, ((float)il2cpp_codegen_multiply(L_146, L_147))));
		// if (_TimeX > 100) _TimeX = 0;
		float L_148 = __this->____TimeX_13;
		if ((!(((float)L_148) > ((float)(100.0f)))))
		{
			goto IL_05d0;
		}
	}
	{
		// if (_TimeX > 100) _TimeX = 0;
		__this->____TimeX_13 = (0.0f);
	}

IL_05d0:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_TimeX", _TimeX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_149 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_149);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_150;
		L_150 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_149, NULL);
		float L_151 = __this->____TimeX_13;
		NullCheck(L_150);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_150, _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC, L_151, NULL);
		return;
	}

IL_05ec:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_152 = __this->___CanvasImage_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_153;
		L_153 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_152, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_153)
		{
			goto IL_06a0;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_154 = __this->___CanvasImage_18;
		NullCheck(L_154);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_155;
		L_155 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_154);
		float L_156 = __this->____Alpha_10;
		NullCheck(L_155);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_155, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_156)), NULL);
		// CanvasImage.material.SetFloat("_Colors", _Colors);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_157 = __this->___CanvasImage_18;
		NullCheck(L_157);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_158;
		L_158 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_157);
		float L_159 = __this->____Colors_11;
		NullCheck(L_158);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_158, _stringLiteralA86DD8D5F9B6682AC6EFC8AE171696EE997C74DC, L_159, NULL);
		// CanvasImage.material.SetFloat("_Offset", _Offset);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_160 = __this->___CanvasImage_18;
		NullCheck(L_160);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_161;
		L_161 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_160);
		float L_162 = __this->____Offset_12;
		NullCheck(L_161);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_161, _stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF, L_162, NULL);
		// _TimeX += Time.deltaTime * Speed;
		float L_163 = __this->____TimeX_13;
		float L_164;
		L_164 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_165 = __this->___Speed_14;
		__this->____TimeX_13 = ((float)il2cpp_codegen_add(L_163, ((float)il2cpp_codegen_multiply(L_164, L_165))));
		// if (_TimeX > 100) _TimeX = 0;
		float L_166 = __this->____TimeX_13;
		if ((!(((float)L_166) > ((float)(100.0f)))))
		{
			goto IL_0685;
		}
	}
	{
		// if (_TimeX > 100) _TimeX = 0;
		__this->____TimeX_13 = (0.0f);
	}

IL_0685:
	{
		// CanvasImage.material.SetFloat("_TimeX", _TimeX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_167 = __this->___CanvasImage_18;
		NullCheck(L_167);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_168;
		L_168 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_167);
		float L_169 = __this->____TimeX_13;
		NullCheck(L_168);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_168, _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC, L_169, NULL);
	}

IL_06a0:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_PlasmaRainbow::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaRainbow_OnDestroy_mCC64C13677BD2D56A763274255CD13AAFB59A515 (_2dxFX_AL_PlasmaRainbow_t19F5DC4E8DE8DFD63B6A7B7FAE3F44FEEF04FA5F* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_PlasmaRainbow::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaRainbow_OnDisable_m7EF00A2F2F20A93665DA3303C1C63FC6CB950C8D (_2dxFX_AL_PlasmaRainbow_t19F5DC4E8DE8DFD63B6A7B7FAE3F44FEEF04FA5F* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_PlasmaRainbow::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaRainbow_OnEnable_mDF4CAC82AD01F3CB153D95675E562E0E63F1094B (_2dxFX_AL_PlasmaRainbow_t19F5DC4E8DE8DFD63B6A7B7FAE3F44FEEF04FA5F* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_PlasmaRainbow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaRainbow__ctor_m698E343A5BB53C5F6F2FC0F855902C0052E6EBC5 (_2dxFX_AL_PlasmaRainbow_t19F5DC4E8DE8DFD63B6A7B7FAE3F44FEEF04FA5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD7817C15E2144B4885AA5B9DDE7BCE462822AED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/PlasmaRainbow";
		__this->___shader_9 = _stringLiteralAD7817C15E2144B4885AA5B9DDE7BCE462822AED;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralAD7817C15E2144B4885AA5B9DDE7BCE462822AED);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.1f, 8f)] public float _Colors = 6f;
		__this->____Colors_11 = (6.0f);
		// [HideInInspector] [Range(0.1f, 4f)] public float _Offset = 2.5f;
		__this->____Offset_12 = (2.5f);
		// [HideInInspector] [Range(0, 3)] public float Speed = 1;
		__this->___Speed_14 = (1.0f);
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
