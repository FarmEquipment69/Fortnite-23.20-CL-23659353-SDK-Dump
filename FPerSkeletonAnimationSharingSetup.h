// ScriptStruct /Script/AnimationSharing.PerSkeletonAnimationSharingSetup
// Size: 0x38
struct FPerSkeletonAnimationSharingSetup
{
	class USkeleton* Skeleton; // 0x0 (0x8)
	class USkeletalMesh* SkeletalMesh; // 0x8 (0x8)
	class UClass* BlendAnimBlueprint; // 0x10 (0x8)
	class UClass* AdditiveAnimBlueprint; // 0x18 (0x8)
	class UClass* StateProcessorClass; // 0x20 (0x8)
	struct TArray<struct FAnimationStateEntry> AnimationStates; // 0x28 (0x10)
};

