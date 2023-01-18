// ScriptStruct /Script/Slate.CustomizedToolMenu
// Size: 0x1f0
struct FCustomizedToolMenu
{
	struct FName Name; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TMap<struct FName, struct FCustomizedToolMenuEntry> Entries; // 0x8 (0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuSection> Sections; // 0x58 (0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder; // 0xa8 (0x50)
	struct TArray<struct FName> SectionOrder; // 0xf8 (0x10)
	unsigned char padding_108[0xe8]; // 0x108 (0xe8)
};

