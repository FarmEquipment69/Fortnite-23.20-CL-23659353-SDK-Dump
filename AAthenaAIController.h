// Class /Script/FortniteAI.AthenaAIController
// Size: 0x5b0
class AAthenaAIController : public AFortAIController
{
	unsigned char unreflected_520[0x20]; // 0x520 (0x20) 
	class UFortGameplayAbility* PrimaryMeleeAttackAbilityInstance; // 0x540 (0x8)
	class UFortGameplayAbility* PrimaryRangedAttackAbilityInstance; // 0x548 (0x8)
	struct FVector NavWalkingSearchExtentScale; // 0x550 (0x18)
	float CheapFlyingNavPointHorizontalGridRatio; // 0x568 (0x4)
	float CheapFlyingNavNavPointVerticalGridRatio; // 0x56c (0x4)
	struct FGameplayTagContainer CheapFlyingNavSmashableAbilityTag; // 0x570 (0x20)
	unsigned char bEnableCheapFlyingNavigation; // 0x590 (0x1)
	unsigned char bAllowBacktrackPathfinding; // 0x590 (0x1)
	unsigned char bIsGoalRequiredForBehavior; // 0x590 (0x1)
	unsigned char bAutoGenerateHotspotOnPlayerBuildings; // 0x590 (0x1)
	unsigned char bRegisterToAthenaAIDropper; // 0x591 (0x1)
	unsigned char unreflected_592[0x6]; // 0x592 (0x6) 
	class AActor* SecondaryGoalActor; // 0x598 (0x8)
	unsigned char unreflected_5a0[0x8]; // 0x5a0 (0x8) 
	class UAthenaPathFollowingComponent* AthenaPFC; // 0x5a8 (0x8)
};

