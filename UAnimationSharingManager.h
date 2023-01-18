// Class /Script/AnimationSharing.AnimationSharingManager
// Size: 0x88
class UAnimationSharingManager : public UObject
{
	struct TArray<class USkeleton*> Skeletons; // 0x28 (0x10)
	struct TArray<class UAnimSharingInstance*> PerSkeletonData; // 0x38 (0x10)
	unsigned char padding_48[0x40]; // 0x48 (0x40)

	/* Functions */

	// Function /Script/AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP (Underlying native function: RegisterActorWithSkeletonBP 0x780296c)
	void RegisterActorWithSkeletonBP(class AActor*& InActor, class USkeleton*& SharingSkeleton); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AnimationSharing.AnimationSharingManager.GetAnimationSharingManager (Underlying native function: GetAnimationSharingManager 0x7802674)
	static class UAnimationSharingManager* GetAnimationSharingManager(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager (Underlying native function: CreateAnimationSharingManager 0x7802594)
	static bool CreateAnimationSharingManager(class UObject*& WorldContextObject, class UAnimationSharingSetup*& Setup); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnimationSharing.AnimationSharingManager.AnimationSharingEnabled (Underlying native function: AnimationSharingEnabled 0x7802578)
	static bool AnimationSharingEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

