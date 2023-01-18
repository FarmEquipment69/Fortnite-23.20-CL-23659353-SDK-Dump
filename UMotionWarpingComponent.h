// Class /Script/MotionWarping.MotionWarpingComponent
// Size: 0xe0
class UMotionWarpingComponent : public UActorComponent
{
	bool bSearchForWindowsInAnimsWithinMontages; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct FMulticastInlineDelegate OnPreUpdate; // 0xa8 (0x10)
	struct TWeakObjectPtr<class ACharacter> CharacterOwner; // 0xb8 (0x8)
	struct TArray<class URootMotionModifier*> Modifiers; // 0xc0 (0x10)
	struct TArray<struct FMotionWarpingTarget> WarpTargets; // 0xd0 (0x10)

	/* Functions */

	// Function /Script/MotionWarping.MotionWarpingComponent.RemoveWarpTarget (Underlying native function: RemoveWarpTarget 0x7f64bcc)
	int RemoveWarpTarget(struct FName& WarpTargetName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MotionWarping.MotionWarpingComponent.DisableAllRootMotionModifiers (Underlying native function: DisableAllRootMotionModifiers 0x7f642d4)
	void DisableAllRootMotionModifiers(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform (Underlying native function: AddOrUpdateWarpTargetFromTransform 0x7f637e4)
	void AddOrUpdateWarpTargetFromTransform(struct FName& WarpTargetName, struct FTransform& TargetTransform); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation (Underlying native function: AddOrUpdateWarpTargetFromLocationAndRotation 0x7f636b8)
	void AddOrUpdateWarpTargetFromLocationAndRotation(struct FName& WarpTargetName, struct FVector& TargetLocation, struct FRotator& TargetRotation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation (Underlying native function: AddOrUpdateWarpTargetFromLocation 0x7f635a8)
	void AddOrUpdateWarpTargetFromLocation(struct FName& WarpTargetName, struct FVector& TargetLocation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent (Underlying native function: AddOrUpdateWarpTargetFromComponent 0x7f632c0)
	void AddOrUpdateWarpTargetFromComponent(struct FName& WarpTargetName, class USceneComponent*& Component, struct FName& BoneName, bool& bFollowComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget (Underlying native function: AddOrUpdateWarpTarget 0x7f631f0)
	void AddOrUpdateWarpTarget(struct FMotionWarpingTarget& WarpTarget); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

