// Class /Script/FortniteUI.AthenaSmallOfferPreviewBase
// Size: 0x2b0
class UAthenaSmallOfferPreviewBase : public UFortItemBaseWidget
{
	class UFortStoreFrontOfferInfo* OfferData; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSmallOfferPreviewBase.SetupOffer (Underlying native function: SetupOffer 0xa557720)
	void SetupOffer(class UFortStoreFrontOfferInfo*& InOfferData); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaSmallOfferPreviewBase.OnOfferSet (Has no native function)
	void OnOfferSet(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSmallOfferPreviewBase.GetOfferInfo (Underlying native function: GetOfferInfo 0x2384678)
	class UFortStoreFrontOfferInfo* GetOfferInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

