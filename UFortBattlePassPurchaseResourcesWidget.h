// Class /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget
// Size: 0x468
class UFortBattlePassPurchaseResourcesWidget : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UCommonButtonBase* ButtonAddition; // 0x3b0 (0x8)
	class UCommonButtonBase* ButtonBatchAddition; // 0x3b8 (0x8)
	class UCommonButtonBase* ButtonSubtraction; // 0x3c0 (0x8)
	class UCommonButtonBase* ButtonBatchSubtraction; // 0x3c8 (0x8)
	class UCommonVisibilitySwitcher* SwitcherPurchaseButtons; // 0x3d0 (0x8)
	class UFortHoldableButton* ButtonPurchase; // 0x3d8 (0x8)
	class UCommonButtonBase* ButtonGetVBucks; // 0x3e0 (0x8)
	class UCommonButtonBase* ButtonReloadMtx; // 0x3e8 (0x8)
	class UCommonButtonBase* ButtonBack; // 0x3f0 (0x8)
	class UFortBattlePassCheckBoxButton* CheckBoxBundle; // 0x3f8 (0x8)
	class UCommonButtonBase* ButtonCloseMobile; // 0x400 (0x8)
	int CurrentLevel; // 0x408 (0x4)
	bool bIsOfferActive; // 0x40c (0x1)
	unsigned char unreflected_40d[0x3]; // 0x40d (0x3) 
	int CurrentVBucks; // 0x410 (0x4)
	int CurrentBattleStars; // 0x414 (0x4)
	int BatchNum; // 0x418 (0x4)
	bool bOfferUnavailable; // 0x41c (0x1)
	unsigned char unreflected_41d[0x3]; // 0x41d (0x3) 
	int MaxBundleLevel; // 0x420 (0x4)
	int MaxLevel; // 0x424 (0x4)
	int MaxLevelPurchases; // 0x428 (0x4)
	int BundleAmount; // 0x42c (0x4)
	class UFortItemDefinition* LevelPreviewItem; // 0x430 (0x8)
	class UAthenaSeasonItemData_BattleStar* BattleStarData; // 0x438 (0x8)
	unsigned char padding_440[0x28]; // 0x440 (0x28)

	/* Functions */

	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnUpdatePageUnlockText (Has no native function)
	void OnUpdatePageUnlockText(struct FText& PageUnlockText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnTotalPriceChanged (Has no native function)
	void OnTotalPriceChanged(int& NewPrice); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnPurchaseAmountChanged (Has no native function)
	void OnPurchaseAmountChanged(int& NewAmount, int& LevelsLeft); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnOfferUnavailable (Has no native function)
	void OnOfferUnavailable(); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnAmountChangeButtonClicked (Has no native function)
	void OnAmountChangeButtonClicked(); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.IsReloadMtxEnabled (Underlying native function: IsReloadMtxEnabled 0x7270cf8)
	bool IsReloadMtxEnabled(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseMultiComplete (Underlying native function: HandlePurchaseMultiComplete 0x7270a24)
	void HandlePurchaseMultiComplete(bool& bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct TArray<struct FString>& OfferIdList); // (Final | Native | Private | HasOutParms)

	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseComplete (Underlying native function: HandlePurchaseComplete 0x7270770)
	void HandlePurchaseComplete(bool& bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct FString& OfferId); // (Final | Native | Private | HasOutParms)
};

