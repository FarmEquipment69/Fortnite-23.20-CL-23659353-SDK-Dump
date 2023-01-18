// ScriptStruct /Script/FortniteGame.ChoiceDataEntry
// Size: 0x50
struct FChoiceDataEntry
{
	struct FText ButtonText; // 0x0 (0x18)
	struct FText ButtonDescription; // 0x18 (0x18)
	struct FText ConfirmText; // 0x30 (0x18)
	bool bEnabled; // 0x48 (0x1)
	bool bRequireConfirmation; // 0x49 (0x1)
	bool bCloseAfterSelection; // 0x4a (0x1)
	unsigned char padding_4b[0x5]; // 0x4b (0x5)
};

