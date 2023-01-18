// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget
// Size: 0x2c0
class UFortPlayerAugmentHUDRerollWidget : public UCommonUserWidget
{
	class UCommonLazyImage* ImageCurrencyIcon; // 0x290 (0x8)
	class UFortItemDefinition* RerollCurrency; // 0x298 (0x8)
	int CachedNumFreeRerolls; // 0x2a0 (0x4)
	struct FName RerollHoldMaterialParamName; // 0x2a4 (0x4)
	unsigned char unreflected_2a8[0x8]; // 0x2a8 (0x8) 
	class UImage* ImageProgressBar; // 0x2b0 (0x8)
	unsigned char padding_2b8[0x8]; // 0x2b8 (0x8)

	/* Functions */

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.StartRerollHoldProgress (Underlying native function: StartRerollHoldProgress 0x5b2f5c0)
	void StartRerollHoldProgress(float& Duration); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnUpdateCurrency (Has no native function)
	void OnUpdateCurrency(int& OwnedCurrency, int& RerollCost); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnRerollAugments (Has no native function)
	void OnRerollAugments(); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnFreeRerollsUpdated (Has no native function)
	void OnFreeRerollsUpdated(int& NewNumFreeRerolls); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.HandleRerollAugments (Underlying native function: HandleRerollAugments 0x7528ca8)
	void HandleRerollAugments(); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.HandleFreeRerollsUpdated (Underlying native function: HandleFreeRerollsUpdated 0x7528aa0)
	void HandleFreeRerollsUpdated(int& NewNumFreeRerolls); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.EndRerollHoldProgress (Underlying native function: EndRerollHoldProgress 0x5b2f5a0)
	void EndRerollHoldProgress(); // (Final | Native | Protected | BlueprintCallable)
};

