// Class /Script/FortniteUI.AthenaItemShopSection
// Size: 0x5c8
class UAthenaItemShopSection : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0xe0]; // 0x3a8 (0xe0) 
	float OriginalScale; // 0x488 (0x4)
	float LargeScale; // 0x48c (0x4)
	unsigned char unreflected_490[0x48]; // 0x490 (0x48) 
	struct TMap<struct FString, int> OfferIdToIndexMap; // 0x4d8 (0x50)
	struct TMap<struct FString, struct FIntPoint*> AnalyticsOfferIdToIndex2D; // 0x528 (0x50)
	struct TArray<class UFortStoreFrontOfferInfo*> OffersToDisplay; // 0x578 (0x10)
	class UDynamicEntryBox* EntryBoxOfferEntries; // 0x588 (0x8)
	class UAthenaScrollBox* ScrollBoxOffers; // 0x590 (0x8)
	class UCommonTextBlock* TextTitle; // 0x598 (0x8)
	class UHorizontalBox* HBoxTimer; // 0x5a0 (0x8)
	class UFortEventDateTimeTextBlock* TextTimeRemaining; // 0x5a8 (0x8)
	class UCommonButtonLegacy* CircleArrowButtonNext; // 0x5b0 (0x8)
	class UCommonButtonLegacy* CircleArrowButtonPrevious; // 0x5b8 (0x8)
	class UScaleBox* ScaleBoxOffers; // 0x5c0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemShopSection.OnSelectedStateUpdated (Has no native function)
	void OnSelectedStateUpdated(bool& bIsInSelectedState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopSection.HandleUserScrolled (Underlying native function: HandleUserScrolled 0xa556738)
	void HandleUserScrolled(float& InCurrentScrollOffset); // (Final | Native | Private)
};

