// BlueprintGeneratedClass /Game/UI/Foundation/Environment/Cameras/TVPostProcessBPAthena.TVPostProcessBPAthena_C
// Size: 0x2d0
class ATVPostProcessBPAthena_C : public ATVPostProcessBP_C
{
	unsigned char unreflected_2a1[0x7]; // 0x2a1 (0x7) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2a8 (0x8)
	class UPostProcessComponent* FullScreenTVPPOnlyMaterialModified; // 0x2b0 (0x8)
	float FrontEndCameraSwitchFadeAthenaSwipeLinesAnimation8828A7EA43DFA9153F986F805918F9F7; // 0x2b8 (0x4)
	float FrontEndCameraSwitchFadeAthenaPostProcessVisibility8828A7EA43DFA9153F986F805918F9F7; // 0x2bc (0x4)
	struct TEnumAsByte<ETimelineDirection> FrontEndCameraSwitchFadeAthenaDirection8828A7EA43DFA9153F986F805918F9F7; // 0x2c0 (0x1)
	unsigned char unreflected_2c1[0x7]; // 0x2c1 (0x7) 
	class UTimelineComponent* FrontEndCameraSwitchFadeAthena; // 0x2c8 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBPAthena.TVPostProcessBPAthena_C.IsEnabledForCurrentSubgame (Has no native function)
	void IsEnabledForCurrentSubgame(bool& bEnabled, enum ESubGame& CallFuncGetSubGameReturnValue, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__FinishedFunc (Has no native function)
	void FrontEndCameraSwitchFadeAthenaFinishedFunc(); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__UpdateFunc (Has no native function)
	void FrontEndCameraSwitchFadeAthenaUpdateFunc(); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteCameraSwitch (Has no native function)
	void ExecuteCameraSwitch(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBPAthena.TVPostProcessBPAthena_C.Camera_DisableEffects (Has no native function)
	void CameraDisableEffects(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteUbergraph_TVPostProcessBPAthena (Has no native function)
	void ExecuteUbergraphTVPostProcessBPAthena(int& EntryPoint, double& CallFuncGetUnpausedTimeSecondsReturnValue, float& CallFuncSetScalarParameterValueParameterValueImplicitCast); // (Final | 0x00008000)
};

