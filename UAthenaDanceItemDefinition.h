// Class /Script/FortniteGame.AthenaDanceItemDefinition
// Size: 0xa08
class UAthenaDanceItemDefinition : public UFortMontageItemDefinitionBase
{
	unsigned char bUsesSecondaryFireInput; // 0x8f0 (0x1)
	unsigned char bMovingEmote; // 0x8f0 (0x1)
	unsigned char bMovingEmoteSkipLandingFX; // 0x8f0 (0x1)
	unsigned char bMoveForwardOnly; // 0x8f0 (0x1)
	unsigned char bMoveFollowingOnly; // 0x8f0 (0x1)
	unsigned char bGroupEmote; // 0x8f0 (0x1)
	unsigned char bUseHighPreviewCamera; // 0x8f0 (0x1)
	unsigned char bGroupAnimationSync; // 0x8f0 (0x1)
	unsigned char unreflected_8f1[0x3]; // 0x8f1 (0x3) 
	float WalkForwardSpeed; // 0x8f4 (0x4)
	float GroupSyncAnimOffset; // 0x8f8 (0x4)
	unsigned char unreflected_8fc[0x4]; // 0x8fc (0x4) 
	class UAthenaDanceItemDefinition* GroupEmoteToStartLeader; // 0x900 (0x8)
	class UAthenaDanceItemDefinition* GroupEmoteToStartFollower; // 0x908 (0x8)
	class UAthenaDanceItemDefinition* GroupEmoteToStartLeaderIfBothOwn; // 0x910 (0x8)
	class UAthenaDanceItemDefinition* GroupEmoteToStartFollowerIfBothOwn; // 0x918 (0x8)
	struct TArray<struct FVariantSwapMontageData> MotageSelectionGroups; // 0x920 (0x10)
	struct FVector GroupEmotePositionOffset; // 0x930 (0x18)
	float GroupEmotePositionOffsetTolerance; // 0x948 (0x4)
	float GroupEmoteFollowDistance; // 0x94c (0x4)
	bool bLockGroupEmoteLeaderRotation; // 0x950 (0x1)
	unsigned char unreflected_951[0x3]; // 0x951 (0x3) 
	float GroupEmoteLeaderRotationYawOffset; // 0x954 (0x4)
	float GroupEmoteFollowerRotationYawOffset; // 0x958 (0x4)
	unsigned char unreflected_95c[0x4]; // 0x95c (0x4) 
	struct TWeakObjectPtr<class UAnimMontage> FrontEndAnimation; // 0x960 (0x28)
	struct TWeakObjectPtr<class UAnimMontage> FrontEndAnimationFemaleOverride; // 0x988 (0x28)
	struct TArray<struct FFortEmoteMapping> FrontEndAnimationOverrides; // 0x9b0 (0x10)
	unsigned char bUseMetaTagsFromPickaxeActor; // 0x9c0 (0x1)
	unsigned char unreflected_9c1[0x7]; // 0x9c1 (0x7) 
	struct TWeakObjectPtr<class UClass> CustomDanceAbility; // 0x9c8 (0x28)
	struct FText ChatTriggerCommandName; // 0x9f0 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.AthenaDanceItemDefinition.GetCustomDanceAbility (Underlying native function: GetCustomDanceAbility 0x87603f4)
	struct TWeakObjectPtr<class UClass> GetCustomDanceAbility(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaDanceItemDefinition.GetChatTriggerCommandName (Underlying native function: GetChatTriggerCommandName 0x87600b8)
	struct FText GetChatTriggerCommandName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

