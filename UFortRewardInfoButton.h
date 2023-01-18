// Class /Script/FortniteUI.FortRewardInfoButton
// Size: 0x1400
class UFortRewardInfoButton : public UCommonButtonBase
{
	unsigned char unreflected_13e0[0x8]; // 0x13e0 (0x8) 
	class UPanelWidget* ItemCardPanel; // 0x13e8 (0x8)
	enum EFortItemCardSize ItemCardSize; // 0x13f0 (0x1)
	bool bDisplayAsRewardCard; // 0x13f1 (0x1)
	unsigned char unreflected_13f2[0x6]; // 0x13f2 (0x6) 
	class UFortItem* ItemInstance; // 0x13f8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortRewardInfoButton.SetShowDescriptionBP (Has no native function)
	void SetShowDescriptionBP(bool& bInShowDescription); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortRewardInfoButton.SetShowDescription (Underlying native function: SetShowDescription 0xa88ff2c)
	void SetShowDescription(bool& bInShowDescription); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortRewardInfoButton.SetItemInstanceQuantityPair (Underlying native function: SetItemInstanceQuantityPair 0xa88f7b8)
	void SetItemInstanceQuantityPair(struct FFortItemInstanceQuantityPair& ItemQuantityPair); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortRewardInfoButton.HandleDifferentItemOrQuantitySetBP (Has no native function)
	void HandleDifferentItemOrQuantitySetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortRewardInfoButton.GetQuantity (Underlying native function: GetQuantity 0xa88d404)
	int GetQuantity(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortRewardInfoButton.GetItemInstance (Underlying native function: GetItemInstance 0xa88d310)
	class UFortItem* GetItemInstance(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

