// Class /Script/FortniteUI.AthenaItemShopTile
// Size: 0x15c0
class UAthenaItemShopTile : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x58]; // 0x1430 (0x58) 
	class UFortItemThumbnailRenderer* ThumbnailRenderer; // 0x1488 (0x8)
	struct TArray<class UMaterialInterface*> Presentations; // 0x1490 (0x10)
	class UClass* ThumbnailRendererClass; // 0x14a0 (0x8)
	class UClass* ItemCaptureActorClass; // 0x14a8 (0x8)
	struct FVector CaptureActorStartingPosition; // 0x14b0 (0x18)
	float CaptureActorZOffset; // 0x14c8 (0x4)
	float TimeBetweenPresentationSwaps; // 0x14cc (0x4)
	struct FText SubInactiveStatusText; // 0x14d0 (0x18)
	struct FText SubActiveStatusText; // 0x14e8 (0x18)
	struct FText SubPaymentErrorStatusText; // 0x1500 (0x18)
	unsigned char unreflected_1518[0x8]; // 0x1518 (0x8) 
	class UAthenaItemShopReactiveTileText* TextName; // 0x1520 (0x8)
	class UCommonTextBlock* TextDetails; // 0x1528 (0x8)
	class UCommonTextBlock* TextPrice; // 0x1530 (0x8)
	class UCommonTextBlock* TextPreviousPrice; // 0x1538 (0x8)
	class UCommonTextBlock* TextSubInfo; // 0x1540 (0x8)
	class UWidget* OverlaySalePrice; // 0x1548 (0x8)
	class UImage* ImageRarityStripe; // 0x1550 (0x8)
	class UCommonVisibilitySwitcher* SwitcherOwningStatus; // 0x1558 (0x8)
	class UWidget* TileStateOwned; // 0x1560 (0x8)
	class UWidget* TileStateNotOwned; // 0x1568 (0x8)
	class UWidget* TileStateSubInfo; // 0x1570 (0x8)
	class UWidget* OverlayViolator; // 0x1578 (0x8)
	class UAthenaItemShopTagRotator* TagRotatorItemTags; // 0x1580 (0x8)
	class UCommonLoadGuard* LoadGuardImage; // 0x1588 (0x8)
	class UAthenaItemShopTileImage* ImageOffer; // 0x1590 (0x8)
	class UAthenaItemShopTileImage* ImageNextOffer; // 0x1598 (0x8)
	class UCommonLazyImage* ImageAnimatedWrap; // 0x15a0 (0x8)
	class UMaterialInterface* MaterialBackingRarity; // 0x15a8 (0x8)
	class UMaterialInterface* MaterialBackingNoRarity; // 0x15b0 (0x8)
	class UTexture2D* ExternalSubscriptionTexture; // 0x15b8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemShopTile.ShowNextPresentation (Underlying native function: ShowNextPresentation 0xa557ad4)
	void ShowNextPresentation(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopTile.OnUpdateViolator (Has no native function)
	void OnUpdateViolator(enum EViolatorIntensity& ViolatorIntensity, struct FText& ViolatorText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopTile.OnUpdateTileSize (Has no native function)
	void OnUpdateTileSize(enum EItemShopTileSize& TileSize); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopTile.OnUpdateSeriesOrRarityColors (Has no native function)
	void OnUpdateSeriesOrRarityColors(struct FFortColorPalette& ColorPalette); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopTile.OnUpdateItemLivePreview (Has no native function)
	void OnUpdateItemLivePreview(enum EItemShopTileSize& TileSize, class UFortItemThumbnailRenderer*& ThumbnailRendererPtr, class AFortItemCaptureActor*& CaptureActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopTile.OnPrePresentationSwap (Has no native function)
	void OnPrePresentationSwap(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopTile.OnPeekStateChanged (Has no native function)
	void OnPeekStateChanged(bool& bIsInPeekState); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopTile.OnDisplayAssetImageLoaded (Has no native function)
	void OnDisplayAssetImageLoaded(class UTexture2D*& OfferImage); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopTile.OnDefaultBackgroundRequested (Has no native function)
	void OnDefaultBackgroundRequested(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopTile.OnCurrencySet (Has no native function)
	void OnCurrencySet(enum EItemShopCurrency& Currency); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopTile.OnActiveStateChanged (Has no native function)
	void OnActiveStateChanged(bool& bIsActiveState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopTile.IsUsingLargeLayout (Underlying native function: IsUsingLargeLayout 0xa556950)
	bool IsUsingLargeLayout(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopTile.HandleLocalAccountInfoChanged (Underlying native function: HandleLocalAccountInfoChanged 0xa555f30)
	void HandleLocalAccountInfoChanged(struct FFortPrivateAccountInfo& NewInfo); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaItemShopTile.GetLegacyDisplayAsset (Underlying native function: GetLegacyDisplayAsset 0xa554fc8)
	class UFortMtxOfferData* GetLegacyDisplayAsset(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

