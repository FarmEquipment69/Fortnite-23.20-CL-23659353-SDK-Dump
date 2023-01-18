// Class /Script/FortniteAI.FortQueryGenerator_LootGoalsAthena
// Size: 0x128
class UFortQueryGenerator_LootGoalsAthena : public UEnvQueryGenerator
{
	struct FFortAIAssignmentIdentifier AssignmentIdentifier; // 0x50 (0x30)
	class UFortAIAssignmentSettings* AssignmentSettings; // 0x80 (0x8)
	struct FAIDataProviderFloatValue HorizontalHalfExtents; // 0x88 (0x38)
	struct FAIDataProviderFloatValue VerticalHalfExtents; // 0xc0 (0x38)
	class UClass* SearchCenter; // 0xf8 (0x8)
	unsigned char bAvailableLootOnly; // 0x100 (0x1)
	unsigned char unreflected_101[0x7]; // 0x101 (0x7) 
	struct FGameplayTagContainer ExcludedAILootGameplayTags; // 0x108 (0x20)
};

