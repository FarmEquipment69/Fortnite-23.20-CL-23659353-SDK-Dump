// Class /Script/FortniteUI.FortMatchXPTotalEntry
// Size: 0x328
class UFortMatchXPTotalEntry : public UFortHUDElementWidget
{
	bool bIsTotal; // 0x2d0 (0x1)
	unsigned char unreflected_2d1[0x7]; // 0x2d1 (0x7) 
	struct FText XPType; // 0x2d8 (0x18)
	struct FText XPSymbol; // 0x2f0 (0x18)
	unsigned char unreflected_308[0x8]; // 0x308 (0x8) 
	class UCommonNumericTextBlock* NumericTextXPValue; // 0x310 (0x8)
	class UCommonTextBlock* TextBlockXPType; // 0x318 (0x8)
	class UCommonTextBlock* TextBlockXPSymbol; // 0x320 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortMatchXPTotalEntry.InitializeXPCounter (Underlying native function: InitializeXPCounter 0xa532030)
	void InitializeXPCounter(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortMatchXPTotalEntry.GetXPTarget (Underlying native function: GetXPTarget 0xa530958)
	int GetXPTarget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

