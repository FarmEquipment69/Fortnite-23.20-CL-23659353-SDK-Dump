// Class /Script/GameplayCameras.GameplayCamerasFunctionLibrary
// Size: 0x28
class UGameplayCamerasFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraShakePlaySpace (Underlying native function: Conv_CameraShakePlaySpace 0x71eace4)
	static enum ECameraShakePlaySpace ConvCameraShakePlaySpace(enum ECameraAnimationPlaySpace& CameraAnimationPlaySpace); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationPlaySpace (Underlying native function: Conv_CameraAnimationPlaySpace 0x71eace4)
	static enum ECameraAnimationPlaySpace ConvCameraAnimationPlaySpace(enum ECameraShakePlaySpace& CameraShakePlaySpace); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationCameraModifier (Underlying native function: Conv_CameraAnimationCameraModifier 0x71eac3c)
	static class UCameraAnimationCameraModifier* ConvCameraAnimationCameraModifier(class APlayerCameraManager*& PlayerCameraManager); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

