// Class /Script/SaveTheWorldUI.FortSurvivorSquadSummaryStatItem
// Size: 0x2b0
class UFortSurvivorSquadSummaryStatItem : public UCommonUserWidget
{
	struct TEnumAsByte<EFortBrushSize> ImageSize; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	class UImage* Icon; // 0x298 (0x8)
	class UCommonTextBlock* Value; // 0x2a0 (0x8)
	class UCommonTextBlock* Name; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSurvivorSquadSummaryStatItem.SetAttributeModifierAccumulation (Underlying native function: SetAttributeModifierAccumulation 0x75c16b8)
	void SetAttributeModifierAccumulation(struct FFortAttributeModifierAccumulation& Accumulation); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

