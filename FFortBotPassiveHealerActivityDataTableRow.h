// ScriptStruct /Script/FortniteGame.FortBotPassiveHealerActivityDataTableRow
// Size: 0x40
struct FFortBotPassiveHealerActivityDataTableRow : FTableRowBase
{
	struct FPrimaryAssetId* EmotePrimaryAssetId; // 0x8 (0x8)
	struct FText InteractText; // 0x10 (0x18)
	struct TArray<struct FText> GreetingTexts; // 0x28 (0x10)
	bool bEnabled; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)
};

