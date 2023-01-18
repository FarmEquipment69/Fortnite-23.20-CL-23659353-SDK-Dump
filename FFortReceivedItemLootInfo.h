// ScriptStruct /Script/FortniteUI.FortReceivedItemLootInfo
// Size: 0xc8
struct FFortReceivedItemLootInfo
{
	struct FFortItemHeaderInformation HeaderInformation; // 0x0 (0x98)
	class UFortItem* GeneratedItemInstance; // 0x98 (0x8)
	class UFortItemDefinition* ItemDef; // 0xa0 (0x8)
	struct FString TemplateId; // 0xa8 (0x10)
	int Quantity; // 0xb8 (0x4)
	unsigned char padding_bc[0xc]; // 0xbc (0xc)
};

