// Class /Script/FortniteUI.FortRewardInfoButton_Legacy
// Size: 0x1450
class UFortRewardInfoButton_Legacy : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	class UPanelWidget* ItemCardPanel; // 0x1438 (0x8)
	enum EFortItemCardSize ItemCardSize; // 0x1440 (0x1)
	bool bDisplayAsRewardCard; // 0x1441 (0x1)
	unsigned char unreflected_1442[0x6]; // 0x1442 (0x6) 
	class UFortItem* ItemInstance; // 0x1448 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortRewardInfoButton_Legacy.SetShowDescriptionBP (Has no native function)
	void SetShowDescriptionBP(bool& bInShowDescription); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortRewardInfoButton_Legacy.SetShowDescription (Underlying native function: SetShowDescription 0xa88ffd0)
	void SetShowDescription(bool& bInShowDescription); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortRewardInfoButton_Legacy.SetItemInstanceQuantityPair (Underlying native function: SetItemInstanceQuantityPair 0xa88f84c)
	void SetItemInstanceQuantityPair(struct FFortItemInstanceQuantityPair& ItemQuantityPair); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortRewardInfoButton_Legacy.HandleDifferentItemOrQuantitySetBP (Has no native function)
	void HandleDifferentItemOrQuantitySetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortRewardInfoButton_Legacy.GetQuantity (Underlying native function: GetQuantity 0xa88d41c)
	int GetQuantity(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortRewardInfoButton_Legacy.GetItemInstance (Underlying native function: GetItemInstance 0xa88d328)
	class UFortItem* GetItemInstance(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

