// ScriptStruct /Script/FortniteGame.FortCosmeticDependentSwapData
// Size: 0x38
struct FFortCosmeticDependentSwapData
{
	struct TArray<struct FCosmeticMetaTagCondition> SwapRequirements; // 0x0 (0x10)
	struct TArray<struct FFortSwapItemAndVariantData> SwapData; // 0x10 (0x10)
	enum EFortAppliedSwapItemAndVariantState ForcedSwapState; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	struct FGuid SwapId; // 0x24 (0x10)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

