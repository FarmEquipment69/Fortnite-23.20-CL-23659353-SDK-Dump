// Class /Script/GameplayCameras.CameraAnimationCameraModifier
// Size: 0x60
class UCameraAnimationCameraModifier : public UCameraModifier
{
	struct TArray<struct FActiveCameraAnimationInfo> ActiveAnimations; // 0x48 (0x10)
	uint16_t NextInstanceSerialNumber; // 0x58 (0x2)
	unsigned char padding_5a[0x6]; // 0x5a (0x6)

	/* Functions */

	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation (Underlying native function: StopCameraAnimation 0x71eba7c)
	void StopCameraAnimation(struct FCameraAnimationHandle& Handle, bool& bImmediate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf (Underlying native function: StopAllCameraAnimationsOf 0x71eb8a0)
	void StopAllCameraAnimationsOf(class UCameraAnimationSequence*& Sequence, bool& bImmediate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations (Underlying native function: StopAllCameraAnimations 0x71eb74c)
	void StopAllCameraAnimations(bool& bImmediate); // (Native | Public | BlueprintCallable)

	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation (Underlying native function: PlayCameraAnimation 0x71eb108)
	struct FCameraAnimationHandle PlayCameraAnimation(class UCameraAnimationSequence*& Sequence, struct FCameraAnimationParams& Params); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive (Underlying native function: IsCameraAnimationActive 0x71eaf88)
	bool IsCameraAnimationActive(struct FCameraAnimationHandle& Handle); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController (Underlying native function: GetCameraAnimationCameraModifierFromPlayerController 0x71eaf08)
	static class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(class APlayerController*& PlayerController); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID (Underlying native function: GetCameraAnimationCameraModifierFromID 0x71eae3c)
	static class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(class UObject*& WorldContextObject, int& ControllerId); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier (Underlying native function: GetCameraAnimationCameraModifier 0x71ead70)
	static class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(class UObject*& WorldContextObject, int& PlayerIndex); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

