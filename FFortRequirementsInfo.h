// ScriptStruct /Script/FortniteGame.FortRequirementsInfo
// Size: 0x60
struct FFortRequirementsInfo
{
	int CommanderLevel; // 0x0 (0x4)
	int PersonalPowerRating; // 0x4 (0x4)
	int MaxPersonalPowerRating; // 0x8 (0x4)
	int PartyPowerRating; // 0xc (0x4)
	int MaxPartyPowerRating; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TArray<class UFortQuestItemDefinition*> ActiveQuestDefinitions; // 0x18 (0x10)
	class UFortQuestItemDefinition* QuestDefinition; // 0x28 (0x8)
	struct FDataTableRowHandle ObjectiveStatHandle; // 0x30 (0x10)
	class UFortQuestItemDefinition* UncompletedQuestDefinition; // 0x40 (0x8)
	class UFortItemDefinition* ItemDefinition; // 0x48 (0x8)
	struct FString EventFlag; // 0x50 (0x10)
};

