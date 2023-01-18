// ScriptStruct /Script/FortniteGame.FortQuestMapNode
// Size: 0x18
struct FFortQuestMapNode
{
	struct FPrimaryAssetId* QuestItemDefinitionId; // 0x0 (0x8)
	class UFortQuestItemDefinition* QuestItemDefinition; // 0x8 (0x8)
	enum EFortQuestMapNodeType NodeType; // 0x10 (0x1)
	enum EFortQuestMapNodeLabelPosition LabelPosition; // 0x11 (0x1)
	bool UseHighContrastMode; // 0x12 (0x1)
	unsigned char padding_13[0x5]; // 0x13 (0x5)
};

