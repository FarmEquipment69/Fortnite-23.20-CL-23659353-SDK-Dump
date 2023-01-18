// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay
// Size: 0x690
class UFortAthenaAISpawnerDataComponent_AIBotGameplay : public UFortAthenaAISpawnerDataComponent_GameplayBase
{
	class UFortBotNameSettings* NameSettings; // 0x2c8 (0x8)
	unsigned char bRequiresUniqueNetId; // 0x2d0 (0x1)
	unsigned char unreflected_2d1[0x7]; // 0x2d1 (0x7) 
	struct FScalableFloat CanRespawnOnDeath; // 0x2d8 (0x28)
	struct FScalableFloat RespawnOnDeathLocation; // 0x300 (0x28)
	struct FScalableFloat RespawnTime; // 0x328 (0x28)
	float PawnCullDistanceAfterPlayerAggroMode; // 0x350 (0x4)
	enum EReachLocationValidationMode ReachLocationValidationMode; // 0x354 (0x1)
	unsigned char unreflected_355[0x3]; // 0x355 (0x3) 
	struct FVector LeashLocation; // 0x358 (0x18)
	float LeashInnerRadius; // 0x370 (0x4)
	float LeashOuterRadius; // 0x374 (0x4)
	bool bCheckForReachabilityOnRandomLocationGeneration; // 0x378 (0x1)
	enum ELeashReturnLocationMode LeashReturnLocationMode; // 0x379 (0x1)
	unsigned char unreflected_37a[0x6]; // 0x37a (0x6) 
	class AFortAthenaPatrolPath* AssociatedPatrolPath; // 0x380 (0x8)
	bool bCanInvestigateWithMeleeWeapon; // 0x388 (0x1)
	bool bApplyMutatorsHealthAndShieldModifiers; // 0x389 (0x1)
	bool bSupportsTethering; // 0x38a (0x1)
	bool bEnableRenderCustomDepth; // 0x38b (0x1)
	bool bDisableGiveWeaponCheat; // 0x38c (0x1)
	bool bDisableGiveMaterialsCheat; // 0x38d (0x1)
	unsigned char unreflected_38e[0x2]; // 0x38e (0x2) 
	struct FScalableFloat InnerLeashRadius; // 0x390 (0x28)
	struct FScalableFloat OuterLeashRadius; // 0x3b8 (0x28)
	struct FScalableFloat ShouldLeashFollowConverter; // 0x3e0 (0x28)
	struct FScalableFloat LeashFollowActorUpdateRate; // 0x408 (0x28)
	struct FVector LeashFollowActorLocalOffset; // 0x430 (0x18)
	struct FScalableFloat SkillLevelOverride; // 0x448 (0x28)
	struct FScalableFloat ShouldScanAroundWhenWaiting; // 0x470 (0x28)
	struct FScalableFloat ShouldTeleportTowardsConverter; // 0x498 (0x28)
	struct FScalableFloat FollowingBehaviorEnabled; // 0x4c0 (0x28)
	struct FScalableFloat FollowingBehaviorRadius; // 0x4e8 (0x28)
	struct FScalableFloat FollowingBehaviorUrgenceRadius; // 0x510 (0x28)
	struct FScalableFloat FollowingBehaviorBlockedSightAngle; // 0x538 (0x28)
	struct FScalableFloat FollowingBehaviorBlockedSightExitAngle; // 0x560 (0x28)
	struct FScalableFloat FollowingBehaviorBlockedSightExitDistMin; // 0x588 (0x28)
	struct FScalableFloat MimicBehaviorEnabled; // 0x5b0 (0x28)
	struct FScalableFloat MimicBehaviorRadius; // 0x5d8 (0x28)
	struct FScalableFloat CanDanceWithConverter; // 0x600 (0x28)
	struct FScalableFloat TeleportTowardsConverterDistance; // 0x628 (0x28)
	struct FScalableFloat MinDistanceFromConverterWhenTeleported; // 0x650 (0x28)
	struct TArray<class UClass*> ConvertedSkillSetClasses; // 0x678 (0x10)
	unsigned char padding_688[0x8]; // 0x688 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetNameSettings (Underlying native function: SetNameSettings 0xa3ad7a0)
	void SetNameSettings(struct TEnumAsByte<EBotNamingMode>& InNamingMode, struct FString& InName, bool& bInAddPlayerIDSuffix); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetLeashOuterRadius (Underlying native function: SetLeashOuterRadius 0xa3ad660)
	void SetLeashOuterRadius(float& InLeashOuterRadius); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetLeashLocation (Underlying native function: SetLeashLocation 0xa3ad5d8)
	void SetLeashLocation(struct FVector& InLeashLocation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetLeashInnerRadius (Underlying native function: SetLeashInnerRadius 0xa3ad554)
	void SetLeashInnerRadius(float& InLeashInnerRadius); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetAssociatedPatrolPath (Underlying native function: SetAssociatedPatrolPath 0xa3aceb4)
	void SetAssociatedPatrolPath(class AFortAthenaPatrolPath*& InAssociatedPatrolPath); // (Final | Native | Public | BlueprintCallable)
};

