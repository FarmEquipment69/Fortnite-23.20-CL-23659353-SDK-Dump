// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior
// Size: 0x250
class UFortAthenaAISpawnerDataComponent_AIBotBehavior : public UFortAthenaAISpawnerDataComponent_Behavior
{
	uint32_t BehaviorTreeControls; // 0x38 (0x4)
	unsigned char bCanUseFallbackPatrolAround; // 0x3c (0x1)
	unsigned char bAllowReviveSquadmates; // 0x3c (0x1)
	unsigned char bAllowReviveSameFactionNPCs; // 0x3c (0x1)
	unsigned char unreflected_3d[0x3]; // 0x3d (0x3) 
	struct FScalableFloat AllowReviveConverter; // 0x40 (0x28)
	struct FScalableFloat AllowReviveConverterSquadmates; // 0x68 (0x28)
	unsigned char bUseReviveToken; // 0x90 (0x1)
	unsigned char unreflected_91[0x7]; // 0x91 (0x7) 
	struct FScalableFloat MaxDistanceToRevive; // 0x98 (0x28)
	struct FScalableFloat MaxDistanceToReviveHumanPlayer; // 0xc0 (0x28)
	struct FScalableFloat DieWhenAllAlliesAreDBNO; // 0xe8 (0x28)
	struct FScalableFloat AliveAlliesMaxRange; // 0x110 (0x28)
	struct FScalableFloat SupportsHolsteredWeapon; // 0x138 (0x28)
	struct FScalableFloat SurfaceTypeCheckEnabled; // 0x160 (0x28)
	struct FScalableFloat bShouldResetAggressivePlayStyleOnUnaware; // 0x188 (0x28)
	struct FScalableFloat TimeToKeepTrackOfDamagingActorsForAggressivePlayStyle; // 0x1b0 (0x28)
	struct FScalableFloat TimeToIgnoreDamagingActorsWhenBeingControlled; // 0x1d8 (0x28)
	struct FScalableFloat PauseBehaviorOnSpawnDuration; // 0x200 (0x28)
	struct FScalableFloat bShouldBeInvulnerableDuringPause; // 0x228 (0x28)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior.IsBehaviorTreeBranchActive (Underlying native function: IsBehaviorTreeBranchActive 0xa3accdc)
	bool IsBehaviorTreeBranchActive(enum EBehaviorTreeBranches& Behavior); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior.EnableBehaviorTreeBranch (Underlying native function: EnableBehaviorTreeBranch 0xa3ab824)
	void EnableBehaviorTreeBranch(enum EBehaviorTreeBranches& Behavior); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior.DisableBehaviorTreeBranch (Underlying native function: DisableBehaviorTreeBranch 0xa3ab720)
	void DisableBehaviorTreeBranch(enum EBehaviorTreeBranches& Behavior); // (Final | Native | Public | BlueprintCallable)
};

