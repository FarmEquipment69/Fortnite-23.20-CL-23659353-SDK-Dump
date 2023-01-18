// BlueprintGeneratedClass /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C
// Size: 0xa08
class ALoginCamera_Blueprint_C : public AFortCameraBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x9f0 (0x8)
	class UStaticMeshComponent* StaticMesh; // 0x9f8 (0x8)
	class UCameraComponent* LoginCamera0; // 0xa00 (0x8)

	/* Functions */

	// Function /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C.BP_OnActivated (Has no native function)
	void BPOnActivated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint (Has no native function)
	void ExecuteUbergraphLoginCameraBlueprint(int& EntryPoint, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue, int& TempintArrayIndexVariable, class AFortPlayerController*& K2NodeEventPlayerController, struct TArray<class ATVPostProcessBP_C*>& CallFuncGetAllActorsOfClassOutActors, int& TempintLoopCounterVariable, class ATVPostProcessBP_C*& CallFuncArrayGetItem, int& CallFuncAddIntIntReturnValue, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue); // (Final | 0x00008000 | HasDefaults)
};

