// Class /Script/FortniteUI.FortMTXButton
// Size: 0x1450
class UFortMTXButton : public UCommonButtonLegacy
{
	bool ShowSocialName; // 0x1430 (0x1)
	unsigned char unreflected_1431[0x7]; // 0x1431 (0x7) 
	class UCommonNumericTextBlock* TextAmount; // 0x1438 (0x8)
	class USocialNameTextBlock* TextSocialName; // 0x1440 (0x8)
	unsigned char padding_1448[0x8]; // 0x1448 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortMTXButton.SetShowSocialName (Underlying native function: SetShowSocialName 0xa7c3d6c)
	void SetShowSocialName(bool& bShow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMTXButton.HandleLocalAccountInfoChanged (Underlying native function: HandleLocalAccountInfoChanged 0x2554a7c)
	void HandleLocalAccountInfoChanged(struct FFortPrivateAccountInfo& NewInfo); // (Final | Native | Private)
};

