// Class /Script/GameplayCameras.GameplayCamerasSubsystem
// Size: 0x30
class UGameplayCamerasSubsystem : public UWorldSubsystem
{

	/* Functions */

	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation (Underlying native function: StopCameraAnimation 0x71ebb50)
	void StopCameraAnimation(class APlayerController*& PlayerController, struct FCameraAnimationHandle& Handle, bool& bImmediate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf (Underlying native function: StopAllCameraAnimationsOf 0x71eb968)
	void StopAllCameraAnimationsOf(class APlayerController*& PlayerController, class UCameraAnimationSequence*& Sequence, bool& bImmediate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations (Underlying native function: StopAllCameraAnimations 0x71eb7d0)
	void StopAllCameraAnimations(class APlayerController*& PlayerController, bool& bImmediate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation (Underlying native function: PlayCameraAnimation 0x71eb23c)
	struct FCameraAnimationHandle PlayCameraAnimation(class APlayerController*& PlayerController, class UCameraAnimationSequence*& Sequence, struct FCameraAnimationParams& Params); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive (Underlying native function: IsCameraAnimationActive 0x71eb024)
	bool IsCameraAnimationActive(class APlayerController*& PlayerController, struct FCameraAnimationHandle& Handle); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

