// ScriptStruct /Script/FortniteGame.FortCurieMaterialDefinition
// Size: 0xb0
struct FFortCurieMaterialDefinition : FCurieMaterialDefinitionBase
{
	unsigned char bTrackGridFireStatus; // 0x88 (0x1)
	unsigned char bShouldIgniteLandscapeGrass; // 0x88 (0x1)
	unsigned char bHandlesOverlapsDirectly; // 0x88 (0x1)
	unsigned char bAddAttachedElementsToElementSpatialGrid; // 0x88 (0x1)
	unsigned char unreflected_89[0x3]; // 0x89 (0x3) 
	float DefaultWaterContent; // 0x8c (0x4)
	float MinWaterContent; // 0x90 (0x4)
	float MaxWaterContent; // 0x94 (0x4)
	float WaterContentStabilizationRate; // 0x98 (0x4)
	float FirePropagationCost; // 0x9c (0x4)
	struct TArray<struct FFortCurieMaterialElementIntensityDecayMultiplier*> ElementDecayMultipliers; // 0xa0 (0x10)
};

