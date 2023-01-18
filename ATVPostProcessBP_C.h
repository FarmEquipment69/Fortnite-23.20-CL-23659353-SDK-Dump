// BlueprintGeneratedClass /Game/UI/Foundation/Environment/Cameras/TVPostProcessBP.TVPostProcessBP_C
// Size: 0x2a1
class ATVPostProcessBP_C : public AActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class UBillboardComponent* Billboard; // 0x290 (0x8)
	class USceneComponent* Root; // 0x298 (0x8)
	bool DisableOnStartup; // 0x2a0 (0x1)

	/* Functions */

	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBP.TVPostProcessBP_C.IsEnabledForCurrentSubgame (Has no native function)
	void IsEnabledForCurrentSubgame(bool& bEnabled); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects (Has no native function)
	void CameraDisableEffects(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitch (Has no native function)
	void FrontEndCameraSwitch(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBP.TVPostProcessBP_C.ExecuteCameraSwitch (Has no native function)
	void ExecuteCameraSwitch(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP (Has no native function)
	void ExecuteUbergraphTVPostProcessBP(int& EntryPoint, bool& CallFuncIsEnabledForCurrentSubgamebEnabled); // (Final | 0x00008000)
};

