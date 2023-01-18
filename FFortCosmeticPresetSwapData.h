// ScriptStruct /Script/FortniteGame.FortCosmeticPresetSwapData
// Size: 0x28
struct FFortCosmeticPresetSwapData
{
	struct TArray<struct FFortSwapItemAndVariantData> Swaps; // 0x0 (0x10)
	struct FGuid SwapId; // 0x10 (0x10)
	enum EFortAppliedSwapItemAndVariantState SwapState; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

