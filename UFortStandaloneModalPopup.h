// Class /Script/FortniteUI.FortStandaloneModalPopup
// Size: 0x5a0
class UFortStandaloneModalPopup : public UFortActivatablePanel
{
	struct FDataTableRowHandle ButtonInputAction; // 0x518 (0x10)
	unsigned char unreflected_528[0x58]; // 0x528 (0x58) 
	class UCommonButtonLegacy* ButtonDetails; // 0x580 (0x8)
	class UCommonButtonLegacy* ButtonClose; // 0x588 (0x8)
	class UCommonBorder* BorderTapToCloseZone; // 0x590 (0x8)
	class UFortStoreFrontOfferWidgetBase_Legacy* ItemShopStandaloneOfferPreview; // 0x598 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortStandaloneModalPopup.HandleInputActionButton (Underlying native function: HandleInputActionButton 0xa6fec34)
	void HandleInputActionButton(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortStandaloneModalPopup.HandleDetailsButtonClicked (Underlying native function: HandleDetailsButtonClicked 0xa6feb98)
	void HandleDetailsButtonClicked(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortStandaloneModalPopup.Dismiss (Underlying native function: Dismiss 0xa6fdc48)
	void Dismiss(); // (Final | Native | Public | BlueprintCallable)
};

