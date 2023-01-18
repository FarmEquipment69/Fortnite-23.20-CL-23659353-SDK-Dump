// ScriptStruct /Script/FortniteGame.UserOptionDefinitionClassSlotMetaData
// Size: 0x60
struct FUserOptionDefinitionClassSlotMetaData : FUserOptionDefinitionMetaData
{
	struct FCreativeClassOption* DefaultValue; // 0x8 (0x8)
	int MinClassSlot; // 0x10 (0x4)
	int MaxClassSlot; // 0x14 (0x4)
	struct FText ClassSlotDisplayPattern; // 0x18 (0x18)
	struct TArray<enum ECreativeClassType> ClassTypesToShow; // 0x30 (0x10)
	struct TArray<enum ECreativeClassType> ClassTypesToHide; // 0x40 (0x10)
	struct TArray<struct FUserOptionDefinitionClassTypeEntry> ClassTypeEntries; // 0x50 (0x10)
};

