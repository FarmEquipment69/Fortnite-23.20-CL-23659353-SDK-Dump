// Class /Script/FortniteUI.FortTabListWidgetBase_Legacy
// Size: 0x420
class UFortTabListWidgetBase_Legacy : public UCommonTabListWidgetLegacy
{
	struct FMulticastInlineDelegate OnTabContentCreated; // 0x390 (0x10)
	unsigned char unreflected_3a0[0x18]; // 0x3a0 (0x18) 
	struct TArray<struct FFortTabListRegistrationInfo> PreregisteredTabInfoArray; // 0x3b8 (0x10)
	bool bHideSingleTab; // 0x3c8 (0x1)
	enum ESlateVisibility HideSingleTabVisibility; // 0x3c9 (0x1)
	unsigned char unreflected_3ca[0x6]; // 0x3ca (0x6) 
	struct TMap<struct FName, struct FFortTabButtonLabelInfo> PendingTabLabelInfoMap; // 0x3d0 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.FortTabListWidgetBase_Legacy.SetTabHiddenState (Underlying native function: SetTabHiddenState 0x61e04d0)
	void SetTabHiddenState(struct FName& TabNameID, bool& bHidden); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTabListWidgetBase_Legacy.RemoveAllDividers (Has no native function)
	void RemoveAllDividers(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortTabListWidgetBase_Legacy.RegisterFortTab (Underlying native function: RegisterFortTab 0x61e0300)
	bool RegisterFortTab(struct FName& TabNameID, class UClass*& TabButtonType, struct FFortTabButtonLabelInfo& LabelInfo, class UWidget*& ContentWidget); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortTabListWidgetBase_Legacy.RegisterDivider (Underlying native function: RegisterDivider 0x61e0220)
	void RegisterDivider(class UClass*& DividerWidgetType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTabListWidgetBase_Legacy.RegisterAllPreregisteredTabInfos (Underlying native function: RegisterAllPreregisteredTabInfos 0x61e0200)
	void RegisterAllPreregisteredTabInfos(); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortTabListWidgetBase_Legacy.OnTabContentCreated_Legacy__DelegateSignature (Has no native function)
	void OnTabContentCreatedLegacyDelegateSignature(struct FName& TabId, class UCommonUserWidget*& TabWidget); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortTabListWidgetBase_Legacy.IsTabVisible (Underlying native function: IsTabVisible 0x61e0150)
	bool IsTabVisible(struct FName& TabId); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortTabListWidgetBase_Legacy.IsLastTabActive (Underlying native function: IsLastTabActive 0x61e0100)
	bool IsLastTabActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTabListWidgetBase_Legacy.IsFirstTabActive (Underlying native function: IsFirstTabActive 0x61e00c0)
	bool IsFirstTabActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTabListWidgetBase_Legacy.HandleDividerCreation (Has no native function)
	void HandleDividerCreation(class UUserWidget*& DividerWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTabListWidgetBase_Legacy.GetVisibleTabCount (Underlying native function: GetVisibleTabCount 0x61e0030)
	int GetVisibleTabCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortTabListWidgetBase_Legacy.GetPreregisteredTabInfo (Underlying native function: GetPreregisteredTabInfo 0x61dff10)
	bool GetPreregisteredTabInfo(struct FName& TabNameID, struct FFortTabListRegistrationInfo& OutTabInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

