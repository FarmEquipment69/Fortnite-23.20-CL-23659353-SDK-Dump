// Class /Script/ScoutDroneRuntime.FortAthenaMutator_ScoutDrone
// Size: 0x378
class AFortAthenaMutator_ScoutDrone : public AFortAthenaMutator
{
	struct FGameplayTagContainer DroneAllowedInteractionTags; // 0x330 (0x20)
	struct FGameplayTagContainer DroneBlockedInteractionTags; // 0x350 (0x20)
	bool bIsControllingDrone; // 0x370 (0x1)
	unsigned char padding_371[0x7]; // 0x371 (0x7)

	/* Functions */

	// Function /Script/ScoutDroneRuntime.FortAthenaMutator_ScoutDrone.OnViewTargetChanged (Underlying native function: OnViewTargetChanged 0x5358000)
	void OnViewTargetChanged(class AFortPlayerController*& PlayerController, class AActor*& OldViewTarget, class AActor*& NewViewTarget); // (Final | Native | Private)
};

