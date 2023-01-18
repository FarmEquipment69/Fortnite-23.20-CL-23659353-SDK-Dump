// Class /Script/FortniteAI.FortAthenaAIBotBuildingDigestedSkillSet
// Size: 0x70
class UFortAthenaAIBotBuildingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
	float DefensiveBuildingDelayBetweenBuilds; // 0x30 (0x4)
	float DefensiveBuildingDelayDeviationBetweenBuilds; // 0x34 (0x4)
	float DelayBetweenBuildPieces; // 0x38 (0x4)
	float ForceEquipBuildToolDuration; // 0x3c (0x4)
	float StealWallTurboBuildDetectionTime; // 0x40 (0x4)
	int StealWallAfterNumberOfTurboBuiltWall; // 0x44 (0x4)
	float StealWallEfficiency; // 0x48 (0x4)
	float StealWallBuildingTemplateWeights[0x5]; // 0x4c (0x4) (ARRAY) 
	struct TArray<struct FAthenaFortAIBotDigestedWeightedBuildingList> WeightedBuildingLists; // 0x60 (0x10)
};

