// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C
// Size: 0x1490
class UBP_BannerEditorTile_C : public UFortPlayerProfileBannerEditorTile
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1440 (0x8)
	class UImage* ColorImage; // 0x1448 (0x8)
	class UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher0; // 0x1450 (0x8)
	class UImage* IconImage; // 0x1458 (0x8)
	class UCommonLoadGuard* IconLoadGuard; // 0x1460 (0x8)
	class UImage* ImageBannerEditBorder; // 0x1468 (0x8)
	class UNormalBangWrapper_C* NormalBangWrapper; // 0x1470 (0x8)
	class UMaterialInstanceDynamic* ColorMID; // 0x1478 (0x8)
	struct FMulticastInlineDelegate BannerTileBangUpdated; // 0x1480 (0x10)

	/* Functions */

	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.Mark Item As Seen (Has no native function)
	void MarkItemAsSeen(bool& bAlreadySeen, class UObject*& CallFuncGetListItemObjectReturnValue, class UFortAccountItem*& K2NodeDynamicCastAsFortAccountItem, bool& K2NodeDynamicCastbSuccess, bool& CallFuncHasBeenSeenLocallyReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.Update Bang State (Has no native function)
	void UpdateBangState(class UObject*& CallFuncGetListItemObjectReturnValue, class UFortAccountItem*& K2NodeDynamicCastAsFortAccountItem, bool& K2NodeDynamicCastbSuccess, bool& CallFuncHasBeenSeenLocallyReturnValue, bool& CallFuncNotPreBoolReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.OnListItemObjectSet (Has no native function)
	void OnListItemObjectSet(class UObject*& ListItemObject); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.HandleBannerIconLoadGuardFinished (Has no native function)
	void HandleBannerIconLoadGuardFinished(class UObject*& Object); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.BP_OnSelected (Has no native function)
	void BPOnSelected(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.ExecuteUbergraph_BP_BannerEditorTile (Has no native function)
	void ExecuteUbergraphBPBannerEditorTile(int& EntryPoint, class UObject*& CallFuncGetListItemObjectReturnValue, class UFortHomebaseBannerColorItem*& K2NodeDynamicCastAsFortHomebaseBannerColorItem, bool& K2NodeDynamicCastbSuccess, class UFortHomebaseBannerIconItem*& K2NodeDynamicCastAsFortHomebaseBannerIconItem, bool& K2NodeDynamicCastbSuccess1, class UObject*& CallFuncGetListItemObjectReturnValue1, class UFortHomebaseBannerIconItem*& K2NodeDynamicCastAsFortHomebaseBannerIconItem1, bool& K2NodeDynamicCastbSuccess2, struct TWeakObjectPtr<class UTexture2D>& CallFuncGetBannerSmallIconAssetReturnValue, class UObject*& K2NodeCustomEventObject, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UTexture2D*& K2NodeDynamicCastAsTexture2D, bool& K2NodeDynamicCastbSuccess3, class UObject*& CallFuncGetListItemObjectReturnValue2, class UFortHomebaseBannerColorItem*& K2NodeDynamicCastAsFortHomebaseBannerColorItem1, bool& K2NodeDynamicCastbSuccess4, struct FLinearColor& CallFuncGetBannerColorSecondaryColorReturnValue, struct FLinearColor& CallFuncGetBannerColorPrimaryColorReturnValue, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, bool& CallFuncIsValidReturnValue, class UObject*& K2NodeEventListItemObject); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.BannerTileBangUpdated__DelegateSignature (Has no native function)
	void BannerTileBangUpdatedDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

