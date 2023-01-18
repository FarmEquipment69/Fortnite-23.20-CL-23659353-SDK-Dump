// Class /Script/FortniteUI.AthenaItemShopOfferInspectionNavigator
// Size: 0x3c8
class UAthenaItemShopOfferInspectionNavigator : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UCommonActivatableWidget* OwningOfferInspectionWidget; // 0x3b0 (0x8)
	class UCommonButtonLegacy* ButtonNext; // 0x3b8 (0x8)
	class UCommonButtonLegacy* ButtonPrevious; // 0x3c0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemShopOfferInspectionNavigator.SetArrowsEnabled (Underlying native function: SetArrowsEnabled 0xa557324)
	void SetArrowsEnabled(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferInspectionNavigator.RequestPreviousOffer (Underlying native function: RequestPreviousOffer 0xa556fc0)
	void RequestPreviousOffer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopOfferInspectionNavigator.RequestNextOffer (Underlying native function: RequestNextOffer 0xa556f74)
	void RequestNextOffer(); // (Final | Native | Public | BlueprintCallable)
};

