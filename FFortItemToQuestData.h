// ScriptStruct /Script/FortniteGame.FortItemToQuestData
// Size: 0x30
struct FFortItemToQuestData : FTableRowBase
{
	struct FString ItemTemplateID; // 0x8 (0x10)
	struct FString QuestTemplateId; // 0x18 (0x10)
	enum EFortQuestState QuestGrantState; // 0x28 (0x1)
	unsigned char padding_29[0x7]; // 0x29 (0x7)
};

