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
// _2dxFX_AL_PlasmaShield
struct _2dxFX_AL_PlasmaShield_tC3FA5A8A6BEFCE1B2FE038F1C9980BB161D482A3;
// _2dxFX_AL_Posterize
struct _2dxFX_AL_Posterize_t02CF1D49BFE3CB257C1C2DD39B4D68B8983066EB;
// _2dxFX_AL_SandFX
struct _2dxFX_AL_SandFX_tF88D5195E513F71FFF549A42CF134C3688AD6D65;
// _2dxFX_AL_Sepia
struct _2dxFX_AL_Sepia_t7B13D6B7E35C8927DCF5E72C07D20839F7EFCAEB;
// _2dxFX_AL_Sharpen
struct _2dxFX_AL_Sharpen_tEFB2AE6F7328594A3315842418EEDFB6FB537FD5;
// _2dxFX_AL_Shiny_Reflect
struct _2dxFX_AL_Shiny_Reflect_tC61402894DB58549BA1C9C2CCBEB58805E3247BC;
// _2dxFX_AL_SkyCloud
struct _2dxFX_AL_SkyCloud_tEFB292033502C4F240572629A7A1DD099371CE8E;
// _2dxFX_AL_Slim
struct _2dxFX_AL_Slim_tC2DC69186ABF044E3A8D8CFAE96EA1004EA4F234;
// _2dxFX_AL_Smoke
struct _2dxFX_AL_Smoke_t87455E28C2F7194B870B4BC34628C379260E0A30;
// _2dxFX_AL_StoneFX
struct _2dxFX_AL_StoneFX_t1E7B8E44414D37B45599A3A8343C000E10089753;
// _2dxFX_AL_Threshold
struct _2dxFX_AL_Threshold_t0C0144277D27F02D63C9E5915824FFB04E9FFE7A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _2DxFX_tCD46040614106090AED2D234E643795A67576439_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05D0EA256F35E24338851CD911ACA33A676223BC;
IL2CPP_EXTERN_C String_t* _stringLiteral069EBAC54B6E1338F3887C38B44DCB2AFB9A4DD5;
IL2CPP_EXTERN_C String_t* _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3;
IL2CPP_EXTERN_C String_t* _stringLiteral1B8F4235F56010C5600A8763B224E8156CBBC4E4;
IL2CPP_EXTERN_C String_t* _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E;
IL2CPP_EXTERN_C String_t* _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7;
IL2CPP_EXTERN_C String_t* _stringLiteral241A431514428BEFABD863C7FC19BE216839F377;
IL2CPP_EXTERN_C String_t* _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266;
IL2CPP_EXTERN_C String_t* _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75;
IL2CPP_EXTERN_C String_t* _stringLiteral3D76945758408F61C792EF2BCD6041E61AD3FC51;
IL2CPP_EXTERN_C String_t* _stringLiteral455192F2C6C0DDD922218931AB63F3F8AB307544;
IL2CPP_EXTERN_C String_t* _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25;
IL2CPP_EXTERN_C String_t* _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E;
IL2CPP_EXTERN_C String_t* _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227;
IL2CPP_EXTERN_C String_t* _stringLiteral595F9F334249121ED1FB4ACBA1BBA930D7E5DAFA;
IL2CPP_EXTERN_C String_t* _stringLiteral59861356BAB5171272E157858059C1801D7D5E5D;
IL2CPP_EXTERN_C String_t* _stringLiteral5CE36D1049E621945C0048E2ACEBBD3BAA0E02B3;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1;
IL2CPP_EXTERN_C String_t* _stringLiteral8079F30FC14D3057FE39610A9AA6E9D3963559AC;
IL2CPP_EXTERN_C String_t* _stringLiteral807F0819FAC935341E63DF4D4202E53A499C0B94;
IL2CPP_EXTERN_C String_t* _stringLiteral877B02515584E67B57946246F931E4FB9A50C8C4;
IL2CPP_EXTERN_C String_t* _stringLiteral94A9FD75E3B43313C1349C20C8A0ED86E1AA30E8;
IL2CPP_EXTERN_C String_t* _stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9E34DCE3647EC226E08408747937BFDEA3E1FE8C;
IL2CPP_EXTERN_C String_t* _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F;
IL2CPP_EXTERN_C String_t* _stringLiteralAC5FA76BD402040C0453625EC15A8C92646058CE;
IL2CPP_EXTERN_C String_t* _stringLiteralAC6DD94E57DCD6CD3535C8E5FD39BA6E772F0394;
IL2CPP_EXTERN_C String_t* _stringLiteralB3A4DC53AD4A52079643D1869641BAC169AEB805;
IL2CPP_EXTERN_C String_t* _stringLiteralC1C6DD44D26357B4E5DE53D7A9DEAFACC6A16C63;
IL2CPP_EXTERN_C String_t* _stringLiteralC2231BDF58939A1EAEFC4F67E72A1561ABA6B1C3;
IL2CPP_EXTERN_C String_t* _stringLiteralC63470462A4EDCCCDB7FDC01AA2B1CFC3AF27229;
IL2CPP_EXTERN_C String_t* _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527;
IL2CPP_EXTERN_C String_t* _stringLiteralD5CD11587E63D0C907B3A17FB5FCE84E0A54D0D3;
IL2CPP_EXTERN_C String_t* _stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF;
IL2CPP_EXTERN_C String_t* _stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F;
IL2CPP_EXTERN_C String_t* _stringLiteralE1995802ABE6A3EC346C8751E74E33799D0F46B4;
IL2CPP_EXTERN_C String_t* _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A;
IL2CPP_EXTERN_C String_t* _stringLiteralEE106F10DD6FF6F66D3F16241D2C9C7A783E7696;
IL2CPP_EXTERN_C String_t* _stringLiteralF339292529EAD5C67FF529A82E470E1DEAF24438;
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

// _2dxFX_AL_PlasmaShield
struct _2dxFX_AL_PlasmaShield_tC3FA5A8A6BEFCE1B2FE038F1C9980BB161D482A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_PlasmaShield::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_PlasmaShield::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_PlasmaShield::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_PlasmaShield::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_PlasmaShield::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_PlasmaShield::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_PlasmaShield::_Alpha
	float ____Alpha_10;
	// UnityEngine.Color _2dxFX_AL_PlasmaShield::_ColorX
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____ColorX_11;
	// System.Single _2dxFX_AL_PlasmaShield::_Offset
	float ____Offset_12;
	// System.Single _2dxFX_AL_PlasmaShield::_TimeX
	float ____TimeX_13;
	// System.Single _2dxFX_AL_PlasmaShield::Speed
	float ___Speed_14;
	// System.Int32 _2dxFX_AL_PlasmaShield::ShaderChange
	int32_t ___ShaderChange_15;
	// UnityEngine.Material _2dxFX_AL_PlasmaShield::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_16;
	// UnityEngine.Material _2dxFX_AL_PlasmaShield::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_17;
	// UnityEngine.UI.Image _2dxFX_AL_PlasmaShield::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_18;
	// UnityEngine.SpriteRenderer _2dxFX_AL_PlasmaShield::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_19;
	// System.Boolean _2dxFX_AL_PlasmaShield::ActiveUpdate
	bool ___ActiveUpdate_20;
};

// _2dxFX_AL_Posterize
struct _2dxFX_AL_Posterize_t02CF1D49BFE3CB257C1C2DD39B4D68B8983066EB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Posterize::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Posterize::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Posterize::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Posterize::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Posterize::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Posterize::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Posterize::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Posterize::Posterize
	float ___Posterize_11;
	// System.Int32 _2dxFX_AL_Posterize::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_AL_Posterize::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_AL_Posterize::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_AL_Posterize::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Posterize::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_AL_Posterize::ActiveUpdate
	bool ___ActiveUpdate_17;
};

// _2dxFX_AL_SandFX
struct _2dxFX_AL_SandFX_tF88D5195E513F71FFF549A42CF134C3688AD6D65  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_SandFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_SandFX::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_SandFX::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_SandFX::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_SandFX::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_SandFX::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_SandFX::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_SandFX::Sand
	float ___Sand_11;
	// System.Int32 _2dxFX_AL_SandFX::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_AL_SandFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_AL_SandFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_AL_SandFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_AL_SandFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_AL_SandFX::ActiveUpdate
	bool ___ActiveUpdate_17;
};

// _2dxFX_AL_Sepia
struct _2dxFX_AL_Sepia_t7B13D6B7E35C8927DCF5E72C07D20839F7EFCAEB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Sepia::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Sepia::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Sepia::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Sepia::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Sepia::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Sepia::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Sepia::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Sepia::_EffectAmount
	float ____EffectAmount_11;
	// System.Int32 _2dxFX_AL_Sepia::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_AL_Sepia::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_AL_Sepia::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_AL_Sepia::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Sepia::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_AL_Sepia::ActiveUpdate
	bool ___ActiveUpdate_17;
};

// _2dxFX_AL_Sharpen
struct _2dxFX_AL_Sharpen_tEFB2AE6F7328594A3315842418EEDFB6FB537FD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Sharpen::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Sharpen::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Sharpen::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Sharpen::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Sharpen::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Sharpen::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Sharpen::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Sharpen::Sharpen
	float ___Sharpen_11;
	// System.Int32 _2dxFX_AL_Sharpen::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_AL_Sharpen::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_AL_Sharpen::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_AL_Sharpen::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Sharpen::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_AL_Sharpen::ActiveUpdate
	bool ___ActiveUpdate_17;
};

// _2dxFX_AL_Shiny_Reflect
struct _2dxFX_AL_Shiny_Reflect_tC61402894DB58549BA1C9C2CCBEB58805E3247BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Shiny_Reflect::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Shiny_Reflect::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Shiny_Reflect::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Shiny_Reflect::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Shiny_Reflect::BlendMode
	int32_t ___BlendMode_8;
	// UnityEngine.Texture2D _2dxFX_AL_Shiny_Reflect::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_9;
	// System.String _2dxFX_AL_Shiny_Reflect::shader
	String_t* ___shader_10;
	// System.Single _2dxFX_AL_Shiny_Reflect::_Alpha
	float ____Alpha_11;
	// System.Single _2dxFX_AL_Shiny_Reflect::Light
	float ___Light_12;
	// System.Single _2dxFX_AL_Shiny_Reflect::LightSize
	float ___LightSize_13;
	// System.Boolean _2dxFX_AL_Shiny_Reflect::UseShinyCurve
	bool ___UseShinyCurve_14;
	// UnityEngine.AnimationCurve _2dxFX_AL_Shiny_Reflect::ShinyLightCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___ShinyLightCurve_15;
	// System.Single _2dxFX_AL_Shiny_Reflect::AnimationSpeedReduction
	float ___AnimationSpeedReduction_16;
	// System.Single _2dxFX_AL_Shiny_Reflect::Intensity
	float ___Intensity_17;
	// System.Single _2dxFX_AL_Shiny_Reflect::OnlyLight
	float ___OnlyLight_18;
	// System.Single _2dxFX_AL_Shiny_Reflect::LightBump
	float ___LightBump_19;
	// System.Single _2dxFX_AL_Shiny_Reflect::ShinyLightCurveTime
	float ___ShinyLightCurveTime_20;
	// System.Int32 _2dxFX_AL_Shiny_Reflect::ShaderChange
	int32_t ___ShaderChange_21;
	// UnityEngine.Material _2dxFX_AL_Shiny_Reflect::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_22;
	// UnityEngine.Material _2dxFX_AL_Shiny_Reflect::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_23;
	// UnityEngine.UI.Image _2dxFX_AL_Shiny_Reflect::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_24;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Shiny_Reflect::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_25;
	// System.Boolean _2dxFX_AL_Shiny_Reflect::ActiveUpdate
	bool ___ActiveUpdate_26;
};

// _2dxFX_AL_SkyCloud
struct _2dxFX_AL_SkyCloud_tEFB292033502C4F240572629A7A1DD099371CE8E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_SkyCloud::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_SkyCloud::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_SkyCloud::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_SkyCloud::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_SkyCloud::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_SkyCloud::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_SkyCloud::_Alpha
	float ____Alpha_10;
	// UnityEngine.Texture2D _2dxFX_AL_SkyCloud::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_11;
	// System.Single _2dxFX_AL_SkyCloud::_OffsetX
	float ____OffsetX_12;
	// System.Single _2dxFX_AL_SkyCloud::_OffsetY
	float ____OffsetY_13;
	// System.Single _2dxFX_AL_SkyCloud::_Zoom
	float ____Zoom_14;
	// System.Single _2dxFX_AL_SkyCloud::_Intensity
	float ____Intensity_15;
	// System.Boolean _2dxFX_AL_SkyCloud::_AutoScrollX
	bool ____AutoScrollX_16;
	// System.Single _2dxFX_AL_SkyCloud::_AutoScrollSpeedX
	float ____AutoScrollSpeedX_17;
	// System.Boolean _2dxFX_AL_SkyCloud::_AutoScrollY
	bool ____AutoScrollY_18;
	// System.Single _2dxFX_AL_SkyCloud::_AutoScrollSpeedY
	float ____AutoScrollSpeedY_19;
	// System.Single _2dxFX_AL_SkyCloud::_AutoScrollCountX
	float ____AutoScrollCountX_20;
	// System.Single _2dxFX_AL_SkyCloud::_AutoScrollCountY
	float ____AutoScrollCountY_21;
	// System.Int32 _2dxFX_AL_SkyCloud::ShaderChange
	int32_t ___ShaderChange_22;
	// UnityEngine.Material _2dxFX_AL_SkyCloud::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_23;
	// UnityEngine.Material _2dxFX_AL_SkyCloud::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_24;
	// UnityEngine.UI.Image _2dxFX_AL_SkyCloud::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_25;
	// UnityEngine.SpriteRenderer _2dxFX_AL_SkyCloud::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_26;
	// System.Boolean _2dxFX_AL_SkyCloud::ActiveUpdate
	bool ___ActiveUpdate_27;
};

// _2dxFX_AL_Slim
struct _2dxFX_AL_Slim_tC2DC69186ABF044E3A8D8CFAE96EA1004EA4F234  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Slim::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Slim::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Slim::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Slim::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Slim::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Slim::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Slim::_Alpha
	float ____Alpha_10;
	// UnityEngine.Texture2D _2dxFX_AL_Slim::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_11;
	// System.Single _2dxFX_AL_Slim::TurnToSlim
	float ___TurnToSlim_12;
	// System.Single _2dxFX_AL_Slim::SlimDistortion
	float ___SlimDistortion_13;
	// System.Single _2dxFX_AL_Slim::Speed
	float ___Speed_14;
	// System.Single _2dxFX_AL_Slim::EValue
	float ___EValue_15;
	// System.Single _2dxFX_AL_Slim::Light
	float ___Light_16;
	// System.Int32 _2dxFX_AL_Slim::ShaderChange
	int32_t ___ShaderChange_17;
	// UnityEngine.Material _2dxFX_AL_Slim::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_18;
	// UnityEngine.Material _2dxFX_AL_Slim::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_19;
	// UnityEngine.UI.Image _2dxFX_AL_Slim::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_20;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Slim::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_21;
	// System.Boolean _2dxFX_AL_Slim::ActiveUpdate
	bool ___ActiveUpdate_22;
};

// _2dxFX_AL_Smoke
struct _2dxFX_AL_Smoke_t87455E28C2F7194B870B4BC34628C379260E0A30  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Smoke::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Smoke::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Smoke::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Smoke::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Smoke::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Smoke::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Smoke::_Alpha
	float ____Alpha_10;
	// UnityEngine.Texture2D _2dxFX_AL_Smoke::__MainTex2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* _____MainTex2_11;
	// System.Single _2dxFX_AL_Smoke::_Value1
	float ____Value1_12;
	// System.Single _2dxFX_AL_Smoke::_TurnToSmoke
	float ____TurnToSmoke_13;
	// System.Single _2dxFX_AL_Smoke::_Value3
	float ____Value3_14;
	// System.Single _2dxFX_AL_Smoke::_Value4
	float ____Value4_15;
	// UnityEngine.Color _2dxFX_AL_Smoke::_Color1
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____Color1_16;
	// UnityEngine.Color _2dxFX_AL_Smoke::_Color2
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____Color2_17;
	// System.Boolean _2dxFX_AL_Smoke::_AutoScrollX
	bool ____AutoScrollX_18;
	// System.Single _2dxFX_AL_Smoke::_AutoScrollSpeedX
	float ____AutoScrollSpeedX_19;
	// System.Boolean _2dxFX_AL_Smoke::_AutoScrollY
	bool ____AutoScrollY_20;
	// System.Single _2dxFX_AL_Smoke::_AutoScrollSpeedY
	float ____AutoScrollSpeedY_21;
	// System.Single _2dxFX_AL_Smoke::_AutoScrollCountX
	float ____AutoScrollCountX_22;
	// System.Single _2dxFX_AL_Smoke::_AutoScrollCountY
	float ____AutoScrollCountY_23;
	// System.Int32 _2dxFX_AL_Smoke::ShaderChange
	int32_t ___ShaderChange_24;
	// UnityEngine.Material _2dxFX_AL_Smoke::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_25;
	// UnityEngine.Material _2dxFX_AL_Smoke::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_26;
	// UnityEngine.UI.Image _2dxFX_AL_Smoke::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_27;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Smoke::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_28;
	// System.Boolean _2dxFX_AL_Smoke::ActiveUpdate
	bool ___ActiveUpdate_29;
};

// _2dxFX_AL_StoneFX
struct _2dxFX_AL_StoneFX_t1E7B8E44414D37B45599A3A8343C000E10089753  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_StoneFX::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_StoneFX::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_StoneFX::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_StoneFX::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_StoneFX::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_StoneFX::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_StoneFX::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_StoneFX::IntoStone
	float ___IntoStone_11;
	// System.Single _2dxFX_AL_StoneFX::Deep
	float ___Deep_12;
	// System.Int32 _2dxFX_AL_StoneFX::ShaderChange
	int32_t ___ShaderChange_13;
	// UnityEngine.Material _2dxFX_AL_StoneFX::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_14;
	// UnityEngine.Material _2dxFX_AL_StoneFX::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_15;
	// UnityEngine.UI.Image _2dxFX_AL_StoneFX::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_16;
	// UnityEngine.SpriteRenderer _2dxFX_AL_StoneFX::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_17;
	// System.Boolean _2dxFX_AL_StoneFX::ActiveUpdate
	bool ___ActiveUpdate_18;
};

// _2dxFX_AL_Threshold
struct _2dxFX_AL_Threshold_t0C0144277D27F02D63C9E5915824FFB04E9FFE7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material _2dxFX_AL_Threshold::ForceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ForceMaterial_4;
	// System.Boolean _2dxFX_AL_Threshold::ActiveChange
	bool ___ActiveChange_5;
	// System.Boolean _2dxFX_AL_Threshold::AddShadow
	bool ___AddShadow_6;
	// System.Boolean _2dxFX_AL_Threshold::ReceivedShadow
	bool ___ReceivedShadow_7;
	// System.Int32 _2dxFX_AL_Threshold::BlendMode
	int32_t ___BlendMode_8;
	// System.String _2dxFX_AL_Threshold::shader
	String_t* ___shader_9;
	// System.Single _2dxFX_AL_Threshold::_Alpha
	float ____Alpha_10;
	// System.Single _2dxFX_AL_Threshold::Threshold
	float ___Threshold_11;
	// System.Int32 _2dxFX_AL_Threshold::ShaderChange
	int32_t ___ShaderChange_12;
	// UnityEngine.Material _2dxFX_AL_Threshold::tempMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tempMaterial_13;
	// UnityEngine.Material _2dxFX_AL_Threshold::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_14;
	// UnityEngine.UI.Image _2dxFX_AL_Threshold::CanvasImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CanvasImage_15;
	// UnityEngine.SpriteRenderer _2dxFX_AL_Threshold::CanvasSpriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___CanvasSpriteRenderer_16;
	// System.Boolean _2dxFX_AL_Threshold::ActiveUpdate
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
// System.Void _2dxFX_AL_PlasmaShield::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaShield_XUpdate_m8B94F0E4BC543821C95562ABF811BE31080CB65B (_2dxFX_AL_PlasmaShield_tC3FA5A8A6BEFCE1B2FE038F1C9980BB161D482A3* __this, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
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
// System.Void _2dxFX_AL_Posterize::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Posterize_XUpdate_m2C7C1C968B427C1DA2F2404736248D78E559B248 (_2dxFX_AL_Posterize_t02CF1D49BFE3CB257C1C2DD39B4D68B8983066EB* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_SandFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SandFX_XUpdate_m522C22682356EE0C3779D7066EC50B9A946DF1F6 (_2dxFX_AL_SandFX_tF88D5195E513F71FFF549A42CF134C3688AD6D65* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Sepia::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sepia_XUpdate_mBC89FF74DA613D648BD6D47A5F5AE5BB50507BD6 (_2dxFX_AL_Sepia_t7B13D6B7E35C8927DCF5E72C07D20839F7EFCAEB* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Sharpen::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sharpen_XUpdate_m6B09D15319DC4E3BF54DD25E84CA42CB840D95FA (_2dxFX_AL_Sharpen_tEFB2AE6F7328594A3315842418EEDFB6FB537FD5* __this, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
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
// System.Void _2dxFX_AL_Shiny_Reflect::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Shiny_Reflect_XUpdate_mAD180C936CFD9B40F29FC4E56C12CD00564E4304 (_2dxFX_AL_Shiny_Reflect_tC61402894DB58549BA1C9C2CCBEB58805E3247BC* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_SkyCloud::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SkyCloud_XUpdate_m657BFDB988374E2F790A6DD8C07EDE8A979107FF (_2dxFX_AL_SkyCloud_tEFB292033502C4F240572629A7A1DD099371CE8E* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Slim::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Slim_XUpdate_m54AC594FE525268E17FB9EC0A882DEAE5B27A64E (_2dxFX_AL_Slim_tC2DC69186ABF044E3A8D8CFAE96EA1004EA4F234* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Smoke::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Smoke_XUpdate_m67C9E9FA2D47B23D8C803CD08BE36C7C1F8B999E (_2dxFX_AL_Smoke_t87455E28C2F7194B870B4BC34628C379260E0A30* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_StoneFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_StoneFX_XUpdate_m15A95F007E686262E1F8F318FBE2B289C5620C62 (_2dxFX_AL_StoneFX_t1E7B8E44414D37B45599A3A8343C000E10089753* __this, const RuntimeMethod* method) ;
// System.Void _2dxFX_AL_Threshold::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Threshold_XUpdate_m0D83C4A6E05ED691325D70D0B0E2E93D5C3A1AC1 (_2dxFX_AL_Threshold_t0C0144277D27F02D63C9E5915824FFB04E9FFE7A* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void _2dxFX_AL_PlasmaShield::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaShield_Awake_mC018DAC9FB94A2C0E0AFD2B01B0F8071A974423C (_2dxFX_AL_PlasmaShield_tC3FA5A8A6BEFCE1B2FE038F1C9980BB161D482A3* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_PlasmaShield::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaShield_Start_mD0B2AC1DFB80257AC01EDDBB8224C85562071CA9 (_2dxFX_AL_PlasmaShield_tC3FA5A8A6BEFCE1B2FE038F1C9980BB161D482A3* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_15 = 0;
		// XUpdate();
		_2dxFX_AL_PlasmaShield_XUpdate_m8B94F0E4BC543821C95562ABF811BE31080CB65B(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_PlasmaShield::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaShield_CallUpdate_m7E21C1509CD02C734F6FEE63580154AD3AF8FAEB (_2dxFX_AL_PlasmaShield_tC3FA5A8A6BEFCE1B2FE038F1C9980BB161D482A3* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_PlasmaShield_XUpdate_m8B94F0E4BC543821C95562ABF811BE31080CB65B(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_PlasmaShield::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaShield_Update_m7EEC8066780E55B9C7C100770444C57B14B3373F (_2dxFX_AL_PlasmaShield_tC3FA5A8A6BEFCE1B2FE038F1C9980BB161D482A3* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_PlasmaShield_XUpdate_m8B94F0E4BC543821C95562ABF811BE31080CB65B(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_PlasmaShield::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaShield_XUpdate_m8B94F0E4BC543821C95562ABF811BE31080CB65B (_2dxFX_AL_PlasmaShield_tC3FA5A8A6BEFCE1B2FE038F1C9980BB161D482A3* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
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
		// CanvasSpriteRenderer.sharedMaterial.SetColor("_ColorX", _ColorX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_19;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_141 = __this->____ColorX_11;
		NullCheck(L_140);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_140, _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227, L_141, NULL);
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
		// CanvasImage.material.SetColor("_ColorX", _ColorX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_157 = __this->___CanvasImage_18;
		NullCheck(L_157);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_158;
		L_158 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_157);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_159 = __this->____ColorX_11;
		NullCheck(L_158);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_158, _stringLiteral54C56A7C6B993AB55E721489E4C55D9686EB9227, L_159, NULL);
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
// System.Void _2dxFX_AL_PlasmaShield::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaShield_OnDestroy_m2488E614EE52CE0BF9B15EC019838B418B92CB29 (_2dxFX_AL_PlasmaShield_tC3FA5A8A6BEFCE1B2FE038F1C9980BB161D482A3* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_PlasmaShield::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaShield_OnDisable_m9E8BACE32DDF0AD1342E448D005AA8F077DBBEBE (_2dxFX_AL_PlasmaShield_tC3FA5A8A6BEFCE1B2FE038F1C9980BB161D482A3* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_PlasmaShield::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaShield_OnEnable_mE714AD025FBCEF7A156D8402567448FE59503B71 (_2dxFX_AL_PlasmaShield_tC3FA5A8A6BEFCE1B2FE038F1C9980BB161D482A3* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_PlasmaShield::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_PlasmaShield__ctor_m6DC3DA15A868FD5E8AC960128D4105AEE651834C (_2dxFX_AL_PlasmaShield_tC3FA5A8A6BEFCE1B2FE038F1C9980BB161D482A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3A4DC53AD4A52079643D1869641BAC169AEB805);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/PlasmaShield";
		__this->___shader_9 = _stringLiteralB3A4DC53AD4A52079643D1869641BAC169AEB805;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralB3A4DC53AD4A52079643D1869641BAC169AEB805);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] public Color _ColorX = new Color(1f, 1f, 1f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->____ColorX_11 = L_0;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void _2dxFX_AL_Posterize::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Posterize_Awake_mA47A94C2F7DA1959C79C024E71881C39A8E64DE5 (_2dxFX_AL_Posterize_t02CF1D49BFE3CB257C1C2DD39B4D68B8983066EB* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Posterize::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Posterize_Start_m59777E9561786ABBE9D2F8DC0658BDEC8C74089B (_2dxFX_AL_Posterize_t02CF1D49BFE3CB257C1C2DD39B4D68B8983066EB* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// XUpdate();
		_2dxFX_AL_Posterize_XUpdate_m2C7C1C968B427C1DA2F2404736248D78E559B248(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Posterize::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Posterize_CallUpdate_mE5ED6CED0E84056E6E5B88C61D133C591F622B1D (_2dxFX_AL_Posterize_t02CF1D49BFE3CB257C1C2DD39B4D68B8983066EB* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Posterize_XUpdate_m2C7C1C968B427C1DA2F2404736248D78E559B248(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Posterize::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Posterize_Update_m8C531CEC827DDBF210486E37FF84C21B56A84A10 (_2dxFX_AL_Posterize_t02CF1D49BFE3CB257C1C2DD39B4D68B8983066EB* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Posterize_XUpdate_m2C7C1C968B427C1DA2F2404736248D78E559B248(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Posterize::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Posterize_XUpdate_m2C7C1C968B427C1DA2F2404736248D78E559B248 (_2dxFX_AL_Posterize_t02CF1D49BFE3CB257C1C2DD39B4D68B8983066EB* __this, const RuntimeMethod* method) 
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
			goto IL_01b4;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_12;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01b4;
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
		goto IL_01ad;
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
			goto IL_01ad;
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
			goto IL_01ad;
		}
	}
	{
		// if (img.material == null) CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_51 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___tempMaterial_13;
		NullCheck(L_51);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_51, L_52);
	}

IL_01ad:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
	}

IL_01b4:
	{
		// if (ActiveChange)
		bool L_53 = __this->___ActiveChange_5;
		if (!L_53)
		{
			goto IL_05db;
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
			goto IL_0591;
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
			goto IL_028c;
		}
	}
	{
		bool L_60 = __this->___AddShadow_6;
		if (!L_60)
		{
			goto IL_028c;
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
			goto IL_0253;
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
		goto IL_02cf;
	}

IL_0253:
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
		goto IL_02cf;
	}

IL_028c:
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

IL_02cf:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_79 = __this->___BlendMode_8;
		if (L_79)
		{
			goto IL_031a;
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

IL_031a:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_86 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_86) == ((uint32_t)1))))
		{
			goto IL_0365;
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

IL_0365:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_93 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_93) == ((uint32_t)2))))
		{
			goto IL_03b0;
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

IL_03b0:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_100 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_100) == ((uint32_t)3))))
		{
			goto IL_03fb;
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

IL_03fb:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_107 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_107) == ((uint32_t)4))))
		{
			goto IL_0446;
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

IL_0446:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_114 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_114) == ((uint32_t)5))))
		{
			goto IL_0493;
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

IL_0493:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_121 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_121) == ((uint32_t)6))))
		{
			goto IL_04df;
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

IL_04df:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_128 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_128) == ((uint32_t)7))))
		{
			goto IL_052a;
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

IL_052a:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_135 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_135) == ((uint32_t)8))))
		{
			goto IL_0575;
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

IL_0575:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Posterize);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->___Posterize_11;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_144, NULL);
		return;
	}

IL_0591:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_145 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_146;
		L_146 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_145, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_146)
		{
			goto IL_05db;
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
		// CanvasImage.material.SetFloat("_Distortion", Posterize);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_150 = __this->___CanvasImage_15;
		NullCheck(L_150);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_151;
		L_151 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_150);
		float L_152 = __this->___Posterize_11;
		NullCheck(L_151);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_151, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_152, NULL);
	}

IL_05db:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Posterize::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Posterize_OnDestroy_mF22E255F318D428FB4811933C14AE7F538ABDC60 (_2dxFX_AL_Posterize_t02CF1D49BFE3CB257C1C2DD39B4D68B8983066EB* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Posterize::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Posterize_OnDisable_mF5C2885DF07D8E538536E9E0B2EB314EFC5684AF (_2dxFX_AL_Posterize_t02CF1D49BFE3CB257C1C2DD39B4D68B8983066EB* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Posterize::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Posterize_OnEnable_mEF0BB151D80FE058D3ED1D9DC88BF4DD5F76AAA1 (_2dxFX_AL_Posterize_t02CF1D49BFE3CB257C1C2DD39B4D68B8983066EB* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Posterize::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Posterize__ctor_m64E172AEED9187BCE411C7902FDD4A45E0B9CBDB (_2dxFX_AL_Posterize_t02CF1D49BFE3CB257C1C2DD39B4D68B8983066EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5CD11587E63D0C907B3A17FB5FCE84E0A54D0D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Posterize";
		__this->___shader_9 = _stringLiteralD5CD11587E63D0C907B3A17FB5FCE84E0A54D0D3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralD5CD11587E63D0C907B3A17FB5FCE84E0A54D0D3);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(1, 256)] public float Posterize = 120.0f;
		__this->___Posterize_11 = (120.0f);
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
// System.Void _2dxFX_AL_SandFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SandFX_Awake_m89C8693A76400373164AAA246C95C96B749A5AE2 (_2dxFX_AL_SandFX_tF88D5195E513F71FFF549A42CF134C3688AD6D65* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_SandFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SandFX_Start_m01D3C416553C4971746FA08CD2B76409D26298CA (_2dxFX_AL_SandFX_tF88D5195E513F71FFF549A42CF134C3688AD6D65* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// XUpdate();
		_2dxFX_AL_SandFX_XUpdate_m522C22682356EE0C3779D7066EC50B9A946DF1F6(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_SandFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SandFX_CallUpdate_mB5BC6E64572BB0D95261AE9BEAA9FE3601ACC3D3 (_2dxFX_AL_SandFX_tF88D5195E513F71FFF549A42CF134C3688AD6D65* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_SandFX_XUpdate_m522C22682356EE0C3779D7066EC50B9A946DF1F6(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_SandFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SandFX_Update_m530F2C43D25B9FE860AD8CF02E2DA0C6BC35E8F8 (_2dxFX_AL_SandFX_tF88D5195E513F71FFF549A42CF134C3688AD6D65* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_SandFX_XUpdate_m522C22682356EE0C3779D7066EC50B9A946DF1F6(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_SandFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SandFX_XUpdate_m522C22682356EE0C3779D7066EC50B9A946DF1F6 (_2dxFX_AL_SandFX_tF88D5195E513F71FFF549A42CF134C3688AD6D65* __this, const RuntimeMethod* method) 
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
			goto IL_01b4;
		}
	}
	{
		int32_t L_34 = __this->___ShaderChange_12;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01b4;
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
		goto IL_01ad;
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
			goto IL_01ad;
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
			goto IL_01ad;
		}
	}
	{
		// if (img.material == null) CanvasImage.material = tempMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_51 = __this->___CanvasImage_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___tempMaterial_13;
		NullCheck(L_51);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_51, L_52);
	}

IL_01ad:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
	}

IL_01b4:
	{
		// if (ActiveChange)
		bool L_53 = __this->___ActiveChange_5;
		if (!L_53)
		{
			goto IL_05db;
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
			goto IL_0591;
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
			goto IL_028c;
		}
	}
	{
		bool L_60 = __this->___AddShadow_6;
		if (!L_60)
		{
			goto IL_028c;
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
			goto IL_0253;
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
		goto IL_02cf;
	}

IL_0253:
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
		goto IL_02cf;
	}

IL_028c:
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

IL_02cf:
	{
		// if (BlendMode == 0) // Normal
		int32_t L_79 = __this->___BlendMode_8;
		if (L_79)
		{
			goto IL_031a;
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

IL_031a:
	{
		// if (BlendMode == 1) // Additive
		int32_t L_86 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_86) == ((uint32_t)1))))
		{
			goto IL_0365;
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

IL_0365:
	{
		// if (BlendMode == 2) // Darken
		int32_t L_93 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_93) == ((uint32_t)2))))
		{
			goto IL_03b0;
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

IL_03b0:
	{
		// if (BlendMode == 3) // Lighten
		int32_t L_100 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_100) == ((uint32_t)3))))
		{
			goto IL_03fb;
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

IL_03fb:
	{
		// if (BlendMode == 4) // Linear Burn
		int32_t L_107 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_107) == ((uint32_t)4))))
		{
			goto IL_0446;
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

IL_0446:
	{
		// if (BlendMode == 5) // Linear Dodge
		int32_t L_114 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_114) == ((uint32_t)5))))
		{
			goto IL_0493;
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

IL_0493:
	{
		// if (BlendMode == 6) // Multiply
		int32_t L_121 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_121) == ((uint32_t)6))))
		{
			goto IL_04df;
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

IL_04df:
	{
		// if (BlendMode == 7) // Soft Aditive
		int32_t L_128 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_128) == ((uint32_t)7))))
		{
			goto IL_052a;
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

IL_052a:
	{
		// if (BlendMode == 8) // 2x Multiplicative
		int32_t L_135 = __this->___BlendMode_8;
		if ((!(((uint32_t)L_135) == ((uint32_t)8))))
		{
			goto IL_0575;
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

IL_0575:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Sand);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->___Sand_11;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_144, NULL);
		return;
	}

IL_0591:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_145 = __this->___CanvasImage_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_146;
		L_146 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_145, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_146)
		{
			goto IL_05db;
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
		// CanvasImage.material.SetFloat("_Distortion", Sand);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_150 = __this->___CanvasImage_15;
		NullCheck(L_150);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_151;
		L_151 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_150);
		float L_152 = __this->___Sand_11;
		NullCheck(L_151);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_151, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_152, NULL);
	}

IL_05db:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_SandFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SandFX_OnDestroy_m567E409AE388B891D40DEAAD32199BFDDD531785 (_2dxFX_AL_SandFX_tF88D5195E513F71FFF549A42CF134C3688AD6D65* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_SandFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SandFX_OnDisable_mE464E4C7F653E274715E04290A4D7F8F1B6B79D3 (_2dxFX_AL_SandFX_tF88D5195E513F71FFF549A42CF134C3688AD6D65* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_SandFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SandFX_OnEnable_mD99F25398BF0EDBC2E4964053803FE55F57E99F2 (_2dxFX_AL_SandFX_tF88D5195E513F71FFF549A42CF134C3688AD6D65* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_SandFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SandFX__ctor_mA6E23E275358FC5E45CC5DAFAB3D56FFBA0FD683 (_2dxFX_AL_SandFX_tF88D5195E513F71FFF549A42CF134C3688AD6D65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE106F10DD6FF6F66D3F16241D2C9C7A783E7696);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/SandFX";
		__this->___shader_9 = _stringLiteralEE106F10DD6FF6F66D3F16241D2C9C7A783E7696;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralEE106F10DD6FF6F66D3F16241D2C9C7A783E7696);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.001f, 1f)] public float Sand = 1.0f;
		__this->___Sand_11 = (1.0f);
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
// System.Void _2dxFX_AL_Sepia::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sepia_Awake_m066D2A5AEFDC19520586F9E24127EB39556463E2 (_2dxFX_AL_Sepia_t7B13D6B7E35C8927DCF5E72C07D20839F7EFCAEB* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Sepia::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sepia_Start_m707EA0774896EB9C97936F4BB22D3FC01AF455DC (_2dxFX_AL_Sepia_t7B13D6B7E35C8927DCF5E72C07D20839F7EFCAEB* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// XUpdate();
		_2dxFX_AL_Sepia_XUpdate_mBC89FF74DA613D648BD6D47A5F5AE5BB50507BD6(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Sepia::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sepia_CallUpdate_m9A1B62F860D6E5A22731F53B9ED5192B2754A449 (_2dxFX_AL_Sepia_t7B13D6B7E35C8927DCF5E72C07D20839F7EFCAEB* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Sepia_XUpdate_mBC89FF74DA613D648BD6D47A5F5AE5BB50507BD6(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Sepia::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sepia_Update_m574F9D0F961A9F18FD3B02F02F1377EC60572557 (_2dxFX_AL_Sepia_t7B13D6B7E35C8927DCF5E72C07D20839F7EFCAEB* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Sepia_XUpdate_mBC89FF74DA613D648BD6D47A5F5AE5BB50507BD6(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Sepia::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sepia_XUpdate_mBC89FF74DA613D648BD6D47A5F5AE5BB50507BD6 (_2dxFX_AL_Sepia_t7B13D6B7E35C8927DCF5E72C07D20839F7EFCAEB* __this, const RuntimeMethod* method) 
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
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", _EffectAmount);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->____EffectAmount_11;
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
		// CanvasImage.material.SetFloat("_Distortion", _EffectAmount);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = __this->___CanvasImage_15;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_147);
		float L_149 = __this->____EffectAmount_11;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_149, NULL);
	}

IL_05c8:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Sepia::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sepia_OnDestroy_m5BABEAC05710AE238EF2213D07ADA0DA1974EC55 (_2dxFX_AL_Sepia_t7B13D6B7E35C8927DCF5E72C07D20839F7EFCAEB* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Sepia::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sepia_OnDisable_m281B8343ED432F05325256248BF21C7969950281 (_2dxFX_AL_Sepia_t7B13D6B7E35C8927DCF5E72C07D20839F7EFCAEB* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Sepia::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sepia_OnEnable_m6F81FF0F9E0591EE4A19AC066E8557A871B872A4 (_2dxFX_AL_Sepia_t7B13D6B7E35C8927DCF5E72C07D20839F7EFCAEB* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Sepia::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sepia__ctor_mED8E06B983B7478FD65687A106F703662A461781 (_2dxFX_AL_Sepia_t7B13D6B7E35C8927DCF5E72C07D20839F7EFCAEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral595F9F334249121ED1FB4ACBA1BBA930D7E5DAFA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Sepia";
		__this->___shader_9 = _stringLiteral595F9F334249121ED1FB4ACBA1BBA930D7E5DAFA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral595F9F334249121ED1FB4ACBA1BBA930D7E5DAFA);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float _EffectAmount = 1f;
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
// System.Void _2dxFX_AL_Sharpen::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sharpen_Awake_mBC0286AF3FA24BC33BD0108B731F56607BBFF037 (_2dxFX_AL_Sharpen_tEFB2AE6F7328594A3315842418EEDFB6FB537FD5* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Sharpen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sharpen_Start_m77DB75E65F94183B500F21B47B3C579E2A59398C (_2dxFX_AL_Sharpen_tEFB2AE6F7328594A3315842418EEDFB6FB537FD5* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// XUpdate();
		_2dxFX_AL_Sharpen_XUpdate_m6B09D15319DC4E3BF54DD25E84CA42CB840D95FA(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Sharpen::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sharpen_CallUpdate_mA8F25E966E5356D3FEC56E673939E3E3E577E07A (_2dxFX_AL_Sharpen_tEFB2AE6F7328594A3315842418EEDFB6FB537FD5* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Sharpen_XUpdate_m6B09D15319DC4E3BF54DD25E84CA42CB840D95FA(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Sharpen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sharpen_Update_m59692EC331D8896CC890DE82187C2FB7C0F49161 (_2dxFX_AL_Sharpen_tEFB2AE6F7328594A3315842418EEDFB6FB537FD5* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Sharpen_XUpdate_m6B09D15319DC4E3BF54DD25E84CA42CB840D95FA(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Sharpen::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sharpen_XUpdate_m6B09D15319DC4E3BF54DD25E84CA42CB840D95FA (_2dxFX_AL_Sharpen_tEFB2AE6F7328594A3315842418EEDFB6FB537FD5* __this, const RuntimeMethod* method) 
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
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Sharpen);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Sharpen_11;
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
		// CanvasImage.material.SetFloat("_Distortion", Sharpen);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = __this->___CanvasImage_15;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_147);
		float L_149 = __this->___Sharpen_11;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_149, NULL);
	}

IL_05c8:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Sharpen::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sharpen_OnDestroy_m748569128C0DC9D0F47B9C63C31E832A1DA739CD (_2dxFX_AL_Sharpen_tEFB2AE6F7328594A3315842418EEDFB6FB537FD5* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Sharpen::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sharpen_OnDisable_m51FCCA90C231118C705CDE28DD183C81E103C6DF (_2dxFX_AL_Sharpen_tEFB2AE6F7328594A3315842418EEDFB6FB537FD5* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Sharpen::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sharpen_OnEnable_m6BB7FF7225F1906A7834E23C5A69A9EF768DCB86 (_2dxFX_AL_Sharpen_tEFB2AE6F7328594A3315842418EEDFB6FB537FD5* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Sharpen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Sharpen__ctor_mB3EFE4E7F49E238A0E569D2C1B7658C28398A85C (_2dxFX_AL_Sharpen_tEFB2AE6F7328594A3315842418EEDFB6FB537FD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral241A431514428BEFABD863C7FC19BE216839F377);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Sharpen";
		__this->___shader_9 = _stringLiteral241A431514428BEFABD863C7FC19BE216839F377;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral241A431514428BEFABD863C7FC19BE216839F377);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.001f, 12f)] public float Sharpen = 4.0f;
		__this->___Sharpen_11 = (4.0f);
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
// System.Void _2dxFX_AL_Shiny_Reflect::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Shiny_Reflect_Awake_m52FE7D5827154BD1C019A95D57529FE7D53381C4 (_2dxFX_AL_Shiny_Reflect_tC61402894DB58549BA1C9C2CCBEB58805E3247BC* __this, const RuntimeMethod* method) 
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
		__this->___CanvasImage_24 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_24), (void*)L_4);
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
		__this->___CanvasSpriteRenderer_25 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_25), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Shiny_Reflect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Shiny_Reflect_Start_mF22676AAB22F54967BEB723182C3E4F43023402A (_2dxFX_AL_Shiny_Reflect_tC61402894DB58549BA1C9C2CCBEB58805E3247BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2231BDF58939A1EAEFC4F67E72A1561ABA6B1C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// __MainTex2 = Resources.Load("_2dxFX_Gradient") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralC2231BDF58939A1EAEFC4F67E72A1561ABA6B1C3, NULL);
		__this->_____MainTex2_9 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_9), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		// ShaderChange = 0;
		__this->___ShaderChange_21 = 0;
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->_____MainTex2_9;
		NullCheck(L_4);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_4, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_5, NULL);
		goto IL_0070;
	}

IL_0047:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___CanvasImage_24;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___CanvasImage_24;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_8);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->_____MainTex2_9;
		NullCheck(L_9);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_9, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_10, NULL);
	}

IL_0070:
	{
		// if (ShinyLightCurve == null) ShinyLightCurve = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = __this->___ShinyLightCurve_15;
		if (L_11)
		{
			goto IL_0083;
		}
	}
	{
		// if (ShinyLightCurve == null) ShinyLightCurve = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_12, NULL);
		__this->___ShinyLightCurve_15 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShinyLightCurve_15), (void*)L_12);
	}

IL_0083:
	{
		// if (ShinyLightCurve.length == 0)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_13 = __this->___ShinyLightCurve_15;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_13, NULL);
		if (L_14)
		{
			goto IL_0273;
		}
	}
	{
		// ShinyLightCurve.AddKey(7.780734E-06f, -0.4416301f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_15 = __this->___ShinyLightCurve_15;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_15, (7.78073445E-06f), (-0.441630095f), NULL);
		// ShinyLightCurve.keys[0].inTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_17 = __this->___ShinyLightCurve_15;
		NullCheck(L_17);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_18;
		L_18 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_17, NULL);
		NullCheck(L_18);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), (0.0f), NULL);
		// ShinyLightCurve.keys[0].outTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_19 = __this->___ShinyLightCurve_15;
		NullCheck(L_19);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_20;
		L_20 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_19, NULL);
		NullCheck(L_20);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), (0.0f), NULL);
		// ShinyLightCurve.AddKey(0.4310643f, 1.113406f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_21 = __this->___ShinyLightCurve_15;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_21, (0.431064308f), (1.11340594f), NULL);
		// ShinyLightCurve.keys[1].inTangent = 0.2280953f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_23 = __this->___ShinyLightCurve_15;
		NullCheck(L_23);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_24;
		L_24 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_23, NULL);
		NullCheck(L_24);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), (0.228095293f), NULL);
		// ShinyLightCurve.keys[1].outTangent = 0.2280953f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_25 = __this->___ShinyLightCurve_15;
		NullCheck(L_25);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_26;
		L_26 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_25, NULL);
		NullCheck(L_26);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), (0.228095293f), NULL);
		// ShinyLightCurve.AddKey(0.5258899f, 1.229086f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_27 = __this->___ShinyLightCurve_15;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_27, (0.525889874f), (1.22908604f), NULL);
		// ShinyLightCurve.keys[2].inTangent = -0.1474274f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_29 = __this->___ShinyLightCurve_15;
		NullCheck(L_29);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_30;
		L_30 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_29, NULL);
		NullCheck(L_30);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))), (-0.147427395f), NULL);
		// ShinyLightCurve.keys[2].outTangent = -0.1474274f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_31 = __this->___ShinyLightCurve_15;
		NullCheck(L_31);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_32;
		L_32 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_31, NULL);
		NullCheck(L_32);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))), (-0.147427395f), NULL);
		// ShinyLightCurve.AddKey(0.6136486f, 1.113075f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_33 = __this->___ShinyLightCurve_15;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_33, (0.613648593f), (1.11307502f), NULL);
		// ShinyLightCurve.keys[3].inTangent = 0.005268873f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_35 = __this->___ShinyLightCurve_15;
		NullCheck(L_35);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_36;
		L_36 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_35, NULL);
		NullCheck(L_36);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))), (0.00526887318f), NULL);
		// ShinyLightCurve.keys[3].outTangent = 0.005268873f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37 = __this->___ShinyLightCurve_15;
		NullCheck(L_37);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_38;
		L_38 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_37, NULL);
		NullCheck(L_38);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))), (0.00526887318f), NULL);
		// ShinyLightCurve.AddKey(0.9367767f, -0.4775873f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39 = __this->___ShinyLightCurve_15;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_39, (0.936776698f), (-0.477587312f), NULL);
		// ShinyLightCurve.keys[4].inTangent = -3.890693f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41 = __this->___ShinyLightCurve_15;
		NullCheck(L_41);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_42;
		L_42 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_41, NULL);
		NullCheck(L_42);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(4))), (-3.89069295f), NULL);
		// ShinyLightCurve.keys[4].outTangent = -3.890693f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_43 = __this->___ShinyLightCurve_15;
		NullCheck(L_43);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_44;
		L_44 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_43, NULL);
		NullCheck(L_44);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(4))), (-3.89069295f), NULL);
		// ShinyLightCurve.AddKey(1.144408f, -0.4976555f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_45 = __this->___ShinyLightCurve_15;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = AnimationCurve_AddKey_mCA9B224D2D4721FB676505CEC6AA4FDCCC58C15B(L_45, (1.14440799f), (-0.497655511f), NULL);
		// ShinyLightCurve.keys[5].inTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_47 = __this->___ShinyLightCurve_15;
		NullCheck(L_47);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_48;
		L_48 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_47, NULL);
		NullCheck(L_48);
		Keyframe_set_inTangent_m4CBBDDEE23D6E1E498580A6E1C2661E57CD38363(((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(5))), (0.0f), NULL);
		// ShinyLightCurve.keys[5].outTangent = 0f;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_49 = __this->___ShinyLightCurve_15;
		NullCheck(L_49);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_50;
		L_50 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_49, NULL);
		NullCheck(L_50);
		Keyframe_set_outTangent_m68F2F86E292344CAB2600787D244019B95A89DFE(((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(5))), (0.0f), NULL);
		// ShinyLightCurve.postWrapMode = WrapMode.Loop;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51 = __this->___ShinyLightCurve_15;
		NullCheck(L_51);
		AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9(L_51, 2, NULL);
		// ShinyLightCurve.preWrapMode = WrapMode.Loop;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52 = __this->___ShinyLightCurve_15;
		NullCheck(L_52);
		AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D(L_52, 2, NULL);
	}

IL_0273:
	{
		// XUpdate();
		_2dxFX_AL_Shiny_Reflect_XUpdate_mAD180C936CFD9B40F29FC4E56C12CD00564E4304(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Shiny_Reflect::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Shiny_Reflect_CallUpdate_mBEF9616C3128D1986ADDC0F4E80F0411CD85858F (_2dxFX_AL_Shiny_Reflect_tC61402894DB58549BA1C9C2CCBEB58805E3247BC* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Shiny_Reflect_XUpdate_mAD180C936CFD9B40F29FC4E56C12CD00564E4304(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Shiny_Reflect::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Shiny_Reflect_Update_m7E1A79F381255A88889BDD3DF454FF84A1E900A5 (_2dxFX_AL_Shiny_Reflect_tC61402894DB58549BA1C9C2CCBEB58805E3247BC* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_26;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_AL_Shiny_Reflect_XUpdate_mAD180C936CFD9B40F29FC4E56C12CD00564E4304(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Shiny_Reflect::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Shiny_Reflect_XUpdate_mAD180C936CFD9B40F29FC4E56C12CD00564E4304 (_2dxFX_AL_Shiny_Reflect_tC61402894DB58549BA1C9C2CCBEB58805E3247BC* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455192F2C6C0DDD922218931AB63F3F8AB307544);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_24;
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
		__this->___CanvasImage_24 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_24), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_25;
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
		__this->___CanvasSpriteRenderer_25 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_25), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_21;
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
		__this->___ShaderChange_21 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_22;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_24;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_24;
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
		String_t* L_30 = __this->___shader_10;
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
		int32_t L_34 = __this->___ShaderChange_21;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_22;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_37, NULL);
	}

IL_0138:
	{
		// tempMaterial = new Material(Shader.Find(shader));
		String_t* L_38 = __this->___shader_10;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_39;
		L_39 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_38, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_40, L_39, NULL);
		__this->___tempMaterial_22 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_22), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_22;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_22;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_24;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_22;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_21 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_0749;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_0641;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54;
		L_54 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_53, NULL);
		float L_55 = __this->____Alpha_11;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_60);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_60, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		NullCheck(L_62);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_62, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_65);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_65, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_67, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_71);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_71, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_73, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0562:
	{
		// if (UseShinyCurve)
		bool L_139 = __this->___UseShinyCurve_14;
		if (!L_139)
		{
			goto IL_05b9;
		}
	}
	{
		// if (ShinyLightCurve != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", ShinyLightCurve.Evaluate(ShinyLightCurveTime));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_140 = __this->___ShinyLightCurve_15;
		if (!L_140)
		{
			goto IL_0598;
		}
	}
	{
		// if (ShinyLightCurve != null) CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", ShinyLightCurve.Evaluate(ShinyLightCurveTime));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_141 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_141);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_142;
		L_142 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_141, NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_143 = __this->___ShinyLightCurve_15;
		float L_144 = __this->___ShinyLightCurveTime_20;
		NullCheck(L_143);
		float L_145;
		L_145 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_143, L_144, NULL);
		NullCheck(L_142);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_142, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_145, NULL);
	}

IL_0598:
	{
		// ShinyLightCurveTime += (Time.deltaTime / 8) * AnimationSpeedReduction;
		float L_146 = __this->___ShinyLightCurveTime_20;
		float L_147;
		L_147 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_148 = __this->___AnimationSpeedReduction_16;
		__this->___ShinyLightCurveTime_20 = ((float)il2cpp_codegen_add(L_146, ((float)il2cpp_codegen_multiply(((float)(L_147/(8.0f))), L_148))));
		goto IL_05d4;
	}

IL_05b9:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Light);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_149 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_149);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_150;
		L_150 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_149, NULL);
		float L_151 = __this->___Light_12;
		NullCheck(L_150);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_150, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_151, NULL);
	}

IL_05d4:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value2", LightSize);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_152 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_152);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_153;
		L_153 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_152, NULL);
		float L_154 = __this->___LightSize_13;
		NullCheck(L_153);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_153, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, L_154, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value3", Intensity);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_155 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_155);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_156;
		L_156 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_155, NULL);
		float L_157 = __this->___Intensity_17;
		NullCheck(L_156);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_156, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, L_157, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value4", OnlyLight);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_158 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_158);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_159;
		L_159 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_158, NULL);
		float L_160 = __this->___OnlyLight_18;
		NullCheck(L_159);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_159, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_160, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value5", LightBump);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_161 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_161);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_162;
		L_162 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_161, NULL);
		float L_163 = __this->___LightBump_19;
		NullCheck(L_162);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_162, _stringLiteral455192F2C6C0DDD922218931AB63F3F8AB307544, L_163, NULL);
		return;
	}

IL_0641:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_164 = __this->___CanvasImage_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_165;
		L_165 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_164, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_165)
		{
			goto IL_0749;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_166 = __this->___CanvasImage_24;
		NullCheck(L_166);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_167;
		L_167 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_166);
		float L_168 = __this->____Alpha_11;
		NullCheck(L_167);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_167, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_168)), NULL);
		// if (UseShinyCurve)
		bool L_169 = __this->___UseShinyCurve_14;
		if (!L_169)
		{
			goto IL_06c2;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Distortion", ShinyLightCurve.Evaluate(ShinyLightCurveTime));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_170 = __this->___CanvasImage_24;
		NullCheck(L_170);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_171;
		L_171 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_170);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_172 = __this->___ShinyLightCurve_15;
		float L_173 = __this->___ShinyLightCurveTime_20;
		NullCheck(L_172);
		float L_174;
		L_174 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_172, L_173, NULL);
		NullCheck(L_171);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_171, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_174, NULL);
		// ShinyLightCurveTime += (Time.deltaTime / 8) * AnimationSpeedReduction;
		float L_175 = __this->___ShinyLightCurveTime_20;
		float L_176;
		L_176 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_177 = __this->___AnimationSpeedReduction_16;
		__this->___ShinyLightCurveTime_20 = ((float)il2cpp_codegen_add(L_175, ((float)il2cpp_codegen_multiply(((float)(L_176/(8.0f))), L_177))));
		goto IL_06dd;
	}

IL_06c2:
	{
		// CanvasImage.material.SetFloat("_Distortion", Light);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_178 = __this->___CanvasImage_24;
		NullCheck(L_178);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_179;
		L_179 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_178);
		float L_180 = __this->___Light_12;
		NullCheck(L_179);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_179, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_180, NULL);
	}

IL_06dd:
	{
		// CanvasImage.material.SetFloat("_Value2", LightSize);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_181 = __this->___CanvasImage_24;
		NullCheck(L_181);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_182;
		L_182 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_181);
		float L_183 = __this->___LightSize_13;
		NullCheck(L_182);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_182, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, L_183, NULL);
		// CanvasImage.material.SetFloat("_Value3", Intensity);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_184 = __this->___CanvasImage_24;
		NullCheck(L_184);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_185;
		L_185 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_184);
		float L_186 = __this->___Intensity_17;
		NullCheck(L_185);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_185, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, L_186, NULL);
		// CanvasImage.material.SetFloat("_Value4", OnlyLight);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_187 = __this->___CanvasImage_24;
		NullCheck(L_187);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_188;
		L_188 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_187);
		float L_189 = __this->___OnlyLight_18;
		NullCheck(L_188);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_188, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_189, NULL);
		// CanvasImage.material.SetFloat("_Value5", LightBump);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_190 = __this->___CanvasImage_24;
		NullCheck(L_190);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_191;
		L_191 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_190);
		float L_192 = __this->___LightBump_19;
		NullCheck(L_191);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_191, _stringLiteral455192F2C6C0DDD922218931AB63F3F8AB307544, L_192, NULL);
	}

IL_0749:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Shiny_Reflect::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Shiny_Reflect_OnDestroy_mB5EE3F4C41FBBD13F49C10B4BEE1EB6DAE2B73C9 (_2dxFX_AL_Shiny_Reflect_tC61402894DB58549BA1C9C2CCBEB58805E3247BC* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_22;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_22;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_23;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_23;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_24;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_23;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_24;
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
// System.Void _2dxFX_AL_Shiny_Reflect::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Shiny_Reflect_OnDisable_mB1E137E4FA5E81EE60EE5ADF8FE4557BBCBC6EF7 (_2dxFX_AL_Shiny_Reflect_tC61402894DB58549BA1C9C2CCBEB58805E3247BC* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_23;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_23;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_24;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_23;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_24;
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
// System.Void _2dxFX_AL_Shiny_Reflect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Shiny_Reflect_OnEnable_mD03D73F508E296B5FB29E837FFE975A25CA8878E (_2dxFX_AL_Shiny_Reflect_tC61402894DB58549BA1C9C2CCBEB58805E3247BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2231BDF58939A1EAEFC4F67E72A1561ABA6B1C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_23;
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
		__this->___defaultMaterial_23 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_23), (void*)L_3);
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
		String_t* L_6 = __this->___shader_10;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_6, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->___tempMaterial_22 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_22), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_22;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_22;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		goto IL_009d;
	}

IL_007e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_24;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_22;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
	}

IL_009d:
	{
		// __MainTex2 = Resources.Load("_2dxFX_Gradient") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralC2231BDF58939A1EAEFC4F67E72A1561ABA6B1C3, NULL);
		__this->_____MainTex2_9 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_9), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_18, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		goto IL_012b;
	}

IL_00b4:
	{
		// ForceMaterial.shader = Shader.Find(shader);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___ForceMaterial_4;
		String_t* L_20 = __this->___shader_10;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_21;
		L_21 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_20, NULL);
		NullCheck(L_19);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_19, L_21, NULL);
		// ForceMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_22, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_23 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_25 = __this->___CanvasSpriteRenderer_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___ForceMaterial_4;
		NullCheck(L_25);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_25, L_26, NULL);
		goto IL_0116;
	}

IL_00f7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = __this->___CanvasImage_24;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___CanvasImage_24;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___ForceMaterial_4;
		NullCheck(L_29);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_29, L_30);
	}

IL_0116:
	{
		// __MainTex2 = Resources.Load("_2dxFX_Gradient") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31;
		L_31 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralC2231BDF58939A1EAEFC4F67E72A1561ABA6B1C3, NULL);
		__this->_____MainTex2_9 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_9), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_31, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
	}

IL_012b:
	{
		// if (__MainTex2)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_32 = __this->_____MainTex2_9;
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
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = __this->_____MainTex2_9;
		NullCheck(L_34);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_34, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_35 = __this->___CanvasSpriteRenderer_25;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_37 = __this->___CanvasSpriteRenderer_25;
		NullCheck(L_37);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38;
		L_38 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_37, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = __this->_____MainTex2_9;
		NullCheck(L_38);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_38, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_39, NULL);
		return;
	}

IL_016e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40 = __this->___CanvasImage_24;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___CanvasImage_24;
		NullCheck(L_42);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43;
		L_43 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_42);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = __this->_____MainTex2_9;
		NullCheck(L_43);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_43, _stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E, L_44, NULL);
	}

IL_0197:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Shiny_Reflect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Shiny_Reflect__ctor_m0A5C25C4F54E3405C4BDD0F357E482F6BEA79B6E (_2dxFX_AL_Shiny_Reflect_tC61402894DB58549BA1C9C2CCBEB58805E3247BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1C6DD44D26357B4E5DE53D7A9DEAFACC6A16C63);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Shiny_Reflect";
		__this->___shader_10 = _stringLiteralC1C6DD44D26357B4E5DE53D7A9DEAFACC6A16C63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_10), (void*)_stringLiteralC1C6DD44D26357B4E5DE53D7A9DEAFACC6A16C63);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_11 = (1.0f);
		// [HideInInspector] [Range(-0.5f, 1.5f)] public float Light = 1.0f;
		__this->___Light_12 = (1.0f);
		// [HideInInspector] [Range(0.05f, 1f)] public float LightSize = 0.5f;
		__this->___LightSize_13 = (0.5f);
		// [HideInInspector] public bool UseShinyCurve = true;
		__this->___UseShinyCurve_14 = (bool)1;
		// [HideInInspector] [Range(0, 32)] public float AnimationSpeedReduction = 3f;
		__this->___AnimationSpeedReduction_16 = (3.0f);
		// [HideInInspector] [Range(0f, 2f)] public float Intensity = 1.0f;
		__this->___Intensity_17 = (1.0f);
		// [HideInInspector] [Range(-1f, 1f)] public float LightBump = 0.05f;
		__this->___LightBump_19 = (0.0500000007f);
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_26 = (bool)1;
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
// System.Void _2dxFX_AL_SkyCloud::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SkyCloud_Awake_m1907F5AD1A95CC1DE684C232F769EDD4F7B2EDBF (_2dxFX_AL_SkyCloud_tEFB292033502C4F240572629A7A1DD099371CE8E* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_SkyCloud::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SkyCloud_Start_mAAA15F4767711647A2C927CE0771D88CE6802702 (_2dxFX_AL_SkyCloud_tEFB292033502C4F240572629A7A1DD099371CE8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D76945758408F61C792EF2BCD6041E61AD3FC51);
		s_Il2CppMethodInitialized = true;
	}
	{
		// __MainTex2 = Resources.Load("_2dxFX_ShadowTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral3D76945758408F61C792EF2BCD6041E61AD3FC51, NULL);
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
		_2dxFX_AL_SkyCloud_XUpdate_m657BFDB988374E2F790A6DD8C07EDE8A979107FF(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_SkyCloud::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SkyCloud_CallUpdate_mEE1958F3099569B21868962880E357E6C9DD8A29 (_2dxFX_AL_SkyCloud_tEFB292033502C4F240572629A7A1DD099371CE8E* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_SkyCloud_XUpdate_m657BFDB988374E2F790A6DD8C07EDE8A979107FF(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_SkyCloud::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SkyCloud_Update_m0B446A7851C52B432757191B10E0550574052F3D (_2dxFX_AL_SkyCloud_tEFB292033502C4F240572629A7A1DD099371CE8E* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_SkyCloud_XUpdate_m657BFDB988374E2F790A6DD8C07EDE8A979107FF(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_SkyCloud::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SkyCloud_XUpdate_m657BFDB988374E2F790A6DD8C07EDE8A979107FF (_2dxFX_AL_SkyCloud_tEFB292033502C4F240572629A7A1DD099371CE8E* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral877B02515584E67B57946246F931E4FB9A50C8C4);
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
			goto IL_0963;
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
			goto IL_071f;
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
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Zoom", _Zoom);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->____Zoom_14;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral877B02515584E67B57946246F931E4FB9A50C8C4, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Intensity", _Intensity);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->____Intensity_15;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_144, NULL);
		// if ((_AutoScrollX == false) && (_AutoScrollY == false))
		bool L_145 = __this->____AutoScrollX_16;
		if (L_145)
		{
			goto IL_05de;
		}
	}
	{
		bool L_146 = __this->____AutoScrollY_18;
		if (L_146)
		{
			goto IL_05de;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetX", _OffsetX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_147 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_147, NULL);
		float L_149 = __this->____OffsetX_12;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_149, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetY", _OffsetY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_150 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_150);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_151;
		L_151 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_150, NULL);
		float L_152 = __this->____OffsetY_13;
		NullCheck(L_151);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_151, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_152, NULL);
	}

IL_05de:
	{
		// if ((_AutoScrollX == true) && (_AutoScrollY == false))
		bool L_153 = __this->____AutoScrollX_16;
		if (!L_153)
		{
			goto IL_063d;
		}
	}
	{
		bool L_154 = __this->____AutoScrollY_18;
		if (L_154)
		{
			goto IL_063d;
		}
	}
	{
		// _AutoScrollCountX += _AutoScrollSpeedX * Time.deltaTime;
		float L_155 = __this->____AutoScrollCountX_20;
		float L_156 = __this->____AutoScrollSpeedX_17;
		float L_157;
		L_157 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountX_20 = ((float)il2cpp_codegen_add(L_155, ((float)il2cpp_codegen_multiply(L_156, L_157))));
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetX", _AutoScrollCountX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_158 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_158);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_159;
		L_159 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_158, NULL);
		float L_160 = __this->____AutoScrollCountX_20;
		NullCheck(L_159);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_159, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_160, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetY", _OffsetY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_161 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_161);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_162;
		L_162 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_161, NULL);
		float L_163 = __this->____OffsetY_13;
		NullCheck(L_162);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_162, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_163, NULL);
	}

IL_063d:
	{
		// if ((_AutoScrollX == false) && (_AutoScrollY == true))
		bool L_164 = __this->____AutoScrollX_16;
		if (L_164)
		{
			goto IL_069c;
		}
	}
	{
		bool L_165 = __this->____AutoScrollY_18;
		if (!L_165)
		{
			goto IL_069c;
		}
	}
	{
		// _AutoScrollCountY += _AutoScrollSpeedY * Time.deltaTime;
		float L_166 = __this->____AutoScrollCountY_21;
		float L_167 = __this->____AutoScrollSpeedY_19;
		float L_168;
		L_168 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountY_21 = ((float)il2cpp_codegen_add(L_166, ((float)il2cpp_codegen_multiply(L_167, L_168))));
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetX", _OffsetX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_169 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_169);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_170;
		L_170 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_169, NULL);
		float L_171 = __this->____OffsetX_12;
		NullCheck(L_170);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_170, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_171, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetY", _AutoScrollCountY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_172 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_172);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_173;
		L_173 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_172, NULL);
		float L_174 = __this->____AutoScrollCountY_21;
		NullCheck(L_173);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_173, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_174, NULL);
	}

IL_069c:
	{
		// if ((_AutoScrollX == true) && (_AutoScrollY == true))
		bool L_175 = __this->____AutoScrollX_16;
		if (!L_175)
		{
			goto IL_0903;
		}
	}
	{
		bool L_176 = __this->____AutoScrollY_18;
		if (!L_176)
		{
			goto IL_0903;
		}
	}
	{
		// _AutoScrollCountX += _AutoScrollSpeedX * Time.deltaTime;
		float L_177 = __this->____AutoScrollCountX_20;
		float L_178 = __this->____AutoScrollSpeedX_17;
		float L_179;
		L_179 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountX_20 = ((float)il2cpp_codegen_add(L_177, ((float)il2cpp_codegen_multiply(L_178, L_179))));
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetX", _AutoScrollCountX);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_180 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_180);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_181;
		L_181 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_180, NULL);
		float L_182 = __this->____AutoScrollCountX_20;
		NullCheck(L_181);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_181, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_182, NULL);
		// _AutoScrollCountY += _AutoScrollSpeedY * Time.deltaTime;
		float L_183 = __this->____AutoScrollCountY_21;
		float L_184 = __this->____AutoScrollSpeedY_19;
		float L_185;
		L_185 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountY_21 = ((float)il2cpp_codegen_add(L_183, ((float)il2cpp_codegen_multiply(L_184, L_185))));
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_OffsetY", _AutoScrollCountY);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_186 = __this->___CanvasSpriteRenderer_26;
		NullCheck(L_186);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_187;
		L_187 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_186, NULL);
		float L_188 = __this->____AutoScrollCountY_21;
		NullCheck(L_187);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_187, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_188, NULL);
		goto IL_0903;
	}

IL_071f:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_189 = __this->___CanvasImage_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_190;
		L_190 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_189, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_190)
		{
			goto IL_0903;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_191 = __this->___CanvasImage_25;
		NullCheck(L_191);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_192;
		L_192 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_191);
		float L_193 = __this->____Alpha_10;
		NullCheck(L_192);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_192, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_193)), NULL);
		// CanvasImage.material.SetFloat("_Zoom", _Zoom);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_194 = __this->___CanvasImage_25;
		NullCheck(L_194);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_195;
		L_195 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_194);
		float L_196 = __this->____Zoom_14;
		NullCheck(L_195);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_195, _stringLiteral877B02515584E67B57946246F931E4FB9A50C8C4, L_196, NULL);
		// CanvasImage.material.SetFloat("_Intensity", _Intensity);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_197 = __this->___CanvasImage_25;
		NullCheck(L_197);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_198;
		L_198 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_197);
		float L_199 = __this->____Intensity_15;
		NullCheck(L_198);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_198, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_199, NULL);
		// if ((_AutoScrollX == false) && (_AutoScrollY == false))
		bool L_200 = __this->____AutoScrollX_16;
		if (L_200)
		{
			goto IL_07cd;
		}
	}
	{
		bool L_201 = __this->____AutoScrollY_18;
		if (L_201)
		{
			goto IL_07cd;
		}
	}
	{
		// CanvasImage.material.SetFloat("_OffsetX", _OffsetX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_202 = __this->___CanvasImage_25;
		NullCheck(L_202);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_203;
		L_203 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_202);
		float L_204 = __this->____OffsetX_12;
		NullCheck(L_203);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_203, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_204, NULL);
		// CanvasImage.material.SetFloat("_OffsetY", _OffsetY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_205 = __this->___CanvasImage_25;
		NullCheck(L_205);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_206;
		L_206 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_205);
		float L_207 = __this->____OffsetY_13;
		NullCheck(L_206);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_206, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_207, NULL);
	}

IL_07cd:
	{
		// if ((_AutoScrollX == true) && (_AutoScrollY == false))
		bool L_208 = __this->____AutoScrollX_16;
		if (!L_208)
		{
			goto IL_082c;
		}
	}
	{
		bool L_209 = __this->____AutoScrollY_18;
		if (L_209)
		{
			goto IL_082c;
		}
	}
	{
		// _AutoScrollCountX += _AutoScrollSpeedX * Time.deltaTime;
		float L_210 = __this->____AutoScrollCountX_20;
		float L_211 = __this->____AutoScrollSpeedX_17;
		float L_212;
		L_212 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountX_20 = ((float)il2cpp_codegen_add(L_210, ((float)il2cpp_codegen_multiply(L_211, L_212))));
		// CanvasImage.material.SetFloat("_OffsetX", _AutoScrollCountX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_213 = __this->___CanvasImage_25;
		NullCheck(L_213);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_214;
		L_214 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_213);
		float L_215 = __this->____AutoScrollCountX_20;
		NullCheck(L_214);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_214, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_215, NULL);
		// CanvasImage.material.SetFloat("_OffsetY", _OffsetY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_216 = __this->___CanvasImage_25;
		NullCheck(L_216);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_217;
		L_217 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_216);
		float L_218 = __this->____OffsetY_13;
		NullCheck(L_217);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_217, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_218, NULL);
	}

IL_082c:
	{
		// if ((_AutoScrollX == false) && (_AutoScrollY == true))
		bool L_219 = __this->____AutoScrollX_16;
		if (L_219)
		{
			goto IL_088b;
		}
	}
	{
		bool L_220 = __this->____AutoScrollY_18;
		if (!L_220)
		{
			goto IL_088b;
		}
	}
	{
		// _AutoScrollCountY += _AutoScrollSpeedY * Time.deltaTime;
		float L_221 = __this->____AutoScrollCountY_21;
		float L_222 = __this->____AutoScrollSpeedY_19;
		float L_223;
		L_223 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountY_21 = ((float)il2cpp_codegen_add(L_221, ((float)il2cpp_codegen_multiply(L_222, L_223))));
		// CanvasImage.material.SetFloat("_OffsetX", _OffsetX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_224 = __this->___CanvasImage_25;
		NullCheck(L_224);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_225;
		L_225 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_224);
		float L_226 = __this->____OffsetX_12;
		NullCheck(L_225);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_225, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_226, NULL);
		// CanvasImage.material.SetFloat("_OffsetY", _AutoScrollCountY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_227 = __this->___CanvasImage_25;
		NullCheck(L_227);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_228;
		L_228 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_227);
		float L_229 = __this->____AutoScrollCountY_21;
		NullCheck(L_228);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_228, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_229, NULL);
	}

IL_088b:
	{
		// if ((_AutoScrollX == true) && (_AutoScrollY == true))
		bool L_230 = __this->____AutoScrollX_16;
		if (!L_230)
		{
			goto IL_0903;
		}
	}
	{
		bool L_231 = __this->____AutoScrollY_18;
		if (!L_231)
		{
			goto IL_0903;
		}
	}
	{
		// _AutoScrollCountX += _AutoScrollSpeedX * Time.deltaTime;
		float L_232 = __this->____AutoScrollCountX_20;
		float L_233 = __this->____AutoScrollSpeedX_17;
		float L_234;
		L_234 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountX_20 = ((float)il2cpp_codegen_add(L_232, ((float)il2cpp_codegen_multiply(L_233, L_234))));
		// CanvasImage.material.SetFloat("_OffsetX", _AutoScrollCountX);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_235 = __this->___CanvasImage_25;
		NullCheck(L_235);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_236;
		L_236 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_235);
		float L_237 = __this->____AutoScrollCountX_20;
		NullCheck(L_236);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_236, _stringLiteralE85F58836D694141EAE0EFE2288320FD11ECB39A, L_237, NULL);
		// _AutoScrollCountY += _AutoScrollSpeedY * Time.deltaTime;
		float L_238 = __this->____AutoScrollCountY_21;
		float L_239 = __this->____AutoScrollSpeedY_19;
		float L_240;
		L_240 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____AutoScrollCountY_21 = ((float)il2cpp_codegen_add(L_238, ((float)il2cpp_codegen_multiply(L_239, L_240))));
		// CanvasImage.material.SetFloat("_OffsetY", _AutoScrollCountY);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_241 = __this->___CanvasImage_25;
		NullCheck(L_241);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_242;
		L_242 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_241);
		float L_243 = __this->____AutoScrollCountY_21;
		NullCheck(L_242);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_242, _stringLiteral22AA6389D0FB74C5CA077A2D2611235A504660E7, L_243, NULL);
	}

IL_0903:
	{
		// if (_AutoScrollCountX > 1) _AutoScrollCountX = 0;
		float L_244 = __this->____AutoScrollCountX_20;
		if ((!(((float)L_244) > ((float)(1.0f)))))
		{
			goto IL_091b;
		}
	}
	{
		// if (_AutoScrollCountX > 1) _AutoScrollCountX = 0;
		__this->____AutoScrollCountX_20 = (0.0f);
	}

IL_091b:
	{
		// if (_AutoScrollCountX < -1) _AutoScrollCountX = 0;
		float L_245 = __this->____AutoScrollCountX_20;
		if ((!(((float)L_245) < ((float)(-1.0f)))))
		{
			goto IL_0933;
		}
	}
	{
		// if (_AutoScrollCountX < -1) _AutoScrollCountX = 0;
		__this->____AutoScrollCountX_20 = (0.0f);
	}

IL_0933:
	{
		// if (_AutoScrollCountY > 1) _AutoScrollCountY = 0;
		float L_246 = __this->____AutoScrollCountY_21;
		if ((!(((float)L_246) > ((float)(1.0f)))))
		{
			goto IL_094b;
		}
	}
	{
		// if (_AutoScrollCountY > 1) _AutoScrollCountY = 0;
		__this->____AutoScrollCountY_21 = (0.0f);
	}

IL_094b:
	{
		// if (_AutoScrollCountY < -1) _AutoScrollCountY = 0;
		float L_247 = __this->____AutoScrollCountY_21;
		if ((!(((float)L_247) < ((float)(-1.0f)))))
		{
			goto IL_0963;
		}
	}
	{
		// if (_AutoScrollCountY < -1) _AutoScrollCountY = 0;
		__this->____AutoScrollCountY_21 = (0.0f);
	}

IL_0963:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_SkyCloud::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SkyCloud_OnDestroy_mE432230626F184D8D7D5B413B81816FC963CBAB9 (_2dxFX_AL_SkyCloud_tEFB292033502C4F240572629A7A1DD099371CE8E* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_23;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___tempMaterial_23;
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
// System.Void _2dxFX_AL_SkyCloud::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SkyCloud_OnDisable_m1269C4D6AA753C283F25EB28AEF69084915A596C (_2dxFX_AL_SkyCloud_tEFB292033502C4F240572629A7A1DD099371CE8E* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_23;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___CanvasSpriteRenderer_26;
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = defaultMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___defaultMaterial_24;
		NullCheck(L_7);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_7, L_8, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_26;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___CanvasImage_25;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = __this->___CanvasImage_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___defaultMaterial_24;
		NullCheck(L_13);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_13, L_14);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_25;
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
// System.Void _2dxFX_AL_SkyCloud::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SkyCloud_OnEnable_m01D660A16128BCF0BAA06287785321A3B027A7F3 (_2dxFX_AL_SkyCloud_tEFB292033502C4F240572629A7A1DD099371CE8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D76945758408F61C792EF2BCD6041E61AD3FC51);
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
		// __MainTex2 = Resources.Load("_2dxFX_ShadowTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral3D76945758408F61C792EF2BCD6041E61AD3FC51, NULL);
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
		// __MainTex2 = Resources.Load("_2dxFX_ShadowTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31;
		L_31 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral3D76945758408F61C792EF2BCD6041E61AD3FC51, NULL);
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
// System.Void _2dxFX_AL_SkyCloud::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_SkyCloud__ctor_mB9CF5F616E942F5D7325786E6D9E1C9FFC5AF3D2 (_2dxFX_AL_SkyCloud_tEFB292033502C4F240572629A7A1DD099371CE8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral807F0819FAC935341E63DF4D4202E53A499C0B94);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/SkyCloud";
		__this->___shader_9 = _stringLiteral807F0819FAC935341E63DF4D4202E53A499C0B94;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral807F0819FAC935341E63DF4D4202E53A499C0B94);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0.1f, 2f)] public float _Zoom = 0.2f;
		__this->____Zoom_14 = (0.200000003f);
		// [HideInInspector] [Range(-1, 1)] public float _Intensity = 0.3f;
		__this->____Intensity_15 = (0.300000012f);
		// [HideInInspector] [Range(-2, 2)] public float _AutoScrollSpeedX = 0.08f;
		__this->____AutoScrollSpeedX_17 = (0.0799999982f);
		// [HideInInspector] [Range(-2, 2)] public float _AutoScrollSpeedY = 0.02f;
		__this->____AutoScrollSpeedY_19 = (0.0199999996f);
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
// System.Void _2dxFX_AL_Slim::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Slim_Awake_mBDB1258BFE0B8F5FFF0208B86C682D14342B937C (_2dxFX_AL_Slim_tC2DC69186ABF044E3A8D8CFAE96EA1004EA4F234* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Slim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Slim_Start_m22EEBFF615A95CF86EF2EABE876C851711D76602 (_2dxFX_AL_Slim_tC2DC69186ABF044E3A8D8CFAE96EA1004EA4F234* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Slim_XUpdate_m54AC594FE525268E17FB9EC0A882DEAE5B27A64E(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Slim::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Slim_CallUpdate_m6A70444DDBF13D1073309420214E06C413CEEE58 (_2dxFX_AL_Slim_tC2DC69186ABF044E3A8D8CFAE96EA1004EA4F234* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Slim_XUpdate_m54AC594FE525268E17FB9EC0A882DEAE5B27A64E(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Slim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Slim_Update_m62E9E7AB25C9564AA2A2AB9790238CE235701357 (_2dxFX_AL_Slim_tC2DC69186ABF044E3A8D8CFAE96EA1004EA4F234* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Slim_XUpdate_m54AC594FE525268E17FB9EC0A882DEAE5B27A64E(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Slim::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Slim_XUpdate_m54AC594FE525268E17FB9EC0A882DEAE5B27A64E (_2dxFX_AL_Slim_tC2DC69186ABF044E3A8D8CFAE96EA1004EA4F234* __this, const RuntimeMethod* method) 
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
		int32_t L_34 = __this->___ShaderChange_17;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
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
			goto IL_0138;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_18;
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
			goto IL_017b;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial = tempMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_21;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_18;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_20;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_18;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_17 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_06a3;
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
			goto IL_05ea;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_21;
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
		goto IL_02bc;
	}

IL_0240:
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
		goto IL_02bc;
	}

IL_0279:
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

IL_0562:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", SlimDistortion);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___SlimDistortion_13;
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
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("TurnToLiquid", TurnToSlim);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_151 = __this->___CanvasSpriteRenderer_21;
		NullCheck(L_151);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_152;
		L_152 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_151, NULL);
		float L_153 = __this->___TurnToSlim_12;
		NullCheck(L_152);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_152, _stringLiteral8079F30FC14D3057FE39610A9AA6E9D3963559AC, L_153, NULL);
		return;
	}

IL_05ea:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_154 = __this->___CanvasImage_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_155;
		L_155 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_154, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_155)
		{
			goto IL_06a3;
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
		// CanvasImage.material.SetFloat("_Distortion", SlimDistortion);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_159 = __this->___CanvasImage_20;
		NullCheck(L_159);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_160;
		L_160 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_159);
		float L_161 = __this->___SlimDistortion_13;
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
		// CanvasImage.material.SetFloat("TurnToLiquid", TurnToSlim);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_171 = __this->___CanvasImage_20;
		NullCheck(L_171);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_172;
		L_172 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_171);
		float L_173 = __this->___TurnToSlim_12;
		NullCheck(L_172);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_172, _stringLiteral8079F30FC14D3057FE39610A9AA6E9D3963559AC, L_173, NULL);
	}

IL_06a3:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Slim::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Slim_OnDestroy_m9CB3150A761E3D8F90094C1C2244C7FB8A03AE47 (_2dxFX_AL_Slim_tC2DC69186ABF044E3A8D8CFAE96EA1004EA4F234* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Slim::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Slim_OnDisable_mCA7F711A4401562877ACAE8744ABBF240401D430 (_2dxFX_AL_Slim_tC2DC69186ABF044E3A8D8CFAE96EA1004EA4F234* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Slim::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Slim_OnEnable_m48878358DB40C7775D47AF94564D056F6867B9BF (_2dxFX_AL_Slim_tC2DC69186ABF044E3A8D8CFAE96EA1004EA4F234* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Slim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Slim__ctor_m726C7EF69FBAA20563BEBDBD8C09863286DDB97F (_2dxFX_AL_Slim_tC2DC69186ABF044E3A8D8CFAE96EA1004EA4F234* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94A9FD75E3B43313C1349C20C8A0ED86E1AA30E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Slim";
		__this->___shader_9 = _stringLiteral94A9FD75E3B43313C1349C20C8A0ED86E1AA30E8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral94A9FD75E3B43313C1349C20C8A0ED86E1AA30E8);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0f, 1f)] public float TurnToSlim = 0.052f;
		__this->___TurnToSlim_12 = (0.0520000011f);
		// [HideInInspector] [Range(0.0f, 1f)] public float SlimDistortion = 0.111f;
		__this->___SlimDistortion_13 = (0.111000001f);
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
// System.Void _2dxFX_AL_Smoke::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Smoke_Awake_m7A3C93EE4C0DD1C60F41507927353EC0593F0D5D (_2dxFX_AL_Smoke_t87455E28C2F7194B870B4BC34628C379260E0A30* __this, const RuntimeMethod* method) 
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
		__this->___CanvasImage_27 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_27), (void*)L_4);
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
		__this->___CanvasSpriteRenderer_28 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_28), (void*)L_9);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Smoke::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Smoke_Start_m84E0A992AE8D5F24B2730F33CB2ED8E93BDB5095 (_2dxFX_AL_Smoke_t87455E28C2F7194B870B4BC34628C379260E0A30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC63470462A4EDCCCDB7FDC01AA2B1CFC3AF27229);
		s_Il2CppMethodInitialized = true;
	}
	{
		// __MainTex2 = Resources.Load("_2dxFX_SmokeTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralC63470462A4EDCCCDB7FDC01AA2B1CFC3AF27229, NULL);
		__this->_____MainTex2_11 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____MainTex2_11), (void*)((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		// ShaderChange = 0;
		__this->___ShaderChange_24 = 0;
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___CanvasSpriteRenderer_28;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___CanvasImage_27;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___CanvasImage_27;
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
		_2dxFX_AL_Smoke_XUpdate_m67C9E9FA2D47B23D8C803CD08BE36C7C1F8B999E(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Smoke::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Smoke_CallUpdate_mBAF19FA3653AC0E48E9920C50A5AD47ACEA09E51 (_2dxFX_AL_Smoke_t87455E28C2F7194B870B4BC34628C379260E0A30* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Smoke_XUpdate_m67C9E9FA2D47B23D8C803CD08BE36C7C1F8B999E(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Smoke::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Smoke_Update_mDD568BD6FD61F6125DAA7C3B7E461AA4BAE915DA (_2dxFX_AL_Smoke_t87455E28C2F7194B870B4BC34628C379260E0A30* __this, const RuntimeMethod* method) 
{
	{
		// if (ActiveUpdate) XUpdate();
		bool L_0 = __this->___ActiveUpdate_29;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (ActiveUpdate) XUpdate();
		_2dxFX_AL_Smoke_XUpdate_m67C9E9FA2D47B23D8C803CD08BE36C7C1F8B999E(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Smoke::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Smoke_XUpdate_m67C9E9FA2D47B23D8C803CD08BE36C7C1F8B999E (_2dxFX_AL_Smoke_t87455E28C2F7194B870B4BC34628C379260E0A30* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59861356BAB5171272E157858059C1801D7D5E5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC2691C16342479E4F554231EA21AB6BF6B2F95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1995802ABE6A3EC346C8751E74E33799D0F46B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanvasImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___CanvasImage_27;
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
		__this->___CanvasImage_27 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasImage_27), (void*)L_6);
	}

IL_0032:
	{
		// if (CanvasSpriteRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___CanvasSpriteRenderer_28;
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
		__this->___CanvasSpriteRenderer_28 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasSpriteRenderer_28), (void*)L_13);
	}

IL_0064:
	{
		// if ((ShaderChange == 0) && (ForceMaterial != null))
		int32_t L_14 = __this->___ShaderChange_24;
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
		__this->___ShaderChange_24 = 1;
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_25;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tempMaterial_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_19, NULL);
	}

IL_00a0:
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = __this->___CanvasSpriteRenderer_28;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___ForceMaterial_4;
		NullCheck(L_22);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_22, L_23, NULL);
		goto IL_00e0;
	}

IL_00c1:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___CanvasImage_27;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___CanvasImage_27;
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
		int32_t L_34 = __this->___ShaderChange_24;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (tempMaterial != null) DestroyImmediate(tempMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___tempMaterial_25;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tempMaterial_25;
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
		__this->___tempMaterial_25 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_25), (void*)L_40);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___tempMaterial_25;
		NullCheck(L_41);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_41, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_44 = __this->___CanvasSpriteRenderer_28;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___tempMaterial_25;
		NullCheck(L_44);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_44, L_45, NULL);
		goto IL_019a;
	}

IL_017b:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->___CanvasImage_27;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___CanvasImage_27;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___tempMaterial_25;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
	}

IL_019a:
	{
		// ShaderChange = 0;
		__this->___ShaderChange_24 = 0;
	}

IL_01a1:
	{
		// if (ActiveChange)
		bool L_50 = __this->___ActiveChange_5;
		if (!L_50)
		{
			goto IL_0709;
		}
	}
	{
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_51 = __this->___CanvasSpriteRenderer_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_061d;
		}
	}
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Alpha", 1 - _Alpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_53 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_58 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_60 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_60);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_60, (bool)1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 2450;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_61 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_61, NULL);
		NullCheck(L_62);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_62, ((int32_t)2450), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_63 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_65 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_65);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_65, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_66);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67;
		L_67 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_66, NULL);
		NullCheck(L_67);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_67, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_68 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_70 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_70);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_70, 0, NULL);
		// CanvasSpriteRenderer.receiveShadows = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_71 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_71);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_71, (bool)0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.renderQueue = 3000;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_72 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_72);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73;
		L_73 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_72, NULL);
		NullCheck(L_73);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_73, ((int32_t)3000), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_Z", 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_74 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_77 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_77);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78;
		L_78 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_77, NULL);
		NullCheck(L_78);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_78, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_79 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_79);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80;
		L_80 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_79, NULL);
		NullCheck(L_80);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_80, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_81 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_84 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_84);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85;
		L_85 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_84, NULL);
		NullCheck(L_85);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_85, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_86);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87;
		L_87 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_86, NULL);
		NullCheck(L_87);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_87, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_88 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_91 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_91, NULL);
		NullCheck(L_92);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_92, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_93 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_93);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94;
		L_94 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_93, NULL);
		NullCheck(L_94);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_94, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_95 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_98);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99;
		L_99 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_98, NULL);
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_100 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_100, NULL);
		NullCheck(L_101);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_101, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_102 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_105);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106;
		L_106 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_105, NULL);
		NullCheck(L_106);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_106, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_107 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_107);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108;
		L_108 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_107, NULL);
		NullCheck(L_108);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_108, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_109 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113;
		L_113 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_112, NULL);
		NullCheck(L_113);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_113, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_114 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		NullCheck(L_115);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_115, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, ((int32_t)10), NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_119 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120;
		L_120 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_119, NULL);
		NullCheck(L_120);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_120, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_121 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_121);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122;
		L_122 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_121, NULL);
		NullCheck(L_122);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_122, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_126 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_126, NULL);
		NullCheck(L_127);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_127, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 0, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusDstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_128 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_128);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129;
		L_129 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_128, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 4, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.One);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_133 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_133);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134;
		L_134 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_133, NULL);
		NullCheck(L_134);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_134, _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, 2, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.DstAlpha);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_135 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_135);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136;
		L_136 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_135, NULL);
		NullCheck(L_136);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_136, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.DstColor);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_137 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_137);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_137, NULL);
		NullCheck(L_138);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_138, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 2, NULL);
	}

IL_0562:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value1", _Value1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->____Value1_12;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_141, NULL);
		// if (_TurnToSmoke == 1) _TurnToSmoke = 0.995f;
		float L_142 = __this->____TurnToSmoke_13;
		if ((!(((float)L_142) == ((float)(1.0f)))))
		{
			goto IL_0595;
		}
	}
	{
		// if (_TurnToSmoke == 1) _TurnToSmoke = 0.995f;
		__this->____TurnToSmoke_13 = (0.995000005f);
	}

IL_0595:
	{
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value2", _TurnToSmoke);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_143 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_143);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_144;
		L_144 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_143, NULL);
		float L_145 = __this->____TurnToSmoke_13;
		NullCheck(L_144);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_144, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, L_145, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value3", _Value3);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_146 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_146);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_147;
		L_147 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_146, NULL);
		float L_148 = __this->____Value3_14;
		NullCheck(L_147);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_147, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, L_148, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Value4", _Value4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_149 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_149);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_150;
		L_150 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_149, NULL);
		float L_151 = __this->____Value4_15;
		NullCheck(L_150);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_150, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_151, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetColor("_Color1", _Color1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_152 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_152);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_153;
		L_153 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_152, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_154 = __this->____Color1_16;
		NullCheck(L_153);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_153, _stringLiteralE1995802ABE6A3EC346C8751E74E33799D0F46B4, L_154, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetColor("_Color2", _Color2);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_155 = __this->___CanvasSpriteRenderer_28;
		NullCheck(L_155);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_156;
		L_156 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_155, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_157 = __this->____Color2_17;
		NullCheck(L_156);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_156, _stringLiteral59861356BAB5171272E157858059C1801D7D5E5D, L_157, NULL);
		return;
	}

IL_061d:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_158 = __this->___CanvasImage_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_159;
		L_159 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_158, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_159)
		{
			goto IL_0709;
		}
	}
	{
		// CanvasImage.material.SetFloat("_Alpha", 1 - _Alpha);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_160 = __this->___CanvasImage_27;
		NullCheck(L_160);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_161;
		L_161 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_160);
		float L_162 = __this->____Alpha_10;
		NullCheck(L_161);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_161, _stringLiteralCB14659CB03507C756FB26DFDC1D82D6AE87A527, ((float)il2cpp_codegen_subtract((1.0f), L_162)), NULL);
		// CanvasImage.material.SetFloat("_Value1", _Value1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_163 = __this->___CanvasImage_27;
		NullCheck(L_163);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_164;
		L_164 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_163);
		float L_165 = __this->____Value1_12;
		NullCheck(L_164);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_164, _stringLiteral77EA42B4E5F346A20D905994A78D44CF323F88A1, L_165, NULL);
		// if (_TurnToSmoke == 1) _TurnToSmoke = 0.995f;
		float L_166 = __this->____TurnToSmoke_13;
		if ((!(((float)L_166) == ((float)(1.0f)))))
		{
			goto IL_0682;
		}
	}
	{
		// if (_TurnToSmoke == 1) _TurnToSmoke = 0.995f;
		__this->____TurnToSmoke_13 = (0.995000005f);
	}

IL_0682:
	{
		// CanvasImage.material.SetFloat("_Value2", _TurnToSmoke);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_167 = __this->___CanvasImage_27;
		NullCheck(L_167);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_168;
		L_168 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_167);
		float L_169 = __this->____TurnToSmoke_13;
		NullCheck(L_168);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_168, _stringLiteral2C8545B8128C9A96611EE86A55C61CE13EC1FD59, L_169, NULL);
		// CanvasImage.material.SetFloat("_Value3", _Value3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_170 = __this->___CanvasImage_27;
		NullCheck(L_170);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_171;
		L_171 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_170);
		float L_172 = __this->____Value3_14;
		NullCheck(L_171);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_171, _stringLiteral48543C37F2D9A3C3B92073D41BFCCDF9E3E2DC25, L_172, NULL);
		// CanvasImage.material.SetFloat("_Value4", _Value4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_173 = __this->___CanvasImage_27;
		NullCheck(L_173);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_174;
		L_174 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_173);
		float L_175 = __this->____Value4_15;
		NullCheck(L_174);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_174, _stringLiteral2B8473BFCAD67EEC266E21679C96E195C63AD266, L_175, NULL);
		// CanvasImage.material.SetColor("_Color1", _Color1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_176 = __this->___CanvasImage_27;
		NullCheck(L_176);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_177;
		L_177 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_176);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_178 = __this->____Color1_16;
		NullCheck(L_177);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_177, _stringLiteralE1995802ABE6A3EC346C8751E74E33799D0F46B4, L_178, NULL);
		// CanvasImage.material.SetColor("_Color2", _Color2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_179 = __this->___CanvasImage_27;
		NullCheck(L_179);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_180;
		L_180 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_179);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_181 = __this->____Color2_17;
		NullCheck(L_180);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_180, _stringLiteral59861356BAB5171272E157858059C1801D7D5E5D, L_181, NULL);
	}

IL_0709:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Smoke::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Smoke_OnDestroy_m392AC67D8FC5E9601D8F173EE96445AAA61C1F6E (_2dxFX_AL_Smoke_t87455E28C2F7194B870B4BC34628C379260E0A30* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tempMaterial_25;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___tempMaterial_25;
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___CanvasSpriteRenderer_28;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___defaultMaterial_26;
		NullCheck(L_11);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_11, L_12, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->___CanvasSpriteRenderer_28;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___CanvasImage_27;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___CanvasImage_27;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___defaultMaterial_26;
		NullCheck(L_17);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_17, L_18);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___CanvasImage_27;
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
// System.Void _2dxFX_AL_Smoke::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Smoke_OnDisable_m16662FAF084CFE2A55C181774502F438DFE934A6 (_2dxFX_AL_Smoke_t87455E28C2F7194B870B4BC34628C379260E0A30* __this, const RuntimeMethod* method) 
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
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___defaultMaterial_26;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___CanvasSpriteRenderer_28;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultMaterial_26;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_6, L_7, NULL);
		// CanvasSpriteRenderer.sharedMaterial.hideFlags = HideFlags.None;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___CanvasSpriteRenderer_28;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___CanvasImage_27;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___CanvasImage_27;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___defaultMaterial_26;
		NullCheck(L_12);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_12, L_13);
		// CanvasImage.material.hideFlags = HideFlags.None;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_27;
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
// System.Void _2dxFX_AL_Smoke::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Smoke_OnEnable_mFF9FC87320F15D74B1B93C93286F6363A446C3B3 (_2dxFX_AL_Smoke_t87455E28C2F7194B870B4BC34628C379260E0A30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209BE43BBCBAE7DAA6AB7D6FCE36F3999401A06E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC63470462A4EDCCCDB7FDC01AA2B1CFC3AF27229);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_26;
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
		__this->___defaultMaterial_26 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_26), (void*)L_3);
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
		__this->___tempMaterial_25 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempMaterial_25), (void*)L_8);
		// tempMaterial.hideFlags = HideFlags.None;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tempMaterial_25;
		NullCheck(L_9);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_9, 0, NULL);
		// if (CanvasSpriteRenderer != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___CanvasSpriteRenderer_28;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tempMaterial_25;
		NullCheck(L_12);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_12, L_13, NULL);
		goto IL_009d;
	}

IL_007e:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___CanvasImage_27;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___CanvasImage_27;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___tempMaterial_25;
		NullCheck(L_16);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_16, L_17);
	}

IL_009d:
	{
		// __MainTex2 = Resources.Load("_2dxFX_SmokeTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralC63470462A4EDCCCDB7FDC01AA2B1CFC3AF27229, NULL);
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_23 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_25 = __this->___CanvasSpriteRenderer_28;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___ForceMaterial_4;
		NullCheck(L_25);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_25, L_26, NULL);
		goto IL_0116;
	}

IL_00f7:
	{
		// else if (CanvasImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = __this->___CanvasImage_27;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___CanvasImage_27;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___ForceMaterial_4;
		NullCheck(L_29);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_29, L_30);
	}

IL_0116:
	{
		// __MainTex2 = Resources.Load("_2dxFX_SmokeTXT") as Texture2D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31;
		L_31 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteralC63470462A4EDCCCDB7FDC01AA2B1CFC3AF27229, NULL);
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_35 = __this->___CanvasSpriteRenderer_28;
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
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_37 = __this->___CanvasSpriteRenderer_28;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40 = __this->___CanvasImage_27;
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
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___CanvasImage_27;
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
// System.Void _2dxFX_AL_Smoke::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Smoke__ctor_m674C5A9A97BED11FA5F97071C1050EE8178F07C4 (_2dxFX_AL_Smoke_t87455E28C2F7194B870B4BC34628C379260E0A30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral069EBAC54B6E1338F3887C38B44DCB2AFB9A4DD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Smoke";
		__this->___shader_9 = _stringLiteral069EBAC54B6E1338F3887C38B44DCB2AFB9A4DD5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral069EBAC54B6E1338F3887C38B44DCB2AFB9A4DD5);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(64, 256)] public float _Value1 = 64;
		__this->____Value1_12 = (64.0f);
		// [HideInInspector] [Range(0, 1)] public float _TurnToSmoke = 0.75f;
		__this->____TurnToSmoke_13 = (0.75f);
		// [HideInInspector] [Range(0, 1)] public float _Value3 = 1;
		__this->____Value3_14 = (1.0f);
		// [HideInInspector] public Color _Color1 = new Color(1f, 0f, 1f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->____Color1_16 = L_0;
		// [HideInInspector] public Color _Color2 = new Color(1f, 1f, 1f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->____Color2_17 = L_1;
		// SpriteRenderer CanvasSpriteRenderer;[HideInInspector] public bool ActiveUpdate = true;
		__this->___ActiveUpdate_29 = (bool)1;
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
// System.Void _2dxFX_AL_StoneFX::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_StoneFX_Awake_m63E67DF8C555ADF9A2428A4AA8AABDDBFCD7FD21 (_2dxFX_AL_StoneFX_t1E7B8E44414D37B45599A3A8343C000E10089753* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_StoneFX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_StoneFX_Start_m73F17FCED3066464B10D83DB0A6ECE8892BF069E (_2dxFX_AL_StoneFX_t1E7B8E44414D37B45599A3A8343C000E10089753* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_13 = 0;
		// XUpdate();
		_2dxFX_AL_StoneFX_XUpdate_m15A95F007E686262E1F8F318FBE2B289C5620C62(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_StoneFX::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_StoneFX_CallUpdate_m5E52D62DC86DDCF30B20361F9A6CA7A0C5300D02 (_2dxFX_AL_StoneFX_t1E7B8E44414D37B45599A3A8343C000E10089753* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_StoneFX_XUpdate_m15A95F007E686262E1F8F318FBE2B289C5620C62(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_StoneFX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_StoneFX_Update_m1FBA3F5E2D05C93A714AA6B5E4687D8B9FFB5108 (_2dxFX_AL_StoneFX_t1E7B8E44414D37B45599A3A8343C000E10089753* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_StoneFX_XUpdate_m15A95F007E686262E1F8F318FBE2B289C5620C62(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_StoneFX::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_StoneFX_XUpdate_m15A95F007E686262E1F8F318FBE2B289C5620C62 (_2dxFX_AL_StoneFX_t1E7B8E44414D37B45599A3A8343C000E10089753* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B8F4235F56010C5600A8763B224E8156CBBC4E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
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
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", IntoStone);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___IntoStone_11;
		NullCheck(L_140);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_140, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_141, NULL);
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Deep", Deep);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142 = __this->___CanvasSpriteRenderer_17;
		NullCheck(L_142);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143;
		L_143 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_142, NULL);
		float L_144 = __this->___Deep_12;
		NullCheck(L_143);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_143, _stringLiteral1B8F4235F56010C5600A8763B224E8156CBBC4E4, L_144, NULL);
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
		// CanvasImage.material.SetFloat("_Distortion", IntoStone);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_150 = __this->___CanvasImage_16;
		NullCheck(L_150);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_151;
		L_151 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_150);
		float L_152 = __this->___IntoStone_11;
		NullCheck(L_151);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_151, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_152, NULL);
		// CanvasImage.material.SetFloat("_Deep", Deep);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_153 = __this->___CanvasImage_16;
		NullCheck(L_153);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154;
		L_154 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_153);
		float L_155 = __this->___Deep_12;
		NullCheck(L_154);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_154, _stringLiteral1B8F4235F56010C5600A8763B224E8156CBBC4E4, L_155, NULL);
	}

IL_05fe:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_StoneFX::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_StoneFX_OnDestroy_m5DD3CEF22F4063A20FEF836966FFA13C44A25F52 (_2dxFX_AL_StoneFX_t1E7B8E44414D37B45599A3A8343C000E10089753* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_StoneFX::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_StoneFX_OnDisable_m7C0C902F627C601E5574039A5E9AC0B41D520184 (_2dxFX_AL_StoneFX_t1E7B8E44414D37B45599A3A8343C000E10089753* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_StoneFX::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_StoneFX_OnEnable_m56771CDF60E7BEBE1D01834A7714CC3C8E20CC37 (_2dxFX_AL_StoneFX_t1E7B8E44414D37B45599A3A8343C000E10089753* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_StoneFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_StoneFX__ctor_m48887345278EE33F2B87C057348A3B6593148273 (_2dxFX_AL_StoneFX_t1E7B8E44414D37B45599A3A8343C000E10089753* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E34DCE3647EC226E08408747937BFDEA3E1FE8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/StoneFX";
		__this->___shader_9 = _stringLiteral9E34DCE3647EC226E08408747937BFDEA3E1FE8C;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteral9E34DCE3647EC226E08408747937BFDEA3E1FE8C);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float IntoStone = 1.0f;
		__this->___IntoStone_11 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float Deep = 1.0f;
		__this->___Deep_12 = (1.0f);
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
// System.Void _2dxFX_AL_Threshold::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Threshold_Awake_m5C95C389BB5F85E09D0964A670E04EFF20D963FF (_2dxFX_AL_Threshold_t0C0144277D27F02D63C9E5915824FFB04E9FFE7A* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Threshold::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Threshold_Start_m925C80A7228E897FE9920FB42E893A8868ACC442 (_2dxFX_AL_Threshold_t0C0144277D27F02D63C9E5915824FFB04E9FFE7A* __this, const RuntimeMethod* method) 
{
	{
		// ShaderChange = 0;
		__this->___ShaderChange_12 = 0;
		// XUpdate();
		_2dxFX_AL_Threshold_XUpdate_m0D83C4A6E05ED691325D70D0B0E2E93D5C3A1AC1(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Threshold::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Threshold_CallUpdate_m9A5DC6D5A4BB703A5D98B544986448FB35AF50B6 (_2dxFX_AL_Threshold_t0C0144277D27F02D63C9E5915824FFB04E9FFE7A* __this, const RuntimeMethod* method) 
{
	{
		// XUpdate();
		_2dxFX_AL_Threshold_XUpdate_m0D83C4A6E05ED691325D70D0B0E2E93D5C3A1AC1(__this, NULL);
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Threshold::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Threshold_Update_mA008FAF8CB9753E7FC7751BFAB6ED6836F5DDE6A (_2dxFX_AL_Threshold_t0C0144277D27F02D63C9E5915824FFB04E9FFE7A* __this, const RuntimeMethod* method) 
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
		_2dxFX_AL_Threshold_XUpdate_m0D83C4A6E05ED691325D70D0B0E2E93D5C3A1AC1(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Threshold::XUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Threshold_XUpdate_m0D83C4A6E05ED691325D70D0B0E2E93D5C3A1AC1 (_2dxFX_AL_Threshold_t0C0144277D27F02D63C9E5915824FFB04E9FFE7A* __this, const RuntimeMethod* method) 
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
		// CanvasSpriteRenderer.sharedMaterial.SetFloat("_Distortion", Threshold);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_139 = __this->___CanvasSpriteRenderer_16;
		NullCheck(L_139);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_139, NULL);
		float L_141 = __this->___Threshold_11;
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
		// CanvasImage.material.SetFloat("_Distortion", Threshold);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = __this->___CanvasImage_15;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_147);
		float L_149 = __this->___Threshold_11;
		NullCheck(L_148);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_148, _stringLiteral1118AFABE1103004CB863B78763034F9F50EA9E3, L_149, NULL);
	}

IL_05c8:
	{
		// }
		return;
	}
}
// System.Void _2dxFX_AL_Threshold::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Threshold_OnDestroy_m29A499DB770C9A557A18C98698D8A83975A12697 (_2dxFX_AL_Threshold_t0C0144277D27F02D63C9E5915824FFB04E9FFE7A* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Threshold::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Threshold_OnDisable_mFC749D5D1D5935A4E331D641452C373236ED3BC6 (_2dxFX_AL_Threshold_t0C0144277D27F02D63C9E5915824FFB04E9FFE7A* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Threshold::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Threshold_OnEnable_mD2C663D77A2BFACC6A8ECE952908594DD5E0FB6E (_2dxFX_AL_Threshold_t0C0144277D27F02D63C9E5915824FFB04E9FFE7A* __this, const RuntimeMethod* method) 
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
// System.Void _2dxFX_AL_Threshold::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _2dxFX_AL_Threshold__ctor_mB7EA086E01384931C2DA07FC193FB5B1B112C2A5 (_2dxFX_AL_Threshold_t0C0144277D27F02D63C9E5915824FFB04E9FFE7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC6DD94E57DCD6CD3535C8E5FD39BA6E772F0394);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool ActiveChange = true;
		__this->___ActiveChange_5 = (bool)1;
		// [HideInInspector] public bool AddShadow = true;
		__this->___AddShadow_6 = (bool)1;
		// private string shader = "2DxFX/AL/Threshold";
		__this->___shader_9 = _stringLiteralAC6DD94E57DCD6CD3535C8E5FD39BA6E772F0394;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shader_9), (void*)_stringLiteralAC6DD94E57DCD6CD3535C8E5FD39BA6E772F0394);
		// [HideInInspector] [Range(0, 1)] public float _Alpha = 1f;
		__this->____Alpha_10 = (1.0f);
		// [HideInInspector] [Range(0, 1)] public float Threshold = 0.5f;
		__this->___Threshold_11 = (0.5f);
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
