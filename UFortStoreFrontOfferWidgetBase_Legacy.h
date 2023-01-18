// Class /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy
// Size: 0x14b0
class UFortStoreFrontOfferWidgetBase_Legacy : public UFortStoreFrontTileWidgetBase_Legacy
{
	struct TArray<class UFortStoreFrontOfferInfo*> GroupedOffers; // 0x1438 (0x10)
	unsigned char unreflected_1448[0x8]; // 0x1448 (0x8) 
	class UCommonLoadGuard* MainImageLoadGuard; // 0x1450 (0x8)
	unsigned char unreflected_1458[0x30]; // 0x1458 (0x30) 
	class UClass* ThumbnailRendererClass; // 0x1488 (0x8)
	class UFortStoreFrontOfferInfo* OfferData; // 0x1490 (0x8)
	class UFortItemThumbnailRenderer* ThumbnailRenderer; // 0x1498 (0x8)
	unsigned char padding_14a0[0x10]; // 0x14a0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.UpdateCarousel (Has no native function)
	void UpdateCarousel(float& InDeltaTime); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.SetupThumbnailRenderer (Has no native function)
	void SetupThumbnailRenderer(class UFortItemThumbnailRenderer*& InThumbnailRenderer); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.SetupOffer (Underlying native function: SetupOffer 0xa91b1f4)
	void SetupOffer(class UFortStoreFrontOfferInfo*& InOfferData); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.SetStoreRoot (Underlying native function: SetStoreRoot 0xa91ad90)
	void SetStoreRoot(class UFortMtxStoreRootBase_Legacy*& InStoreRoot); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.SetIndexInSection (Underlying native function: SetIndexInSection 0xa91a7c0)
	void SetIndexInSection(int& InIndexInSection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.SendShopInteractionAnalytic (Underlying native function: SendShopInteractionAnalytic 0xa91a274)
	void SendShopInteractionAnalytic(struct FString& Interaction); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.SendSeasonPassInteractionAnalytic (Underlying native function: SendSeasonPassInteractionAnalytic 0xa91a048)
	void SendSeasonPassInteractionAnalytic(struct FString& Interaction); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.SendRealMoneyStoreInteractionAnalytic (Underlying native function: SendRealMoneyStoreInteractionAnalytic 0xa919e00)
	void SendRealMoneyStoreInteractionAnalytic(struct FString& Interaction); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.RemoveAllOffers (Underlying native function: RemoveAllOffers 0xa919ae8)
	void RemoveAllOffers(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.PreviewNextCarouselOffer (Has no native function)
	void PreviewNextCarouselOffer(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.OnUpdateStatus (Has no native function)
	void OnUpdateStatus(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.OnStoreSelectionOfferSet (Has no native function)
	void OnStoreSelectionOfferSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.OnOfferTileBrushLoaded (Has no native function)
	void OnOfferTileBrushLoaded(struct FSlateBrush& OfferBrush); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.OnOfferSet (Has no native function)
	void OnOfferSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.OnOfferAdded (Has no native function)
	void OnOfferAdded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.OnDetailsOpened (Underlying native function: OnDetailsOpened 0xa9193e4)
	void OnDetailsOpened(class UFortStoreFrontOfferDetailsWidgetBase*& DetailsWidget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.HandleCurrentlyViewedAccountInfoChanged (Underlying native function: HandleCurrentlyViewedAccountInfoChanged 0xa918468)
	void HandleCurrentlyViewedAccountInfoChanged(struct FFortPublicAccountInfo& NewInfo); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.HandleCarouselOfferChanged (Underlying native function: HandleCarouselOfferChanged 0xa918348)
	void HandleCarouselOfferChanged(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.GetStoreRoot (Underlying native function: GetStoreRoot 0xa917934)
	class UFortMtxStoreRootBase_Legacy* GetStoreRoot(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.GetOfferInfo (Underlying native function: GetOfferInfo 0xa917180)
	class UFortStoreFrontOfferInfo* GetOfferInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.GetFirstOfferSeriesBackgroundTexture (Underlying native function: GetFirstOfferSeriesBackgroundTexture 0xa9168d4)
	struct TWeakObjectPtr<class UTexture2D> GetFirstOfferSeriesBackgroundTexture(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.GetFirstOfferSeriesBackgroundMaterial (Underlying native function: GetFirstOfferSeriesBackgroundMaterial 0xa916794)
	struct TWeakObjectPtr<class UMaterialInterface> GetFirstOfferSeriesBackgroundMaterial(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase_Legacy.AddOffer (Underlying native function: AddOffer 0xa9159fc)
	void AddOffer(class UFortStoreFrontOfferInfo*& InOfferData); // (Final | Native | Public | BlueprintCallable)
};

