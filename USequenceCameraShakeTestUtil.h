// Class /Script/TemplateSequence.SequenceCameraShakeTestUtil
// Size: 0x28
class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache (Underlying native function: GetPostProcessBlendCache 0x71f3600)
	static bool GetPostProcessBlendCache(class APlayerController*& PlayerController, int& PPIndex, struct FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV (Underlying native function: GetLastFrameCameraCachePOV 0x71f3520)
	static struct FMinimalViewInfo GetLastFrameCameraCachePOV(class APlayerController*& PlayerController); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV (Underlying native function: GetCameraCachePOV 0x71f3440)
	static struct FMinimalViewInfo GetCameraCachePOV(class APlayerController*& PlayerController); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

