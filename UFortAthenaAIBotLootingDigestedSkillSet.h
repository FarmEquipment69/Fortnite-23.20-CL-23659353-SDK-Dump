// Class /Script/FortniteAI.FortAthenaAIBotLootingDigestedSkillSet
// Size: 0xb0
class UFortAthenaAIBotLootingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
	float ThresholdDistanceToSwitchLootItem; // 0x30 (0x4)
	float ThresholdDistanceSquaredToRescanForBetterLoot; // 0x34 (0x4)
	float ThresholdTimeToRescanForBetterLoot; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FVector OctreeBoxHalfExtent; // 0x40 (0x18)
	float LootStateEvaluationRadiusSq; // 0x58 (0x4)
	float MinLootDurationPerPOI; // 0x5c (0x4)
	float MaxLootDurationPerPOI; // 0x60 (0x4)
	float LootPickupInteractionTime; // 0x64 (0x4)
	float LootPickupInteractionDeviationTime; // 0x68 (0x4)
	float Distance2DScore; // 0x6c (0x4)
	float HeightScore; // 0x70 (0x4)
	float ThreatMaxScore; // 0x74 (0x4)
	struct FScalableFloat ThreatProximityScoreTable; // 0x78 (0x28)
	float PrioritizeWeaponScore; // 0xa0 (0x4)
	float PoiSelectionDistanceScore; // 0xa4 (0x4)
	float PoiSelectionBotPresenceScore; // 0xa8 (0x4)
	unsigned char padding_ac[0x4]; // 0xac (0x4)
};

