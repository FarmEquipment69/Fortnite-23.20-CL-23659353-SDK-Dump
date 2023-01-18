// Class /Script/FortniteAI.FortAthenaAIBotBuildingSkillSet
// Size: 0x220
class UFortAthenaAIBotBuildingSkillSet : public UFortAthenaAIBotSkillSet
{
	struct FScalableFloat DefensiveBuildingDelayBetweenBuilds; // 0x30 (0x28)
	struct FScalableFloat DefensiveBuildingDelayDeviationBetweenBuilds; // 0x58 (0x28)
	struct FScalableFloat DelayBetweenBuildPieces; // 0x80 (0x28)
	struct FScalableFloat ForceEquipBuildToolDuration; // 0xa8 (0x28)
	struct TArray<struct FAthenaFortAIBotWeightedBuildingList> WeightedBuildingLists; // 0xd0 (0x10)
	struct FScalableFloat StealWallTurboBuildDetectionTime; // 0xe0 (0x28)
	struct FScalableFloat StealWallAfterNumberOfTurboBuiltWall; // 0x108 (0x28)
	struct FScalableFloat StealWallEfficiency; // 0x130 (0x28)
	struct FScalableFloat StealWallBuildingTemplateWeights[0x5]; // 0x158 (0x28) (ARRAY) 
};

