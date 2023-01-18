// Class /Script/FortniteUI.FortStoreFrontOfferWidgetBase
// Size: 0x1460
class UFortStoreFrontOfferWidgetBase : public UFortStoreFrontTileWidgetBase
{
	struct TArray<class UFortStoreFrontOfferInfo*> GroupedOffers; // 0x13e8 (0x10)
	unsigned char unreflected_13f8[0x8]; // 0x13f8 (0x8) 
	class UCommonLoadGuard* MainImageLoadGuard; // 0x1400 (0x8)
	unsigned char unreflected_1408[0x30]; // 0x1408 (0x30) 
	class UClass* ThumbnailRendererClass; // 0x1438 (0x8)
	class UFortStoreFrontOfferInfo* OfferData; // 0x1440 (0x8)
	class UFortItemThumbnailRenderer* ThumbnailRenderer; // 0x1448 (0x8)
	unsigned char padding_1450[0x10]; // 0x1450 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.UpdateCarousel (Has no native function)
	void UpdateCarousel(float& InDeltaTime); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.SetupThumbnailRenderer (Has no native function)
	void SetupThumbnailRenderer(class UFortItemThumbnailRenderer*& InThumbnailRenderer); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.SetupOffer (Underlying native function: SetupOffer 0xa91b174)
	void SetupOffer(class UFortStoreFrontOfferInfo*& InOfferData); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.SetStoreRoot_Legacy (Underlying native function: SetStoreRoot_Legacy 0x6242510)
	void SetStoreRootLegacy(class UFortMtxStoreRootBase_Legacy*& InStoreRoot); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.SetStoreRoot (Underlying native function: SetStoreRoot 0xa91ac88)
	void SetStoreRoot(class UFortMtxStoreRootBase*& InStoreRoot); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.SetIndexInSection (Underlying native function: SetIndexInSection 0xa91a744)
	void SetIndexInSection(int& InIndexInSection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.SendShopInteractionAnalytic (Underlying native function: SendShopInteractionAnalytic 0xa91a120)
	void SendShopInteractionAnalytic(struct FString& Interaction); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.SendSeasonPassInteractionAnalytic (Underlying native function: SendSeasonPassInteractionAnalytic 0xa919f54)
	void SendSeasonPassInteractionAnalytic(struct FString& Interaction); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.SendRealMoneyStoreInteractionAnalytic (Underlying native function: SendRealMoneyStoreInteractionAnalytic 0xa919cac)
	void SendRealMoneyStoreInteractionAnalytic(struct FString& Interaction); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.RemoveAllOffers (Underlying native function: RemoveAllOffers 0xa919acc)
	void RemoveAllOffers(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.PreviewNextCarouselOffer (Has no native function)
	void PreviewNextCarouselOffer(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.OnUpdateStatus (Has no native function)
	void OnUpdateStatus(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.OnStoreSelectionOfferSet (Has no native function)
	void OnStoreSelectionOfferSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.OnOfferTileBrushLoaded (Has no native function)
	void OnOfferTileBrushLoaded(struct FSlateBrush& OfferBrush); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.OnOfferSet (Has no native function)
	void OnOfferSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.OnOfferAdded (Has no native function)
	void OnOfferAdded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.OnDetailsOpened (Underlying native function: OnDetailsOpened 0xa91932c)
	void OnDetailsOpened(class UFortStoreFrontOfferDetailsWidgetBase*& DetailsWidget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.HandleCurrentlyViewedAccountInfoChanged (Underlying native function: HandleCurrentlyViewedAccountInfoChanged 0xa91839c)
	void HandleCurrentlyViewedAccountInfoChanged(struct FFortPublicAccountInfo& NewInfo); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.HandleCarouselOfferChanged (Underlying native function: HandleCarouselOfferChanged 0xa9182f4)
	void HandleCarouselOfferChanged(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.GetStoreRoot (Underlying native function: GetStoreRoot 0xa9178c8)
	class UFortMtxStoreRootBase* GetStoreRoot(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.GetOfferInfo (Underlying native function: GetOfferInfo 0xa917168)
	class UFortStoreFrontOfferInfo* GetOfferInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.GetFirstOfferSeriesBackgroundTexture (Underlying native function: GetFirstOfferSeriesBackgroundTexture 0xa916834)
	struct TWeakObjectPtr<class UTexture2D> GetFirstOfferSeriesBackgroundTexture(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.GetFirstOfferSeriesBackgroundMaterial (Underlying native function: GetFirstOfferSeriesBackgroundMaterial 0xa9166f4)
	struct TWeakObjectPtr<class UMaterialInterface> GetFirstOfferSeriesBackgroundMaterial(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortStoreFrontOfferWidgetBase.AddOffer (Underlying native function: AddOffer 0xa91597c)
	void AddOffer(class UFortStoreFrontOfferInfo*& InOfferData); // (Final | Native | Public | BlueprintCallable)
};

