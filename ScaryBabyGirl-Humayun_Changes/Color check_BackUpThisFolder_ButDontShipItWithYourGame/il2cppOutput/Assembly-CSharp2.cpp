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
// _2dxFX_AL_GoldFX
struct _2dxFX_AL_GoldFX_tB0475D02A68F791B52E38E8B9C3B6B5EE390C6AF;
// _2dxFX_AL_GrassFX
struct _2dxFX_AL_GrassFX_t05DB4F2AED50F871CF395A4DC9672640CC30EAB9;
// _2dxFX_AL_GrassMultiFX
struct _2dxFX_AL_GrassMultiFX_t236650BB423D2D6194B933B53AE7F4DEFF4D40AC;
// _2dxFX_AL_GrayScale
struct _2dxFX_AL_GrayScale_t778C55BB4732AE554B8999AF2BA4099D6C092F79;
// _2dxFX_AL_HSV
struct _2dxFX_AL_HSV_tE3B0F857DC40BC4B629C3363F33370F69BC10AF7;
// _2dxFX_AL_Heat
struct _2dxFX_AL_Heat_t4CF82AF9E11388B6E4CF744F523B492AC4700F9B;
// _2dxFX_AL_Hologram
struct _2dxFX_AL_Hologram_tBE6D716DB286DC5C286069E4E1B5953F840B6BDA;
// _2dxFX_AL_Hologram2
struct _2dxFX_AL_Hologram2_tB3591BD5FDE717B9008C35A48987AB0199E10356;
// _2dxFX_AL_Hologram3
struct _2dxFX_AL_Hologram3_t0054DD9FC0AC4FF2661BE78D2CDFD17255103918;
// _2dxFX_AL_Ice
struct _2dxFX_AL_Ice_tD16EC95AABC4FFF77D42E915BCBEC42DD3E1E206;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0009BF01CFB4657E9EC895B1FBB478831AD13CA0;
IL2CPP_EXTERN_C String_t* _stringLiteral04F1972F0E01C05D3FC08F2ACCDD14CB46277CE0;
IL2CPP_EXTERN_C String_t* _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC;
IL2CPP_EXTERN_C String_t* _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3;
IL2CPP_EXTERN_C String_t* _stringLiteral14BE754BF8F5400050442C7A7201D90C19ABEEF1;
IL2CPP_EXTERN_C String_t* _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E;
IL2CPP_EXTERN_C String_t* _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266;
IL2CPP_EXTERN_C String_t* _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59;
IL2CPP_EXTERN_C String_t* _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral37D8ACB82A2A2CF09EE926D8399F8333BD25E3E3;
IL2CPP_EXTERN_C String_t* _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75;
IL2CPP_EXTERN_C String_t* _stringLiteral40AA80F4202A2135C98C7889D346EB31A61F89BD;
IL2CPP_EXTERN_C String_t* _stringLiteral44825FC56E3661325C41E662CC386567F0B3CEB0;
IL2CPP_EXTERN_C String_t* _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25;
IL2CPP_EXTERN_C String_t* _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227;
IL2CPP_EXTERN_C String_t* _stringLiteral58AAFF72F520DA2B9EE6AA369289D02EDB353A4F;
IL2CPP_EXTERN_C String_t* _stringLiteral65D0F9F9C392DA7C61D2CE02ABA80AEBDD1CD8B0;
IL2CPP_EXTERN_C String_t* _stringLiteral6CFC2B48D932FEF52252855F81D3970C490F2095;
IL2CPP_EXTERN_C String_t* _stringLiteral725B75E738B55ED8EF009980C3AC6820D195BB18;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1;
IL2CPP_EXTERN_C String_t* _stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9C9FE59107EA22CB5BF9873BA23E75026C8EE8AD;
IL2CPP_EXTERN_C String_t* _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F;
IL2CPP_EXTERN_C String_t* _stringLiteralACD021204FEB16401A7ABB8BCA7B353D452287D2;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E94BD1050374F96F444E696EECC1EFAC118519;
IL2CPP_EXTERN_C String_t* _stringLiteralC346BDD42C494C7E014FFD652D6F3B066A40B0C7;
IL2CPP_EXTERN_C String_t* _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527;
IL2CPP_EXTERN_C String_t* _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F;
IL2CPP_EXTERN_C String_t* _stringLiteralE02A09A0CEAC9ECC2E67F366C57AB8FF2FAB209B;
IL2CPP_EXTERN_C String_t* _stringLiteralE3E898692D16684576AC5E048F3A5F8F2F6198F1;
IL2CPP_EXTERN_C String_t* _stringLiteralFA4153E372A2DC6991D42BAC5BACBFD2980D8132;
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

// _2DxFX
struct _2DxFX_tCD46040614106090AED2D234E643795A67576439  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct _2DxFX_tCD46040614106090AED2D234E643795A67576439_StaticFields
{
	// System.Boolean _2DxFX::ActiveShadow
	bool ___ActiveShadow_4;
};

// _2dxFX_AL_GoldFX
struct _2dxFX_AL_GoldFX_tB0475D02A68F791B52E38E8B9C3B6B5EE390C6AF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_GoldFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_GoldFX::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_GoldFX::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_GoldFX::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_GoldFX::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_GoldFX::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_GoldFX::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_GoldFX::Gold
	float ___Gold_11;
	// System.Int32 _2dxFX_AL_GoldFX::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_AL_GoldFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_AL_GoldFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_AL_GoldFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_AL_GoldFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_AL_GoldFX::ActiveUpdate
	bool ___ActiveUpdate_17;
};

// _2dxFX_AL_GrassFX
struct _2dxFX_AL_GrassFX_t05DB4F2AED50F871CF395A4DC9672640CC30EAB9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_GrassFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_GrassFX::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_GrassFX::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_GrassFX::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_GrassFX::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_GrassFX::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_GrassFX::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_GrassFX::Heat
	float ___Heat_11;
	// System.Single _2dxFX_AL_GrassFX::Speed
	float ___Speed_12;
	// UnityEngine.AnimationCurve _2dxFX_AL_GrassFX::Wind
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___Wind_13;
	// System.Single _2dxFX_AL_GrassFX::WindTime1
	float ___WindTime1_14;
	// System.Int32 _2dxFX_AL_GrassFX::ShaderChange
	int32_t ___ShaderChange_15;
	// UnityEngine.Material _2dxFX_AL_GrassFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_16;
	// UnityEngine.Material _2dxFX_AL_GrassFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_17;
	// UnityEngine.UI.Image _2dxFX_AL_GrassFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_18;
	// UnityEngine.SpriteRenderer _2dxFX_AL_GrassFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_19;
	// System.Boolean _2dxFX_AL_GrassFX::ActiveUpdate
	bool ___ActiveUpdate_20;
};

// _2dxFX_AL_GrassMultiFX
struct _2dxFX_AL_GrassMultiFX_t236650BB423D2D6194B933B53AE7F4DEFF4D40AC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_GrassMultiFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_GrassMultiFX::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_GrassMultiFX::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_GrassMultiFX::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_GrassMultiFX::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_GrassMultiFX::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_GrassMultiFX::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_GrassMultiFX::Heat
	float ___Heat_11;
	// System.Single _2dxFX_AL_GrassMultiFX::Speed
	float ___Speed_12;
	// UnityEngine.AnimationCurve _2dxFX_AL_GrassMultiFX::Wind
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___Wind_13;
	// System.Single _2dxFX_AL_GrassMultiFX::WindTime1
	float ___WindTime1_14;
	// System.Single _2dxFX_AL_GrassMultiFX::WindTime2
	float ___WindTime2_15;
	// System.Single _2dxFX_AL_GrassMultiFX::WindTime3
	float ___WindTime3_16;
	// System.Single _2dxFX_AL_GrassMultiFX::WindTime4
	float ___WindTime4_17;
	// System.Int32 _2dxFX_AL_GrassMultiFX::ShaderChange
	int32_t ___ShaderChange_18;
	// UnityEngine.Material _2dxFX_AL_GrassMultiFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_19;
	// UnityEngine.Material _2dxFX_AL_GrassMultiFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_20;
	// UnityEngine.UI.Image _2dxFX_AL_GrassMultiFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_21;
	// UnityEngine.SpriteRenderer _2dxFX_AL_GrassMultiFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_22;
	// System.Boolean _2dxFX_AL_GrassMultiFX::ActiveUpdate
	bool ___ActiveUpdate_23;
};

// _2dxFX_AL_GrayScale
struct _2dxFX_AL_GrayScale_t778C55BB4732AE554B8999AF2BA4099D6C092F79  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_GrayScale::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_GrayScale::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_GrayScale::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_GrayScale::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_GrayScale::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_GrayScale::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_GrayScale::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_GrayScale::_EffectAmount
	float ____EffectAmount_11;
	// System.Int32 _2dxFX_AL_GrayScale::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_AL_GrayScale::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_AL_GrayScale::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_AL_GrayScale::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_AL_GrayScale::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_AL_GrayScale::ActiveUpdate
	bool ___ActiveUpdate_17;
};

// _2dxFX_AL_HSV
struct _2dxFX_AL_HSV_tE3B0F857DC40BC4B629C3363F33370F69BC10AF7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_HSV::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_HSV::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_HSV::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_HSV::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_HSV::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_HSV::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_HSV::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_HSV::_HueShift
	float ____HueShift_11;
	// System.Single _2dxFX_AL_HSV::_Saturation
	float ____Saturation_12;
	// System.Single _2dxFX_AL_HSV::_ValueBrightness
	float ____ValueBrightness_13;
	// System.Int32 _2dxFX_AL_HSV::ShaderChange
	int32_t ___ShaderChange_14;
	// UnityEngine.Material _2dxFX_AL_HSV::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_15;
	// UnityEngine.Material _2dxFX_AL_HSV::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_16;
	// UnityEngine.UI.Image _2dxFX_AL_HSV::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_17;
	// UnityEngine.SpriteRenderer _2dxFX_AL_HSV::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_18;
	// System.Boolean _2dxFX_AL_HSV::ActiveUpdate
	bool ___ActiveUpdate_19;
};

// _2dxFX_AL_Heat
struct _2dxFX_AL_Heat_t4CF82AF9E11388B6E4CF744F523B492AC4700F9B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Heat::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Heat::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Heat::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Heat::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Heat::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Heat::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Heat::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Heat::Heat
	float ___Heat_11;
	// System.Single _2dxFX_AL_Heat::Speed
	float ___Speed_12;
	// System.Int32 _2dxFX_AL_Heat::ShaderChange
	int32_t ___ShaderChange_13;
	// UnityEngine.Material _2dxFX_AL_Heat::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_14;
	// UnityEngine.Material _2dxFX_AL_Heat::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_15;
	// UnityEngine.UI.Image _2dxFX_AL_Heat::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_16;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Heat::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_17;
	// System.Boolean _2dxFX_AL_Heat::ActiveUpdate
	bool ___ActiveUpdate_18;
};

// _2dxFX_AL_Hologram
struct _2dxFX_AL_Hologram_tBE6D716DB286DC5C286069E4E1B5953F840B6BDA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Hologram::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Hologram::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Hologram::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Hologram::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Hologram::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Hologram::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Hologram::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Hologram::Distortion
	float ___Distortion_11;
	// System.Single _2dxFX_AL_Hologram::_TimeX
	float ____TimeX_12;
	// System.Single _2dxFX_AL_Hologram::Speed
	float ___Speed_13;
	// System.Int32 _2dxFX_AL_Hologram::ShaderChange
	int32_t ___ShaderChange_14;
	// UnityEngine.Material _2dxFX_AL_Hologram::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_15;
	// UnityEngine.Material _2dxFX_AL_Hologram::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_16;
	// UnityEngine.UI.Image _2dxFX_AL_Hologram::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_17;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Hologram::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_18;
	// System.Boolean _2dxFX_AL_Hologram::ActiveUpdate
	bool ___ActiveUpdate_19;
};

// _2dxFX_AL_Hologram2
struct _2dxFX_AL_Hologram2_tB3591BD5FDE717B9008C35A48987AB0199E10356  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Hologram2::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Hologram2::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Hologram2::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Hologram2::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Hologram2::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Hologram2::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Hologram2::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Hologram2::Distortion
	float ___Distortion_11;
	// System.Single _2dxFX_AL_Hologram2::_TimeX
	float ____TimeX_12;
	// System.Single _2dxFX_AL_Hologram2::Speed
	float ___Speed_13;
	// System.Int32 _2dxFX_AL_Hologram2::ShaderChange
	int32_t ___ShaderChange_14;
	// UnityEngine.Material _2dxFX_AL_Hologram2::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_15;
	// UnityEngine.Material _2dxFX_AL_Hologram2::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_16;
	// UnityEngine.UI.Image _2dxFX_AL_Hologram2::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_17;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Hologram2::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_18;
	// System.Boolean _2dxFX_AL_Hologram2::ActiveUpdate
	bool ___ActiveUpdate_19;
};

// _2dxFX_AL_Hologram3
struct _2dxFX_AL_Hologram3_t0054DD9FC0AC4FF2661BE78D2CDFD17255103918  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Hologram3::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Hologram3::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Hologram3::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Hologram3::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Hologram3::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Hologram3::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Hologram3::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Hologram3::Distortion
	float ___Distortion_11;
	// System.Single _2dxFX_AL_Hologram3::_TimeX
	float ____TimeX_12;
	// System.Single _2dxFX_AL_Hologram3::Speed
	float ___Speed_13;
	// UnityEngine.Color _2dxFX_AL_Hologram3::_ColorX
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____ColorX_14;
	// System.Int32 _2dxFX_AL_Hologram3::ShaderChange
	int32_t ___ShaderChange_15;
	// UnityEngine.Material _2dxFX_AL_Hologram3::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_16;
	// UnityEngine.Material _2dxFX_AL_Hologram3::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_17;
	// UnityEngine.UI.Image _2dxFX_AL_Hologram3::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_18;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Hologram3::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_19;
	// System.Boolean _2dxFX_AL_Hologram3::ActiveUpdate
	bool ___ActiveUpdate_20;
};

// _2dxFX_AL_Ice
struct _2dxFX_AL_Ice_tD16EC95AABC4FFF77D42E915BCBEC42DD3E1E206  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Ice::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Ice::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Ice::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Ice::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Ice::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Ice::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Ice::_Alpha
	float ____Alpha_10;
	// UnityEngine.Texture2D _2dxFX_AL_Ice::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_11;
	// System.Single _2dxFX_AL_Ice::_Value1
	float ____Value1_12;
	// System.Single _2dxFX_AL_Ice::_Value2
	float ____Value2_13;
	// System.Single _2dxFX_AL_Ice::_Value3
	float ____Value3_14;
	// System.Single _2dxFX_AL_Ice::_Value4
	float ____Value4_15;
	// System.Boolean _2dxFX_AL_Ice::_AutoScrollX
	bool ____AutoScrollX_16;
	// System.Single _2dxFX_AL_Ice::_AutoScrollSpeedX
	float ____AutoScrollSpeedX_17;
	// System.Boolean _2dxFX_AL_Ice::_AutoScrollY
	bool ____AutoScrollY_18;
	// System.Single _2dxFX_AL_Ice::_AutoScrollSpeedY
	float ____AutoScrollSpeedY_19;
	// System.Single _2dxFX_AL_Ice::_AutoScrollCountX
	float ____AutoScrollCountX_20;
	// System.Single _2dxFX_AL_Ice::_AutoScrollCountY
	float ____AutoScrollCountY_21;
	// System.Int32 _2dxFX_AL_Ice::ShaderChange
	int32_t ___ShaderChange_22;
	// UnityEngine.Material _2dxFX_AL_Ice::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_23;
	// UnityEngine.Material _2dxFX_AL_Ice::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_24;
	// UnityEngine.UI.Image _2dxFX_AL_Ice::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_25;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Ice::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_26;
	// System.Boolean _2dxFX_AL_Ice::ActiveUpdate
	bool ___ActiveUpdate_27;
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
// System.Void _2dxFX_AL_GoldFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldFX_XUpdate_mB86E6F814C0FA8D0B072B20C6F12FD8A47ABFBFD (_2dxFX_AL_GoldFX_tB0475D02A68F791B52E38E8B9C3B6B5EE390C6AF* __this, const RuntimeMethod* method) ;
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
// System.Void _2dxFX_AL_GrassFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassFX_XUpdate_m628A7F116C2B061AA2E179ECC24B2D080ABC6C49 (_2dxFX_AL_GrassFX_t05DB4F2AED50F871CF395A4DC9672640CC30EAB9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_GrassMultiFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassMultiFX_XUpdate_m7B217490CE5306E18420AE9E3711660DD3369CFA (_2dxFX_AL_GrassMultiFX_t236650BB423D2D6194B933B53AE7F4DEFF4D40AC* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_GrayScale::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrayScale_XUpdate_mDE5899D3EB23FDC519B1786BE2F46F38D23D787B (_2dxFX_AL_GrayScale_t778C55BB4732AE554B8999AF2BA4099D6C092F79* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Heat::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Heat_XUpdate_mF3983C77D72F9B649245564D959306D5120BC3EC (_2dxFX_AL_Heat_t4CF82AF9E11388B6E4CF744F523B492AC4700F9B* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Hologram::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram_XUpdate_m5580B8DEF0E3F9D39B2E1266DE86E640EC168D66 (_2dxFX_AL_Hologram_tBE6D716DB286DC5C286069E4E1B5953F840B6BDA* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Hologram2::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram2_XUpdate_m5C77F7059B704E7E124D7CB9CA0498D7F16A5153 (_2dxFX_AL_Hologram2_tB3591BD5FDE717B9008C35A48987AB0199E10356* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Hologram3::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram3_XUpdate_m762124E4AEE4380B0E51BB84434507BD77CAD6FD (_2dxFX_AL_Hologram3_t0054DD9FC0AC4FF2661BE78D2CDFD17255103918* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_HSV::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_HSV_XUpdate_m18D4546B20AA0747AD519E66650019E8B70720E4 (_2dxFX_AL_HSV_tE3B0F857DC40BC4B629C3363F33370F69BC10AF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Ice::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ice_XUpdate_m0ECC2D759F020D451C55CE692761B06CAE644979 (_2dxFX_AL_Ice_tD16EC95AABC4FFF77D42E915BCBEC42DD3E1E206* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void _2dxFX_AL_GoldFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldFX_Awake_mE114A278C3152BF0938CBC178A07C3296540E4F5 (_2dxFX_AL_GoldFX_tB0475D02A68F791B52E38E8B9C3B6B5EE390C6AF* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_GoldFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldFX_Start_mD640E6174A56E61D57369DFAD2CE48BD6F2B42A9 (_2dxFX_AL_GoldFX_tB0475D02A68F791B52E38E8B9C3B6B5EE390C6AF* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// XUpdate();
		_2dxFX_AL_GoldFX_XUpdate_mB86E6F814C0FA8D0B072B20C6F12FD8A47ABFBFD(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GoldFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldFX_CallUpdate_m0AB376EE182B8053958EDFFCBE4ED65A25820981 (_2dxFX_AL_GoldFX_tB0475D02A68F791B52E38E8B9C3B6B5EE390C6AF* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_GoldFX_XUpdate_mB86E6F814C0FA8D0B072B20C6F12FD8A47ABFBFD(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GoldFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldFX_Update_m8E1A291545D707448F501A5F2229E61AB8A8A6F9 (_2dxFX_AL_GoldFX_tB0475D02A68F791B52E38E8B9C3B6B5EE390C6AF* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_GoldFX_XUpdate_mB86E6F814C0FA8D0B072B20C6F12FD8A47ABFBFD(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GoldFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldFX_XUpdate_mB86E6F814C0FA8D0B072B20C6F12FD8A47ABFBFD (_2dxFX_AL_GoldFX_tB0475D02A68F791B52E38E8B9C3B6B5EE390C6AF* __this, const RuntimeMethod* method) 
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
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Gold);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Gold_11;
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
		// CanvasImage.material.SetFloat("_Distortion", Gold);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = __this->___CanvasImage_15;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_147);
		float L_149 = __this->___Gold_11;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_149, NULL);
	}

IL_05c8:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GoldFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldFX_OnDestroy_m5B8DE6316C370677346E525F3ABA0EF13A69180A (_2dxFX_AL_GoldFX_tB0475D02A68F791B52E38E8B9C3B6B5EE390C6AF* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_GoldFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldFX_OnDisable_m95FCE99F3BA39353940D265075989810A2B68AB5 (_2dxFX_AL_GoldFX_tB0475D02A68F791B52E38E8B9C3B6B5EE390C6AF* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_GoldFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldFX_OnEnable_mE6D16ECF99C2CD7AD09CC215CB4F396EACF427A4 (_2dxFX_AL_GoldFX_tB0475D02A68F791B52E38E8B9C3B6B5EE390C6AF* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_GoldFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GoldFX__ctor_mF8ADEAF19DBEB51233DA66EB9EBE888644AF4B71 (_2dxFX_AL_GoldFX_tB0475D02A68F791B52E38E8B9C3B6B5EE390C6AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65D0F9F9C392DA7C61D2CE02ABA80AEBDD1CD8B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/GoldFX";
		__this->___shader_9 = _stringLiteral65D0F9F9C392DA7C61D2CE02ABA80AEBDD1CD8B0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral65D0F9F9C392DA7C61D2CE02ABA80AEBDD1CD8B0);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.001f, 4f)] public float Gold = 1.0f;
		__this->___Gold_11 = (1.0f);
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
// System.Void _2dxFX_AL_GrassFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassFX_Awake_m24E1DAEA66E3E4801682D093F766BD0CF52E47A0 (_2dxFX_AL_GrassFX_t05DB4F2AED50F871CF395A4DC9672640CC30EAB9* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_GrassFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassFX_Start_mB5BDD5B9C00F83E2BBFF0757C9BBC97B3A0FD375 (_2dxFX_AL_GrassFX_t05DB4F2AED50F871CF395A4DC9672640CC30EAB9* __this, const RuntimeMethod* method) 
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
		__this->___Wind_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Wind_13), (void*)L_0);
		// Wind.AddKey(0, 0);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = __this->___Wind_13;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_1, (0.0f), (0.0f), NULL);
		// Wind.keys[0].inTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = __this->___Wind_13;
		NullCheck(L_3);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_4;
		L_4 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_3, NULL);
		NullCheck(L_4);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), (0.0f), NULL);
		// Wind.keys[0].outTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = __this->___Wind_13;
		NullCheck(L_5);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_6;
		L_6 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_5, NULL);
		NullCheck(L_6);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), (0.0f), NULL);
		// Wind.AddKey(0.1004994f, 0.06637689f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = __this->___Wind_13;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_7, (0.100499399f), (0.0663768873f), NULL);
		// Wind.keys[1].inTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9 = __this->___Wind_13;
		NullCheck(L_9);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_10;
		L_10 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_9, NULL);
		NullCheck(L_10);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), (0.0f), NULL);
		// Wind.keys[1].outTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = __this->___Wind_13;
		NullCheck(L_11);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_12;
		L_12 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_11, NULL);
		NullCheck(L_12);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), (0.0f), NULL);
		// Wind.AddKey(0.2430963f, -0.06465532f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_13 = __this->___Wind_13;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_13, (0.243096307f), (-0.0646553189f), NULL);
		// Wind.keys[2].inTangent = -0.07599592f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_15 = __this->___Wind_13;
		NullCheck(L_15);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_16;
		L_16 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_15, NULL);
		NullCheck(L_16);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))), (-0.0759959221f), NULL);
		// Wind.keys[2].outTangent = -0.07599592f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_17 = __this->___Wind_13;
		NullCheck(L_17);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_18;
		L_18 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_17, NULL);
		NullCheck(L_18);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))), (-0.0759959221f), NULL);
		// Wind.AddKey(0.3425266f, 0.02290122f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_19 = __this->___Wind_13;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_19, (0.342526615f), (0.0229012202f), NULL);
		// Wind.keys[3].inTangent = 0.03580004f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_21 = __this->___Wind_13;
		NullCheck(L_21);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_22;
		L_22 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_21, NULL);
		NullCheck(L_22);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))), (0.0358000398f), NULL);
		// Wind.keys[3].outTangent = 0.03580004f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_23 = __this->___Wind_13;
		NullCheck(L_23);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_24;
		L_24 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_23, NULL);
		NullCheck(L_24);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))), (0.0358000398f), NULL);
		// Wind.AddKey(0.4246872f, -0.02232522f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_25 = __this->___Wind_13;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_25, (0.424687207f), (-0.0223252196f), NULL);
		// Wind.keys[4].inTangent = -0.006025657f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_27 = __this->___Wind_13;
		NullCheck(L_27);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_28;
		L_28 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_27, NULL);
		NullCheck(L_28);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(4))), (-0.00602565706f), NULL);
		// Wind.keys[4].outTangent = -0.006025657f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_29 = __this->___Wind_13;
		NullCheck(L_29);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_30;
		L_30 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_29, NULL);
		NullCheck(L_30);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(4))), (-0.00602565706f), NULL);
		// Wind.AddKey(0.5104106f, 0.1647801f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_31 = __this->___Wind_13;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_31, (0.510410607f), (0.164780095f), NULL);
		// Wind.keys[5].inTangent = 0.02981164f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_33 = __this->___Wind_13;
		NullCheck(L_33);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_34;
		L_34 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_33, NULL);
		NullCheck(L_34);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(5))), (0.0298116393f), NULL);
		// Wind.keys[5].outTangent = 0.02981164f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_35 = __this->___Wind_13;
		NullCheck(L_35);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_36;
		L_36 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_35, NULL);
		NullCheck(L_36);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(5))), (0.0298116393f), NULL);
		// Wind.AddKey(0.6082056f, -0.04679203f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37 = __this->___Wind_13;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_37, (0.608205616f), (-0.0467920303f), NULL);
		// Wind.keys[6].inTangent = -0.3176928f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39 = __this->___Wind_13;
		NullCheck(L_39);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_40;
		L_40 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_39, NULL);
		NullCheck(L_40);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(6))), (-0.317692786f), NULL);
		// Wind.keys[6].outTangent = -0.3176928f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41 = __this->___Wind_13;
		NullCheck(L_41);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_42;
		L_42 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_41, NULL);
		NullCheck(L_42);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(6))), (-0.317692786f), NULL);
		// Wind.AddKey(0.7794942f, 0.2234365f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_43 = __this->___Wind_13;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_43, (0.779494226f), (0.223436505f), NULL);
		// Wind.keys[7].inTangent = 0.2063811f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_45 = __this->___Wind_13;
		NullCheck(L_45);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_46;
		L_46 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_45, NULL);
		NullCheck(L_46);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(7))), (0.206381097f), NULL);
		// Wind.keys[7].outTangent = 0.2063811f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_47 = __this->___Wind_13;
		NullCheck(L_47);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_48;
		L_48 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_47, NULL);
		NullCheck(L_48);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(7))), (0.206381097f), NULL);
		// Wind.AddKey(0.8546611f, -0.003165513f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_49 = __this->___Wind_13;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_49, (0.854661107f), (-0.00316551304f), NULL);
		// Wind.keys[8].inTangent = 0.02264977f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51 = __this->___Wind_13;
		NullCheck(L_51);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_52;
		L_52 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_51, NULL);
		NullCheck(L_52);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(8))), (0.0226497706f), NULL);
		// Wind.keys[8].outTangent = 0.02264977f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53 = __this->___Wind_13;
		NullCheck(L_53);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_54;
		L_54 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_53, NULL);
		NullCheck(L_54);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(8))), (0.0226497706f), NULL);
		// Wind.AddKey(1.022495f, -0.07358052f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_55 = __this->___Wind_13;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_55, (1.02249503f), (-0.0735805184f), NULL);
		// Wind.keys[9].inTangent = 2.450916f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_57 = __this->___Wind_13;
		NullCheck(L_57);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_58;
		L_58 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_57, NULL);
		NullCheck(L_58);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)9)))), (2.45091605f), NULL);
		// Wind.keys[9].outTangent = 2.450916f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_59 = __this->___Wind_13;
		NullCheck(L_59);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_60;
		L_60 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_59, NULL);
		NullCheck(L_60);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)9)))), (2.45091605f), NULL);
		// Wind.AddKey(1.250894f, -0.1813075f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_61 = __this->___Wind_13;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_61, (1.25089395f), (-0.181307495f), NULL);
		// Wind.keys[10].inTangent = 0.02214685f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_63 = __this->___Wind_13;
		NullCheck(L_63);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_64;
		L_64 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_63, NULL);
		NullCheck(L_64);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)10)))), (0.0221468508f), NULL);
		// Wind.keys[10].outTangent = 0.02214685f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_65 = __this->___Wind_13;
		NullCheck(L_65);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_66;
		L_66 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_65, NULL);
		NullCheck(L_66);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)10)))), (0.0221468508f), NULL);
		// Wind.AddKey(1.369877f, -0.06861454f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_67 = __this->___Wind_13;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_67, (1.36987698f), (-0.0686145425f), NULL);
		// Wind.keys[11].inTangent = -1.860534f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_69 = __this->___Wind_13;
		NullCheck(L_69);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_70;
		L_70 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_69, NULL);
		NullCheck(L_70);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)11)))), (-1.86053395f), NULL);
		// Wind.keys[11].outTangent = -1.860534f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_71 = __this->___Wind_13;
		NullCheck(L_71);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_72;
		L_72 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_71, NULL);
		NullCheck(L_72);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)11)))), (-1.86053395f), NULL);
		// Wind.AddKey(1.484951f, -0.1543293f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_73 = __this->___Wind_13;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_73, (1.48495102f), (-0.1543293f), NULL);
		// Wind.keys[12].inTangent = 0.0602752f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_75 = __this->___Wind_13;
		NullCheck(L_75);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_76;
		L_76 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_75, NULL);
		NullCheck(L_76);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)12)))), (0.0602752008f), NULL);
		// Wind.keys[12].outTangent = 0.0602752f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_77 = __this->___Wind_13;
		NullCheck(L_77);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_78;
		L_78 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_77, NULL);
		NullCheck(L_78);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)12)))), (0.0602752008f), NULL);
		// Wind.AddKey(1.583562f, 0.100938f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_79 = __this->___Wind_13;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_79, (1.58356202f), (0.100938f), NULL);
		// Wind.keys[13].inTangent = 0.08665025f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_81 = __this->___Wind_13;
		NullCheck(L_81);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_82;
		L_82 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_81, NULL);
		NullCheck(L_82);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)13)))), (0.0866502523f), NULL);
		// Wind.keys[13].outTangent = 0.08665025f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_83 = __this->___Wind_13;
		NullCheck(L_83);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_84;
		L_84 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_83, NULL);
		NullCheck(L_84);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)13)))), (0.0866502523f), NULL);
		// Wind.AddKey(1.687307f, -0.100769f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_85 = __this->___Wind_13;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_85, (1.687307f), (-0.100768998f), NULL);
		// Wind.keys[14].inTangent = 0.01110137f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_87 = __this->___Wind_13;
		NullCheck(L_87);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_88;
		L_88 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_87, NULL);
		NullCheck(L_88);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)14)))), (0.0111013697f), NULL);
		// Wind.keys[14].outTangent = 0.01110137f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_89 = __this->___Wind_13;
		NullCheck(L_89);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_90;
		L_90 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_89, NULL);
		NullCheck(L_90);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)14)))), (0.0111013697f), NULL);
		// Wind.AddKey(1.797593f, 0.04921142f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_91 = __this->___Wind_13;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_91, (1.797593f), (0.0492114201f), NULL);
		// Wind.keys[15].inTangent = 3.407104f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_93 = __this->___Wind_13;
		NullCheck(L_93);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_94;
		L_94 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_93, NULL);
		NullCheck(L_94);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)15)))), (3.40710402f), NULL);
		// Wind.keys[15].outTangent = 3.407104f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_95 = __this->___Wind_13;
		NullCheck(L_95);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_96;
		L_96 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_95, NULL);
		NullCheck(L_96);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_96)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)15)))), (3.40710402f), NULL);
		// Wind.AddKey(1.927248f, -0.1877219f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_97 = __this->___Wind_13;
		NullCheck(L_97);
		int32_t L_98;
		L_98 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_97, (1.927248f), (-0.187721893f), NULL);
		// Wind.keys[16].inTangent = -0.001117587f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_99 = __this->___Wind_13;
		NullCheck(L_99);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_100;
		L_100 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_99, NULL);
		NullCheck(L_100);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)16)))), (-0.00111758697f), NULL);
		// Wind.keys[16].outTangent = -0.001117587f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_101 = __this->___Wind_13;
		NullCheck(L_101);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_102;
		L_102 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_101, NULL);
		NullCheck(L_102);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)16)))), (-0.00111758697f), NULL);
		// Wind.AddKey(2.067694f, 0.2742145f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_103 = __this->___Wind_13;
		NullCheck(L_103);
		int32_t L_104;
		L_104 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_103, (2.06769395f), (0.274214506f), NULL);
		// Wind.keys[17].inTangent = 4.736587f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_105 = __this->___Wind_13;
		NullCheck(L_105);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_106;
		L_106 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_105, NULL);
		NullCheck(L_106);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_106)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)17)))), (4.73658705f), NULL);
		// Wind.keys[17].outTangent = 4.736587f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_107 = __this->___Wind_13;
		NullCheck(L_107);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_108;
		L_108 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_107, NULL);
		NullCheck(L_108);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)17)))), (4.73658705f), NULL);
		// Wind.AddKey(2.184602f, -0.06127208f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_109 = __this->___Wind_13;
		NullCheck(L_109);
		int32_t L_110;
		L_110 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_109, (2.18460202f), (-0.061272081f), NULL);
		// Wind.keys[18].inTangent = -0.1308322f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_111 = __this->___Wind_13;
		NullCheck(L_111);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_112;
		L_112 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_111, NULL);
		NullCheck(L_112);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_112)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)18)))), (-0.130832195f), NULL);
		// Wind.keys[18].outTangent = -0.1308322f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_113 = __this->___Wind_13;
		NullCheck(L_113);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_114;
		L_114 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_113, NULL);
		NullCheck(L_114);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_114)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)18)))), (-0.130832195f), NULL);
		// Wind.AddKey(2.305948f, 0.1891117f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_115 = __this->___Wind_13;
		NullCheck(L_115);
		int32_t L_116;
		L_116 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_115, (2.30594802f), (0.189111695f), NULL);
		// Wind.keys[19].inTangent = 0.04030764f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_117 = __this->___Wind_13;
		NullCheck(L_117);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_118;
		L_118 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_117, NULL);
		NullCheck(L_118);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_118)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)19)))), (0.040307641f), NULL);
		// Wind.keys[19].outTangent = 0.04030764f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_119 = __this->___Wind_13;
		NullCheck(L_119);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_120;
		L_120 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_119, NULL);
		NullCheck(L_120);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_120)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)19)))), (0.040307641f), NULL);
		// Wind.AddKey(2.428946f, -0.1695723f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_121 = __this->___Wind_13;
		NullCheck(L_121);
		int32_t L_122;
		L_122 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_121, (2.42894602f), (-0.169572294f), NULL);
		// Wind.keys[20].inTangent = -0.2463162f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_123 = __this->___Wind_13;
		NullCheck(L_123);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_124;
		L_124 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_123, NULL);
		NullCheck(L_124);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_124)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)20)))), (-0.246316195f), NULL);
		// Wind.keys[20].outTangent = -0.2463162f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_125 = __this->___Wind_13;
		NullCheck(L_125);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_126;
		L_126 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_125, NULL);
		NullCheck(L_126);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_126)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)20)))), (-0.246316195f), NULL);
		// Wind.AddKey(2.55922f, 0.0359862f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_127 = __this->___Wind_13;
		NullCheck(L_127);
		int32_t L_128;
		L_128 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_127, (2.55922008f), (0.0359862f), NULL);
		// Wind.keys[21].inTangent = 0.3967434f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_129 = __this->___Wind_13;
		NullCheck(L_129);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_130;
		L_130 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_129, NULL);
		NullCheck(L_130);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_130)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)21)))), (0.396743387f), NULL);
		// Wind.keys[21].outTangent = 0.3967434f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_131 = __this->___Wind_13;
		NullCheck(L_131);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_132;
		L_132 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_131, NULL);
		NullCheck(L_132);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_132)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)21)))), (0.396743387f), NULL);
		// Wind.AddKey(2.785119f, -0.08398628f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_133 = __this->___Wind_13;
		NullCheck(L_133);
		int32_t L_134;
		L_134 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_133, (2.78511906f), (-0.0839862823f), NULL);
		// Wind.keys[22].inTangent = -0.2388284f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_135 = __this->___Wind_13;
		NullCheck(L_135);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_136;
		L_136 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_135, NULL);
		NullCheck(L_136);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_136)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)22)))), (-0.238828406f), NULL);
		// Wind.keys[22].outTangent = -0.2388284f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_137 = __this->___Wind_13;
		NullCheck(L_137);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_138;
		L_138 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_137, NULL);
		NullCheck(L_138);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_138)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)22)))), (-0.238828406f), NULL);
		// Wind.AddKey(3f, 0f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_139 = __this->___Wind_13;
		NullCheck(L_139);
		int32_t L_140;
		L_140 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_139, (3.0f), (0.0f), NULL);
		// Wind.keys[23].inTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_141 = __this->___Wind_13;
		NullCheck(L_141);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_142;
		L_142 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_141, NULL);
		NullCheck(L_142);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_142)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)23)))), (0.0f), NULL);
		// Wind.keys[23].outTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_143 = __this->___Wind_13;
		NullCheck(L_143);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_144;
		L_144 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_143, NULL);
		NullCheck(L_144);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_144)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)23)))), (0.0f), NULL);
		// Wind.postWrapMode = WrapMode.Loop;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_145 = __this->___Wind_13;
		NullCheck(L_145);
		AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9(L_145, 2, NULL);
		// Wind.preWrapMode = WrapMode.Loop;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_146 = __this->___Wind_13;
		NullCheck(L_146);
		AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D(L_146, 2, NULL);
		// XUpdate();
		_2dxFX_AL_GrassFX_XUpdate_m628A7F116C2B061AA2E179ECC24B2D080ABC6C49(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GrassFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassFX_CallUpdate_mAA8DC51E2BFDC46803861DD7341C77C50553DD7B (_2dxFX_AL_GrassFX_t05DB4F2AED50F871CF395A4DC9672640CC30EAB9* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_GrassFX_XUpdate_m628A7F116C2B061AA2E179ECC24B2D080ABC6C49(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GrassFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassFX_Update_m78AEA85FB2BF6B0F62381AAF84EB2BD47D8C713D (_2dxFX_AL_GrassFX_t05DB4F2AED50F871CF395A4DC9672640CC30EAB9* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_GrassFX_XUpdate_m628A7F116C2B061AA2E179ECC24B2D080ABC6C49(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GrassFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassFX_XUpdate_m628A7F116C2B061AA2E179ECC24B2D080ABC6C49 (_2dxFX_AL_GrassFX_t05DB4F2AED50F871CF395A4DC9672640CC30EAB9* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
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
			goto IL_069b;
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
			goto IL_05e6;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_19;
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
		goto IL_02bc;
	}

IL_0240:
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
		goto IL_02bc;
	}

IL_0279:
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

IL_0562:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Heat);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Heat_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_141, NULL);
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_142 = __this->___Wind_13;
		if (!L_142)
		{
			goto IL_05ab;
		}
	}
	{
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_143 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_143);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_144;
		L_144 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_143, NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_145 = __this->___Wind_13;
		float L_146 = __this->___WindTime1_14;
		NullCheck(L_145);
		float L_147;
		L_147 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_145, L_146, NULL);
		NullCheck(L_144);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_144, _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716, L_147, NULL);
	}

IL_05ab:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Speed", Speed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_148 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_148);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_149;
		L_149 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_148, NULL);
		float L_150 = __this->___Speed_12;
		NullCheck(L_149);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_149, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_150, NULL);
		// WindTime1 += (Time.deltaTime / 8) * Speed;
		float L_151 = __this->___WindTime1_14;
		float L_152;
		L_152 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_153 = __this->___Speed_12;
		__this->___WindTime1_14 = ((float)il2cpp_codegen_add(L_151, ((float)il2cpp_codegen_multiply(((float)(L_152/(8.0f))), L_153))));
		return;
	}

IL_05e6:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_154 = __this->___CanvasImage_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_155;
		L_155 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_154, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_155)
		{
			goto IL_069b;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_156 = __this->___CanvasImage_18;
		NullCheck(L_156);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_157;
		L_157 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_156);
		float L_158 = __this->____Alpha_10;
		NullCheck(L_157);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_157, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_158)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Heat);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_159 = __this->___CanvasImage_18;
		NullCheck(L_159);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160;
		L_160 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_159);
		float L_161 = __this->___Heat_11;
		NullCheck(L_160);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_160, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_161, NULL);
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_162 = __this->___Wind_13;
		if (!L_162)
		{
			goto IL_0661;
		}
	}
	{
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_163 = __this->___CanvasImage_18;
		NullCheck(L_163);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_164;
		L_164 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_163);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_165 = __this->___Wind_13;
		float L_166 = __this->___WindTime1_14;
		NullCheck(L_165);
		float L_167;
		L_167 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_165, L_166, NULL);
		NullCheck(L_164);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_164, _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716, L_167, NULL);
	}

IL_0661:
	{
		// CanvasImage.material.SetFloat("_Speed", Speed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_168 = __this->___CanvasImage_18;
		NullCheck(L_168);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_169;
		L_169 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_168);
		float L_170 = __this->___Speed_12;
		NullCheck(L_169);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_169, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_170, NULL);
		// WindTime1 += (Time.deltaTime / 8) * Speed;
		float L_171 = __this->___WindTime1_14;
		float L_172;
		L_172 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_173 = __this->___Speed_12;
		__this->___WindTime1_14 = ((float)il2cpp_codegen_add(L_171, ((float)il2cpp_codegen_multiply(((float)(L_172/(8.0f))), L_173))));
	}

IL_069b:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GrassFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassFX_OnDestroy_m34392866984696B1F4D015D7186D58EA46C4D068 (_2dxFX_AL_GrassFX_t05DB4F2AED50F871CF395A4DC9672640CC30EAB9* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_GrassFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassFX_OnDisable_m36B4B19AF949CFE4FB9FE61BEB8FD19BBDE71320 (_2dxFX_AL_GrassFX_t05DB4F2AED50F871CF395A4DC9672640CC30EAB9* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_GrassFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassFX_OnEnable_mDB5C70FD33BBD0F61D5CBF622E7F625F0BC443D2 (_2dxFX_AL_GrassFX_t05DB4F2AED50F871CF395A4DC9672640CC30EAB9* __this, const RuntimeMethod* method) 
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
		__this->___WindTime1_14 = (0.0f);
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
// System.Void _2dxFX_AL_GrassFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassFX__ctor_m24C24A6E2115C24E40C73B03CE898CD063AE775A (_2dxFX_AL_GrassFX_t05DB4F2AED50F871CF395A4DC9672640CC30EAB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04F1972F0E01C05D3FC08F2ACCDD14CB46277CE0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/GrassFX";
		__this->___shader_9 = _stringLiteral04F1972F0E01C05D3FC08F2ACCDD14CB46277CE0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral04F1972F0E01C05D3FC08F2ACCDD14CB46277CE0);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Heat = 1.0f;
		__this->___Heat_11 = (1.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Speed = 1.0f;
		__this->___Speed_12 = (1.0f);
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
// System.Void _2dxFX_AL_GrassMultiFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassMultiFX_Awake_m335FB5019423EEAC1588EC37132E58207F9068CA (_2dxFX_AL_GrassMultiFX_t236650BB423D2D6194B933B53AE7F4DEFF4D40AC* __this, const RuntimeMethod* method) 
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
		__this->___CanvasImage_21 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_21), (void*)L_4);
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
// System.Void _2dxFX_AL_GrassMultiFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassMultiFX_Start_mE6E9A2B87D7863AF679D53E2E44D1ADDE6871663 (_2dxFX_AL_GrassMultiFX_t236650BB423D2D6194B933B53AE7F4DEFF4D40AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ShaderChange = 0;
		__this->___ShaderChange_18 = 0;
		// Wind = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_0, NULL);
		__this->___Wind_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Wind_13), (void*)L_0);
		// Wind.AddKey(0, 0);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = __this->___Wind_13;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_1, (0.0f), (0.0f), NULL);
		// Wind.keys[0].inTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = __this->___Wind_13;
		NullCheck(L_3);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_4;
		L_4 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_3, NULL);
		NullCheck(L_4);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), (0.0f), NULL);
		// Wind.keys[0].outTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = __this->___Wind_13;
		NullCheck(L_5);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_6;
		L_6 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_5, NULL);
		NullCheck(L_6);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), (0.0f), NULL);
		// Wind.AddKey(0.1004994f, 0.06637689f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = __this->___Wind_13;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_7, (0.100499399f), (0.0663768873f), NULL);
		// Wind.keys[1].inTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9 = __this->___Wind_13;
		NullCheck(L_9);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_10;
		L_10 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_9, NULL);
		NullCheck(L_10);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), (0.0f), NULL);
		// Wind.keys[1].outTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = __this->___Wind_13;
		NullCheck(L_11);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_12;
		L_12 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_11, NULL);
		NullCheck(L_12);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), (0.0f), NULL);
		// Wind.AddKey(0.2430963f, -0.06465532f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_13 = __this->___Wind_13;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_13, (0.243096307f), (-0.0646553189f), NULL);
		// Wind.keys[2].inTangent = -0.07599592f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_15 = __this->___Wind_13;
		NullCheck(L_15);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_16;
		L_16 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_15, NULL);
		NullCheck(L_16);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))), (-0.0759959221f), NULL);
		// Wind.keys[2].outTangent = -0.07599592f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_17 = __this->___Wind_13;
		NullCheck(L_17);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_18;
		L_18 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_17, NULL);
		NullCheck(L_18);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))), (-0.0759959221f), NULL);
		// Wind.AddKey(0.3425266f, 0.02290122f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_19 = __this->___Wind_13;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_19, (0.342526615f), (0.0229012202f), NULL);
		// Wind.keys[3].inTangent = 0.03580004f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_21 = __this->___Wind_13;
		NullCheck(L_21);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_22;
		L_22 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_21, NULL);
		NullCheck(L_22);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))), (0.0358000398f), NULL);
		// Wind.keys[3].outTangent = 0.03580004f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_23 = __this->___Wind_13;
		NullCheck(L_23);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_24;
		L_24 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_23, NULL);
		NullCheck(L_24);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))), (0.0358000398f), NULL);
		// Wind.AddKey(0.4246872f, -0.02232522f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_25 = __this->___Wind_13;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_25, (0.424687207f), (-0.0223252196f), NULL);
		// Wind.keys[4].inTangent = -0.006025657f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_27 = __this->___Wind_13;
		NullCheck(L_27);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_28;
		L_28 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_27, NULL);
		NullCheck(L_28);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(4))), (-0.00602565706f), NULL);
		// Wind.keys[4].outTangent = -0.006025657f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_29 = __this->___Wind_13;
		NullCheck(L_29);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_30;
		L_30 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_29, NULL);
		NullCheck(L_30);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(4))), (-0.00602565706f), NULL);
		// Wind.AddKey(0.5104106f, 0.1647801f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_31 = __this->___Wind_13;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_31, (0.510410607f), (0.164780095f), NULL);
		// Wind.keys[5].inTangent = 0.02981164f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_33 = __this->___Wind_13;
		NullCheck(L_33);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_34;
		L_34 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_33, NULL);
		NullCheck(L_34);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(5))), (0.0298116393f), NULL);
		// Wind.keys[5].outTangent = 0.02981164f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_35 = __this->___Wind_13;
		NullCheck(L_35);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_36;
		L_36 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_35, NULL);
		NullCheck(L_36);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(5))), (0.0298116393f), NULL);
		// Wind.AddKey(0.6082056f, -0.04679203f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37 = __this->___Wind_13;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_37, (0.608205616f), (-0.0467920303f), NULL);
		// Wind.keys[6].inTangent = -0.3176928f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39 = __this->___Wind_13;
		NullCheck(L_39);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_40;
		L_40 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_39, NULL);
		NullCheck(L_40);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(6))), (-0.317692786f), NULL);
		// Wind.keys[6].outTangent = -0.3176928f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41 = __this->___Wind_13;
		NullCheck(L_41);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_42;
		L_42 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_41, NULL);
		NullCheck(L_42);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(6))), (-0.317692786f), NULL);
		// Wind.AddKey(0.7794942f, 0.2234365f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_43 = __this->___Wind_13;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_43, (0.779494226f), (0.223436505f), NULL);
		// Wind.keys[7].inTangent = 0.2063811f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_45 = __this->___Wind_13;
		NullCheck(L_45);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_46;
		L_46 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_45, NULL);
		NullCheck(L_46);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(7))), (0.206381097f), NULL);
		// Wind.keys[7].outTangent = 0.2063811f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_47 = __this->___Wind_13;
		NullCheck(L_47);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_48;
		L_48 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_47, NULL);
		NullCheck(L_48);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(7))), (0.206381097f), NULL);
		// Wind.AddKey(0.8546611f, -0.003165513f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_49 = __this->___Wind_13;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_49, (0.854661107f), (-0.00316551304f), NULL);
		// Wind.keys[8].inTangent = 0.02264977f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51 = __this->___Wind_13;
		NullCheck(L_51);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_52;
		L_52 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_51, NULL);
		NullCheck(L_52);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(8))), (0.0226497706f), NULL);
		// Wind.keys[8].outTangent = 0.02264977f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53 = __this->___Wind_13;
		NullCheck(L_53);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_54;
		L_54 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_53, NULL);
		NullCheck(L_54);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(8))), (0.0226497706f), NULL);
		// Wind.AddKey(1.022495f, -0.07358052f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_55 = __this->___Wind_13;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_55, (1.02249503f), (-0.0735805184f), NULL);
		// Wind.keys[9].inTangent = 2.450916f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_57 = __this->___Wind_13;
		NullCheck(L_57);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_58;
		L_58 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_57, NULL);
		NullCheck(L_58);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)9)))), (2.45091605f), NULL);
		// Wind.keys[9].outTangent = 2.450916f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_59 = __this->___Wind_13;
		NullCheck(L_59);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_60;
		L_60 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_59, NULL);
		NullCheck(L_60);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)9)))), (2.45091605f), NULL);
		// Wind.AddKey(1.250894f, -0.1813075f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_61 = __this->___Wind_13;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_61, (1.25089395f), (-0.181307495f), NULL);
		// Wind.keys[10].inTangent = 0.02214685f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_63 = __this->___Wind_13;
		NullCheck(L_63);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_64;
		L_64 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_63, NULL);
		NullCheck(L_64);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)10)))), (0.0221468508f), NULL);
		// Wind.keys[10].outTangent = 0.02214685f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_65 = __this->___Wind_13;
		NullCheck(L_65);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_66;
		L_66 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_65, NULL);
		NullCheck(L_66);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)10)))), (0.0221468508f), NULL);
		// Wind.AddKey(1.369877f, -0.06861454f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_67 = __this->___Wind_13;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_67, (1.36987698f), (-0.0686145425f), NULL);
		// Wind.keys[11].inTangent = -1.860534f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_69 = __this->___Wind_13;
		NullCheck(L_69);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_70;
		L_70 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_69, NULL);
		NullCheck(L_70);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)11)))), (-1.86053395f), NULL);
		// Wind.keys[11].outTangent = -1.860534f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_71 = __this->___Wind_13;
		NullCheck(L_71);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_72;
		L_72 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_71, NULL);
		NullCheck(L_72);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)11)))), (-1.86053395f), NULL);
		// Wind.AddKey(1.484951f, -0.1543293f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_73 = __this->___Wind_13;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_73, (1.48495102f), (-0.1543293f), NULL);
		// Wind.keys[12].inTangent = 0.0602752f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_75 = __this->___Wind_13;
		NullCheck(L_75);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_76;
		L_76 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_75, NULL);
		NullCheck(L_76);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)12)))), (0.0602752008f), NULL);
		// Wind.keys[12].outTangent = 0.0602752f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_77 = __this->___Wind_13;
		NullCheck(L_77);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_78;
		L_78 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_77, NULL);
		NullCheck(L_78);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)12)))), (0.0602752008f), NULL);
		// Wind.AddKey(1.583562f, 0.100938f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_79 = __this->___Wind_13;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_79, (1.58356202f), (0.100938f), NULL);
		// Wind.keys[13].inTangent = 0.08665025f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_81 = __this->___Wind_13;
		NullCheck(L_81);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_82;
		L_82 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_81, NULL);
		NullCheck(L_82);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)13)))), (0.0866502523f), NULL);
		// Wind.keys[13].outTangent = 0.08665025f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_83 = __this->___Wind_13;
		NullCheck(L_83);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_84;
		L_84 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_83, NULL);
		NullCheck(L_84);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)13)))), (0.0866502523f), NULL);
		// Wind.AddKey(1.687307f, -0.100769f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_85 = __this->___Wind_13;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_85, (1.687307f), (-0.100768998f), NULL);
		// Wind.keys[14].inTangent = 0.01110137f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_87 = __this->___Wind_13;
		NullCheck(L_87);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_88;
		L_88 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_87, NULL);
		NullCheck(L_88);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)14)))), (0.0111013697f), NULL);
		// Wind.keys[14].outTangent = 0.01110137f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_89 = __this->___Wind_13;
		NullCheck(L_89);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_90;
		L_90 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_89, NULL);
		NullCheck(L_90);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)14)))), (0.0111013697f), NULL);
		// Wind.AddKey(1.797593f, 0.04921142f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_91 = __this->___Wind_13;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_91, (1.797593f), (0.0492114201f), NULL);
		// Wind.keys[15].inTangent = 3.407104f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_93 = __this->___Wind_13;
		NullCheck(L_93);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_94;
		L_94 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_93, NULL);
		NullCheck(L_94);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)15)))), (3.40710402f), NULL);
		// Wind.keys[15].outTangent = 3.407104f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_95 = __this->___Wind_13;
		NullCheck(L_95);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_96;
		L_96 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_95, NULL);
		NullCheck(L_96);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_96)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)15)))), (3.40710402f), NULL);
		// Wind.AddKey(1.927248f, -0.1877219f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_97 = __this->___Wind_13;
		NullCheck(L_97);
		int32_t L_98;
		L_98 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_97, (1.927248f), (-0.187721893f), NULL);
		// Wind.keys[16].inTangent = -0.001117587f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_99 = __this->___Wind_13;
		NullCheck(L_99);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_100;
		L_100 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_99, NULL);
		NullCheck(L_100);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)16)))), (-0.00111758697f), NULL);
		// Wind.keys[16].outTangent = -0.001117587f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_101 = __this->___Wind_13;
		NullCheck(L_101);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_102;
		L_102 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_101, NULL);
		NullCheck(L_102);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)16)))), (-0.00111758697f), NULL);
		// Wind.AddKey(2.067694f, 0.2742145f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_103 = __this->___Wind_13;
		NullCheck(L_103);
		int32_t L_104;
		L_104 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_103, (2.06769395f), (0.274214506f), NULL);
		// Wind.keys[17].inTangent = 4.736587f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_105 = __this->___Wind_13;
		NullCheck(L_105);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_106;
		L_106 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_105, NULL);
		NullCheck(L_106);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_106)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)17)))), (4.73658705f), NULL);
		// Wind.keys[17].outTangent = 4.736587f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_107 = __this->___Wind_13;
		NullCheck(L_107);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_108;
		L_108 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_107, NULL);
		NullCheck(L_108);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)17)))), (4.73658705f), NULL);
		// Wind.AddKey(2.184602f, -0.06127208f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_109 = __this->___Wind_13;
		NullCheck(L_109);
		int32_t L_110;
		L_110 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_109, (2.18460202f), (-0.061272081f), NULL);
		// Wind.keys[18].inTangent = -0.1308322f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_111 = __this->___Wind_13;
		NullCheck(L_111);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_112;
		L_112 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_111, NULL);
		NullCheck(L_112);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_112)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)18)))), (-0.130832195f), NULL);
		// Wind.keys[18].outTangent = -0.1308322f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_113 = __this->___Wind_13;
		NullCheck(L_113);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_114;
		L_114 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_113, NULL);
		NullCheck(L_114);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_114)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)18)))), (-0.130832195f), NULL);
		// Wind.AddKey(2.305948f, 0.1891117f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_115 = __this->___Wind_13;
		NullCheck(L_115);
		int32_t L_116;
		L_116 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_115, (2.30594802f), (0.189111695f), NULL);
		// Wind.keys[19].inTangent = 0.04030764f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_117 = __this->___Wind_13;
		NullCheck(L_117);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_118;
		L_118 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_117, NULL);
		NullCheck(L_118);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_118)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)19)))), (0.040307641f), NULL);
		// Wind.keys[19].outTangent = 0.04030764f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_119 = __this->___Wind_13;
		NullCheck(L_119);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_120;
		L_120 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_119, NULL);
		NullCheck(L_120);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_120)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)19)))), (0.040307641f), NULL);
		// Wind.AddKey(2.428946f, -0.1695723f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_121 = __this->___Wind_13;
		NullCheck(L_121);
		int32_t L_122;
		L_122 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_121, (2.42894602f), (-0.169572294f), NULL);
		// Wind.keys[20].inTangent = -0.2463162f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_123 = __this->___Wind_13;
		NullCheck(L_123);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_124;
		L_124 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_123, NULL);
		NullCheck(L_124);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_124)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)20)))), (-0.246316195f), NULL);
		// Wind.keys[20].outTangent = -0.2463162f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_125 = __this->___Wind_13;
		NullCheck(L_125);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_126;
		L_126 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_125, NULL);
		NullCheck(L_126);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_126)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)20)))), (-0.246316195f), NULL);
		// Wind.AddKey(2.55922f, 0.0359862f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_127 = __this->___Wind_13;
		NullCheck(L_127);
		int32_t L_128;
		L_128 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_127, (2.55922008f), (0.0359862f), NULL);
		// Wind.keys[21].inTangent = 0.3967434f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_129 = __this->___Wind_13;
		NullCheck(L_129);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_130;
		L_130 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_129, NULL);
		NullCheck(L_130);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_130)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)21)))), (0.396743387f), NULL);
		// Wind.keys[21].outTangent = 0.3967434f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_131 = __this->___Wind_13;
		NullCheck(L_131);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_132;
		L_132 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_131, NULL);
		NullCheck(L_132);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_132)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)21)))), (0.396743387f), NULL);
		// Wind.AddKey(2.785119f, -0.08398628f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_133 = __this->___Wind_13;
		NullCheck(L_133);
		int32_t L_134;
		L_134 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_133, (2.78511906f), (-0.0839862823f), NULL);
		// Wind.keys[22].inTangent = -0.2388284f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_135 = __this->___Wind_13;
		NullCheck(L_135);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_136;
		L_136 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_135, NULL);
		NullCheck(L_136);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_136)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)22)))), (-0.238828406f), NULL);
		// Wind.keys[22].outTangent = -0.2388284f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_137 = __this->___Wind_13;
		NullCheck(L_137);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_138;
		L_138 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_137, NULL);
		NullCheck(L_138);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_138)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)22)))), (-0.238828406f), NULL);
		// Wind.AddKey(3f, 0f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_139 = __this->___Wind_13;
		NullCheck(L_139);
		int32_t L_140;
		L_140 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_139, (3.0f), (0.0f), NULL);
		// Wind.keys[23].inTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_141 = __this->___Wind_13;
		NullCheck(L_141);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_142;
		L_142 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_141, NULL);
		NullCheck(L_142);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_142)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)23)))), (0.0f), NULL);
		// Wind.keys[23].outTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_143 = __this->___Wind_13;
		NullCheck(L_143);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_144;
		L_144 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_143, NULL);
		NullCheck(L_144);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_144)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)23)))), (0.0f), NULL);
		// Wind.postWrapMode = WrapMode.Loop;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_145 = __this->___Wind_13;
		NullCheck(L_145);
		AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9(L_145, 2, NULL);
		// Wind.preWrapMode = WrapMode.Loop;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_146 = __this->___Wind_13;
		NullCheck(L_146);
		AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D(L_146, 2, NULL);
		// XUpdate();
		_2dxFX_AL_GrassMultiFX_XUpdate_m7B217490CE5306E18420AE9E3711660DD3369CFA(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GrassMultiFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassMultiFX_CallUpdate_m59CF1662A317FEE933165194139EB8C6DDD5193D (_2dxFX_AL_GrassMultiFX_t236650BB423D2D6194B933B53AE7F4DEFF4D40AC* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_GrassMultiFX_XUpdate_m7B217490CE5306E18420AE9E3711660DD3369CFA(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GrassMultiFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassMultiFX_Update_m01D194B79BCF5C200C4763F21571282CB616C2C3 (_2dxFX_AL_GrassMultiFX_t236650BB423D2D6194B933B53AE7F4DEFF4D40AC* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_GrassMultiFX_XUpdate_m7B217490CE5306E18420AE9E3711660DD3369CFA(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GrassMultiFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassMultiFX_XUpdate_m7B217490CE5306E18420AE9E3711660DD3369CFA (_2dxFX_AL_GrassMultiFX_t236650BB423D2D6194B933B53AE7F4DEFF4D40AC* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58AAFF72F520DA2B9EE6AA369289D02EDB353A4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B75E738B55ED8EF009980C3AC6820D195BB18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF8E1F5EF1340BB4DE17EAA7636D1021F91E9C17);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_21;
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
		__this->___CanvasImage_21 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_21), (void*)L_6);
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
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_18;
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
		__this->___ShaderChange_18 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_19;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_21;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_21;
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
		int32_t L_34 = __this->___ShaderChange_18;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_19;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_19;
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
		__this->___tempMaterial_19 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_19), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_19;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_19;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_21;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_21;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_19;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_18 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_07f1;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_0655;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_60);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_60, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		NullCheck(L_62);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_62, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_65);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_65, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_67, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_71);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_71, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_73, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0562:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Heat);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Heat_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_141, NULL);
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_142 = __this->___Wind_13;
		if (!L_142)
		{
			goto IL_05ab;
		}
	}
	{
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_143 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_143);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_144;
		L_144 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_143, NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_145 = __this->___Wind_13;
		float L_146 = __this->___WindTime1_14;
		NullCheck(L_145);
		float L_147;
		L_147 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_145, L_146, NULL);
		NullCheck(L_144);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_144, _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716, L_147, NULL);
	}

IL_05ab:
	{
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind2", Wind.Evaluate(WindTime2));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_148 = __this->___Wind_13;
		if (!L_148)
		{
			goto IL_05d9;
		}
	}
	{
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind2", Wind.Evaluate(WindTime2));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_149 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_149);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_150;
		L_150 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_149, NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_151 = __this->___Wind_13;
		float L_152 = __this->___WindTime2_15;
		NullCheck(L_151);
		float L_153;
		L_153 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_151, L_152, NULL);
		NullCheck(L_150);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_150, _stringLiteralFF8E1F5EF1340BB4DE17EAA7636D1021F91E9C17, L_153, NULL);
	}

IL_05d9:
	{
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind3", Wind.Evaluate(WindTime3));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_154 = __this->___Wind_13;
		if (!L_154)
		{
			goto IL_0607;
		}
	}
	{
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind3", Wind.Evaluate(WindTime3));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_155 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_155);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_156;
		L_156 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_155, NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_157 = __this->___Wind_13;
		float L_158 = __this->___WindTime3_16;
		NullCheck(L_157);
		float L_159;
		L_159 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_157, L_158, NULL);
		NullCheck(L_156);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_156, _stringLiteral725B75E738B55ED8EF009980C3AC6820D195BB18, L_159, NULL);
	}

IL_0607:
	{
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind4", Wind.Evaluate(WindTime4));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_160 = __this->___Wind_13;
		if (!L_160)
		{
			goto IL_0635;
		}
	}
	{
		// if (Wind != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Wind4", Wind.Evaluate(WindTime4));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_161 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_161);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_162;
		L_162 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_161, NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_163 = __this->___Wind_13;
		float L_164 = __this->___WindTime4_17;
		NullCheck(L_163);
		float L_165;
		L_165 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_163, L_164, NULL);
		NullCheck(L_162);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_162, _stringLiteral58AAFF72F520DA2B9EE6AA369289D02EDB353A4F, L_165, NULL);
	}

IL_0635:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Speed", Speed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_166 = __this->___CanvasSpriteRenderer_22;
		NullCheck(L_166);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_167;
		L_167 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_166, NULL);
		float L_168 = __this->___Speed_12;
		NullCheck(L_167);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_167, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_168, NULL);
		goto IL_0775;
	}

IL_0655:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_169 = __this->___CanvasImage_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_170;
		L_170 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_169, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_170)
		{
			goto IL_0775;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_171 = __this->___CanvasImage_21;
		NullCheck(L_171);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_172;
		L_172 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_171);
		float L_173 = __this->____Alpha_10;
		NullCheck(L_172);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_172, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_173)), NULL);
		// CanvasImage.material.SetFloat("_Distortion", Heat);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_174 = __this->___CanvasImage_21;
		NullCheck(L_174);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_175;
		L_175 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_174);
		float L_176 = __this->___Heat_11;
		NullCheck(L_175);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_175, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_176, NULL);
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_177 = __this->___Wind_13;
		if (!L_177)
		{
			goto IL_06d0;
		}
	}
	{
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind", Wind.Evaluate(WindTime1));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_178 = __this->___CanvasImage_21;
		NullCheck(L_178);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_179;
		L_179 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_178);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_180 = __this->___Wind_13;
		float L_181 = __this->___WindTime1_14;
		NullCheck(L_180);
		float L_182;
		L_182 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_180, L_181, NULL);
		NullCheck(L_179);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_179, _stringLiteral32EFDDFEAA75BD8C9B227E8BC9CCE4B7268C0716, L_182, NULL);
	}

IL_06d0:
	{
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind2", Wind.Evaluate(WindTime2));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_183 = __this->___Wind_13;
		if (!L_183)
		{
			goto IL_06fe;
		}
	}
	{
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind2", Wind.Evaluate(WindTime2));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_184 = __this->___CanvasImage_21;
		NullCheck(L_184);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_185;
		L_185 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_184);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_186 = __this->___Wind_13;
		float L_187 = __this->___WindTime2_15;
		NullCheck(L_186);
		float L_188;
		L_188 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_186, L_187, NULL);
		NullCheck(L_185);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_185, _stringLiteralFF8E1F5EF1340BB4DE17EAA7636D1021F91E9C17, L_188, NULL);
	}

IL_06fe:
	{
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind3", Wind.Evaluate(WindTime3));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_189 = __this->___Wind_13;
		if (!L_189)
		{
			goto IL_072c;
		}
	}
	{
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind3", Wind.Evaluate(WindTime3));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_190 = __this->___CanvasImage_21;
		NullCheck(L_190);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_191;
		L_191 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_190);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_192 = __this->___Wind_13;
		float L_193 = __this->___WindTime3_16;
		NullCheck(L_192);
		float L_194;
		L_194 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_192, L_193, NULL);
		NullCheck(L_191);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_191, _stringLiteral725B75E738B55ED8EF009980C3AC6820D195BB18, L_194, NULL);
	}

IL_072c:
	{
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind4", Wind.Evaluate(WindTime4));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_195 = __this->___Wind_13;
		if (!L_195)
		{
			goto IL_075a;
		}
	}
	{
		// if (Wind != null) CanvasImage.material.SetFloat("_Wind4", Wind.Evaluate(WindTime4));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_196 = __this->___CanvasImage_21;
		NullCheck(L_196);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_197;
		L_197 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_196);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_198 = __this->___Wind_13;
		float L_199 = __this->___WindTime4_17;
		NullCheck(L_198);
		float L_200;
		L_200 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_198, L_199, NULL);
		NullCheck(L_197);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_197, _stringLiteral58AAFF72F520DA2B9EE6AA369289D02EDB353A4F, L_200, NULL);
	}

IL_075a:
	{
		// CanvasImage.material.SetFloat("_Speed", Speed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_201 = __this->___CanvasImage_21;
		NullCheck(L_201);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_202;
		L_202 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_201);
		float L_203 = __this->___Speed_12;
		NullCheck(L_202);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_202, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_203, NULL);
	}

IL_0775:
	{
		// WindTime1 += (Time.deltaTime / 8) * Speed;
		float L_204 = __this->___WindTime1_14;
		float L_205;
		L_205 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_206 = __this->___Speed_12;
		__this->___WindTime1_14 = ((float)il2cpp_codegen_add(L_204, ((float)il2cpp_codegen_multiply(((float)(L_205/(8.0f))), L_206))));
		// WindTime2 += (Time.deltaTime / 8) * Speed;
		float L_207 = __this->___WindTime2_15;
		float L_208;
		L_208 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_209 = __this->___Speed_12;
		__this->___WindTime2_15 = ((float)il2cpp_codegen_add(L_207, ((float)il2cpp_codegen_multiply(((float)(L_208/(8.0f))), L_209))));
		// WindTime3 += (Time.deltaTime / 8) * Speed;
		float L_210 = __this->___WindTime3_16;
		float L_211;
		L_211 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_212 = __this->___Speed_12;
		__this->___WindTime3_16 = ((float)il2cpp_codegen_add(L_210, ((float)il2cpp_codegen_multiply(((float)(L_211/(8.0f))), L_212))));
		// WindTime4 += (Time.deltaTime / 8) * Speed;
		float L_213 = __this->___WindTime4_17;
		float L_214;
		L_214 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_215 = __this->___Speed_12;
		__this->___WindTime4_17 = ((float)il2cpp_codegen_add(L_213, ((float)il2cpp_codegen_multiply(((float)(L_214/(8.0f))), L_215))));
	}

IL_07f1:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GrassMultiFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassMultiFX_OnDestroy_mE38CFB612270BB216E86B71F24DD4DCDA7BBE31F (_2dxFX_AL_GrassMultiFX_t236650BB423D2D6194B933B53AE7F4DEFF4D40AC* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_19;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_19;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_20;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_20;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_21;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_21;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_20;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_21;
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
// System.Void _2dxFX_AL_GrassMultiFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassMultiFX_OnDisable_mAD3C94CFE729E2AE60F2A9E1AC7F64498B1E0B51 (_2dxFX_AL_GrassMultiFX_t236650BB423D2D6194B933B53AE7F4DEFF4D40AC* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_20;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_20;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_21;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_21;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_20;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_21;
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
// System.Void _2dxFX_AL_GrassMultiFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassMultiFX_OnEnable_mBEFC01B8C640163127BB554CDB2A3C4E360495AA (_2dxFX_AL_GrassMultiFX_t236650BB423D2D6194B933B53AE7F4DEFF4D40AC* __this, const RuntimeMethod* method) 
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
		__this->___WindTime1_14 = (0.0f);
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_20;
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
		__this->___defaultMaterial_20 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_20), (void*)L_3);
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
		String_t* L_6 = __this->___shader_9;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_19 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_19), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_19;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_22;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_19;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		return;
	}

IL_0085:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_21;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_21;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_19;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
		return;
	}

IL_00a5:
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
			goto IL_00e7;
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

IL_00e7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_21;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___CanvasImage_21;
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
// System.Void _2dxFX_AL_GrassMultiFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrassMultiFX__ctor_mB1A7B62B52C8640A0C92F9601BE558CA251C77E3 (_2dxFX_AL_GrassMultiFX_t236650BB423D2D6194B933B53AE7F4DEFF4D40AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC346BDD42C494C7E014FFD652D6F3B066A40B0C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/GrassMultiFX";
		__this->___shader_9 = _stringLiteralC346BDD42C494C7E014FFD652D6F3B066A40B0C7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralC346BDD42C494C7E014FFD652D6F3B066A40B0C7);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Heat = 1.0f;
		__this->___Heat_11 = (1.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Speed = 1.0f;
		__this->___Speed_12 = (1.0f);
		// private float WindTime2 = 0.015f;
		__this->___WindTime2_15 = (0.0149999997f);
		// private float WindTime3 = 0.030f;
		__this->___WindTime3_16 = (0.0299999993f);
		// private float WindTime4 = 0.045f;
		__this->___WindTime4_17 = (0.0450000018f);
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
// System.Void _2dxFX_AL_GrayScale::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrayScale_Awake_m31FCC8D6324D83E0DB04CEC716E9741BF621B3AB (_2dxFX_AL_GrayScale_t778C55BB4732AE554B8999AF2BA4099D6C092F79* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_GrayScale::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrayScale_Start_m58F6842D02B95067AEA30ED7371B7A88D43D31E0 (_2dxFX_AL_GrayScale_t778C55BB4732AE554B8999AF2BA4099D6C092F79* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// XUpdate();
		_2dxFX_AL_GrayScale_XUpdate_mDE5899D3EB23FDC519B1786BE2F46F38D23D787B(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GrayScale::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrayScale_CallUpdate_mEAD4D0F37E264AB66756577E8DD9180BC5DA97C3 (_2dxFX_AL_GrayScale_t778C55BB4732AE554B8999AF2BA4099D6C092F79* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_GrayScale_XUpdate_mDE5899D3EB23FDC519B1786BE2F46F38D23D787B(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GrayScale::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrayScale_Update_m6235EAF9802A83753A297F64AFF612E4F36A61F3 (_2dxFX_AL_GrayScale_t778C55BB4732AE554B8999AF2BA4099D6C092F79* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_GrayScale_XUpdate_mDE5899D3EB23FDC519B1786BE2F46F38D23D787B(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GrayScale::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrayScale_XUpdate_mDE5899D3EB23FDC519B1786BE2F46F38D23D787B (_2dxFX_AL_GrayScale_t778C55BB4732AE554B8999AF2BA4099D6C092F79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14BE754BF8F5400050442C7A7201D90C19ABEEF1);
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
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_EffectAmount", _EffectAmount);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->____EffectAmount_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral14BE754BF8F5400050442C7A7201D90C19ABEEF1, L_141, NULL);
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
		// CanvasImage.material.SetFloat("_EffectAmount", _EffectAmount);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = __this->___CanvasImage_15;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_147);
		float L_149 = __this->____EffectAmount_11;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteral14BE754BF8F5400050442C7A7201D90C19ABEEF1, L_149, NULL);
	}

IL_05c8:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_GrayScale::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrayScale_OnDestroy_m0D502B11E76860D275B9C97945E84AA9710744A0 (_2dxFX_AL_GrayScale_t778C55BB4732AE554B8999AF2BA4099D6C092F79* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_GrayScale::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrayScale_OnDisable_m871A87C1B7D5D33B050F0BA1490C6A70CE9E0B28 (_2dxFX_AL_GrayScale_t778C55BB4732AE554B8999AF2BA4099D6C092F79* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_GrayScale::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrayScale_OnEnable_m66FA208423B3172A0036D57F74996FAC84A9D89E (_2dxFX_AL_GrayScale_t778C55BB4732AE554B8999AF2BA4099D6C092F79* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_GrayScale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_GrayScale__ctor_mF3EC8A1A5B375D0CC5AC6CD7DE10C1B8E9E71AA5 (_2dxFX_AL_GrayScale_t778C55BB4732AE554B8999AF2BA4099D6C092F79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40AA80F4202A2135C98C7889D346EB31A61F89BD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/GrayScale";
		__this->___shader_9 = _stringLiteral40AA80F4202A2135C98C7889D346EB31A61F89BD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral40AA80F4202A2135C98C7889D346EB31A61F89BD);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [Range(0, 1)] public float _EffectAmount = 1f;
		__this->____EffectAmount_11 = (1.0f);
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
// System.Void _2dxFX_AL_Heat::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Heat_Awake_m5C8F12A01422174C308BEA0BBC9A27A17E424618 (_2dxFX_AL_Heat_t4CF82AF9E11388B6E4CF744F523B492AC4700F9B* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Heat::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Heat_Start_m60D4EE73CDCAC39B320BAE8BFF9768EC2AA35117 (_2dxFX_AL_Heat_t4CF82AF9E11388B6E4CF744F523B492AC4700F9B* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_13 = 0;
		// XUpdate();
		_2dxFX_AL_Heat_XUpdate_mF3983C77D72F9B649245564D959306D5120BC3EC(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Heat::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Heat_CallUpdate_m778A022E49F8A564415A3C137C2AF531D9D471D8 (_2dxFX_AL_Heat_t4CF82AF9E11388B6E4CF744F523B492AC4700F9B* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Heat_XUpdate_mF3983C77D72F9B649245564D959306D5120BC3EC(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Heat::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Heat_Update_m0C34DF171B57D18255F4DCB2777370B8503F9B26 (_2dxFX_AL_Heat_t4CF82AF9E11388B6E4CF744F523B492AC4700F9B* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Heat_XUpdate_mF3983C77D72F9B649245564D959306D5120BC3EC(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Heat::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Heat_XUpdate_mF3983C77D72F9B649245564D959306D5120BC3EC (_2dxFX_AL_Heat_t4CF82AF9E11388B6E4CF744F523B492AC4700F9B* __this, const RuntimeMethod* method) 
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
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Heat);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Heat_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Speed", Speed);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->___Speed_12;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_144, NULL);
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
		// CanvasImage.material.SetFloat("_Distortion", Heat);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_150 = __this->___CanvasImage_16;
		NullCheck(L_150);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_151;
		L_151 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_150);
		float L_152 = __this->___Heat_11;
		NullCheck(L_151);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_151, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_152, NULL);
		// CanvasImage.material.SetFloat("_Speed", Speed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_153 = __this->___CanvasImage_16;
		NullCheck(L_153);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154;
		L_154 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_153);
		float L_155 = __this->___Speed_12;
		NullCheck(L_154);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_154, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_155, NULL);
	}

IL_05fe:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Heat::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Heat_OnDestroy_m157AFE2517D62BE16895418883488B9CD19D197D (_2dxFX_AL_Heat_t4CF82AF9E11388B6E4CF744F523B492AC4700F9B* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Heat::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Heat_OnDisable_m9B09265B885414BBCB5AB07EC8C9CE66BC667EEF (_2dxFX_AL_Heat_t4CF82AF9E11388B6E4CF744F523B492AC4700F9B* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Heat::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Heat_OnEnable_m592F8A7541DCE4BE9E0D866398BDF39184E03BB3 (_2dxFX_AL_Heat_t4CF82AF9E11388B6E4CF744F523B492AC4700F9B* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Heat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Heat__ctor_mC7DEBC14567247894C27D66962E25CB94ECAB47C (_2dxFX_AL_Heat_t4CF82AF9E11388B6E4CF744F523B492AC4700F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44825FC56E3661325C41E662CC386567F0B3CEB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Heat";
		__this->___shader_9 = _stringLiteral44825FC56E3661325C41E662CC386567F0B3CEB0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral44825FC56E3661325C41E662CC386567F0B3CEB0);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Heat = 1.0f;
		__this->___Heat_11 = (1.0f);
		// [HideInInspector] [Range(0.0f, 4f)] public float Speed = 1.0f;
		__this->___Speed_12 = (1.0f);
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
// System.Void _2dxFX_AL_Hologram::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram_Awake_mAE51D8FB7227E2F93F3D5824CA4F638505BC0E41 (_2dxFX_AL_Hologram_tBE6D716DB286DC5C286069E4E1B5953F840B6BDA* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Hologram::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram_Start_mCF890D5BDD9C830630A4D7CA905C046120EC606D (_2dxFX_AL_Hologram_tBE6D716DB286DC5C286069E4E1B5953F840B6BDA* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_14 = 0;
		// XUpdate();
		_2dxFX_AL_Hologram_XUpdate_m5580B8DEF0E3F9D39B2E1266DE86E640EC168D66(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Hologram::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram_CallUpdate_m5DBC663D2C187D0C07C1721466C52A8288D7AC62 (_2dxFX_AL_Hologram_tBE6D716DB286DC5C286069E4E1B5953F840B6BDA* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Hologram_XUpdate_m5580B8DEF0E3F9D39B2E1266DE86E640EC168D66(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Hologram::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram_Update_m1A1E08729A63C527B46217E4AB3FF7BD6F8BCA30 (_2dxFX_AL_Hologram_tBE6D716DB286DC5C286069E4E1B5953F840B6BDA* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Hologram_XUpdate_m5580B8DEF0E3F9D39B2E1266DE86E640EC168D66(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Hologram::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram_XUpdate_m5580B8DEF0E3F9D39B2E1266DE86E640EC168D66 (_2dxFX_AL_Hologram_tBE6D716DB286DC5C286069E4E1B5953F840B6BDA* __this, const RuntimeMethod* method) 
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
			goto IL_066f;
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
			goto IL_05d0;
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
		// _TimeX += Time.deltaTime * Speed;
		float L_139 = __this->____TimeX_12;
		float L_140;
		L_140 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_141 = __this->___Speed_13;
		__this->____TimeX_12 = ((float)il2cpp_codegen_add(L_139, ((float)il2cpp_codegen_multiply(L_140, L_141))));
		// if (_TimeX > 100) _TimeX = 0;
		float L_142 = __this->____TimeX_12;
		if ((!(((float)L_142) > ((float)(100.0f)))))
		{
			goto IL_0593;
		}
	}
	{
		// if (_TimeX > 100) _TimeX = 0;
		__this->____TimeX_12 = (0.0f);
	}

IL_0593:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Distortion);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_143 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_143);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_144;
		L_144 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_143, NULL);
		float L_145 = __this->___Distortion_11;
		NullCheck(L_144);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_144, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_145, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_TimeX", 1f + _TimeX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_146 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_146);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_147;
		L_147 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_146, NULL);
		float L_148 = __this->____TimeX_12;
		NullCheck(L_147);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_147, _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC, ((float)il2cpp_codegen_add((1.0f), L_148)), NULL);
		return;
	}

IL_05d0:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_149 = __this->___CanvasImage_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_150;
		L_150 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_149, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_150)
		{
			goto IL_066f;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_151 = __this->___CanvasImage_17;
		NullCheck(L_151);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_152;
		L_152 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_151);
		float L_153 = __this->____Alpha_10;
		NullCheck(L_152);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_152, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_153)), NULL);
		// _TimeX += Time.deltaTime * Speed;
		float L_154 = __this->____TimeX_12;
		float L_155;
		L_155 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_156 = __this->___Speed_13;
		__this->____TimeX_12 = ((float)il2cpp_codegen_add(L_154, ((float)il2cpp_codegen_multiply(L_155, L_156))));
		// if (_TimeX > 100) _TimeX = 0;
		float L_157 = __this->____TimeX_12;
		if ((!(((float)L_157) > ((float)(100.0f)))))
		{
			goto IL_0633;
		}
	}
	{
		// if (_TimeX > 100) _TimeX = 0;
		__this->____TimeX_12 = (0.0f);
	}

IL_0633:
	{
		// CanvasImage.material.SetFloat("_Distortion", Distortion);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_158 = __this->___CanvasImage_17;
		NullCheck(L_158);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_159;
		L_159 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_158);
		float L_160 = __this->___Distortion_11;
		NullCheck(L_159);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_159, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_160, NULL);
		// CanvasImage.material.SetFloat("_TimeX", 1f + _TimeX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_161 = __this->___CanvasImage_17;
		NullCheck(L_161);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_162;
		L_162 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_161);
		float L_163 = __this->____TimeX_12;
		NullCheck(L_162);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_162, _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC, ((float)il2cpp_codegen_add((1.0f), L_163)), NULL);
	}

IL_066f:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Hologram::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram_OnDestroy_m2B58B45F86432EF051B27E28324D23C0684F9300 (_2dxFX_AL_Hologram_tBE6D716DB286DC5C286069E4E1B5953F840B6BDA* __this, const RuntimeMethod* method) 
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___CanvasImage_17;
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
		__this->___CanvasImage_17 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_17), (void*)L_6);
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_15;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___tempMaterial_15;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___defaultMaterial_16;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_16 = __this->___CanvasSpriteRenderer_18;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_18 = __this->___CanvasSpriteRenderer_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___defaultMaterial_16;
		NullCheck(L_18);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_18, L_19, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_18;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___CanvasImage_17;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___defaultMaterial_16;
		NullCheck(L_24);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_24, L_25);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_17;
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
// System.Void _2dxFX_AL_Hologram::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram_OnDisable_m62E8810F5F983E8CFB5403347C9EC506BB73819B (_2dxFX_AL_Hologram_tBE6D716DB286DC5C286069E4E1B5953F840B6BDA* __this, const RuntimeMethod* method) 
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___CanvasImage_17;
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
		__this->___CanvasImage_17 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_17), (void*)L_6);
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___defaultMaterial_16;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_18;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___defaultMaterial_16;
		NullCheck(L_13);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_13, L_14, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_15 = __this->___CanvasSpriteRenderer_18;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_17;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___defaultMaterial_16;
		NullCheck(L_19);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_19, L_20);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = __this->___CanvasImage_17;
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
// System.Void _2dxFX_AL_Hologram::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram_OnEnable_m8B2F16E3E7CADA6ACE6F776E056267A91ACD3930 (_2dxFX_AL_Hologram_tBE6D716DB286DC5C286069E4E1B5953F840B6BDA* __this, const RuntimeMethod* method) 
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___CanvasImage_17;
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
		__this->___CanvasImage_17 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_17), (void*)L_6);
	}

IL_0032:
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_16;
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
		__this->___defaultMaterial_16 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_16), (void*)L_10);
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
		__this->___tempMaterial_15 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_15), (void*)L_15);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___tempMaterial_15;
		NullCheck(L_16);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_16, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_17 = __this->___CanvasSpriteRenderer_18;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_19 = __this->___CanvasSpriteRenderer_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___tempMaterial_15;
		NullCheck(L_19);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_19, L_20, NULL);
		return;
	}

IL_00ac:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = __this->___CanvasImage_17;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_23 = __this->___CanvasImage_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = __this->___tempMaterial_15;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_29 = __this->___CanvasSpriteRenderer_18;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_31 = __this->___CanvasSpriteRenderer_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		NullCheck(L_31);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_31, L_32, NULL);
		return;
	}

IL_010e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33 = __this->___CanvasImage_17;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = __this->___CanvasImage_17;
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
// System.Void _2dxFX_AL_Hologram::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram__ctor_m04619D82EF710035C0AEE9739E104E0D7EE1D180 (_2dxFX_AL_Hologram_tBE6D716DB286DC5C286069E4E1B5953F840B6BDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C9FE59107EA22CB5BF9873BA23E75026C8EE8AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Hologram";
		__this->___shader_9 = _stringLiteral9C9FE59107EA22CB5BF9873BA23E75026C8EE8AD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral9C9FE59107EA22CB5BF9873BA23E75026C8EE8AD);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0, 4)] public float Distortion = 1.0f;
		__this->___Distortion_11 = (1.0f);
		// [HideInInspector] public float Speed = 1;
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
// System.Void _2dxFX_AL_Hologram2::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram2_Awake_mEBAC9061B9A2FAEBB1982884DB871D02354666DA (_2dxFX_AL_Hologram2_tB3591BD5FDE717B9008C35A48987AB0199E10356* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Hologram2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram2_Start_m59C2FB04B7E5765729CFE7596FB8DE2777949D9E (_2dxFX_AL_Hologram2_tB3591BD5FDE717B9008C35A48987AB0199E10356* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_14 = 0;
		// XUpdate();
		_2dxFX_AL_Hologram2_XUpdate_m5C77F7059B704E7E124D7CB9CA0498D7F16A5153(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Hologram2::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram2_CallUpdate_mF43836C0B02042720142A0226DDF374F9E4BFB4E (_2dxFX_AL_Hologram2_tB3591BD5FDE717B9008C35A48987AB0199E10356* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Hologram2_XUpdate_m5C77F7059B704E7E124D7CB9CA0498D7F16A5153(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Hologram2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram2_Update_mC6C650809F0B79B543A5138728F9ED68BFFAD92D (_2dxFX_AL_Hologram2_tB3591BD5FDE717B9008C35A48987AB0199E10356* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Hologram2_XUpdate_m5C77F7059B704E7E124D7CB9CA0498D7F16A5153(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Hologram2::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram2_XUpdate_m5C77F7059B704E7E124D7CB9CA0498D7F16A5153 (_2dxFX_AL_Hologram2_tB3591BD5FDE717B9008C35A48987AB0199E10356* __this, const RuntimeMethod* method) 
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
			goto IL_066f;
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
			goto IL_05d0;
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
		// _TimeX += Time.deltaTime * Speed;
		float L_139 = __this->____TimeX_12;
		float L_140;
		L_140 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_141 = __this->___Speed_13;
		__this->____TimeX_12 = ((float)il2cpp_codegen_add(L_139, ((float)il2cpp_codegen_multiply(L_140, L_141))));
		// if (_TimeX > 100) _TimeX = 0;
		float L_142 = __this->____TimeX_12;
		if ((!(((float)L_142) > ((float)(100.0f)))))
		{
			goto IL_0593;
		}
	}
	{
		// if (_TimeX > 100) _TimeX = 0;
		__this->____TimeX_12 = (0.0f);
	}

IL_0593:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Distortion);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_143 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_143);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_144;
		L_144 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_143, NULL);
		float L_145 = __this->___Distortion_11;
		NullCheck(L_144);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_144, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_145, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_TimeX", 1f + _TimeX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_146 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_146);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_147;
		L_147 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_146, NULL);
		float L_148 = __this->____TimeX_12;
		NullCheck(L_147);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_147, _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC, ((float)il2cpp_codegen_add((1.0f), L_148)), NULL);
		return;
	}

IL_05d0:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_149 = __this->___CanvasImage_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_150;
		L_150 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_149, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_150)
		{
			goto IL_066f;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_151 = __this->___CanvasImage_17;
		NullCheck(L_151);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_152;
		L_152 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_151);
		float L_153 = __this->____Alpha_10;
		NullCheck(L_152);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_152, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_153)), NULL);
		// _TimeX += Time.deltaTime * Speed;
		float L_154 = __this->____TimeX_12;
		float L_155;
		L_155 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_156 = __this->___Speed_13;
		__this->____TimeX_12 = ((float)il2cpp_codegen_add(L_154, ((float)il2cpp_codegen_multiply(L_155, L_156))));
		// if (_TimeX > 100) _TimeX = 0;
		float L_157 = __this->____TimeX_12;
		if ((!(((float)L_157) > ((float)(100.0f)))))
		{
			goto IL_0633;
		}
	}
	{
		// if (_TimeX > 100) _TimeX = 0;
		__this->____TimeX_12 = (0.0f);
	}

IL_0633:
	{
		// CanvasImage.material.SetFloat("_Distortion", Distortion);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_158 = __this->___CanvasImage_17;
		NullCheck(L_158);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_159;
		L_159 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_158);
		float L_160 = __this->___Distortion_11;
		NullCheck(L_159);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_159, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_160, NULL);
		// CanvasImage.material.SetFloat("_TimeX", 1f + _TimeX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_161 = __this->___CanvasImage_17;
		NullCheck(L_161);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_162;
		L_162 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_161);
		float L_163 = __this->____TimeX_12;
		NullCheck(L_162);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_162, _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC, ((float)il2cpp_codegen_add((1.0f), L_163)), NULL);
	}

IL_066f:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Hologram2::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram2_OnDestroy_m5D2E3CF9B08D3B1B1ABE6EE6F5AD925C80A5BD44 (_2dxFX_AL_Hologram2_tB3591BD5FDE717B9008C35A48987AB0199E10356* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Hologram2::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram2_OnDisable_mC5314F540A4488B6D2A8A42BCE745E103576F257 (_2dxFX_AL_Hologram2_tB3591BD5FDE717B9008C35A48987AB0199E10356* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Hologram2::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram2_OnEnable_m05312E8230700FE758B23E47A46EEE212CEB189B (_2dxFX_AL_Hologram2_tB3591BD5FDE717B9008C35A48987AB0199E10356* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Hologram2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram2__ctor_m511F0415A88B116CF9BA5A3AD167228CBF1D3690 (_2dxFX_AL_Hologram2_tB3591BD5FDE717B9008C35A48987AB0199E10356* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA4153E372A2DC6991D42BAC5BACBFD2980D8132);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Hologram2";
		__this->___shader_9 = _stringLiteralFA4153E372A2DC6991D42BAC5BACBFD2980D8132;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralFA4153E372A2DC6991D42BAC5BACBFD2980D8132);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0, 4)] public float Distortion = 1.0f;
		__this->___Distortion_11 = (1.0f);
		// [HideInInspector] public float Speed = 1;
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
// System.Void _2dxFX_AL_Hologram3::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram3_Awake_m83534143F3449EEC0ED28F75C07E15D247709BF7 (_2dxFX_AL_Hologram3_t0054DD9FC0AC4FF2661BE78D2CDFD17255103918* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Hologram3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram3_Start_m79F4B50DA2B6B668F7468046179F1AEC47067750 (_2dxFX_AL_Hologram3_t0054DD9FC0AC4FF2661BE78D2CDFD17255103918* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_15 = 0;
		// XUpdate();
		_2dxFX_AL_Hologram3_XUpdate_m762124E4AEE4380B0E51BB84434507BD77CAD6FD(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Hologram3::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram3_CallUpdate_m63F48521A11B62A3BD3EF4D98C50CDBCE6801C83 (_2dxFX_AL_Hologram3_t0054DD9FC0AC4FF2661BE78D2CDFD17255103918* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Hologram3_XUpdate_m762124E4AEE4380B0E51BB84434507BD77CAD6FD(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Hologram3::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram3_Update_mA7F6425A7123BDDC7E1AE26F47E6D0975E43ADE1 (_2dxFX_AL_Hologram3_t0054DD9FC0AC4FF2661BE78D2CDFD17255103918* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Hologram3_XUpdate_m762124E4AEE4380B0E51BB84434507BD77CAD6FD(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Hologram3::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram3_XUpdate_m762124E4AEE4380B0E51BB84434507BD77CAD6FD (_2dxFX_AL_Hologram3_t0054DD9FC0AC4FF2661BE78D2CDFD17255103918* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3);
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
			goto IL_06a5;
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
			goto IL_05eb;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_19;
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
		goto IL_02bc;
	}

IL_0240:
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
		goto IL_02bc;
	}

IL_0279:
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

IL_0562:
	{
		// _TimeX += Time.deltaTime * Speed;
		float L_139 = __this->____TimeX_12;
		float L_140;
		L_140 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_141 = __this->___Speed_13;
		__this->____TimeX_12 = ((float)il2cpp_codegen_add(L_139, ((float)il2cpp_codegen_multiply(L_140, L_141))));
		// if (_TimeX > 100) _TimeX = 0;
		float L_142 = __this->____TimeX_12;
		if ((!(((float)L_142) > ((float)(100.0f)))))
		{
			goto IL_0593;
		}
	}
	{
		// if (_TimeX > 100) _TimeX = 0;
		__this->____TimeX_12 = (0.0f);
	}

IL_0593:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Distortion);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_143 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_143);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_144;
		L_144 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_143, NULL);
		float L_145 = __this->___Distortion_11;
		NullCheck(L_144);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_144, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_145, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_TimeX", 1f + _TimeX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_146 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_146);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_147;
		L_147 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_146, NULL);
		float L_148 = __this->____TimeX_12;
		NullCheck(L_147);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_147, _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC, ((float)il2cpp_codegen_add((1.0f), L_148)), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetColor("_ColorX", _ColorX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_149 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_149);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_150;
		L_150 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_149, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_151 = __this->____ColorX_14;
		NullCheck(L_150);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_150, _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227, L_151, NULL);
		return;
	}

IL_05eb:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_152 = __this->___CanvasImage_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_153;
		L_153 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_152, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_153)
		{
			goto IL_06a5;
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
		// _TimeX += Time.deltaTime * Speed;
		float L_157 = __this->____TimeX_12;
		float L_158;
		L_158 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_159 = __this->___Speed_13;
		__this->____TimeX_12 = ((float)il2cpp_codegen_add(L_157, ((float)il2cpp_codegen_multiply(L_158, L_159))));
		// if (_TimeX > 100) _TimeX = 0;
		float L_160 = __this->____TimeX_12;
		if ((!(((float)L_160) > ((float)(100.0f)))))
		{
			goto IL_064e;
		}
	}
	{
		// if (_TimeX > 100) _TimeX = 0;
		__this->____TimeX_12 = (0.0f);
	}

IL_064e:
	{
		// CanvasImage.material.SetFloat("_Distortion", Distortion);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_161 = __this->___CanvasImage_18;
		NullCheck(L_161);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_162;
		L_162 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_161);
		float L_163 = __this->___Distortion_11;
		NullCheck(L_162);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_162, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_163, NULL);
		// CanvasImage.material.SetFloat("_TimeX", 1f + _TimeX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_164 = __this->___CanvasImage_18;
		NullCheck(L_164);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_165;
		L_165 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_164);
		float L_166 = __this->____TimeX_12;
		NullCheck(L_165);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_165, _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC, ((float)il2cpp_codegen_add((1.0f), L_166)), NULL);
		// CanvasImage.material.SetColor("_ColorX", _ColorX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_167 = __this->___CanvasImage_18;
		NullCheck(L_167);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_168;
		L_168 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_167);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_169 = __this->____ColorX_14;
		NullCheck(L_168);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_168, _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227, L_169, NULL);
	}

IL_06a5:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Hologram3::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram3_OnDestroy_m1468FCD3AEC55397CB1B42619A22273D9E8BE3D8 (_2dxFX_AL_Hologram3_t0054DD9FC0AC4FF2661BE78D2CDFD17255103918* __this, const RuntimeMethod* method) 
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___CanvasImage_18;
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
		__this->___CanvasImage_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_18), (void*)L_6);
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_16;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___tempMaterial_16;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___defaultMaterial_17;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_16 = __this->___CanvasSpriteRenderer_19;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_18 = __this->___CanvasSpriteRenderer_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___defaultMaterial_17;
		NullCheck(L_18);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_18, L_19, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_19;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___CanvasImage_18;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___defaultMaterial_17;
		NullCheck(L_24);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_24, L_25);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_18;
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
// System.Void _2dxFX_AL_Hologram3::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram3_OnDisable_mFE8D2AAF048FA4AB55C7AB4F61BF1DFF5C96C722 (_2dxFX_AL_Hologram3_t0054DD9FC0AC4FF2661BE78D2CDFD17255103918* __this, const RuntimeMethod* method) 
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___CanvasImage_18;
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
		__this->___CanvasImage_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_18), (void*)L_6);
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___defaultMaterial_17;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_19;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___defaultMaterial_17;
		NullCheck(L_13);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_13, L_14, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_15 = __this->___CanvasSpriteRenderer_19;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_18;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___defaultMaterial_17;
		NullCheck(L_19);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_19, L_20);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = __this->___CanvasImage_18;
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
// System.Void _2dxFX_AL_Hologram3::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram3_OnEnable_mFA066A9D024923510C9E525EF5F6AED9A2DE2B90 (_2dxFX_AL_Hologram3_t0054DD9FC0AC4FF2661BE78D2CDFD17255103918* __this, const RuntimeMethod* method) 
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___CanvasImage_18;
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
		__this->___CanvasImage_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_18), (void*)L_6);
	}

IL_0032:
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_17;
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
		__this->___defaultMaterial_17 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_17), (void*)L_10);
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
		__this->___tempMaterial_16 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_16), (void*)L_15);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___tempMaterial_16;
		NullCheck(L_16);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_16, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_17 = __this->___CanvasSpriteRenderer_19;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_19 = __this->___CanvasSpriteRenderer_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___tempMaterial_16;
		NullCheck(L_19);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_19, L_20, NULL);
		return;
	}

IL_00ac:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = __this->___CanvasImage_18;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_23 = __this->___CanvasImage_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = __this->___tempMaterial_16;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_29 = __this->___CanvasSpriteRenderer_19;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_31 = __this->___CanvasSpriteRenderer_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___ForceMaterial_4;
		NullCheck(L_31);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_31, L_32, NULL);
		return;
	}

IL_010e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33 = __this->___CanvasImage_18;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = __this->___CanvasImage_18;
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
// System.Void _2dxFX_AL_Hologram3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Hologram3__ctor_m8D68A419D0F4F9422091387DA8C5A0E06655AA7B (_2dxFX_AL_Hologram3_t0054DD9FC0AC4FF2661BE78D2CDFD17255103918* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02A09A0CEAC9ECC2E67F366C57AB8FF2FAB209B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Hologram3";
		__this->___shader_9 = _stringLiteralE02A09A0CEAC9ECC2E67F366C57AB8FF2FAB209B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralE02A09A0CEAC9ECC2E67F366C57AB8FF2FAB209B);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0, 4)] public float Distortion = 1.0f;
		__this->___Distortion_11 = (1.0f);
		// [HideInInspector] public float Speed = 1;
		__this->___Speed_13 = (1.0f);
		// [HideInInspector] public Color _ColorX = new Color(1, 1, 1, 1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->____ColorX_14 = L_0;
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
// System.Void _2dxFX_AL_HSV::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_HSV_Awake_mDDE75AF97D425AF467E3667B9C2A165C8FFF403E (_2dxFX_AL_HSV_tE3B0F857DC40BC4B629C3363F33370F69BC10AF7* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_HSV::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_HSV_Start_mE1431E7EC6D0ED712310CD0579ABFB021802B4EF (_2dxFX_AL_HSV_tE3B0F857DC40BC4B629C3363F33370F69BC10AF7* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_14 = 0;
		// XUpdate();
		_2dxFX_AL_HSV_XUpdate_m18D4546B20AA0747AD519E66650019E8B70720E4(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_HSV::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_HSV_CallUpdate_m1ECE9CD5C5EF27DB71D602A823564642095E42AA (_2dxFX_AL_HSV_tE3B0F857DC40BC4B629C3363F33370F69BC10AF7* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_HSV_XUpdate_m18D4546B20AA0747AD519E66650019E8B70720E4(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_HSV::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_HSV_Update_mA0F24AAEC960F847928A8A9DE1EEC4C6752CAFDB (_2dxFX_AL_HSV_tE3B0F857DC40BC4B629C3363F33370F69BC10AF7* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_HSV_XUpdate_m18D4546B20AA0747AD519E66650019E8B70720E4(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_HSV::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_HSV_XUpdate_m18D4546B20AA0747AD519E66650019E8B70720E4 (_2dxFX_AL_HSV_tE3B0F857DC40BC4B629C3363F33370F69BC10AF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0009BF01CFB4657E9EC895B1FBB478831AD13CA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CFC2B48D932FEF52252855F81D3970C490F2095);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E94BD1050374F96F444E696EECC1EFAC118519);
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
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_HueShift", _HueShift);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->____HueShift_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral0009BF01CFB4657E9EC895B1FBB478831AD13CA0, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Sat", _Saturation);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->____Saturation_12;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteralC0E94BD1050374F96F444E696EECC1EFAC118519, L_144, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Val", _ValueBrightness);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_145 = __this->___CanvasSpriteRenderer_18;
		NullCheck(L_145);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146;
		L_146 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_145, NULL);
		float L_147 = __this->____ValueBrightness_13;
		NullCheck(L_146);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_146, _stringLiteral6CFC2B48D932FEF52252855F81D3970C490F2095, L_147, NULL);
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
		// CanvasImage.material.SetFloat("_HueShift", _HueShift);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_153 = __this->___CanvasImage_17;
		NullCheck(L_153);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154;
		L_154 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_153);
		float L_155 = __this->____HueShift_11;
		NullCheck(L_154);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_154, _stringLiteral0009BF01CFB4657E9EC895B1FBB478831AD13CA0, L_155, NULL);
		// CanvasImage.material.SetFloat("_Sat", _Saturation);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_156 = __this->___CanvasImage_17;
		NullCheck(L_156);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_157;
		L_157 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_156);
		float L_158 = __this->____Saturation_12;
		NullCheck(L_157);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_157, _stringLiteralC0E94BD1050374F96F444E696EECC1EFAC118519, L_158, NULL);
		// CanvasImage.material.SetFloat("_Val", _ValueBrightness);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_159 = __this->___CanvasImage_17;
		NullCheck(L_159);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160;
		L_160 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_159);
		float L_161 = __this->____ValueBrightness_13;
		NullCheck(L_160);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_160, _stringLiteral6CFC2B48D932FEF52252855F81D3970C490F2095, L_161, NULL);
	}

IL_0634:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_HSV::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_HSV_OnDestroy_m39FD1155BDF77BF4AF9935237D45D595282D090E (_2dxFX_AL_HSV_tE3B0F857DC40BC4B629C3363F33370F69BC10AF7* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_HSV::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_HSV_OnDisable_mFE6B651AEDA006F5D416289D6B92070CE0311F7E (_2dxFX_AL_HSV_tE3B0F857DC40BC4B629C3363F33370F69BC10AF7* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_HSV::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_HSV_OnEnable_mD913C4212444A01F1837866DC1D69519FEB1BC0E (_2dxFX_AL_HSV_tE3B0F857DC40BC4B629C3363F33370F69BC10AF7* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_HSV::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_HSV__ctor_m34F72FD8708605D321FD6193BFA7B766B072812E (_2dxFX_AL_HSV_tE3B0F857DC40BC4B629C3363F33370F69BC10AF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37D8ACB82A2A2CF09EE926D8399F8333BD25E3E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/HSV";
		__this->___shader_9 = _stringLiteral37D8ACB82A2A2CF09EE926D8399F8333BD25E3E3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral37D8ACB82A2A2CF09EE926D8399F8333BD25E3E3);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0, 360)] public float _HueShift = 180f;
		__this->____HueShift_11 = (180.0f);
		// [HideInInspector] [Range(-2, 2)] public float _Saturation = 1f;
		__this->____Saturation_12 = (1.0f);
		// [HideInInspector] [Range(-2, 2)] public float _ValueBrightness = 1f;
		__this->____ValueBrightness_13 = (1.0f);
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
// System.Void _2dxFX_AL_Ice::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ice_Awake_m894B6072255B9EF0F5539D1A1E1850BB9D570ACB (_2dxFX_AL_Ice_tD16EC95AABC4FFF77D42E915BCBEC42DD3E1E206* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Ice::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ice_Start_mBDB3C125147E97B30E46DA250C27E4B9A3D418A2 (_2dxFX_AL_Ice_tD16EC95AABC4FFF77D42E915BCBEC42DD3E1E206* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Ice_XUpdate_m0ECC2D759F020D451C55CE692761B06CAE644979(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Ice::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ice_CallUpdate_m7A6EBFB5D6051CD8C0EE5FDA49B5F33D0A99DA3B (_2dxFX_AL_Ice_tD16EC95AABC4FFF77D42E915BCBEC42DD3E1E206* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Ice_XUpdate_m0ECC2D759F020D451C55CE692761B06CAE644979(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Ice::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ice_Update_m7A11D4BC4B4663C0AB1CC6051A278BECA4B81FAB (_2dxFX_AL_Ice_tD16EC95AABC4FFF77D42E915BCBEC42DD3E1E206* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Ice_XUpdate_m0ECC2D759F020D451C55CE692761B06CAE644979(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Ice::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ice_XUpdate_m0ECC2D759F020D451C55CE692761B06CAE644979 (_2dxFX_AL_Ice_tD16EC95AABC4FFF77D42E915BCBEC42DD3E1E206* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Ice::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ice_OnDestroy_m0C9105093BEBBA3AC1F4CC93F2A87A8717232CED (_2dxFX_AL_Ice_tD16EC95AABC4FFF77D42E915BCBEC42DD3E1E206* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Ice::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ice_OnDisable_m1EDC802B963E83E20FA826087807D8F49E42109C (_2dxFX_AL_Ice_tD16EC95AABC4FFF77D42E915BCBEC42DD3E1E206* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Ice::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ice_OnEnable_m21A1FB5FF243FE785763BF2EF989432AA41ADBE4 (_2dxFX_AL_Ice_tD16EC95AABC4FFF77D42E915BCBEC42DD3E1E206* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Ice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Ice__ctor_mEBF9A9041334BCAFB119B06AAD3E6DD67B43D166 (_2dxFX_AL_Ice_tD16EC95AABC4FFF77D42E915BCBEC42DD3E1E206* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACD021204FEB16401A7ABB8BCA7B353D452287D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Ice";
		__this->___shader_9 = _stringLiteralACD021204FEB16401A7ABB8BCA7B353D452287D2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralACD021204FEB16401A7ABB8BCA7B353D452287D2);
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
