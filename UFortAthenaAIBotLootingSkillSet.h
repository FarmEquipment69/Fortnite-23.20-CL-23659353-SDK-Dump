// Class /Script/FortniteAI.FortAthenaAIBotLootingSkillSet
// Size: 0x2a0
class UFortAthenaAIBotLootingSkillSet : public UFortAthenaAIBotSkillSet
{
	struct FScalableFloat ThresholdDistanceToSwitchLootItem; // 0x30 (0x28)
	struct FScalableFloat ThresholdDistanceToRescanForBetterLoot; // 0x58 (0x28)
	struct FScalableFloat ThresholdTimeToRescanForBetterLoot; // 0x80 (0x28)
	struct FVector OctreeBoxExtent; // 0xa8 (0x18)
	struct FScalableFloat LootStateEvaluationRadius; // 0xc0 (0x28)
	struct FScalableFloat MinLootDurationPerPOI; // 0xe8 (0x28)
	struct FScalableFloat MaxLootDurationPerPOI; // 0x110 (0x28)
	struct FScalableFloat LootPickupInteractionTime; // 0x138 (0x28)
	struct FScalableFloat LootPickupInteractionDeviationTime; // 0x160 (0x28)
	struct FScalableFloat Distance2DScore; // 0x188 (0x28)
	struct FScalableFloat HeightScore; // 0x1b0 (0x28)
	struct FScalableFloat ThreatMaxScore; // 0x1d8 (0x28)
	struct FScalableFloat ThreatProximityScoreTable; // 0x200 (0x28)
	struct FScalableFloat PrioritizeWeaponScore; // 0x228 (0x28)
	struct FScalableFloat PoiSelectionDistanceScore; // 0x250 (0x28)
	struct FScalableFloat PoiSelectionBotPresenceScore; // 0x278 (0x28)
};

