// ScriptStruct /Script/FortniteGame.FortAppliedSwapItemAndVariantData
// Size: 0x28
struct FFortAppliedSwapItemAndVariantData
{
	struct FGuid SwapId; // 0x0 (0x10)
	enum EFortAppliedSwapItemAndVariantState SwapState; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct TArray<struct FFortSwapItemAndVariantData> SwapData; // 0x18 (0x10)
};

