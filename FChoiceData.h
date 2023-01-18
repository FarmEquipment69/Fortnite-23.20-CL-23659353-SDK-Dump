// ScriptStruct /Script/FortniteGame.ChoiceData
// Size: 0x30
struct FChoiceData
{
	int MenuIdentifier; // 0x0 (0x4)
	bool bShowCloseButton; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct FText Title; // 0x8 (0x18)
	struct TArray<struct FChoiceDataEntry> Items; // 0x20 (0x10)
};

