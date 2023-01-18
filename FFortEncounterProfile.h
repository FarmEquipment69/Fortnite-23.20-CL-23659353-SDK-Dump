// ScriptStruct /Script/FortniteGame.FortEncounterProfile
// Size: 0x60
struct FFortEncounterProfile
{
	struct TWeakObjectPtr<class UFortDifficultyOptionSetEncounter> EncounterOptions; // 0x0 (0x28)
	struct TArray<class UFortDifficultyOptionCategoryEncounter*> OverrideCategories; // 0x28 (0x10)
	bool bShouldReselectOptionsPerInstance; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FGameplayTagContainer EncounterTypeTags; // 0x40 (0x20)
};

