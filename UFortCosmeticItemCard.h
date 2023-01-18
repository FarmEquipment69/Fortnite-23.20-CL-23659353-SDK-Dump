// Class /Script/FortniteUI.FortCosmeticItemCard
// Size: 0x330
class UFortCosmeticItemCard : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	bool bIsReward; // 0x298 (0x1)
	bool bIsItemIconEnabled; // 0x299 (0x1)
	bool bIsDetailIconEnabled; // 0x29a (0x1)
	bool bIsQuantityEnabled; // 0x29b (0x1)
	float WidthToHeightRatio; // 0x29c (0x4)
	float RewardWidthToHeightRatio; // 0x2a0 (0x4)
	float CardWidth; // 0x2a4 (0x4)
	float RewardCardWidth; // 0x2a8 (0x4)
	unsigned char unreflected_2ac[0x4]; // 0x2ac (0x4) 
	class UMaterialInterface* DefaultItemCardMaterial; // 0x2b0 (0x8)
	float MinWidgetWidthForLargeAsset; // 0x2b8 (0x4)
	float MinWidgetWidthForLargeAssetMobile; // 0x2bc (0x4)
	class USizeBox* SizeBoxNewItemCard; // 0x2c0 (0x8)
	class UImage* ImageNewItemCard; // 0x2c8 (0x8)
	class UCommonLoadGuard* LoadGuard; // 0x2d0 (0x8)
	class UFortItem* ItemToRepresent; // 0x2d8 (0x8)
	struct TMap<struct FGameplayTag, float> ItemCardImageScales; // 0x2e0 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.FortCosmeticItemCard.SetItemToRepresent (Underlying native function: SetItemToRepresent 0xa826dc0)
	void SetItemToRepresent(class UFortItem*& InItemToRepresent); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCosmeticItemCard.OnUpdateVisuals (Has no native function)
	void OnUpdateVisuals(bool& bIsItem, bool& bIsBorderAnimated, bool& bIsHero, bool& bReward, bool& bIsShuffleItem, bool& bShowAsArchived, bool& bUseAnimations); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCosmeticItemCard.OnUpdateSeriesOrRarityColors (Has no native function)
	void OnUpdateSeriesOrRarityColors(struct FFortColorPalette& ColorPalette); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCosmeticItemCard.OnUpdateItemCardMaterial (Has no native function)
	void OnUpdateItemCardMaterial(class UMaterialInterface*& Material); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCosmeticItemCard.OnUpdateItemCardIcon (Has no native function)
	void OnUpdateItemCardIcon(class UTexture2D*& Icon, float& IconScale); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCosmeticItemCard.OnUpdateEnhanced (Has no native function)
	void OnUpdateEnhanced(bool& bEnhanced); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCosmeticItemCard.OnUnhover (Has no native function)
	void OnUnhover(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCosmeticItemCard.OnSizeChanged (Has no native function)
	void OnSizeChanged(float& InCardWidth); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCosmeticItemCard.OnItemIconVisibilityChanged (Has no native function)
	void OnItemIconVisibilityChanged(bool& bIsVisible); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCosmeticItemCard.OnHover (Has no native function)
	void OnHover(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCosmeticItemCard.OnCardTypeChanged (Has no native function)
	void OnCardTypeChanged(); // (Event | Protected | BlueprintEvent)
};

