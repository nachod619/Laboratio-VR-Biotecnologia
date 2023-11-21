#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.Localization.Locale>
struct Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,VRBuilder.TextToSpeech.TextToSpeechProviderFactory/ITextToSpeechCreator>
struct Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<VRBuilder.Core.Configuration.Modes.ModeChangedEventArgs>
struct EventHandler_1_t4966B01DE51E4BDC24031A43E874165730585144;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,VRBuilder.TextToSpeech.TextToSpeechProviderFactory/ITextToSpeechCreator>
struct KeyCollection_tDC9A759531176631173398C3BE90C04BD664CF5D;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// VRBuilder.Core.Runtime.Utils.SettingsObject`1<System.Object>
struct SettingsObject_1_tADAE7515A9E8A429CD37BD66B2522D374E03E557;
// VRBuilder.Core.Runtime.Utils.SettingsObject`1<VRBuilder.TextToSpeech.TextToSpeechConfiguration>
struct SettingsObject_1_tD736F721006CAE1F5D1FEA89CB9804F83578C2BD;
// VRBuilder.Unity.Singleton`1<System.Object>
struct Singleton_1_t44355ECE83F29EC98CA129FB5C0A0D5357ACD4A0;
// VRBuilder.Unity.Singleton`1<VRBuilder.TextToSpeech.TextToSpeechProviderFactory>
struct Singleton_1_t280A0EEC0ACADAE3E305AEFB3F247ED72DDF2315;
// System.Threading.Tasks.TaskFactory`1<System.Byte[]>
struct TaskFactory_1_tE78D5901E25DE030D64ED783B6E0BED8282D0148;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.AudioClip>
struct TaskFactory_1_t2F129C7FB63369D7A8C2092E8A8984194C81BAB8;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95;
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip>
struct Task_1_t290EA9539222B740AC917B9AB459B4F252E537C1;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,VRBuilder.TextToSpeech.TextToSpeechProviderFactory/ITextToSpeechCreator>
struct ValueCollection_tEC20DE949D24BC8B0478ADF1A6DB9D64099703EF;
// System.Collections.Generic.Dictionary`2/Entry<System.String,VRBuilder.TextToSpeech.TextToSpeechProviderFactory/ITextToSpeechCreator>[]
struct EntryU5BU5D_t60CCB3FB3062225C107DC096886856FE2D604D29;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// VRBuilder.Core.Configuration.BaseRuntimeConfiguration
struct BaseRuntimeConfiguration_tA6534EE83E1A33162E28993006E97132522760C6;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// VRBuilder.TextToSpeech.FileTextToSpeechProvider
struct FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// VRBuilder.Core.Configuration.Modes.IModeHandler
struct IModeHandler_t0A1D8E6717A765D46192BE3C406523530D1A7E2A;
// VRBuilder.Core.Serialization.IProcessSerializer
struct IProcessSerializer_t5A8392BC4AE0AEC363D28CFF9646890715846BFF;
// VRBuilder.Core.Configuration.IRuntimeConfiguration
struct IRuntimeConfiguration_tE1BCE3463099EADF7C5AF8AA500E5BB638EDDC05;
// VRBuilder.Core.Configuration.ISceneConfiguration
struct ISceneConfiguration_t94A677308648E74BBC68977D25632DF9BB5C5AAF;
// VRBuilder.Core.SceneObjects.ISceneObjectRegistry
struct ISceneObjectRegistry_t42D37D71A77B3569E611D07540B8CFB5F5D6968B;
// VRBuilder.TextToSpeech.ITextToSpeechProvider
struct ITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// VRBuilder.Core.Localization.LanguageSettings
struct LanguageSettings_t644A5BE8AE6ECE199004889174DFBC0169D2DD13;
// UnityEngine.Localization.Locale
struct Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9;
// System.Security.Cryptography.MD5
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Localization.Metadata.MetadataCollection
struct MetadataCollection_t79AF57BE506FF84FEF50E610C73ED4CA6D015CE0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// VRBuilder.Core.Configuration.RuntimeConfigurator
struct RuntimeConfigurator_t23F3F8F041885DA6CBF963E065020FB1A77C7478;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// VRBuilder.Core.RestrictiveEnvironment.StepLockHandlingStrategy
struct StepLockHandlingStrategy_tE13D1873487AA7298585D24F516EDDDD71361934;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// VRBuilder.TextToSpeech.Audio.TextToSpeechAudio
struct TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D;
// VRBuilder.TextToSpeech.TextToSpeechConfiguration
struct TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F;
// VRBuilder.TextToSpeech.Audio.TextToSpeechContent
struct TextToSpeechContent_tF2835F93B28D65116117089192E9C376A3968F1F;
// VRBuilder.TextToSpeech.TextToSpeechProviderFactory
struct TextToSpeechProviderFactory_tEC7E017208D7F8B3BA5979232DFDE02996A68361;
// System.Type
struct Type_t;
// VRBuilder.TextToSpeech.UnableToParseAudioFormatException
struct UnableToParseAudioFormatException_tAE27AF125BFDA9961EC01EDC0FAE024603A8D626;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// VRBuilder.TextToSpeech.FileTextToSpeechProvider/CouldNotLoadAudioFileException
struct CouldNotLoadAudioFileException_t38D8BE37A0E5DC53B9B9DE38A6BB47C2A50F6E35;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/BaseCreator
struct BaseCreator_t4E77E30B98D4C4108F69664AA8741F1E18EA566F;
// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/ITextToSpeechCreator
struct ITextToSpeechCreator_t033F33FE63FF6DC8F4519840B92542C17147F0CD;
// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/InvalidProviderException
struct InvalidProviderException_t1E120054284844CBAC1E9F71CDB9B4FF0DF648CF;
// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/NoConfigurationFoundException
struct NoConfigurationFoundException_t728FF809CE0803B5EECC9D2F4B0963B191D3BC44;
// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/NoMatchingProviderFoundException
struct NoMatchingProviderFoundException_tF29724F243F43D010076DA4B50CC1FBA10786703;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseCreator_t4E77E30B98D4C4108F69664AA8741F1E18EA566F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CouldNotLoadAudioFileException_t38D8BE37A0E5DC53B9B9DE38A6BB47C2A50F6E35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITextToSpeechCreator_t033F33FE63FF6DC8F4519840B92542C17147F0CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidProviderException_t1E120054284844CBAC1E9F71CDB9B4FF0DF648CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoConfigurationFoundException_t728FF809CE0803B5EECC9D2F4B0963B191D3BC44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoMatchingProviderFoundException_tF29724F243F43D010076DA4B50CC1FBA10786703_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_t280A0EEC0ACADAE3E305AEFB3F247ED72DDF2315_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0DB26887BB76E922B58A892B2E490905A50A07F6;
IL2CPP_EXTERN_C String_t* _stringLiteral1032683CCF3D2EA1A66CE98F8F735078558EC71C;
IL2CPP_EXTERN_C String_t* _stringLiteral176CA81FCAAFC7E28768895C4C996AE51DD32E78;
IL2CPP_EXTERN_C String_t* _stringLiteral17F24B740F99D80DFE5E51D32E5D6CD252B29E12;
IL2CPP_EXTERN_C String_t* _stringLiteral1F9D975D25AB70D25DFF2A39E08CCF6D5CCA3241;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral265483C9037E1F442D997A959595E93402B01C8D;
IL2CPP_EXTERN_C String_t* _stringLiteral2D7469CB75A0721A69AEFBD5D948F064CA3587CF;
IL2CPP_EXTERN_C String_t* _stringLiteral36394919BE4BA7876D9963381AECED9103E7AED7;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3C686C624D22B0C45E4FADFB00FA535DDDC88AD7;
IL2CPP_EXTERN_C String_t* _stringLiteral3D4FE0CEFC04B14D3D9675C05BF4227B4DD7F2C9;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral7A5445989139CFB997A9544D62B0A6BC4BBF8BF6;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral9216BDEF5172F1DBAACFFF605E8C99BD4A930973;
IL2CPP_EXTERN_C String_t* _stringLiteral98169755957AE540EC41F2BDA298A71F9B48A4CF;
IL2CPP_EXTERN_C String_t* _stringLiteralA71835C02B0068E7EB5DB4C34281E4F9F69A9471;
IL2CPP_EXTERN_C String_t* _stringLiteralB7AD3BE74803C14B2CB5D2C17486D5F2138FDE60;
IL2CPP_EXTERN_C String_t* _stringLiteralCCAC2F2A74353AA4034827863390F45ED5B5408C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEE9018F0DF2E543853969473C43BFEC053250E7E;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m2683B0F239AED56D495AACF34A30687E7580F2E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B_m6F73BA14D5CB80D4D5ACD5369B8BE4A39EE67BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m9676687D98DD58E02373FF0979DEF085933B9D0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93_mB94BC91A2207DCBD0B3B2A7ACF9E1E3A13712492_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m792EBDC0995FB1C8EE85CE7D614F08D953230F79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mBF0353DFDA4F81FB5DFFF926FF206704D3AB18DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m2FE876EDDC2E4F3A0CDA14E2360E2C806BF5E2B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF567C6A1FEA33A1EF9F395C24D9CD4095E2B70A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mF62BDDDE4117AA164F8FDDA8C7E9E9FE3FDD79D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m8889CD98833041D0F942AF4FFA070793D6A75B15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_mDFE79EB84AC4A6FE3B1BB4C64EF4B69B0619D968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93_m6C9A9DF9DDF2032AC7386665B3C3DC8BBD8CDCB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B_mBC297EDCFD2F9EAD5E1CF14FF6CA00B1E172C062_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m3BF23D7AB89EA03322E0DBC67214E4ABA61C6402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6_TisU3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF_m2ADE794B3EFED657BA5522EF25A1195AF562C897_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF_m32051F124C6BF7458690DE1B0EAD005EE8D7EFEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseCreator__ctor_m827F5EC6C61DF648234AC57BBB6452C6EBC5856C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mAA03B15A669B250362B4BFACC0CC06863094CD36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD848213574C438C888FE61A26CC572808248226D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m642740E088498D28484DC1CEDF07A3C2AFDF3A71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB2911BAAD47F3DBAE9A9AF40F1C2ACEC871912B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtils_GetConcreteImplementationsOf_TisITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_mC557E281CAB87F05A0A182584FE9C4C157638B5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F_mA3B32382B318636948C52CC9A94A5F588DC74634_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisTextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F_m97A93DDF759CA08CF4CCECBD44CA7BF1976DC899_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsObject_1__ctor_m5FDA94AB95229AC21C9CC889650887623C7E99EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsObject_1_get_Instance_m3126322FB5F0874A0C64CC87C6DDECB909E35D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mAE0667ADA8CF22651A9B33AE5107E45BFB1CAB7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m76F1A8237FA83FEFE2EA60823CEB54D42861D841_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m5BC400000238AF0EF79816BFD737A06B49F25F95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mF67B1777A0C12E6EEA458AA4210768AAB390F19E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m8F761484522DA81252985511926635872EA964B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToSpeechAudio_OnSelectedLocaleChanged_m0784741A9B0AA00E4E4D712046C80D7628D34631_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToSpeechProviderFactory_CreateProvider_mDCA130C7D38B3AEEE18DB518F0F9096E2476AD16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToSpeechProviderFactory_RegisterProvider_mF21DEDDF9D8FCDE2357FDF965E5E76078E8E38C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CConvertTextToSpeechU3Ed__2_MoveNext_mE79561215D30F00751C35920ED514E47AD9C110F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_0_0_0_var;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBC148F9473FF1ECCFFCB442D78982E9C83B132EB 
{
};

// System.Collections.Generic.Dictionary`2<System.String,VRBuilder.TextToSpeech.TextToSpeechProviderFactory/ITextToSpeechCreator>
struct Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t60CCB3FB3062225C107DC096886856FE2D604D29* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tDC9A759531176631173398C3BE90C04BD664CF5D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tEC20DE949D24BC8B0478ADF1A6DB9D64099703EF* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// VRBuilder.Unity.Singleton`1<System.Object>
struct Singleton_1_t44355ECE83F29EC98CA129FB5C0A0D5357ACD4A0  : public RuntimeObject
{
};

// VRBuilder.Unity.Singleton`1<VRBuilder.TextToSpeech.TextToSpeechProviderFactory>
struct Singleton_1_t280A0EEC0ACADAE3E305AEFB3F247ED72DDF2315  : public RuntimeObject
{
};

// VRBuilder.Core.Configuration.BaseRuntimeConfiguration
struct BaseRuntimeConfiguration_tA6534EE83E1A33162E28993006E97132522760C6  : public RuntimeObject
{
	// VRBuilder.Core.SceneObjects.ISceneObjectRegistry VRBuilder.Core.Configuration.BaseRuntimeConfiguration::sceneObjectRegistry
	RuntimeObject* ___sceneObjectRegistry_0;
	// VRBuilder.Core.Configuration.ISceneConfiguration VRBuilder.Core.Configuration.BaseRuntimeConfiguration::sceneConfiguration
	RuntimeObject* ___sceneConfiguration_1;
	// VRBuilder.Core.Serialization.IProcessSerializer VRBuilder.Core.Configuration.BaseRuntimeConfiguration::<Serializer>k__BackingField
	RuntimeObject* ___U3CSerializerU3Ek__BackingField_2;
	// System.String VRBuilder.Core.Configuration.BaseRuntimeConfiguration::<DefaultInputActionAssetPath>k__BackingField
	String_t* ___U3CDefaultInputActionAssetPathU3Ek__BackingField_3;
	// System.String VRBuilder.Core.Configuration.BaseRuntimeConfiguration::<CustomInputActionAssetPath>k__BackingField
	String_t* ___U3CCustomInputActionAssetPathU3Ek__BackingField_4;
	// UnityEngine.InputSystem.InputActionAsset VRBuilder.Core.Configuration.BaseRuntimeConfiguration::inputActionAsset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___inputActionAsset_5;
	// VRBuilder.Core.Configuration.Modes.IModeHandler VRBuilder.Core.Configuration.BaseRuntimeConfiguration::<Modes>k__BackingField
	RuntimeObject* ___U3CModesU3Ek__BackingField_6;
	// VRBuilder.Core.RestrictiveEnvironment.StepLockHandlingStrategy VRBuilder.Core.Configuration.BaseRuntimeConfiguration::<StepLockHandling>k__BackingField
	StepLockHandlingStrategy_tE13D1873487AA7298585D24F516EDDDD71361934* ___U3CStepLockHandlingU3Ek__BackingField_7;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// VRBuilder.TextToSpeech.FileTextToSpeechProvider
struct FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788  : public RuntimeObject
{
	// VRBuilder.TextToSpeech.TextToSpeechConfiguration VRBuilder.TextToSpeech.FileTextToSpeechProvider::Configuration
	TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* ___Configuration_0;
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// VRBuilder.TextToSpeech.IRuntimeConfigurationExtensions
struct IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// VRBuilder.TextToSpeech.RuntimeConfigurationExtensions
struct RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// VRBuilder.TextToSpeech.Audio.TextToSpeechContent
struct TextToSpeechContent_tF2835F93B28D65116117089192E9C376A3968F1F  : public RuntimeObject
{
};

// VRBuilder.TextToSpeech.TextToSpeechUtils
struct TextToSpeechUtils_t1C286A8045D648A43A4DB21C0D8B206755B93F15  : public RuntimeObject
{
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

// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/BaseCreator
struct BaseCreator_t4E77E30B98D4C4108F69664AA8741F1E18EA566F  : public RuntimeObject
{
	// System.Type VRBuilder.TextToSpeech.TextToSpeechProviderFactory/BaseCreator::textToSpeechProviderType
	Type_t* ___textToSpeechProviderType_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>
struct TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t46575E75F710D631831E756B5DE20429700F6B95* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>
struct TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t290EA9539222B740AC917B9AB459B4F252E537C1* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_result_38;
};

// System.Threading.Tasks.Task`1<UnityEngine.AudioClip>
struct Task_1_t290EA9539222B740AC917B9AB459B4F252E537C1  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_38;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// UnityEngine.Localization.LocaleIdentifier
struct LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 
{
	// System.String UnityEngine.Localization.LocaleIdentifier::m_Code
	String_t* ___m_Code_0;
	// System.Globalization.CultureInfo UnityEngine.Localization.LocaleIdentifier::m_CultureInfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CultureInfo_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Localization.LocaleIdentifier
struct LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18_marshaled_pinvoke
{
	char* ___m_Code_0;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___m_CultureInfo_1;
};
// Native definition for COM marshalling of UnityEngine.Localization.LocaleIdentifier
struct LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18_marshaled_com
{
	Il2CppChar* ___m_Code_0;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___m_CultureInfo_1;
};

// System.Security.Cryptography.MD5
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// VRBuilder.TextToSpeech.Audio.TextToSpeechAudio
struct TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D  : public TextToSpeechContent_tF2835F93B28D65116117089192E9C376A3968F1F
{
	// System.Boolean VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::isLoading
	bool ___isLoading_0;
	// System.String VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::text
	String_t* ___text_1;
	// UnityEngine.AudioClip VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::<AudioClip>k__BackingField
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___U3CAudioClipU3Ek__BackingField_2;
};

// VRBuilder.TextToSpeech.TextToSpeechProviderFactory
struct TextToSpeechProviderFactory_tEC7E017208D7F8B3BA5979232DFDE02996A68361  : public Singleton_1_t280A0EEC0ACADAE3E305AEFB3F247ED72DDF2315
{
	// System.Collections.Generic.Dictionary`2<System.String,VRBuilder.TextToSpeech.TextToSpeechProviderFactory/ITextToSpeechCreator> VRBuilder.TextToSpeech.TextToSpeechProviderFactory::registeredProvider
	Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C* ___registeredProvider_1;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>
struct AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t46575E75F710D631831E756B5DE20429700F6B95* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>
struct AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t290EA9539222B740AC917B9AB459B4F252E537C1* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// VRBuilder.TextToSpeech.UnableToParseAudioFormatException
struct UnableToParseAudioFormatException_tAE27AF125BFDA9961EC01EDC0FAE024603A8D626  : public Exception_t
{
};

// VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2
struct U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5 
{
	// System.Int32 VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip> VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2::<>t__builder
	AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF ___U3CU3Et__builder_1;
	// VRBuilder.TextToSpeech.FileTextToSpeechProvider VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2::<>4__this
	FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788* ___U3CU3E4__this_2;
	// System.String VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2::text
	String_t* ___text_3;
	// UnityEngine.Localization.Locale VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2::locale
	Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* ___locale_4;
	// System.String VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2::<filePath>5__2
	String_t* ___U3CfilePathU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2::<>u__2
	TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 ___U3CU3Eu__2_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip> VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2::<>u__3
	TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6 ___U3CU3Eu__3_8;
};

// VRBuilder.TextToSpeech.FileTextToSpeechProvider/<GetCachedFile>d__5
struct U3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93 
{
	// System.Int32 VRBuilder.TextToSpeech.FileTextToSpeechProvider/<GetCachedFile>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]> VRBuilder.TextToSpeech.FileTextToSpeechProvider/<GetCachedFile>d__5::<>t__builder
	AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 ___U3CU3Et__builder_1;
	// System.String VRBuilder.TextToSpeech.FileTextToSpeechProvider/<GetCachedFile>d__5::filePath
	String_t* ___filePath_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> VRBuilder.TextToSpeech.FileTextToSpeechProvider/<GetCachedFile>d__5::<>u__1
	TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 ___U3CU3Eu__1_3;
};

// VRBuilder.TextToSpeech.FileTextToSpeechProvider/<IsFileCached>d__6
struct U3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B 
{
	// System.Int32 VRBuilder.TextToSpeech.FileTextToSpeechProvider/<IsFileCached>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> VRBuilder.TextToSpeech.FileTextToSpeechProvider/<IsFileCached>d__6::<>t__builder
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___U3CU3Et__builder_1;
	// System.String VRBuilder.TextToSpeech.FileTextToSpeechProvider/<IsFileCached>d__6::filePath
	String_t* ___filePath_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> VRBuilder.TextToSpeech.FileTextToSpeechProvider/<IsFileCached>d__6::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_3;
};

// VRBuilder.TextToSpeech.FileTextToSpeechProvider/CouldNotLoadAudioFileException
struct CouldNotLoadAudioFileException_t38D8BE37A0E5DC53B9B9DE38A6BB47C2A50F6E35  : public Exception_t
{
};

// VRBuilder.TextToSpeech.Audio.TextToSpeechAudio/<InitializeAudioClip>d__18
struct U3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF 
{
	// System.Int32 VRBuilder.TextToSpeech.Audio.TextToSpeechAudio/<InitializeAudioClip>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder VRBuilder.TextToSpeech.Audio.TextToSpeechAudio/<InitializeAudioClip>d__18::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// VRBuilder.TextToSpeech.Audio.TextToSpeechAudio VRBuilder.TextToSpeech.Audio.TextToSpeechAudio/<InitializeAudioClip>d__18::<>4__this
	TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip> VRBuilder.TextToSpeech.Audio.TextToSpeechAudio/<InitializeAudioClip>d__18::<>u__1
	TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6 ___U3CU3Eu__1_3;
};

// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/InvalidProviderException
struct InvalidProviderException_t1E120054284844CBAC1E9F71CDB9B4FF0DF648CF  : public Exception_t
{
};

// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/NoConfigurationFoundException
struct NoConfigurationFoundException_t728FF809CE0803B5EECC9D2F4B0963B191D3BC44  : public Exception_t
{
};

// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/NoMatchingProviderFoundException
struct NoMatchingProviderFoundException_tF29724F243F43D010076DA4B50CC1FBA10786703  : public Exception_t
{
};

// System.Action`1<UnityEngine.Localization.Locale>
struct Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38  : public MulticastDelegate_t
{
};

// VRBuilder.Core.Runtime.Utils.SettingsObject`1<VRBuilder.Core.Localization.LanguageSettings>
struct SettingsObject_1_t0DA827A5693810B94B6B738D5145E960BEB5DB17  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// VRBuilder.Core.Runtime.Utils.SettingsObject`1<VRBuilder.TextToSpeech.TextToSpeechConfiguration>
struct SettingsObject_1_tD736F721006CAE1F5D1FEA89CB9804F83578C2BD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Localization.Locale
struct Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Localization.LocaleIdentifier UnityEngine.Localization.Locale::m_Identifier
	LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 ___m_Identifier_4;
	// UnityEngine.Localization.Metadata.MetadataCollection UnityEngine.Localization.Locale::m_Metadata
	MetadataCollection_t79AF57BE506FF84FEF50E610C73ED4CA6D015CE0* ___m_Metadata_5;
	// System.String UnityEngine.Localization.Locale::m_LocaleName
	String_t* ___m_LocaleName_6;
	// System.String UnityEngine.Localization.Locale::m_CustomFormatCultureCode
	String_t* ___m_CustomFormatCultureCode_7;
	// System.Boolean UnityEngine.Localization.Locale::m_UseCustomFormatter
	bool ___m_UseCustomFormatter_8;
	// System.UInt16 UnityEngine.Localization.Locale::m_SortOrder
	uint16_t ___m_SortOrder_9;
	// System.IFormatProvider UnityEngine.Localization.Locale::m_Formatter
	RuntimeObject* ___m_Formatter_10;
};

// VRBuilder.Core.Localization.LanguageSettings
struct LanguageSettings_t644A5BE8AE6ECE199004889174DFBC0169D2DD13  : public SettingsObject_1_t0DA827A5693810B94B6B738D5145E960BEB5DB17
{
	// System.String VRBuilder.Core.Localization.LanguageSettings::ApplicationLanguage
	String_t* ___ApplicationLanguage_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// VRBuilder.TextToSpeech.TextToSpeechConfiguration
struct TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F  : public SettingsObject_1_tD736F721006CAE1F5D1FEA89CB9804F83578C2BD
{
	// System.String VRBuilder.TextToSpeech.TextToSpeechConfiguration::Provider
	String_t* ___Provider_5;
	// System.String VRBuilder.TextToSpeech.TextToSpeechConfiguration::Language
	String_t* ___Language_6;
	// System.String VRBuilder.TextToSpeech.TextToSpeechConfiguration::Voice
	String_t* ___Voice_7;
	// System.String VRBuilder.TextToSpeech.TextToSpeechConfiguration::StreamingAssetCacheDirectoryName
	String_t* ___StreamingAssetCacheDirectoryName_8;
	// System.String VRBuilder.TextToSpeech.TextToSpeechConfiguration::Auth
	String_t* ___Auth_9;
};

// VRBuilder.Core.Configuration.RuntimeConfigurator
struct RuntimeConfigurator_t23F3F8F041885DA6CBF963E065020FB1A77C7478  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String VRBuilder.Core.Configuration.RuntimeConfigurator::runtimeConfigurationName
	String_t* ___runtimeConfigurationName_6;
	// System.String VRBuilder.Core.Configuration.RuntimeConfigurator::selectedProcessStreamingAssetsPath
	String_t* ___selectedProcessStreamingAssetsPath_7;
	// System.String VRBuilder.Core.Configuration.RuntimeConfigurator::processStringLocalizationTable
	String_t* ___processStringLocalizationTable_8;
	// VRBuilder.Core.Configuration.BaseRuntimeConfiguration VRBuilder.Core.Configuration.RuntimeConfigurator::runtimeConfiguration
	BaseRuntimeConfiguration_tA6534EE83E1A33162E28993006E97132522760C6* ___runtimeConfiguration_9;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,VRBuilder.TextToSpeech.TextToSpeechProviderFactory/ITextToSpeechCreator>

// System.Collections.Generic.Dictionary`2<System.String,VRBuilder.TextToSpeech.TextToSpeechProviderFactory/ITextToSpeechCreator>

// VRBuilder.Unity.Singleton`1<System.Object>
struct Singleton_1_t44355ECE83F29EC98CA129FB5C0A0D5357ACD4A0_StaticFields
{
	// T VRBuilder.Unity.Singleton`1::instance
	RuntimeObject* ___instance_0;
};

// VRBuilder.Unity.Singleton`1<System.Object>

// VRBuilder.Unity.Singleton`1<VRBuilder.TextToSpeech.TextToSpeechProviderFactory>
struct Singleton_1_t280A0EEC0ACADAE3E305AEFB3F247ED72DDF2315_StaticFields
{
	// T VRBuilder.Unity.Singleton`1::instance
	TextToSpeechProviderFactory_tEC7E017208D7F8B3BA5979232DFDE02996A68361* ___instance_0;
};

// VRBuilder.Unity.Singleton`1<VRBuilder.TextToSpeech.TextToSpeechProviderFactory>

// VRBuilder.Core.Configuration.BaseRuntimeConfiguration

// VRBuilder.Core.Configuration.BaseRuntimeConfiguration

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// VRBuilder.TextToSpeech.FileTextToSpeechProvider

// VRBuilder.TextToSpeech.FileTextToSpeechProvider

// System.Security.Cryptography.HashAlgorithm

// System.Security.Cryptography.HashAlgorithm

// VRBuilder.TextToSpeech.IRuntimeConfigurationExtensions
struct IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2_StaticFields
{
	// VRBuilder.TextToSpeech.TextToSpeechConfiguration VRBuilder.TextToSpeech.IRuntimeConfigurationExtensions::textToSpeechConfiguration
	TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* ___textToSpeechConfiguration_0;
};

// VRBuilder.TextToSpeech.IRuntimeConfigurationExtensions

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// VRBuilder.TextToSpeech.RuntimeConfigurationExtensions
struct RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325_StaticFields
{
	// VRBuilder.TextToSpeech.TextToSpeechConfiguration VRBuilder.TextToSpeech.RuntimeConfigurationExtensions::textToSpeechConfiguration
	TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* ___textToSpeechConfiguration_0;
};

// VRBuilder.TextToSpeech.RuntimeConfigurationExtensions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// VRBuilder.TextToSpeech.Audio.TextToSpeechContent

// VRBuilder.TextToSpeech.Audio.TextToSpeechContent

// VRBuilder.TextToSpeech.TextToSpeechUtils

// VRBuilder.TextToSpeech.TextToSpeechUtils

// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/BaseCreator

// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/BaseCreator

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tE78D5901E25DE030D64ED783B6E0BED8282D0148* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Byte[]>

// System.Threading.Tasks.Task`1<UnityEngine.AudioClip>
struct Task_1_t290EA9539222B740AC917B9AB459B4F252E537C1_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t2F129C7FB63369D7A8C2092E8A8984194C81BAB8* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<UnityEngine.AudioClip>

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Boolean>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Localization.LocaleIdentifier

// UnityEngine.Localization.LocaleIdentifier

// System.Security.Cryptography.MD5

// System.Security.Cryptography.MD5

// System.Single

// System.Single

// VRBuilder.TextToSpeech.Audio.TextToSpeechAudio

// VRBuilder.TextToSpeech.Audio.TextToSpeechAudio

// VRBuilder.TextToSpeech.TextToSpeechProviderFactory

// VRBuilder.TextToSpeech.TextToSpeechProviderFactory

// System.Void

// System.Void

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>
struct AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t46575E75F710D631831E756B5DE20429700F6B95* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>
struct AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t290EA9539222B740AC917B9AB459B4F252E537C1* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// System.Type
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

// System.Type

// VRBuilder.TextToSpeech.UnableToParseAudioFormatException

// VRBuilder.TextToSpeech.UnableToParseAudioFormatException

// VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2

// VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2

// VRBuilder.TextToSpeech.FileTextToSpeechProvider/<GetCachedFile>d__5

// VRBuilder.TextToSpeech.FileTextToSpeechProvider/<GetCachedFile>d__5

// VRBuilder.TextToSpeech.FileTextToSpeechProvider/<IsFileCached>d__6

// VRBuilder.TextToSpeech.FileTextToSpeechProvider/<IsFileCached>d__6

// VRBuilder.TextToSpeech.FileTextToSpeechProvider/CouldNotLoadAudioFileException

// VRBuilder.TextToSpeech.FileTextToSpeechProvider/CouldNotLoadAudioFileException

// VRBuilder.TextToSpeech.Audio.TextToSpeechAudio/<InitializeAudioClip>d__18

// VRBuilder.TextToSpeech.Audio.TextToSpeechAudio/<InitializeAudioClip>d__18

// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/InvalidProviderException

// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/InvalidProviderException

// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/NoConfigurationFoundException

// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/NoConfigurationFoundException

// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/NoMatchingProviderFoundException

// VRBuilder.TextToSpeech.TextToSpeechProviderFactory/NoMatchingProviderFoundException

// System.Action`1<UnityEngine.Localization.Locale>

// System.Action`1<UnityEngine.Localization.Locale>

// VRBuilder.Core.Runtime.Utils.SettingsObject`1<VRBuilder.TextToSpeech.TextToSpeechConfiguration>
struct SettingsObject_1_tD736F721006CAE1F5D1FEA89CB9804F83578C2BD_StaticFields
{
	// T VRBuilder.Core.Runtime.Utils.SettingsObject`1::instance
	TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* ___instance_4;
};

// VRBuilder.Core.Runtime.Utils.SettingsObject`1<VRBuilder.TextToSpeech.TextToSpeechConfiguration>

// UnityEngine.Localization.Locale

// UnityEngine.Localization.Locale

// VRBuilder.Core.Localization.LanguageSettings

// VRBuilder.Core.Localization.LanguageSettings

// VRBuilder.TextToSpeech.TextToSpeechConfiguration

// VRBuilder.TextToSpeech.TextToSpeechConfiguration

// VRBuilder.Core.Configuration.RuntimeConfigurator
struct RuntimeConfigurator_t23F3F8F041885DA6CBF963E065020FB1A77C7478_StaticFields
{
	// System.EventHandler`1<VRBuilder.Core.Configuration.Modes.ModeChangedEventArgs> VRBuilder.Core.Configuration.RuntimeConfigurator::ModeChanged
	EventHandler_1_t4966B01DE51E4BDC24031A43E874165730585144* ___ModeChanged_4;
	// System.EventHandler`1<System.EventArgs> VRBuilder.Core.Configuration.RuntimeConfigurator::RuntimeConfigurationChanged
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___RuntimeConfigurationChanged_5;
	// VRBuilder.Core.Configuration.RuntimeConfigurator VRBuilder.Core.Configuration.RuntimeConfigurator::instance
	RuntimeConfigurator_t23F3F8F041885DA6CBF963E065020FB1A77C7478* ___instance_10;
};

// VRBuilder.Core.Configuration.RuntimeConfigurator
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_mE20E0D2987F4BD051A37417A052BB23AD0FDDBEC_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<VRBuilder.TextToSpeech.FileTextToSpeechProvider/<GetCachedFile>d__5>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93_m4A1EBBD0E0DDDE83374FD373C4C64A43A5A9E59E_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<VRBuilder.TextToSpeech.FileTextToSpeechProvider/<IsFileCached>d__6>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B_mBC297EDCFD2F9EAD5E1CF14FF6CA00B1E172C062_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m99042CCC1CFC13067944424C18BBD08E7FA2604E_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___0_awaiter, U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m313F021EA4F6A51B6BA781CD5DDC8F096C032F8C_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// T VRBuilder.Unity.Singleton`1<System.Object>::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_m9FAFF5C248224AED9C1A4C4CC1245AC6EEA47DC0_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,VRBuilder.TextToSpeech.FileTextToSpeechProvider/<GetCachedFile>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93_m296393773282C8169D19423EA3F41891743A198B_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,VRBuilder.TextToSpeech.FileTextToSpeechProvider/<IsFileCached>d__6>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B_m6F73BA14D5CB80D4D5ACD5369B8BE4A39EE67BCA_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___0_awaiter, U3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void VRBuilder.Core.Runtime.Utils.SettingsObject`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsObject_1__ctor_mC233154FBD41DE9055BCFDA159FB548D8826F0FE_gshared (SettingsObject_1_tADAE7515A9E8A429CD37BD66B2522D374E03E557* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void VRBuilder.Unity.Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_m055B401447074CDD3F06ECA2CCEE699DDB431C3B_gshared (Singleton_1_t44355ECE83F29EC98CA129FB5C0A0D5357ACD4A0* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Type> VRBuilder.Core.Utils.ReflectionUtils::GetConcreteImplementationsOf<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetConcreteImplementationsOf_TisRuntimeObject_m9507C7E6217E9D0EE55672BF2B062DC09AFFF846_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<VRBuilder.TextToSpeech.Audio.TextToSpeechAudio/<InitializeAudioClip>d__18>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF_m32051F124C6BF7458690DE1B0EAD005EE8D7EFEB_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF* ___0_stateMachine, const RuntimeMethod* method) ;
// T VRBuilder.Core.Runtime.Utils.SettingsObject`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingsObject_1_get_Instance_mADD4AC5D04FD5452594B8D4C6E0EC46B2517936B_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,VRBuilder.TextToSpeech.Audio.TextToSpeechAudio/<InitializeAudioClip>d__18>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF_m3F93C5AB5F2C07D43656C934D4C6B90F515F06C4_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF* ___1_stateMachine, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// VRBuilder.TextToSpeech.TextToSpeechConfiguration VRBuilder.TextToSpeech.TextToSpeechConfiguration::LoadConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* TextToSpeechConfiguration_LoadConfiguration_m3DBAAB33AEC1E8E127BCE3A8D6A8EC368E60B7CD (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::Create()
inline AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF AsyncTaskMethodBuilder_1_Create_mBF0353DFDA4F81FB5DFFF926FF206704D3AB18DF (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::Start<VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_mDFE79EB84AC4A6FE3B1BB4C64EF4B69B0619D968 (AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF* __this, U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF*, U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_mE20E0D2987F4BD051A37417A052BB23AD0FDDBEC_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::get_Task()
inline Task_1_t290EA9539222B740AC917B9AB459B4F252E537C1* AsyncTaskMethodBuilder_1_get_Task_m3BF23D7AB89EA03322E0DBC67214E4ABA61C6402 (AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t290EA9539222B740AC917B9AB459B4F252E537C1* (*) (AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::Create()
inline AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::Start<VRBuilder.TextToSpeech.FileTextToSpeechProvider/<GetCachedFile>d__5>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93_m6C9A9DF9DDF2032AC7386665B3C3DC8BBD8CDCB2 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, U3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, U3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93_m4A1EBBD0E0DDDE83374FD373C4C64A43A5A9E59E_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::get_Task()
inline Task_1_t46575E75F710D631831E756B5DE20429700F6B95* AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t46575E75F710D631831E756B5DE20429700F6B95* (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<VRBuilder.TextToSpeech.FileTextToSpeechProvider/<IsFileCached>d__6>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B_mBC297EDCFD2F9EAD5E1CF14FF6CA00B1E172C062 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, U3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B_mBC297EDCFD2F9EAD5E1CF14FF6CA00B1E172C062_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared)(__this, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.String VRBuilder.TextToSpeech.TextToSpeechUtils::GetUniqueTextToSpeechFilename(VRBuilder.TextToSpeech.TextToSpeechConfiguration,System.String,UnityEngine.Localization.Locale,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextToSpeechUtils_GetUniqueTextToSpeechFilename_m85B7B48280D09335A860C8BBF0FA71A108E824B8 (TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* ___0_configuration, String_t* ___1_text, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* ___2_locale, String_t* ___3_format, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
inline TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, const RuntimeMethod*))Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9 (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m2683B0F239AED56D495AACF34A30687E7580F2E5 (AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___0_awaiter, U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m99042CCC1CFC13067944424C18BBD08E7FA2604E_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Byte[]>::GetAwaiter()
inline TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0 (Task_1_t46575E75F710D631831E756B5DE20429700F6B95* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 (*) (Task_1_t46575E75F710D631831E756B5DE20429700F6B95*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2 (TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>,VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m9676687D98DD58E02373FF0979DEF085933B9D0F (AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF* __this, TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808* ___0_awaiter, U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF*, TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808*, U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m313F021EA4F6A51B6BA781CD5DDC8F096C032F8C_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>::GetResult()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0 (TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Single[] VRBuilder.TextToSpeech.TextToSpeechUtils::ShortsInByteArrayToFloats(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* TextToSpeechUtils_ShortsInByteArrayToFloats_mA1A6DA924880F06508B29DE357EC3428D6A47A0D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_shorts, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_mE8111F06981E42666B6A9A59D0A3EBE002D2CDFB (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_offsetSamples, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T VRBuilder.Unity.Singleton`1<VRBuilder.TextToSpeech.TextToSpeechProviderFactory>::get_Instance()
inline TextToSpeechProviderFactory_tEC7E017208D7F8B3BA5979232DFDE02996A68361* Singleton_1_get_Instance_m76F1A8237FA83FEFE2EA60823CEB54D42861D841_inline (const RuntimeMethod* method)
{
	return ((  TextToSpeechProviderFactory_tEC7E017208D7F8B3BA5979232DFDE02996A68361* (*) (const RuntimeMethod*))Singleton_1_get_Instance_m9FAFF5C248224AED9C1A4C4CC1245AC6EEA47DC0_gshared_inline)(method);
}
// VRBuilder.TextToSpeech.ITextToSpeechProvider VRBuilder.TextToSpeech.TextToSpeechProviderFactory::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextToSpeechProviderFactory_CreateProvider_m8BD567EDD395F4898AE33DE54076FBCB300493B2 (TextToSpeechProviderFactory_tEC7E017208D7F8B3BA5979232DFDE02996A68361* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<UnityEngine.AudioClip>::GetAwaiter()
inline TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6 Task_1_GetAwaiter_m8F761484522DA81252985511926635872EA964B1 (Task_1_t290EA9539222B740AC917B9AB459B4F252E537C1* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6 (*) (Task_1_t290EA9539222B740AC917B9AB459B4F252E537C1*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mF67B1777A0C12E6EEA458AA4210768AAB390F19E (TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>,VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m792EBDC0995FB1C8EE85CE7D614F08D953230F79 (AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF* __this, TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6* ___0_awaiter, U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF*, TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6*, U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m313F021EA4F6A51B6BA781CD5DDC8F096C032F8C_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>::GetResult()
inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* TaskAwaiter_1_GetResult_m5BC400000238AF0EF79816BFD737A06B49F25F95 (TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6* __this, const RuntimeMethod* method)
{
	return ((  AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*) (TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider/CouldNotLoadAudioFileException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CouldNotLoadAudioFileException__ctor_mADFAA8702A10F5F48997F819DEDB5FAA3DC99525 (CouldNotLoadAudioFileException_t38D8BE37A0E5DC53B9B9DE38A6BB47C2A50F6E35* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m2FE876EDDC2E4F3A0CDA14E2360E2C806BF5E2B6 (AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mF62BDDDE4117AA164F8FDDA8C7E9E9FE3FDD79D3 (AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertTextToSpeechU3Ed__2_MoveNext_mE79561215D30F00751C35920ED514E47AD9C110F (U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m8889CD98833041D0F942AF4FFA070793D6A75B15 (AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertTextToSpeechU3Ed__2_SetStateMachine_m464819641D2EA5F3CBA8464F1CB98E6F75872781 (U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Byte[]> VRBuilder.Core.IO.FileManager::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t46575E75F710D631831E756B5DE20429700F6B95* FileManager_Read_mBD428D42D4F59B5B24F136E661FC2D0DABFEAFE4 (String_t* ___0_filePath, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>,VRBuilder.TextToSpeech.FileTextToSpeechProvider/<GetCachedFile>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93_mB94BC91A2207DCBD0B3B2A7ACF9E1E3A13712492 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808* ___0_awaiter, U3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808*, U3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93_m296393773282C8169D19423EA3F41891743A198B_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF567C6A1FEA33A1EF9F395C24D9CD4095E2B70A6 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider/<GetCachedFile>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetCachedFileU3Ed__5_MoveNext_m7531D0CF78AE7D77F4F458C521D24B78386A9B29 (U3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider/<GetCachedFile>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetCachedFileU3Ed__5_SetStateMachine_m2FD59B630099452CECB7DCF037463062DA17F6B8 (U3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Boolean> VRBuilder.Core.IO.FileManager::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* FileManager_Exists_mDB38A5A7D420462E082A4F6883A437E97CA873D7 (String_t* ___0_filePath, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,VRBuilder.TextToSpeech.FileTextToSpeechProvider/<IsFileCached>d__6>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B_m6F73BA14D5CB80D4D5ACD5369B8BE4A39EE67BCA (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___0_awaiter, U3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B_m6F73BA14D5CB80D4D5ACD5369B8BE4A39EE67BCA_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared)(__this, ___0_result, method);
}
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider/<IsFileCached>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIsFileCachedU3Ed__6_MoveNext_m7B4D64C97E9EA7157B6E98FE77DD0282D0AA7CB1 (U3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared)(__this, ___0_stateMachine, method);
}
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider/<IsFileCached>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIsFileCachedU3Ed__6_SetStateMachine_mA90BBF758BB2B54FDFD412171B41ECDC59105BD6 (U3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void VRBuilder.Core.Runtime.Utils.SettingsObject`1<VRBuilder.TextToSpeech.TextToSpeechConfiguration>::.ctor()
inline void SettingsObject_1__ctor_m5FDA94AB95229AC21C9CC889650887623C7E99EC (SettingsObject_1_tD736F721006CAE1F5D1FEA89CB9804F83578C2BD* __this, const RuntimeMethod* method)
{
	((  void (*) (SettingsObject_1_tD736F721006CAE1F5D1FEA89CB9804F83578C2BD*, const RuntimeMethod*))SettingsObject_1__ctor_mC233154FBD41DE9055BCFDA159FB548D8826F0FE_gshared)(__this, method);
}
// T UnityEngine.Resources::Load<VRBuilder.TextToSpeech.TextToSpeechConfiguration>(System.String)
inline TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* Resources_Load_TisTextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F_mA3B32382B318636948C52CC9A94A5F588DC74634 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// VRBuilder.TextToSpeech.TextToSpeechConfiguration VRBuilder.TextToSpeech.TextToSpeechConfiguration::CreateNewConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* TextToSpeechConfiguration_CreateNewConfiguration_mFED4BED18F21F80456401DDED5F9812DC7551475 (const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<VRBuilder.TextToSpeech.TextToSpeechConfiguration>()
inline TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* ScriptableObject_CreateInstance_TisTextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F_m97A93DDF759CA08CF4CCECBD44CA7BF1976DC899 (const RuntimeMethod* method)
{
	return ((  TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared)(method);
}
// VRBuilder.Core.Configuration.BaseRuntimeConfiguration VRBuilder.Core.Configuration.RuntimeConfigurator::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseRuntimeConfiguration_tA6534EE83E1A33162E28993006E97132522760C6* RuntimeConfigurator_get_Configuration_m240115A530335A9A799EB54CE92C9DDC15A00F10 (const RuntimeMethod* method) ;
// System.Void VRBuilder.TextToSpeech.RuntimeConfigurationExtensions::SetTextToSpeechConfiguration(VRBuilder.Core.Configuration.BaseRuntimeConfiguration,VRBuilder.TextToSpeech.TextToSpeechConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfigurationExtensions_SetTextToSpeechConfiguration_mF243F901AE1039B429A8891B41696F3730176974 (BaseRuntimeConfiguration_tA6534EE83E1A33162E28993006E97132522760C6* ___0_runtimeConfiguration, TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* ___1_ttsConfiguration, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,VRBuilder.TextToSpeech.TextToSpeechProviderFactory/ITextToSpeechCreator>::.ctor()
inline void Dictionary_2__ctor_m642740E088498D28484DC1CEDF07A3C2AFDF3A71 (Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void VRBuilder.Unity.Singleton`1<VRBuilder.TextToSpeech.TextToSpeechProviderFactory>::.ctor()
inline void Singleton_1__ctor_mAE0667ADA8CF22651A9B33AE5107E45BFB1CAB7B (Singleton_1_t280A0EEC0ACADAE3E305AEFB3F247ED72DDF2315* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t280A0EEC0ACADAE3E305AEFB3F247ED72DDF2315*, const RuntimeMethod*))Singleton_1__ctor_m055B401447074CDD3F06ECA2CCEE699DDB431C3B_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<System.Type> VRBuilder.Core.Utils.ReflectionUtils::GetConcreteImplementationsOf<VRBuilder.TextToSpeech.ITextToSpeechProvider>()
inline RuntimeObject* ReflectionUtils_GetConcreteImplementationsOf_TisITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_mC557E281CAB87F05A0A182584FE9C4C157638B5A (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))ReflectionUtils_GetConcreteImplementationsOf_TisRuntimeObject_m9507C7E6217E9D0EE55672BF2B062DC09AFFF846_gshared)(method);
}
// System.Void VRBuilder.TextToSpeech.TextToSpeechProviderFactory::RegisterProvider(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechProviderFactory_RegisterProvider_mF21DEDDF9D8FCDE2357FDF965E5E76078E8E38C3 (TextToSpeechProviderFactory_tEC7E017208D7F8B3BA5979232DFDE02996A68361* __this, Type_t* ___0_textToSpeechProviderType, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void VRBuilder.TextToSpeech.TextToSpeechProviderFactory/InvalidProviderException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidProviderException__ctor_m934E6C3F7E4B9BFDE82676F6103ED58FDFACA748 (InvalidProviderException_t1E120054284844CBAC1E9F71CDB9B4FF0DF648CF* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Void VRBuilder.TextToSpeech.TextToSpeechProviderFactory/BaseCreator::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCreator__ctor_m827F5EC6C61DF648234AC57BBB6452C6EBC5856C (BaseCreator_t4E77E30B98D4C4108F69664AA8741F1E18EA566F* __this, Type_t* ___0_textToSpeechProviderType, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,VRBuilder.TextToSpeech.TextToSpeechProviderFactory/ITextToSpeechCreator>::Add(TKey,TValue)
inline void Dictionary_2_Add_mAA03B15A669B250362B4BFACC0CC06863094CD36 (Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// VRBuilder.TextToSpeech.ITextToSpeechProvider VRBuilder.TextToSpeech.TextToSpeechProviderFactory::CreateProvider(VRBuilder.TextToSpeech.TextToSpeechConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextToSpeechProviderFactory_CreateProvider_mDCA130C7D38B3AEEE18DB518F0F9096E2476AD16 (TextToSpeechProviderFactory_tEC7E017208D7F8B3BA5979232DFDE02996A68361* __this, TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* ___0_configuration, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void VRBuilder.TextToSpeech.TextToSpeechProviderFactory/NoConfigurationFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoConfigurationFoundException__ctor_mFB12B9A42A082DAE0B486F97B1D8500697273412 (NoConfigurationFoundException_t728FF809CE0803B5EECC9D2F4B0963B191D3BC44* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,VRBuilder.TextToSpeech.TextToSpeechProviderFactory/ITextToSpeechCreator>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD848213574C438C888FE61A26CC572808248226D (Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Void VRBuilder.TextToSpeech.TextToSpeechProviderFactory/NoMatchingProviderFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoMatchingProviderFoundException__ctor_mBC8883E62F7676DB1EA90C0FFA866C609C1B6392 (NoMatchingProviderFoundException_tF29724F243F43D010076DA4B50CC1FBA10786703* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,VRBuilder.TextToSpeech.TextToSpeechProviderFactory/ITextToSpeechCreator>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_mB2911BAAD47F3DBAE9A9AF40F1C2ACEC871912B3 (Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// UnityEngine.Localization.LocaleIdentifier UnityEngine.Localization.Locale::get_Identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 Locale_get_Identifier_mB725A4E8F29CA5C0544D03E1DD10767B54BCF29F_inline (Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Localization.LocaleIdentifier::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LocaleIdentifier_get_Code_mD6E9CE9BCBEFE58DEDD482AA3C6BAC6B9BF68AE5_inline (LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18* __this, const RuntimeMethod* method) ;
// System.String VRBuilder.TextToSpeech.TextToSpeechUtils::GetMd5Hash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextToSpeechUtils_GetMd5Hash_mF802C45AA2C4917307DF54B026C6702064AF0EBF (String_t* ___0_input, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Security.Cryptography.MD5 System.Security.Cryptography.MD5::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* MD5_Create_mD7AEBE7A752D163971C764A9A8CC0029C865F223 (const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310 (uint8_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::InitializeAudioClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechAudio_InitializeAudioClip_m9420B39D8D9AFDF3EBA4697021115D39A57C95FE (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, const RuntimeMethod* method) ;
// System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechAudio__ctor_mE5C5E418A50EC3E6AB25381048B50973D393EC9D (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, String_t* ___0_text, const RuntimeMethod* method) ;
// System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechContent__ctor_m02A445BA17DF1D68F7041D65C08CBE917F3F4894 (TextToSpeechContent_tF2835F93B28D65116117089192E9C376A3968F1F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Localization.Settings.LocalizationSettings::get_HasSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalizationSettings_get_HasSettings_m4C99F58B4C4135F60D59C008341E5562525BB369 (const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Localization.Locale>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5CD9148DEE5317BA23F52D3CFF3B775540F3D24D (Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Localization.Settings.LocalizationSettings::add_SelectedLocaleChanged(System.Action`1<UnityEngine.Localization.Locale>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationSettings_add_SelectedLocaleChanged_m8F417D4662DEDA1C37BE3A159B956EFCDE4ADF79 (Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.AudioClip VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::get_AudioClip()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* TextToSpeechAudio_get_AudioClip_mD1BCCED1898475DF1A02E5135122856BFE8C1B23_inline (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<VRBuilder.TextToSpeech.Audio.TextToSpeechAudio/<InitializeAudioClip>d__18>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF_m32051F124C6BF7458690DE1B0EAD005EE8D7EFEB (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF_m32051F124C6BF7458690DE1B0EAD005EE8D7EFEB_gshared)(__this, ___0_stateMachine, method);
}
// VRBuilder.Core.Configuration.RuntimeConfigurator VRBuilder.Core.Configuration.RuntimeConfigurator::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeConfigurator_t23F3F8F041885DA6CBF963E065020FB1A77C7478* RuntimeConfigurator_get_Instance_mC3FA36748ECEDB3A40DB0AD952E29C5E775E1FE3 (const RuntimeMethod* method) ;
// System.String VRBuilder.Core.Configuration.RuntimeConfigurator::GetProcessStringLocalizationTable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RuntimeConfigurator_GetProcessStringLocalizationTable_m8A37F97B43EC884BC788FD6283937665E8C8329D_inline (RuntimeConfigurator_t23F3F8F041885DA6CBF963E065020FB1A77C7478* __this, const RuntimeMethod* method) ;
// T VRBuilder.Core.Runtime.Utils.SettingsObject`1<VRBuilder.Core.Localization.LanguageSettings>::get_Instance()
inline LanguageSettings_t644A5BE8AE6ECE199004889174DFBC0169D2DD13* SettingsObject_1_get_Instance_m3126322FB5F0874A0C64CC87C6DDECB909E35D42 (const RuntimeMethod* method)
{
	return ((  LanguageSettings_t644A5BE8AE6ECE199004889174DFBC0169D2DD13* (*) (const RuntimeMethod*))SettingsObject_1_get_Instance_mADD4AC5D04FD5452594B8D4C6E0EC46B2517936B_gshared)(method);
}
// UnityEngine.Localization.Locale VRBuilder.Core.Localization.LanguageSettings::get_ActiveOrDefaultLocale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* LanguageSettings_get_ActiveOrDefaultLocale_mCE4EF49729A8D32E5A08C227551AD75992C71C9B (LanguageSettings_t644A5BE8AE6ECE199004889174DFBC0169D2DD13* __this, const RuntimeMethod* method) ;
// System.String VRBuilder.Core.Localization.LanguageUtils::GetLocalizedString(System.String,System.String,UnityEngine.Localization.Locale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LanguageUtils_GetLocalizedString_m9DA23749015C7956727B3A3D6FED56EB25B1E654 (String_t* ___0_localizationKey, String_t* ___1_localizationTable, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* ___2_locale, const RuntimeMethod* method) ;
// System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::set_AudioClip(UnityEngine.AudioClip)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextToSpeechAudio_set_AudioClip_m3AC68EAB796BF9530E2FD7970D70D1A27C21E36E_inline (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// VRBuilder.TextToSpeech.TextToSpeechConfiguration VRBuilder.TextToSpeech.RuntimeConfigurationExtensions::GetTextToSpeechConfiguration(VRBuilder.Core.Configuration.BaseRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* RuntimeConfigurationExtensions_GetTextToSpeechConfiguration_mF5BB573835BDC7A86CC715DAA97B3168414C5D4A (BaseRuntimeConfiguration_tA6534EE83E1A33162E28993006E97132522760C6* ___0_runtimeConfiguration, const RuntimeMethod* method) ;
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider::.ctor(VRBuilder.TextToSpeech.TextToSpeechConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileTextToSpeechProvider__ctor_mE44A38D806E9EEDC8739858947C3402CFB789572 (FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788* __this, TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* ___0_configuration, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>,VRBuilder.TextToSpeech.Audio.TextToSpeechAudio/<InitializeAudioClip>d__18>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6_TisU3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF_m2ADE794B3EFED657BA5522EF25A1195AF562C897 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6* ___0_awaiter, U3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6*, U3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF_m3F93C5AB5F2C07D43656C934D4C6B90F515F06C4_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechAudio/<InitializeAudioClip>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAudioClipU3Ed__18_MoveNext_mAA400B603D5E52EC7150637961ADED9BEB29621B (U3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechAudio/<InitializeAudioClip>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAudioClipU3Ed__18_SetStateMachine_mD69EBFDD3A5A4757CDAF35C85EBCE88913D6A603 (U3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
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
// VRBuilder.TextToSpeech.TextToSpeechConfiguration VRBuilder.TextToSpeech.IRuntimeConfigurationExtensions::GetTextToSpeechConfiguration(VRBuilder.Core.Configuration.IRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* IRuntimeConfigurationExtensions_GetTextToSpeechConfiguration_m539BEEB3E85CDB93D15E561D357454602B4424E4 (RuntimeObject* ___0_runtimeConfiguration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (textToSpeechConfiguration == null)
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_0 = ((IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2_StaticFields*)il2cpp_codegen_static_fields_for(IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2_il2cpp_TypeInfo_var))->___textToSpeechConfiguration_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// textToSpeechConfiguration = TextToSpeechConfiguration.LoadConfiguration();
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_2;
		L_2 = TextToSpeechConfiguration_LoadConfiguration_m3DBAAB33AEC1E8E127BCE3A8D6A8EC368E60B7CD(NULL);
		((IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2_StaticFields*)il2cpp_codegen_static_fields_for(IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2_il2cpp_TypeInfo_var))->___textToSpeechConfiguration_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2_StaticFields*)il2cpp_codegen_static_fields_for(IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2_il2cpp_TypeInfo_var))->___textToSpeechConfiguration_0), (void*)L_2);
	}

IL_0017:
	{
		// return textToSpeechConfiguration;
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_3 = ((IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2_StaticFields*)il2cpp_codegen_static_fields_for(IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2_il2cpp_TypeInfo_var))->___textToSpeechConfiguration_0;
		return L_3;
	}
}
// System.Void VRBuilder.TextToSpeech.IRuntimeConfigurationExtensions::SetTextToSpeechConfiguration(VRBuilder.Core.Configuration.IRuntimeConfiguration,VRBuilder.TextToSpeech.TextToSpeechConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRuntimeConfigurationExtensions_SetTextToSpeechConfiguration_m8A25D27CE9880C67DA3147C6D9D465B7694128D2 (RuntimeObject* ___0_runtimeConfiguration, TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* ___1_ttsConfiguration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textToSpeechConfiguration = ttsConfiguration;
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_0 = ___1_ttsConfiguration;
		((IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2_StaticFields*)il2cpp_codegen_static_fields_for(IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2_il2cpp_TypeInfo_var))->___textToSpeechConfiguration_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2_StaticFields*)il2cpp_codegen_static_fields_for(IRuntimeConfigurationExtensions_tA7A5CBDB955F60E5BEFCE054296F02C88E1A6CB2_il2cpp_TypeInfo_var))->___textToSpeechConfiguration_0), (void*)L_0);
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
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider::.ctor(VRBuilder.TextToSpeech.TextToSpeechConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileTextToSpeechProvider__ctor_mE44A38D806E9EEDC8739858947C3402CFB789572 (FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788* __this, TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* ___0_configuration, const RuntimeMethod* method) 
{
	{
		// public FileTextToSpeechProvider(TextToSpeechConfiguration configuration)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Configuration = configuration;
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_0 = ___0_configuration;
		__this->___Configuration_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Configuration_0), (void*)L_0);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip> VRBuilder.TextToSpeech.FileTextToSpeechProvider::ConvertTextToSpeech(System.String,UnityEngine.Localization.Locale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t290EA9539222B740AC917B9AB459B4F252E537C1* FileTextToSpeechProvider_ConvertTextToSpeech_m1CEC072D39A1A82E51C55A00DB85FCF697C364FC (FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788* __this, String_t* ___0_text, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* ___1_locale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mBF0353DFDA4F81FB5DFFF926FF206704D3AB18DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_mDFE79EB84AC4A6FE3B1BB4C64EF4B69B0619D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m3BF23D7AB89EA03322E0DBC67214E4ABA61C6402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mBF0353DFDA4F81FB5DFFF926FF206704D3AB18DF(AsyncTaskMethodBuilder_1_Create_mBF0353DFDA4F81FB5DFFF926FF206704D3AB18DF_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		String_t* L_1 = ___0_text;
		(&V_0)->___text_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___text_3), (void*)L_1);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_2 = ___1_locale;
		(&V_0)->___locale_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___locale_4), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_mDFE79EB84AC4A6FE3B1BB4C64EF4B69B0619D968(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_mDFE79EB84AC4A6FE3B1BB4C64EF4B69B0619D968_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t290EA9539222B740AC917B9AB459B4F252E537C1* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m3BF23D7AB89EA03322E0DBC67214E4ABA61C6402(L_4, AsyncTaskMethodBuilder_1_get_Task_m3BF23D7AB89EA03322E0DBC67214E4ABA61C6402_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider::SetConfig(VRBuilder.TextToSpeech.TextToSpeechConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileTextToSpeechProvider_SetConfig_m316177A109447D3888E6ADF6639BEEE4ADEEDDC0 (FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788* __this, TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* ___0_configuration, const RuntimeMethod* method) 
{
	{
		// Configuration = configuration;
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_0 = ___0_configuration;
		__this->___Configuration_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Configuration_0), (void*)L_0);
		// }
		return;
	}
}
// System.String VRBuilder.TextToSpeech.FileTextToSpeechProvider::GetPathToFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileTextToSpeechProvider_GetPathToFile_mB0ED871850275170EBF05E961F784A21B8B3168F (FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788* __this, String_t* ___0_filename, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string directory = $"{Configuration.StreamingAssetCacheDirectoryName}/{filename}";
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_0 = __this->___Configuration_0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___StreamingAssetCacheDirectoryName_8;
		String_t* L_2 = ___0_filename;
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_2, NULL);
		// return directory;
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<System.Byte[]> VRBuilder.TextToSpeech.FileTextToSpeechProvider::GetCachedFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t46575E75F710D631831E756B5DE20429700F6B95* FileTextToSpeechProvider_GetCachedFile_mD703B898C48CCD7F59E9BE27717A41E8C79A14D8 (FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788* __this, String_t* ___0_filePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93_m6C9A9DF9DDF2032AC7386665B3C3DC8BBD8CDCB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891(AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		String_t* L_1 = ___0_filePath;
		(&V_0)->___filePath_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___filePath_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93_m6C9A9DF9DDF2032AC7386665B3C3DC8BBD8CDCB2(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93_m6C9A9DF9DDF2032AC7386665B3C3DC8BBD8CDCB2_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A(L_3, AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> VRBuilder.TextToSpeech.FileTextToSpeechProvider::IsFileCached(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* FileTextToSpeechProvider_IsFileCached_m8FA8952F63004B06766DD14BAAEC3370B2B02852 (FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788* __this, String_t* ___0_filePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B_mBC297EDCFD2F9EAD5E1CF14FF6CA00B1E172C062_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D(AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		String_t* L_1 = ___0_filePath;
		(&V_0)->___filePath_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___filePath_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B_mBC297EDCFD2F9EAD5E1CF14FF6CA00B1E172C062(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B_mBC297EDCFD2F9EAD5E1CF14FF6CA00B1E172C062_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(L_3, AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		return L_4;
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
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider/CouldNotLoadAudioFileException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CouldNotLoadAudioFileException__ctor_mADFAA8702A10F5F48997F819DEDB5FAA3DC99525 (CouldNotLoadAudioFileException_t38D8BE37A0E5DC53B9B9DE38A6BB47C2A50F6E35* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CouldNotLoadAudioFileException(string msg) : base(msg)
		String_t* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider/CouldNotLoadAudioFileException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CouldNotLoadAudioFileException__ctor_mBFBB8B92C0BE449CD8486F5BE8F3C2E7198E715E (CouldNotLoadAudioFileException_t38D8BE37A0E5DC53B9B9DE38A6BB47C2A50F6E35* __this, String_t* ___0_msg, Exception_t* ___1_ex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CouldNotLoadAudioFileException(string msg, Exception ex) : base(msg, ex)
		String_t* L_0 = ___0_msg;
		Exception_t* L_1 = ___1_ex;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertTextToSpeechU3Ed__2_MoveNext_mE79561215D30F00751C35920ED514E47AD9C110F (U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m2683B0F239AED56D495AACF34A30687E7580F2E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m9676687D98DD58E02373FF0979DEF085933B9D0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m792EBDC0995FB1C8EE85CE7D614F08D953230F79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF62BDDDE4117AA164F8FDDA8C7E9E9FE3FDD79D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m76F1A8237FA83FEFE2EA60823CEB54D42861D841_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t280A0EEC0ACADAE3E305AEFB3F247ED72DDF2315_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5BC400000238AF0EF79816BFD737A06B49F25F95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mF67B1777A0C12E6EEA458AA4210768AAB390F19E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m8F761484522DA81252985511926635872EA964B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F9D975D25AB70D25DFF2A39E08CCF6D5CCA3241);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7AD3BE74803C14B2CB5D2C17486D5F2138FDE60);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788* V_1 = NULL;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_2 = NULL;
	String_t* V_3 = NULL;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_4 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_6 = NULL;
	TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 V_7;
	memset((&V_7), 0, sizeof(V_7));
	TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_008d_1;
				}
				case 1:
				{
					goto IL_00f6_1;
				}
				case 2:
				{
					goto IL_019f_1;
				}
			}
		}
		{
			// string filename = Configuration.GetUniqueTextToSpeechFilename(text, locale);
			FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788* L_3 = V_1;
			NullCheck(L_3);
			TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_4 = L_3->___Configuration_0;
			String_t* L_5 = __this->___text_3;
			Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_6 = __this->___locale_4;
			String_t* L_7;
			L_7 = TextToSpeechUtils_GetUniqueTextToSpeechFilename_m85B7B48280D09335A860C8BBF0FA71A108E824B8(L_4, L_5, L_6, _stringLiteralB7AD3BE74803C14B2CB5D2C17486D5F2138FDE60, NULL);
			V_3 = L_7;
			// string filePath = GetPathToFile(filename);
			FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788* L_8 = V_1;
			String_t* L_9 = V_3;
			NullCheck(L_8);
			String_t* L_10;
			L_10 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String VRBuilder.TextToSpeech.FileTextToSpeechProvider::GetPathToFile(System.String) */, L_8, L_9);
			__this->___U3CfilePathU3E5__2_5 = L_10;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CfilePathU3E5__2_5), (void*)L_10);
			// AudioClip audioClip = null;
			V_4 = (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL;
			// if (await IsFileCached(filePath))
			FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788* L_11 = V_1;
			String_t* L_12 = __this->___U3CfilePathU3E5__2_5;
			NullCheck(L_11);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_13;
			L_13 = VirtualFuncInvoker1< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t* >::Invoke(8 /* System.Threading.Tasks.Task`1<System.Boolean> VRBuilder.TextToSpeech.FileTextToSpeechProvider::IsFileCached(System.String) */, L_11, L_12);
			NullCheck(L_13);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_14;
			L_14 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_13, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_5 = L_14;
			bool L_15;
			L_15 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_5), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_00aa_1;
			}
		}
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_17 = V_5;
			__this->___U3CU3Eu__1_6 = L_17;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF* L_18 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m2683B0F239AED56D495AACF34A30687E7580F2E5(L_18, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m2683B0F239AED56D495AACF34A30687E7580F2E5_RuntimeMethod_var);
			goto IL_022a;
		}

IL_008d_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_19 = __this->___U3CU3Eu__1_6;
			V_5 = L_19;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_20 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_20, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
		}

IL_00aa_1:
		{
			bool L_22;
			L_22 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_5), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			if (!L_22)
			{
				goto IL_0146_1;
			}
		}
		{
			// byte[] bytes = await GetCachedFile(filePath);
			FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788* L_23 = V_1;
			String_t* L_24 = __this->___U3CfilePathU3E5__2_5;
			NullCheck(L_23);
			Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_25;
			L_25 = VirtualFuncInvoker1< Task_1_t46575E75F710D631831E756B5DE20429700F6B95*, String_t* >::Invoke(7 /* System.Threading.Tasks.Task`1<System.Byte[]> VRBuilder.TextToSpeech.FileTextToSpeechProvider::GetCachedFile(System.String) */, L_23, L_24);
			NullCheck(L_25);
			TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 L_26;
			L_26 = Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0(L_25, Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0_RuntimeMethod_var);
			V_7 = L_26;
			bool L_27;
			L_27 = TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2((&V_7), TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_0113_1;
			}
		}
		{
			int32_t L_28 = 1;
			V_0 = L_28;
			__this->___U3CU3E1__state_0 = L_28;
			TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 L_29 = V_7;
			__this->___U3CU3Eu__2_7 = L_29;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF* L_30 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m9676687D98DD58E02373FF0979DEF085933B9D0F(L_30, (&V_7), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m9676687D98DD58E02373FF0979DEF085933B9D0F_RuntimeMethod_var);
			goto IL_022a;
		}

IL_00f6_1:
		{
			TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 L_31 = __this->___U3CU3Eu__2_7;
			V_7 = L_31;
			TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808* L_32 = (&__this->___U3CU3Eu__2_7);
			il2cpp_codegen_initobj(L_32, sizeof(TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808));
			int32_t L_33 = (-1);
			V_0 = L_33;
			__this->___U3CU3E1__state_0 = L_33;
		}

IL_0113_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
			L_34 = TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0((&V_7), TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0_RuntimeMethod_var);
			// float[] sound = TextToSpeechUtils.ShortsInByteArrayToFloats(bytes);
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35;
			L_35 = TextToSpeechUtils_ShortsInByteArrayToFloats_mA1A6DA924880F06508B29DE357EC3428D6A47A0D(L_34, NULL);
			V_6 = L_35;
			// audioClip = AudioClip.Create(text, channels: 1, frequency: 48000, lengthSamples: sound.Length, stream: false);
			String_t* L_36 = __this->___text_3;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = V_6;
			NullCheck(L_37);
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_38;
			L_38 = AudioClip_Create_mE8111F06981E42666B6A9A59D0A3EBE002D2CDFB(L_36, ((int32_t)(((RuntimeArray*)L_37)->max_length)), 1, ((int32_t)48000), (bool)0, NULL);
			V_4 = L_38;
			// audioClip.SetData(sound, 0);
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_39 = V_4;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_40 = V_6;
			NullCheck(L_39);
			bool L_41;
			L_41 = AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3(L_39, L_40, 0, NULL);
			goto IL_01c5_1;
		}

IL_0146_1:
		{
			// Debug.Log($"No audio cached for TTS string. Audio will be generated in real time.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1F9D975D25AB70D25DFF2A39E08CCF6D5CCA3241, NULL);
			// audioClip = await TextToSpeechProviderFactory.Instance.CreateProvider().ConvertTextToSpeech(text, locale);
			il2cpp_codegen_runtime_class_init_inline(Singleton_1_t280A0EEC0ACADAE3E305AEFB3F247ED72DDF2315_il2cpp_TypeInfo_var);
			TextToSpeechProviderFactory_tEC7E017208D7F8B3BA5979232DFDE02996A68361* L_42;
			L_42 = Singleton_1_get_Instance_m76F1A8237FA83FEFE2EA60823CEB54D42861D841_inline(Singleton_1_get_Instance_m76F1A8237FA83FEFE2EA60823CEB54D42861D841_RuntimeMethod_var);
			NullCheck(L_42);
			RuntimeObject* L_43;
			L_43 = TextToSpeechProviderFactory_CreateProvider_m8BD567EDD395F4898AE33DE54076FBCB300493B2(L_42, NULL);
			String_t* L_44 = __this->___text_3;
			Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_45 = __this->___locale_4;
			NullCheck(L_43);
			Task_1_t290EA9539222B740AC917B9AB459B4F252E537C1* L_46;
			L_46 = InterfaceFuncInvoker2< Task_1_t290EA9539222B740AC917B9AB459B4F252E537C1*, String_t*, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* >::Invoke(1 /* System.Threading.Tasks.Task`1<UnityEngine.AudioClip> VRBuilder.TextToSpeech.ITextToSpeechProvider::ConvertTextToSpeech(System.String,UnityEngine.Localization.Locale) */, ITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_il2cpp_TypeInfo_var, L_43, L_44, L_45);
			NullCheck(L_46);
			TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6 L_47;
			L_47 = Task_1_GetAwaiter_m8F761484522DA81252985511926635872EA964B1(L_46, Task_1_GetAwaiter_m8F761484522DA81252985511926635872EA964B1_RuntimeMethod_var);
			V_8 = L_47;
			bool L_48;
			L_48 = TaskAwaiter_1_get_IsCompleted_mF67B1777A0C12E6EEA458AA4210768AAB390F19E((&V_8), TaskAwaiter_1_get_IsCompleted_mF67B1777A0C12E6EEA458AA4210768AAB390F19E_RuntimeMethod_var);
			if (L_48)
			{
				goto IL_01bc_1;
			}
		}
		{
			int32_t L_49 = 2;
			V_0 = L_49;
			__this->___U3CU3E1__state_0 = L_49;
			TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6 L_50 = V_8;
			__this->___U3CU3Eu__3_8 = L_50;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__3_8))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF* L_51 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m792EBDC0995FB1C8EE85CE7D614F08D953230F79(L_51, (&V_8), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6_TisU3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5_m792EBDC0995FB1C8EE85CE7D614F08D953230F79_RuntimeMethod_var);
			goto IL_022a;
		}

IL_019f_1:
		{
			TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6 L_52 = __this->___U3CU3Eu__3_8;
			V_8 = L_52;
			TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6* L_53 = (&__this->___U3CU3Eu__3_8);
			il2cpp_codegen_initobj(L_53, sizeof(TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->___U3CU3E1__state_0 = L_54;
		}

IL_01bc_1:
		{
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_55;
			L_55 = TaskAwaiter_1_GetResult_m5BC400000238AF0EF79816BFD737A06B49F25F95((&V_8), TaskAwaiter_1_GetResult_m5BC400000238AF0EF79816BFD737A06B49F25F95_RuntimeMethod_var);
			V_4 = L_55;
		}

IL_01c5_1:
		{
			// if (audioClip == null)
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_56 = V_4;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_57;
			L_57 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_56, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_57)
			{
				goto IL_01ea_1;
			}
		}
		{
			// throw new CouldNotLoadAudioFileException($"AudioClip is null for text '{text}'");
			String_t* L_58 = __this->___text_3;
			String_t* L_59;
			L_59 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE9018F0DF2E543853969473C43BFEC053250E7E)), L_58, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
			CouldNotLoadAudioFileException_t38D8BE37A0E5DC53B9B9DE38A6BB47C2A50F6E35* L_60 = (CouldNotLoadAudioFileException_t38D8BE37A0E5DC53B9B9DE38A6BB47C2A50F6E35*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CouldNotLoadAudioFileException_t38D8BE37A0E5DC53B9B9DE38A6BB47C2A50F6E35_il2cpp_TypeInfo_var)));
			NullCheck(L_60);
			CouldNotLoadAudioFileException__ctor_mADFAA8702A10F5F48997F819DEDB5FAA3DC99525(L_60, L_59, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CConvertTextToSpeechU3Ed__2_MoveNext_mE79561215D30F00751C35920ED514E47AD9C110F_RuntimeMethod_var)));
		}

IL_01ea_1:
		{
			// return audioClip;
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_61 = V_4;
			V_2 = L_61;
			goto IL_020f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ef;
		}
		throw e;
	}

CATCH_01ef:
	{// begin catch(System.Exception)
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CfilePathU3E5__2_5 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CfilePathU3E5__2_5), (void*)(String_t*)NULL);
		AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF* L_62 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_63 = V_9;
		AsyncTaskMethodBuilder_1_SetException_m2FE876EDDC2E4F3A0CDA14E2360E2C806BF5E2B6(L_62, L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m2FE876EDDC2E4F3A0CDA14E2360E2C806BF5E2B6_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_022a;
	}// end catch (depth: 1)

IL_020f:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CfilePathU3E5__2_5 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CfilePathU3E5__2_5), (void*)(String_t*)NULL);
		AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF* L_64 = (&__this->___U3CU3Et__builder_1);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_65 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mF62BDDDE4117AA164F8FDDA8C7E9E9FE3FDD79D3(L_64, L_65, AsyncTaskMethodBuilder_1_SetResult_mF62BDDDE4117AA164F8FDDA8C7E9E9FE3FDD79D3_RuntimeMethod_var);
	}

IL_022a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CConvertTextToSpeechU3Ed__2_MoveNext_mE79561215D30F00751C35920ED514E47AD9C110F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5*>(__this + _offset);
	U3CConvertTextToSpeechU3Ed__2_MoveNext_mE79561215D30F00751C35920ED514E47AD9C110F(_thisAdjusted, method);
}
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider/<ConvertTextToSpeech>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertTextToSpeechU3Ed__2_SetStateMachine_m464819641D2EA5F3CBA8464F1CB98E6F75872781 (U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m8889CD98833041D0F942AF4FFA070793D6A75B15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t2C4D7E1C76681879D1D1737BCD4B020BC81E81DF* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m8889CD98833041D0F942AF4FFA070793D6A75B15(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m8889CD98833041D0F942AF4FFA070793D6A75B15_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CConvertTextToSpeechU3Ed__2_SetStateMachine_m464819641D2EA5F3CBA8464F1CB98E6F75872781_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CConvertTextToSpeechU3Ed__2_t0C98F42333D3D75897A9122A29D6F9AC426780A5*>(__this + _offset);
	U3CConvertTextToSpeechU3Ed__2_SetStateMachine_m464819641D2EA5F3CBA8464F1CB98E6F75872781(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider/<GetCachedFile>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetCachedFileU3Ed__5_MoveNext_m7531D0CF78AE7D77F4F458C521D24B78386A9B29 (U3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93_mB94BC91A2207DCBD0B3B2A7ACF9E1E3A13712492_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_004b_1;
			}
		}
		{
			// if (Application.isPlaying)
			bool L_2;
			L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
			if (!L_2)
			{
				goto IL_0071_1;
			}
		}
		{
			// return await FileManager.Read(filePath);
			String_t* L_3 = __this->___filePath_2;
			Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_4;
			L_4 = FileManager_Read_mBD428D42D4F59B5B24F136E661FC2D0DABFEAFE4(L_3, NULL);
			NullCheck(L_4);
			TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 L_5;
			L_5 = Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0(L_4, Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0_RuntimeMethod_var);
			V_2 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2((&V_2), TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0067_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 L_8 = V_2;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93_mB94BC91A2207DCBD0B3B2A7ACF9E1E3A13712492(L_9, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93_mB94BC91A2207DCBD0B3B2A7ACF9E1E3A13712492_RuntimeMethod_var);
			goto IL_00b4;
		}

IL_004b_1:
		{
			TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 L_10 = __this->___U3CU3Eu__1_3;
			V_2 = L_10;
			TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808* L_11 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_0067_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0((&V_2), TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0_RuntimeMethod_var);
			V_1 = L_13;
			goto IL_00a0;
		}

IL_0071_1:
		{
			// return File.ReadAllBytes(Path.Combine(Application.streamingAssetsPath, filePath));
			String_t* L_14;
			L_14 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
			String_t* L_15 = __this->___filePath_2;
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			String_t* L_16;
			L_16 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_14, L_15, NULL);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
			L_17 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_16, NULL);
			V_1 = L_17;
			goto IL_00a0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0089;
		}
		throw e;
	}

CATCH_0089:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_18 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_19 = V_3;
		AsyncTaskMethodBuilder_1_SetException_mF567C6A1FEA33A1EF9F395C24D9CD4095E2B70A6(L_18, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF567C6A1FEA33A1EF9F395C24D9CD4095E2B70A6_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b4;
	}// end catch (depth: 1)

IL_00a0:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_20 = (&__this->___U3CU3Et__builder_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0(L_20, L_21, AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0_RuntimeMethod_var);
	}

IL_00b4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetCachedFileU3Ed__5_MoveNext_m7531D0CF78AE7D77F4F458C521D24B78386A9B29_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93*>(__this + _offset);
	U3CGetCachedFileU3Ed__5_MoveNext_m7531D0CF78AE7D77F4F458C521D24B78386A9B29(_thisAdjusted, method);
}
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider/<GetCachedFile>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetCachedFileU3Ed__5_SetStateMachine_m2FD59B630099452CECB7DCF037463062DA17F6B8 (U3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetCachedFileU3Ed__5_SetStateMachine_m2FD59B630099452CECB7DCF037463062DA17F6B8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetCachedFileU3Ed__5_t6F65D4BF5D18308C4325637A201AB8CEB2E65E93*>(__this + _offset);
	U3CGetCachedFileU3Ed__5_SetStateMachine_m2FD59B630099452CECB7DCF037463062DA17F6B8(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider/<IsFileCached>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIsFileCachedU3Ed__6_MoveNext_m7B4D64C97E9EA7157B6E98FE77DD0282D0AA7CB1 (U3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B_m6F73BA14D5CB80D4D5ACD5369B8BE4A39EE67BCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_004b_1;
			}
		}
		{
			// if(Application.isPlaying)
			bool L_2;
			L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
			if (!L_2)
			{
				goto IL_0071_1;
			}
		}
		{
			// return await FileManager.Exists(filePath);
			String_t* L_3 = __this->___filePath_2;
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4;
			L_4 = FileManager_Exists_mDB38A5A7D420462E082A4F6883A437E97CA873D7(L_3, NULL);
			NullCheck(L_4);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_5;
			L_5 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_4, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_2 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_2), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0067_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_8 = V_2;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B_m6F73BA14D5CB80D4D5ACD5369B8BE4A39EE67BCA(L_9, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B_m6F73BA14D5CB80D4D5ACD5369B8BE4A39EE67BCA_RuntimeMethod_var);
			goto IL_00b4;
		}

IL_004b_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_10 = __this->___U3CU3Eu__1_3;
			V_2 = L_10;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_11 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_0067_1:
		{
			bool L_13;
			L_13 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_2), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			V_1 = L_13;
			goto IL_00a0;
		}

IL_0071_1:
		{
			// return File.Exists(Path.Combine(Application.streamingAssetsPath, filePath));
			String_t* L_14;
			L_14 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
			String_t* L_15 = __this->___filePath_2;
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			String_t* L_16;
			L_16 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_14, L_15, NULL);
			bool L_17;
			L_17 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_16, NULL);
			V_1 = L_17;
			goto IL_00a0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0089;
		}
		throw e;
	}

CATCH_0089:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_18 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_19 = V_3;
		AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD(L_18, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b4;
	}// end catch (depth: 1)

IL_00a0:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_20 = (&__this->___U3CU3Et__builder_1);
		bool L_21 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046(L_20, L_21, AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
	}

IL_00b4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CIsFileCachedU3Ed__6_MoveNext_m7B4D64C97E9EA7157B6E98FE77DD0282D0AA7CB1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B*>(__this + _offset);
	U3CIsFileCachedU3Ed__6_MoveNext_m7B4D64C97E9EA7157B6E98FE77DD0282D0AA7CB1(_thisAdjusted, method);
}
// System.Void VRBuilder.TextToSpeech.FileTextToSpeechProvider/<IsFileCached>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIsFileCachedU3Ed__6_SetStateMachine_mA90BBF758BB2B54FDFD412171B41ECDC59105BD6 (U3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CIsFileCachedU3Ed__6_SetStateMachine_mA90BBF758BB2B54FDFD412171B41ECDC59105BD6_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CIsFileCachedU3Ed__6_t90A05D577D21FB522DC45ECBBBF68F89166B382B*>(__this + _offset);
	U3CIsFileCachedU3Ed__6_SetStateMachine_mA90BBF758BB2B54FDFD412171B41ECDC59105BD6(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// VRBuilder.TextToSpeech.TextToSpeechConfiguration VRBuilder.TextToSpeech.RuntimeConfigurationExtensions::GetTextToSpeechConfiguration(VRBuilder.Core.Configuration.BaseRuntimeConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* RuntimeConfigurationExtensions_GetTextToSpeechConfiguration_mF5BB573835BDC7A86CC715DAA97B3168414C5D4A (BaseRuntimeConfiguration_tA6534EE83E1A33162E28993006E97132522760C6* ___0_runtimeConfiguration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (textToSpeechConfiguration == null)
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_0 = ((RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325_il2cpp_TypeInfo_var))->___textToSpeechConfiguration_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// textToSpeechConfiguration = TextToSpeechConfiguration.LoadConfiguration();
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_2;
		L_2 = TextToSpeechConfiguration_LoadConfiguration_m3DBAAB33AEC1E8E127BCE3A8D6A8EC368E60B7CD(NULL);
		((RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325_il2cpp_TypeInfo_var))->___textToSpeechConfiguration_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325_il2cpp_TypeInfo_var))->___textToSpeechConfiguration_0), (void*)L_2);
	}

IL_0017:
	{
		// return textToSpeechConfiguration;
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_3 = ((RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325_il2cpp_TypeInfo_var))->___textToSpeechConfiguration_0;
		return L_3;
	}
}
// System.Void VRBuilder.TextToSpeech.RuntimeConfigurationExtensions::SetTextToSpeechConfiguration(VRBuilder.Core.Configuration.BaseRuntimeConfiguration,VRBuilder.TextToSpeech.TextToSpeechConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfigurationExtensions_SetTextToSpeechConfiguration_mF243F901AE1039B429A8891B41696F3730176974 (BaseRuntimeConfiguration_tA6534EE83E1A33162E28993006E97132522760C6* ___0_runtimeConfiguration, TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* ___1_ttsConfiguration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textToSpeechConfiguration = ttsConfiguration;
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_0 = ___1_ttsConfiguration;
		((RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325_il2cpp_TypeInfo_var))->___textToSpeechConfiguration_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfigurationExtensions_tD774A40236605AF922E674C4B618D8DA0E6DD325_il2cpp_TypeInfo_var))->___textToSpeechConfiguration_0), (void*)L_0);
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
// System.Void VRBuilder.TextToSpeech.TextToSpeechConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechConfiguration__ctor_mC13BBD3417A441A54DDAEA5B3796E7F51B5C28B0 (TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsObject_1__ctor_m5FDA94AB95229AC21C9CC889650887623C7E99EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17F24B740F99D80DFE5E51D32E5D6CD252B29E12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265483C9037E1F442D997A959595E93402B01C8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D7469CB75A0721A69AEFBD5D948F064CA3587CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9216BDEF5172F1DBAACFFF605E8C99BD4A930973);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Language = "En";
		__this->___Language_6 = _stringLiteral2D7469CB75A0721A69AEFBD5D948F064CA3587CF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Language_6), (void*)_stringLiteral2D7469CB75A0721A69AEFBD5D948F064CA3587CF);
		// public string Voice = "Male";
		__this->___Voice_7 = _stringLiteral9216BDEF5172F1DBAACFFF605E8C99BD4A930973;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Voice_7), (void*)_stringLiteral9216BDEF5172F1DBAACFFF605E8C99BD4A930973);
		// public string StreamingAssetCacheDirectoryName = "TextToSpeech";
		__this->___StreamingAssetCacheDirectoryName_8 = _stringLiteral265483C9037E1F442D997A959595E93402B01C8D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___StreamingAssetCacheDirectoryName_8), (void*)_stringLiteral265483C9037E1F442D997A959595E93402B01C8D);
		// public TextToSpeechConfiguration()
		SettingsObject_1__ctor_m5FDA94AB95229AC21C9CC889650887623C7E99EC(__this, SettingsObject_1__ctor_m5FDA94AB95229AC21C9CC889650887623C7E99EC_RuntimeMethod_var);
		// Provider = "MicrosoftSapiTextToSpeechProvider";
		__this->___Provider_5 = _stringLiteral17F24B740F99D80DFE5E51D32E5D6CD252B29E12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Provider_5), (void*)_stringLiteral17F24B740F99D80DFE5E51D32E5D6CD252B29E12);
		// }
		return;
	}
}
// VRBuilder.TextToSpeech.TextToSpeechConfiguration VRBuilder.TextToSpeech.TextToSpeechConfiguration::LoadConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* TextToSpeechConfiguration_LoadConfiguration_m3DBAAB33AEC1E8E127BCE3A8D6A8EC368E60B7CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F_mA3B32382B318636948C52CC9A94A5F588DC74634_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98169755957AE540EC41F2BDA298A71F9B48A4CF);
		s_Il2CppMethodInitialized = true;
	}
	TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* V_0 = NULL;
	{
		// TextToSpeechConfiguration configuration = Resources.Load<TextToSpeechConfiguration>(nameof(TextToSpeechConfiguration));
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_0;
		L_0 = Resources_Load_TisTextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F_mA3B32382B318636948C52CC9A94A5F588DC74634(_stringLiteral98169755957AE540EC41F2BDA298A71F9B48A4CF, Resources_Load_TisTextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F_mA3B32382B318636948C52CC9A94A5F588DC74634_RuntimeMethod_var);
		V_0 = L_0;
		// return configuration != null ? configuration : CreateNewConfiguration();
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_3;
		L_3 = TextToSpeechConfiguration_CreateNewConfiguration_mFED4BED18F21F80456401DDED5F9812DC7551475(NULL);
		return L_3;
	}

IL_001a:
	{
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_4 = V_0;
		return L_4;
	}
}
// VRBuilder.TextToSpeech.TextToSpeechConfiguration VRBuilder.TextToSpeech.TextToSpeechConfiguration::CreateNewConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* TextToSpeechConfiguration_CreateNewConfiguration_mFED4BED18F21F80456401DDED5F9812DC7551475 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisTextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F_m97A93DDF759CA08CF4CCECBD44CA7BF1976DC899_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* V_0 = NULL;
	{
		// TextToSpeechConfiguration textToSpeechConfiguration = CreateInstance<TextToSpeechConfiguration>();
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_0;
		L_0 = ScriptableObject_CreateInstance_TisTextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F_m97A93DDF759CA08CF4CCECBD44CA7BF1976DC899(ScriptableObject_CreateInstance_TisTextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F_m97A93DDF759CA08CF4CCECBD44CA7BF1976DC899_RuntimeMethod_var);
		V_0 = L_0;
		// RuntimeConfigurator.Configuration.SetTextToSpeechConfiguration(textToSpeechConfiguration);
		BaseRuntimeConfiguration_tA6534EE83E1A33162E28993006E97132522760C6* L_1;
		L_1 = RuntimeConfigurator_get_Configuration_m240115A530335A9A799EB54CE92C9DDC15A00F10(NULL);
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_2 = V_0;
		RuntimeConfigurationExtensions_SetTextToSpeechConfiguration_mF243F901AE1039B429A8891B41696F3730176974(L_1, L_2, NULL);
		// return textToSpeechConfiguration;
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_3 = V_0;
		return L_3;
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
// System.Void VRBuilder.TextToSpeech.TextToSpeechProviderFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechProviderFactory__ctor_mD2BA3D191ED493F3F69AF96CE8B464D75CF2A3DB (TextToSpeechProviderFactory_tEC7E017208D7F8B3BA5979232DFDE02996A68361* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m642740E088498D28484DC1CEDF07A3C2AFDF3A71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_GetConcreteImplementationsOf_TisITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_mC557E281CAB87F05A0A182584FE9C4C157638B5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_mAE0667ADA8CF22651A9B33AE5107E45BFB1CAB7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t280A0EEC0ACADAE3E305AEFB3F247ED72DDF2315_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		// private readonly Dictionary<string, ITextToSpeechCreator> registeredProvider = new Dictionary<string, ITextToSpeechCreator>();
		Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C* L_0 = (Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C*)il2cpp_codegen_object_new(Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m642740E088498D28484DC1CEDF07A3C2AFDF3A71(L_0, Dictionary_2__ctor_m642740E088498D28484DC1CEDF07A3C2AFDF3A71_RuntimeMethod_var);
		__this->___registeredProvider_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___registeredProvider_1), (void*)L_0);
		// public TextToSpeechProviderFactory()
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t280A0EEC0ACADAE3E305AEFB3F247ED72DDF2315_il2cpp_TypeInfo_var);
		Singleton_1__ctor_mAE0667ADA8CF22651A9B33AE5107E45BFB1CAB7B(__this, Singleton_1__ctor_mAE0667ADA8CF22651A9B33AE5107E45BFB1CAB7B_RuntimeMethod_var);
		// IEnumerable<Type> providers = ReflectionUtils.GetConcreteImplementationsOf<ITextToSpeechProvider>();
		RuntimeObject* L_1;
		L_1 = ReflectionUtils_GetConcreteImplementationsOf_TisITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_mC557E281CAB87F05A0A182584FE9C4C157638B5A(ReflectionUtils_GetConcreteImplementationsOf_TisITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_mC557E281CAB87F05A0A182584FE9C4C157638B5A_RuntimeMethod_var);
		// foreach(Type provider in providers)
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_003f;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002c_1;
			}

IL_001e_1:
			{
				// foreach(Type provider in providers)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				Type_t* L_6;
				L_6 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// RegisterProvider(provider);
				Type_t* L_7 = V_1;
				TextToSpeechProviderFactory_RegisterProvider_mF21DEDDF9D8FCDE2357FDF965E5E76078E8E38C3(__this, L_7, NULL);
			}

IL_002c_1:
			{
				// foreach(Type provider in providers)
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void VRBuilder.TextToSpeech.TextToSpeechProviderFactory::RegisterProvider(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechProviderFactory_RegisterProvider_mF21DEDDF9D8FCDE2357FDF965E5E76078E8E38C3 (TextToSpeechProviderFactory_tEC7E017208D7F8B3BA5979232DFDE02996A68361* __this, Type_t* ___0_textToSpeechProviderType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseCreator_t4E77E30B98D4C4108F69664AA8741F1E18EA566F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mAA03B15A669B250362B4BFACC0CC06863094CD36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(typeof(ITextToSpeechProvider).IsAssignableFrom(textToSpeechProviderType) == false)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = ___0_textToSpeechProviderType;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		// throw new InvalidProviderException($"Type '{textToSpeechProviderType.Name}' is not a valid text to speech provider, therefore it cannot be registered.");
		Type_t* L_4 = ___0_textToSpeechProviderType;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C686C624D22B0C45E4FADFB00FA535DDDC88AD7)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1032683CCF3D2EA1A66CE98F8F735078558EC71C)), NULL);
		InvalidProviderException_t1E120054284844CBAC1E9F71CDB9B4FF0DF648CF* L_7 = (InvalidProviderException_t1E120054284844CBAC1E9F71CDB9B4FF0DF648CF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidProviderException_t1E120054284844CBAC1E9F71CDB9B4FF0DF648CF_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidProviderException__ctor_m934E6C3F7E4B9BFDE82676F6103ED58FDFACA748(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextToSpeechProviderFactory_RegisterProvider_mF21DEDDF9D8FCDE2357FDF965E5E76078E8E38C3_RuntimeMethod_var)));
	}

IL_002d:
	{
		// registeredProvider.Add(textToSpeechProviderType.Name, new BaseCreator(textToSpeechProviderType));
		Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C* L_8 = __this->___registeredProvider_1;
		Type_t* L_9 = ___0_textToSpeechProviderType;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		Type_t* L_11 = ___0_textToSpeechProviderType;
		BaseCreator_t4E77E30B98D4C4108F69664AA8741F1E18EA566F* L_12 = (BaseCreator_t4E77E30B98D4C4108F69664AA8741F1E18EA566F*)il2cpp_codegen_object_new(BaseCreator_t4E77E30B98D4C4108F69664AA8741F1E18EA566F_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		BaseCreator__ctor_m827F5EC6C61DF648234AC57BBB6452C6EBC5856C(L_12, L_11, NULL);
		NullCheck(L_8);
		Dictionary_2_Add_mAA03B15A669B250362B4BFACC0CC06863094CD36(L_8, L_10, L_12, Dictionary_2_Add_mAA03B15A669B250362B4BFACC0CC06863094CD36_RuntimeMethod_var);
		// }
		return;
	}
}
// VRBuilder.TextToSpeech.ITextToSpeechProvider VRBuilder.TextToSpeech.TextToSpeechProviderFactory::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextToSpeechProviderFactory_CreateProvider_m8BD567EDD395F4898AE33DE54076FBCB300493B2 (TextToSpeechProviderFactory_tEC7E017208D7F8B3BA5979232DFDE02996A68361* __this, const RuntimeMethod* method) 
{
	TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* V_0 = NULL;
	{
		// TextToSpeechConfiguration ttsConfiguration = TextToSpeechConfiguration.LoadConfiguration();
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_0;
		L_0 = TextToSpeechConfiguration_LoadConfiguration_m3DBAAB33AEC1E8E127BCE3A8D6A8EC368E60B7CD(NULL);
		V_0 = L_0;
		// return CreateProvider(ttsConfiguration);
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = TextToSpeechProviderFactory_CreateProvider_mDCA130C7D38B3AEEE18DB518F0F9096E2476AD16(__this, L_1, NULL);
		return L_2;
	}
}
// VRBuilder.TextToSpeech.ITextToSpeechProvider VRBuilder.TextToSpeech.TextToSpeechProviderFactory::CreateProvider(VRBuilder.TextToSpeech.TextToSpeechConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextToSpeechProviderFactory_CreateProvider_mDCA130C7D38B3AEEE18DB518F0F9096E2476AD16 (TextToSpeechProviderFactory_tEC7E017208D7F8B3BA5979232DFDE02996A68361* __this, TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* ___0_configuration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD848213574C438C888FE61A26CC572808248226D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB2911BAAD47F3DBAE9A9AF40F1C2ACEC871912B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeechCreator_t033F33FE63FF6DC8F4519840B92542C17147F0CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(configuration.Provider))
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_0 = ___0_configuration;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Provider_5;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// throw new NoConfigurationFoundException($"There is not a valid provider set in '{configuration.GetType().Name}'!");
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_3 = ___0_configuration;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36394919BE4BA7876D9963381AECED9103E7AED7)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA71835C02B0068E7EB5DB4C34281E4F9F69A9471)), NULL);
		NoConfigurationFoundException_t728FF809CE0803B5EECC9D2F4B0963B191D3BC44* L_7 = (NoConfigurationFoundException_t728FF809CE0803B5EECC9D2F4B0963B191D3BC44*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoConfigurationFoundException_t728FF809CE0803B5EECC9D2F4B0963B191D3BC44_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		NoConfigurationFoundException__ctor_mFB12B9A42A082DAE0B486F97B1D8500697273412(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextToSpeechProviderFactory_CreateProvider_mDCA130C7D38B3AEEE18DB518F0F9096E2476AD16_RuntimeMethod_var)));
	}

IL_002d:
	{
		// if (!registeredProvider.ContainsKey(configuration.Provider))
		Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C* L_8 = __this->___registeredProvider_1;
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_9 = ___0_configuration;
		NullCheck(L_9);
		String_t* L_10 = L_9->___Provider_5;
		NullCheck(L_8);
		bool L_11;
		L_11 = Dictionary_2_ContainsKey_mD848213574C438C888FE61A26CC572808248226D(L_8, L_10, Dictionary_2_ContainsKey_mD848213574C438C888FE61A26CC572808248226D_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		// throw new NoMatchingProviderFoundException($"No matching provider with name '{configuration.Provider}' found!");
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_12 = ___0_configuration;
		NullCheck(L_12);
		String_t* L_13 = L_12->___Provider_5;
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A5445989139CFB997A9544D62B0A6BC4BBF8BF6)), L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral176CA81FCAAFC7E28768895C4C996AE51DD32E78)), NULL);
		NoMatchingProviderFoundException_tF29724F243F43D010076DA4B50CC1FBA10786703* L_15 = (NoMatchingProviderFoundException_tF29724F243F43D010076DA4B50CC1FBA10786703*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoMatchingProviderFoundException_tF29724F243F43D010076DA4B50CC1FBA10786703_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		NoMatchingProviderFoundException__ctor_mBC8883E62F7676DB1EA90C0FFA866C609C1B6392(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextToSpeechProviderFactory_CreateProvider_mDCA130C7D38B3AEEE18DB518F0F9096E2476AD16_RuntimeMethod_var)));
	}

IL_005b:
	{
		// ITextToSpeechProvider provider = registeredProvider[configuration.Provider].Create(configuration);
		Dictionary_2_t207C1A9F488C00E09528538826414BBA0834B83C* L_16 = __this->___registeredProvider_1;
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_17 = ___0_configuration;
		NullCheck(L_17);
		String_t* L_18 = L_17->___Provider_5;
		NullCheck(L_16);
		RuntimeObject* L_19;
		L_19 = Dictionary_2_get_Item_mB2911BAAD47F3DBAE9A9AF40F1C2ACEC871912B3(L_16, L_18, Dictionary_2_get_Item_mB2911BAAD47F3DBAE9A9AF40F1C2ACEC871912B3_RuntimeMethod_var);
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_20 = ___0_configuration;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* >::Invoke(0 /* VRBuilder.TextToSpeech.ITextToSpeechProvider VRBuilder.TextToSpeech.TextToSpeechProviderFactory/ITextToSpeechCreator::Create(VRBuilder.TextToSpeech.TextToSpeechConfiguration) */, ITextToSpeechCreator_t033F33FE63FF6DC8F4519840B92542C17147F0CD_il2cpp_TypeInfo_var, L_19, L_20);
		// return provider;
		return L_21;
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
// System.Void VRBuilder.TextToSpeech.TextToSpeechProviderFactory/BaseCreator::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCreator__ctor_m827F5EC6C61DF648234AC57BBB6452C6EBC5856C (BaseCreator_t4E77E30B98D4C4108F69664AA8741F1E18EA566F* __this, Type_t* ___0_textToSpeechProviderType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BaseCreator(Type textToSpeechProviderType)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if(typeof(ITextToSpeechProvider).IsAssignableFrom(textToSpeechProviderType) == false)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = ___0_textToSpeechProviderType;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		// throw new InvalidProviderException($"Type '{textToSpeechProviderType.Name}' is not a valid text to speech provider.");
		Type_t* L_4 = ___0_textToSpeechProviderType;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C686C624D22B0C45E4FADFB00FA535DDDC88AD7)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3D4FE0CEFC04B14D3D9675C05BF4227B4DD7F2C9)), NULL);
		InvalidProviderException_t1E120054284844CBAC1E9F71CDB9B4FF0DF648CF* L_7 = (InvalidProviderException_t1E120054284844CBAC1E9F71CDB9B4FF0DF648CF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidProviderException_t1E120054284844CBAC1E9F71CDB9B4FF0DF648CF_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidProviderException__ctor_m934E6C3F7E4B9BFDE82676F6103ED58FDFACA748(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseCreator__ctor_m827F5EC6C61DF648234AC57BBB6452C6EBC5856C_RuntimeMethod_var)));
	}

IL_0033:
	{
		// this.textToSpeechProviderType = textToSpeechProviderType;
		Type_t* L_8 = ___0_textToSpeechProviderType;
		__this->___textToSpeechProviderType_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textToSpeechProviderType_0), (void*)L_8);
		// }
		return;
	}
}
// VRBuilder.TextToSpeech.ITextToSpeechProvider VRBuilder.TextToSpeech.TextToSpeechProviderFactory/BaseCreator::Create(VRBuilder.TextToSpeech.TextToSpeechConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseCreator_Create_m89DC1D0285DC5C22C63880E4D3BD035C0DB03EFA (BaseCreator_t4E77E30B98D4C4108F69664AA8741F1E18EA566F* __this, TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* ___0_configuration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ITextToSpeechProvider provider = Activator.CreateInstance(textToSpeechProviderType) as ITextToSpeechProvider;
		Type_t* L_0 = __this->___textToSpeechProviderType_0;
		RuntimeObject* L_1;
		L_1 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_0, NULL);
		// provider.SetConfig(configuration);
		RuntimeObject* L_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, ITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_il2cpp_TypeInfo_var));
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_3 = ___0_configuration;
		NullCheck(L_2);
		InterfaceActionInvoker1< TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* >::Invoke(0 /* System.Void VRBuilder.TextToSpeech.ITextToSpeechProvider::SetConfig(VRBuilder.TextToSpeech.TextToSpeechConfiguration) */, ITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_il2cpp_TypeInfo_var, L_2, L_3);
		// return provider;
		return L_2;
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
// System.Void VRBuilder.TextToSpeech.TextToSpeechProviderFactory/NoMatchingProviderFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoMatchingProviderFoundException__ctor_mBC8883E62F7676DB1EA90C0FFA866C609C1B6392 (NoMatchingProviderFoundException_tF29724F243F43D010076DA4B50CC1FBA10786703* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NoMatchingProviderFoundException(string msg) : base (msg) { }
		String_t* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// public NoMatchingProviderFoundException(string msg) : base (msg) { }
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
// System.Void VRBuilder.TextToSpeech.TextToSpeechProviderFactory/NoConfigurationFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoConfigurationFoundException__ctor_mFB12B9A42A082DAE0B486F97B1D8500697273412 (NoConfigurationFoundException_t728FF809CE0803B5EECC9D2F4B0963B191D3BC44* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NoConfigurationFoundException(string msg) : base(msg) { }
		String_t* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// public NoConfigurationFoundException(string msg) : base(msg) { }
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
// System.Void VRBuilder.TextToSpeech.TextToSpeechProviderFactory/InvalidProviderException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidProviderException__ctor_m934E6C3F7E4B9BFDE82676F6103ED58FDFACA748 (InvalidProviderException_t1E120054284844CBAC1E9F71CDB9B4FF0DF648CF* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InvalidProviderException(string msg) : base(msg) { }
		String_t* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// public InvalidProviderException(string msg) : base(msg) { }
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
// System.String VRBuilder.TextToSpeech.TextToSpeechUtils::GetUniqueTextToSpeechFilename(VRBuilder.TextToSpeech.TextToSpeechConfiguration,System.String,UnityEngine.Localization.Locale,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextToSpeechUtils_GetUniqueTextToSpeechFilename_m85B7B48280D09335A860C8BBF0FA71A108E824B8 (TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* ___0_configuration, String_t* ___1_text, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* ___2_locale, String_t* ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCAC2F2A74353AA4034827863390F45ED5B5408C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string hash = string.Format("{0}", text);
		String_t* L_0 = ___1_text;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_0, NULL);
		V_0 = L_1;
		// return string.Format(@"TTS_{0}_{1}_{2}.{3}", configuration.Voice, locale.Identifier.Code, GetMd5Hash(hash).Replace("-", ""), format);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_4 = ___0_configuration;
		NullCheck(L_4);
		String_t* L_5 = L_4->___Voice_7;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_3;
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_7 = ___2_locale;
		NullCheck(L_7);
		LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 L_8;
		L_8 = Locale_get_Identifier_mB725A4E8F29CA5C0544D03E1DD10767B54BCF29F_inline(L_7, NULL);
		V_1 = L_8;
		String_t* L_9;
		L_9 = LocaleIdentifier_get_Code_mD6E9CE9BCBEFE58DEDD482AA3C6BAC6B9BF68AE5_inline((&V_1), NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_6;
		String_t* L_11 = V_0;
		String_t* L_12;
		L_12 = TextToSpeechUtils_GetMd5Hash_mF802C45AA2C4917307DF54B026C6702064AF0EBF(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_12, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_10;
		String_t* L_15 = ___3_format;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		String_t* L_16;
		L_16 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralCCAC2F2A74353AA4034827863390F45ED5B5408C, L_14, NULL);
		return L_16;
	}
}
// System.Single[] VRBuilder.TextToSpeech.TextToSpeechUtils::ShortsInByteArrayToFloats(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* TextToSpeechUtils_ShortsInByteArrayToFloats_mA1A6DA924880F06508B29DE357EC3428D6A47A0D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_shorts, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	{
		// float[] floats = new float[shorts.Length / 2];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_shorts;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_0)->max_length))/2)));
		V_0 = L_1;
		// for (int i = 0; i < floats.Length; i++)
		V_1 = 0;
		goto IL_002f;
	}

IL_000f:
	{
		// short restoredShort = (short) ((shorts[i * 2 + 1] << 8) | (shorts[i * 2]));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_shorts;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, 2)), 1));
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_shorts;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_multiply(L_7, 2));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = ((int16_t)((int32_t)(((int32_t)((int32_t)L_5<<8))|(int32_t)L_9)));
		// floats[i] = restoredShort / (float) short.MaxValue;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = V_0;
		int32_t L_11 = V_1;
		int16_t L_12 = V_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (float)((float)(((float)L_12)/(32767.0f))));
		// for (int i = 0; i < floats.Length; i++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < floats.Length; i++)
		int32_t L_14 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		// return floats;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = V_0;
		return L_16;
	}
}
// System.String VRBuilder.TextToSpeech.TextToSpeechUtils::GetMd5Hash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextToSpeechUtils_GetMd5Hash_mF802C45AA2C4917307DF54B026C6702064AF0EBF (String_t* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		s_Il2CppMethodInitialized = true;
	}
	MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	StringBuilder_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	String_t* V_6 = NULL;
	{
		// using (MD5 md5Hash = MD5.Create())
		MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* L_0;
		L_0 = MD5_Create_mD7AEBE7A752D163971C764A9A8CC0029C865F223(NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				{
					MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* L_1 = V_0;
					if (!L_1)
					{
						goto IL_005e;
					}
				}
				{
					MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_005e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// byte[] buffer = Encoding.UTF8.GetBytes(input);
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
				L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				String_t* L_4 = ___0_input;
				NullCheck(L_3);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
				L_5 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_4);
				V_1 = L_5;
				// byte[] data = md5Hash.ComputeHash(buffer);
				MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* L_6 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
				NullCheck(L_6);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
				L_8 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_6, L_7, NULL);
				// StringBuilder sBuilder = new StringBuilder();
				StringBuilder_t* L_9 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_9, NULL);
				V_2 = L_9;
				// foreach (byte @byte in data)
				V_3 = L_8;
				V_4 = 0;
				goto IL_0044_1;
			}

IL_0025_1:
			{
				// foreach (byte @byte in data)
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
				int32_t L_11 = V_4;
				NullCheck(L_10);
				int32_t L_12 = L_11;
				uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
				V_5 = L_13;
				// sBuilder.Append(@byte.ToString("x2"));
				StringBuilder_t* L_14 = V_2;
				String_t* L_15;
				L_15 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310((&V_5), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
				NullCheck(L_14);
				StringBuilder_t* L_16;
				L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_15, NULL);
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0044_1:
			{
				// foreach (byte @byte in data)
				int32_t L_18 = V_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_3;
				NullCheck(L_19);
				if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
				{
					goto IL_0025_1;
				}
			}
			{
				// return sBuilder.ToString();
				StringBuilder_t* L_20 = V_2;
				NullCheck(L_20);
				String_t* L_21;
				L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
				V_6 = L_21;
				goto IL_005f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		// }
		String_t* L_22 = V_6;
		return L_22;
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
// System.Void VRBuilder.TextToSpeech.UnableToParseAudioFormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnableToParseAudioFormatException__ctor_m10DBEAC662FDACC9838CA480B08F35275C9A64AF (UnableToParseAudioFormatException_tAE27AF125BFDA9961EC01EDC0FAE024603A8D626* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnableToParseAudioFormatException(string msg) : base(msg) { }
		String_t* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// public UnableToParseAudioFormatException(string msg) : base(msg) { }
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
// System.String VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextToSpeechAudio_get_Text_m3B03333D1CF56FE642D3222AB51AD640A50DE05D (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, const RuntimeMethod* method) 
{
	{
		// return text;
		String_t* L_0 = __this->___text_1;
		return L_0;
	}
}
// System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechAudio_set_Text_mE1EBB159485B03231FBD077A4592FF2F248A717E (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// text = value;
		String_t* L_0 = ___0_value;
		__this->___text_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_1), (void*)L_0);
		// if (Application.isPlaying)
		bool L_1;
		L_1 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// InitializeAudioClip();
		TextToSpeechAudio_InitializeAudioClip_m9420B39D8D9AFDF3EBA4697021115D39A57C95FE(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechAudio__ctor_mB72CEC9CD9164A2270F1F09D4BA448318ED63696 (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected TextToSpeechAudio() : this("")
		TextToSpeechAudio__ctor_mE5C5E418A50EC3E6AB25381048B50973D393EC9D(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// }
		return;
	}
}
// System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechAudio__ctor_mE5C5E418A50EC3E6AB25381048B50973D393EC9D (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToSpeechAudio_OnSelectedLocaleChanged_m0784741A9B0AA00E4E4D712046C80D7628D34631_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TextToSpeechAudio(string text)
		TextToSpeechContent__ctor_m02A445BA17DF1D68F7041D65C08CBE917F3F4894(__this, NULL);
		// this.text = text;
		String_t* L_0 = ___0_text;
		__this->___text_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_1), (void*)L_0);
		// if (LocalizationSettings.HasSettings)
		bool L_1;
		L_1 = LocalizationSettings_get_HasSettings_m4C99F58B4C4135F60D59C008341E5562525BB369(NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// LocalizationSettings.SelectedLocaleChanged += OnSelectedLocaleChanged;
		Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38* L_2 = (Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38*)il2cpp_codegen_object_new(Action_1_t55C64C85A9D0051A87CCECD2C9B66D12616ECC38_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m5CD9148DEE5317BA23F52D3CFF3B775540F3D24D(L_2, __this, (intptr_t)((void*)TextToSpeechAudio_OnSelectedLocaleChanged_m0784741A9B0AA00E4E4D712046C80D7628D34631_RuntimeMethod_var), NULL);
		LocalizationSettings_add_SelectedLocaleChanged_m8F417D4662DEDA1C37BE3A159B956EFCDE4ADF79(L_2, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Boolean VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::get_HasAudioClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextToSpeechAudio_get_HasAudioClip_mC0B9B9E1AB6D3EDEE931F4BB5C288C46BD53A5A4 (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AudioClip != null;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0;
		L_0 = TextToSpeechAudio_get_AudioClip_mD1BCCED1898475DF1A02E5135122856BFE8C1B23_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
	}
}
// System.Boolean VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::get_IsLoading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextToSpeechAudio_get_IsLoading_m7C484C939337DEF4E8EC1991D128DB46457D1B9B (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, const RuntimeMethod* method) 
{
	{
		// get { return isLoading; }
		bool L_0 = __this->___isLoading_0;
		return L_0;
	}
}
// UnityEngine.AudioClip VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::get_AudioClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* TextToSpeechAudio_get_AudioClip_mD1BCCED1898475DF1A02E5135122856BFE8C1B23 (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, const RuntimeMethod* method) 
{
	{
		// public AudioClip AudioClip { get; private set; }
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = __this->___U3CAudioClipU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::set_AudioClip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechAudio_set_AudioClip_m3AC68EAB796BF9530E2FD7970D70D1A27C21E36E (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AudioClip AudioClip { get; private set; }
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_value;
		__this->___U3CAudioClipU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAudioClipU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::get_ClipData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextToSpeechAudio_get_ClipData_m2A3BA5074FADA1C229A4A4FB66463CB8A68F01F7 (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, const RuntimeMethod* method) 
{
	{
		// return Text;
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String VRBuilder.TextToSpeech.Audio.TextToSpeechContent::get_Text() */, __this);
		return L_0;
	}
}
// System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::set_ClipData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechAudio_set_ClipData_mD5EB5395239273FC1FE99573505E5BE518EC16F2 (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// Text = value;
		String_t* L_0 = ___0_value;
		VirtualActionInvoker1< String_t* >::Invoke(8 /* System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechContent::set_Text(System.String) */, __this, L_0);
		// }
		return;
	}
}
// System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::InitializeAudioClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechAudio_InitializeAudioClip_m9420B39D8D9AFDF3EBA4697021115D39A57C95FE (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF_m32051F124C6BF7458690DE1B0EAD005EE8D7EFEB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF_m32051F124C6BF7458690DE1B0EAD005EE8D7EFEB(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF_m32051F124C6BF7458690DE1B0EAD005EE8D7EFEB_RuntimeMethod_var);
		return;
	}
}
// System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::OnSelectedLocaleChanged(UnityEngine.Localization.Locale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechAudio_OnSelectedLocaleChanged_m0784741A9B0AA00E4E4D712046C80D7628D34631 (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* ___0_locale, const RuntimeMethod* method) 
{
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// InitializeAudioClip();
		TextToSpeechAudio_InitializeAudioClip_m9420B39D8D9AFDF3EBA4697021115D39A57C95FE(__this, NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Boolean VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextToSpeechAudio_IsEmpty_m03DD8484345B765816D5391E3456FD26BF3C7A59 (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, const RuntimeMethod* method) 
{
	{
		// return Text == null || (string.IsNullOrEmpty(Text));
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String VRBuilder.TextToSpeech.Audio.TextToSpeechContent::get_Text() */, __this);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String VRBuilder.TextToSpeech.Audio.TextToSpeechContent::get_Text() */, __this);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
// System.String VRBuilder.TextToSpeech.Audio.TextToSpeechAudio::GetLocalizedContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextToSpeechAudio_GetLocalizedContent_mF66C93C88FD436DE23032B0012B9C0AA7E312E60 (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsObject_1_get_Instance_m3126322FB5F0874A0C64CC87C6DDECB909E35D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return LanguageUtils.GetLocalizedString(Text, RuntimeConfigurator.Instance.GetProcessStringLocalizationTable(), LanguageSettings.Instance.ActiveOrDefaultLocale);
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String VRBuilder.TextToSpeech.Audio.TextToSpeechContent::get_Text() */, __this);
		RuntimeConfigurator_t23F3F8F041885DA6CBF963E065020FB1A77C7478* L_1;
		L_1 = RuntimeConfigurator_get_Instance_mC3FA36748ECEDB3A40DB0AD952E29C5E775E1FE3(NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = RuntimeConfigurator_GetProcessStringLocalizationTable_m8A37F97B43EC884BC788FD6283937665E8C8329D_inline(L_1, NULL);
		LanguageSettings_t644A5BE8AE6ECE199004889174DFBC0169D2DD13* L_3;
		L_3 = SettingsObject_1_get_Instance_m3126322FB5F0874A0C64CC87C6DDECB909E35D42(SettingsObject_1_get_Instance_m3126322FB5F0874A0C64CC87C6DDECB909E35D42_RuntimeMethod_var);
		NullCheck(L_3);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_4;
		L_4 = LanguageSettings_get_ActiveOrDefaultLocale_mCE4EF49729A8D32E5A08C227551AD75992C71C9B(L_3, NULL);
		String_t* L_5;
		L_5 = LanguageUtils_GetLocalizedString_m9DA23749015C7956727B3A3D6FED56EB25B1E654(L_0, L_2, L_4, NULL);
		return L_5;
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
// System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechAudio/<InitializeAudioClip>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAudioClipU3Ed__18_MoveNext_mAA400B603D5E52EC7150637961ADED9BEB29621B (U3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6_TisU3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF_m2ADE794B3EFED657BA5522EF25A1195AF562C897_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsObject_1_get_Instance_m3126322FB5F0874A0C64CC87C6DDECB909E35D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5BC400000238AF0EF79816BFD737A06B49F25F95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mF67B1777A0C12E6EEA458AA4210768AAB390F19E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m8F761484522DA81252985511926635872EA964B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB26887BB76E922B58A892B2E490905A50A07F6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* V_1 = NULL;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_2 = NULL;
	TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_003b_1;
			}
		}
		{
			// AudioClip = null;
			TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* L_3 = V_1;
			NullCheck(L_3);
			TextToSpeechAudio_set_AudioClip_m3AC68EAB796BF9530E2FD7970D70D1A27C21E36E_inline(L_3, (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL, NULL);
			// if (string.IsNullOrEmpty(Text))
			TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5;
			L_5 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String VRBuilder.TextToSpeech.Audio.TextToSpeechContent::get_Text() */, L_4);
			bool L_6;
			L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
			if (!L_6)
			{
				goto IL_0034_1;
			}
		}
		{
			// Debug.LogWarning($"No text provided.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral0DB26887BB76E922B58A892B2E490905A50A07F6, NULL);
			// return;
			goto IL_00ed;
		}

IL_0034_1:
		{
			// isLoading = true;
			TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* L_7 = V_1;
			NullCheck(L_7);
			L_7->___isLoading_0 = (bool)1;
		}

IL_003b_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_8 = V_0;
				if (!L_8)
				{
					goto IL_0092_2;
				}
			}
			{
				// TextToSpeechConfiguration ttsConfiguration = RuntimeConfigurator.Configuration.GetTextToSpeechConfiguration();
				BaseRuntimeConfiguration_tA6534EE83E1A33162E28993006E97132522760C6* L_9;
				L_9 = RuntimeConfigurator_get_Configuration_m240115A530335A9A799EB54CE92C9DDC15A00F10(NULL);
				TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_10;
				L_10 = RuntimeConfigurationExtensions_GetTextToSpeechConfiguration_mF5BB573835BDC7A86CC715DAA97B3168414C5D4A(L_9, NULL);
				// ITextToSpeechProvider provider = new FileTextToSpeechProvider(ttsConfiguration);
				FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788* L_11 = (FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788*)il2cpp_codegen_object_new(FileTextToSpeechProvider_t52ADD5A6BDA96427973CD4630936E0368AA8E788_il2cpp_TypeInfo_var);
				NullCheck(L_11);
				FileTextToSpeechProvider__ctor_mE44A38D806E9EEDC8739858947C3402CFB789572(L_11, L_10, NULL);
				// AudioClip = await provider.ConvertTextToSpeech(GetLocalizedContent(), LanguageSettings.Instance.ActiveOrDefaultLocale);
				TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* L_12 = V_1;
				NullCheck(L_12);
				String_t* L_13;
				L_13 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String VRBuilder.TextToSpeech.Audio.TextToSpeechContent::GetLocalizedContent() */, L_12);
				LanguageSettings_t644A5BE8AE6ECE199004889174DFBC0169D2DD13* L_14;
				L_14 = SettingsObject_1_get_Instance_m3126322FB5F0874A0C64CC87C6DDECB909E35D42(SettingsObject_1_get_Instance_m3126322FB5F0874A0C64CC87C6DDECB909E35D42_RuntimeMethod_var);
				NullCheck(L_14);
				Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_15;
				L_15 = LanguageSettings_get_ActiveOrDefaultLocale_mCE4EF49729A8D32E5A08C227551AD75992C71C9B(L_14, NULL);
				NullCheck(L_11);
				Task_1_t290EA9539222B740AC917B9AB459B4F252E537C1* L_16;
				L_16 = InterfaceFuncInvoker2< Task_1_t290EA9539222B740AC917B9AB459B4F252E537C1*, String_t*, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* >::Invoke(1 /* System.Threading.Tasks.Task`1<UnityEngine.AudioClip> VRBuilder.TextToSpeech.ITextToSpeechProvider::ConvertTextToSpeech(System.String,UnityEngine.Localization.Locale) */, ITextToSpeechProvider_t21ECCBBEF7A9B3113C39D71919E273890D2FF967_il2cpp_TypeInfo_var, L_11, L_13, L_15);
				NullCheck(L_16);
				TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6 L_17;
				L_17 = Task_1_GetAwaiter_m8F761484522DA81252985511926635872EA964B1(L_16, Task_1_GetAwaiter_m8F761484522DA81252985511926635872EA964B1_RuntimeMethod_var);
				V_3 = L_17;
				bool L_18;
				L_18 = TaskAwaiter_1_get_IsCompleted_mF67B1777A0C12E6EEA458AA4210768AAB390F19E((&V_3), TaskAwaiter_1_get_IsCompleted_mF67B1777A0C12E6EEA458AA4210768AAB390F19E_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_00ae_2;
				}
			}
			{
				int32_t L_19 = 0;
				V_0 = L_19;
				__this->___U3CU3E1__state_0 = L_19;
				TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6 L_20 = V_3;
				__this->___U3CU3Eu__1_3 = L_20;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_21 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6_TisU3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF_m2ADE794B3EFED657BA5522EF25A1195AF562C897(L_21, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6_TisU3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF_m2ADE794B3EFED657BA5522EF25A1195AF562C897_RuntimeMethod_var);
				goto IL_0100;
			}

IL_0092_2:
			{
				TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6 L_22 = __this->___U3CU3Eu__1_3;
				V_3 = L_22;
				TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6* L_23 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_23, sizeof(TaskAwaiter_1_tA73145785D9CD6F67BFB7B98635FB8AB3C713ED6));
				int32_t L_24 = (-1);
				V_0 = L_24;
				__this->___U3CU3E1__state_0 = L_24;
			}

IL_00ae_2:
			{
				AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_25;
				L_25 = TaskAwaiter_1_GetResult_m5BC400000238AF0EF79816BFD737A06B49F25F95((&V_3), TaskAwaiter_1_GetResult_m5BC400000238AF0EF79816BFD737A06B49F25F95_RuntimeMethod_var);
				V_2 = L_25;
				TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* L_26 = V_1;
				AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_27 = V_2;
				NullCheck(L_26);
				TextToSpeechAudio_set_AudioClip_m3AC68EAB796BF9530E2FD7970D70D1A27C21E36E_inline(L_26, L_27, NULL);
				// }
				goto IL_00cb_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00bf_1;
			}
			throw e;
		}

CATCH_00bf_1:
		{// begin catch(System.Exception)
			// Debug.LogWarning(exception.Message);
			NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
			String_t* L_28;
			L_28 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_28, NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00cb_1;
		}// end catch (depth: 2)

IL_00cb_1:
		{
			// isLoading = false;
			TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* L_29 = V_1;
			NullCheck(L_29);
			L_29->___isLoading_0 = (bool)0;
			goto IL_00ed;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d4;
		}
		throw e;
	}

CATCH_00d4:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_30 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_31 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_30, L_31, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0100;
	}// end catch (depth: 1)

IL_00ed:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_32 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_32, NULL);
	}

IL_0100:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeAudioClipU3Ed__18_MoveNext_mAA400B603D5E52EC7150637961ADED9BEB29621B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF*>(__this + _offset);
	U3CInitializeAudioClipU3Ed__18_MoveNext_mAA400B603D5E52EC7150637961ADED9BEB29621B(_thisAdjusted, method);
}
// System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechAudio/<InitializeAudioClip>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAudioClipU3Ed__18_SetStateMachine_mD69EBFDD3A5A4757CDAF35C85EBCE88913D6A603 (U3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeAudioClipU3Ed__18_SetStateMachine_mD69EBFDD3A5A4757CDAF35C85EBCE88913D6A603_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeAudioClipU3Ed__18_tF88CED70EBE3AE9BF0F4915D57F2CDB1737575EF*>(__this + _offset);
	U3CInitializeAudioClipU3Ed__18_SetStateMachine_mD69EBFDD3A5A4757CDAF35C85EBCE88913D6A603(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean VRBuilder.TextToSpeech.Audio.TextToSpeechContent::IsCached(UnityEngine.Localization.Locale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextToSpeechContent_IsCached_mC221159F68F95769EF40300BDAF0E515785F23ED (TextToSpeechContent_tF2835F93B28D65116117089192E9C376A3968F1F* __this, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* ___0_locale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7AD3BE74803C14B2CB5D2C17486D5F2138FDE60);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// TextToSpeechConfiguration ttsConfiguration = RuntimeConfigurator.Configuration.GetTextToSpeechConfiguration();
		BaseRuntimeConfiguration_tA6534EE83E1A33162E28993006E97132522760C6* L_0;
		L_0 = RuntimeConfigurator_get_Configuration_m240115A530335A9A799EB54CE92C9DDC15A00F10(NULL);
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_1;
		L_1 = RuntimeConfigurationExtensions_GetTextToSpeechConfiguration_mF5BB573835BDC7A86CC715DAA97B3168414C5D4A(L_0, NULL);
		// string filename = ttsConfiguration.GetUniqueTextToSpeechFilename(GetLocalizedContent(), locale);
		TextToSpeechConfiguration_tD1606382CF7070319248A4EBB905C3C0DAEC948F* L_2 = L_1;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String VRBuilder.TextToSpeech.Audio.TextToSpeechContent::GetLocalizedContent() */, __this);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_4 = ___0_locale;
		String_t* L_5;
		L_5 = TextToSpeechUtils_GetUniqueTextToSpeechFilename_m85B7B48280D09335A860C8BBF0FA71A108E824B8(L_2, L_3, L_4, _stringLiteralB7AD3BE74803C14B2CB5D2C17486D5F2138FDE60, NULL);
		V_0 = L_5;
		// string filePath = $"{ttsConfiguration.StreamingAssetCacheDirectoryName}/{filename}";
		NullCheck(L_2);
		String_t* L_6 = L_2->___StreamingAssetCacheDirectoryName_8;
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_6, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_7, NULL);
		V_1 = L_8;
		// return File.Exists(Path.Combine(Application.streamingAssetsPath, filePath));
		String_t* L_9;
		L_9 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		String_t* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_9, L_10, NULL);
		bool L_12;
		L_12 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_11, NULL);
		return L_12;
	}
}
// System.Void VRBuilder.TextToSpeech.Audio.TextToSpeechContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechContent__ctor_m02A445BA17DF1D68F7041D65C08CBE917F3F4894 (TextToSpeechContent_tF2835F93B28D65116117089192E9C376A3968F1F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 Locale_get_Identifier_mB725A4E8F29CA5C0544D03E1DD10767B54BCF29F_inline (Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Identifier;
		LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 L_0 = __this->___m_Identifier_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LocaleIdentifier_get_Code_mD6E9CE9BCBEFE58DEDD482AA3C6BAC6B9BF68AE5_inline (LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18* __this, const RuntimeMethod* method) 
{
	{
		// public string Code => m_Code;
		String_t* L_0 = __this->___m_Code_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* TextToSpeechAudio_get_AudioClip_mD1BCCED1898475DF1A02E5135122856BFE8C1B23_inline (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, const RuntimeMethod* method) 
{
	{
		// public AudioClip AudioClip { get; private set; }
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = __this->___U3CAudioClipU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RuntimeConfigurator_GetProcessStringLocalizationTable_m8A37F97B43EC884BC788FD6283937665E8C8329D_inline (RuntimeConfigurator_t23F3F8F041885DA6CBF963E065020FB1A77C7478* __this, const RuntimeMethod* method) 
{
	{
		// return processStringLocalizationTable;
		String_t* L_0 = __this->___processStringLocalizationTable_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextToSpeechAudio_set_AudioClip_m3AC68EAB796BF9530E2FD7970D70D1A27C21E36E_inline (TextToSpeechAudio_t4E703C697B05F743DEC958402B44C5419B580E3D* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AudioClip AudioClip { get; private set; }
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_value;
		__this->___U3CAudioClipU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAudioClipU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_m9FAFF5C248224AED9C1A4C4CC1245AC6EEA47DC0_gshared_inline (const RuntimeMethod* method) 
{
	{
		// return instance;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject* L_0 = ((Singleton_1_t44355ECE83F29EC98CA129FB5C0A0D5357ACD4A0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___instance_0;
		return L_0;
	}
}
