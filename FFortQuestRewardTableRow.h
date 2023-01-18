// ScriptStruct /Script/FortniteGame.FortQuestRewardTableRow
// Size: 0x28
struct FFortQuestRewardTableRow : FTableRowBase
{
	struct FString QuestTemplateId; // 0x8 (0x10)
	struct FName TemplateId; // 0x18 (0x4)
	int Quantity; // 0x1c (0x4)
	bool Hidden; // 0x20 (0x1)
	bool Feature; // 0x21 (0x1)
	bool Selectable; // 0x22 (0x1)
	bool Exportable; // 0x23 (0x1)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

