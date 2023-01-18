// Class /Script/FortniteUI.FortTabListWidgetBase
// Size: 0x400
class UFortTabListWidgetBase : public UCommonTabListWidgetBase
{
	struct FMulticastInlineDelegate OnTabContentCreated; // 0x370 (0x10)
	unsigned char unreflected_380[0x18]; // 0x380 (0x18) 
	struct TArray<struct FFortTabListRegistrationInfo> PreregisteredTabInfoArray; // 0x398 (0x10)
	bool bHideSingleTab; // 0x3a8 (0x1)
	enum ESlateVisibility HideSingleTabVisibility; // 0x3a9 (0x1)
	unsigned char unreflected_3aa[0x6]; // 0x3aa (0x6) 
	struct TMap<struct FName, struct FFortTabButtonLabelInfo> PendingTabLabelInfoMap; // 0x3b0 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.FortTabListWidgetBase.SetTabHiddenState (Underlying native function: SetTabHiddenState 0xa702388)
	void SetTabHiddenState(struct FName& TabNameID, bool& bHidden); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTabListWidgetBase.RemoveAllDividers (Has no native function)
	void RemoveAllDividers(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortTabListWidgetBase.RegisterFortTab (Underlying native function: RegisterFortTab 0xa700e60)
	bool RegisterFortTab(struct FName& TabNameID, class UClass*& TabButtonType, struct FFortTabButtonLabelInfo& LabelInfo, class UWidget*& ContentWidget); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortTabListWidgetBase.RegisterDivider (Underlying native function: RegisterDivider 0xa700da8)
	void RegisterDivider(class UClass*& DividerWidgetType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTabListWidgetBase.RegisterAllPreregisteredTabInfos (Underlying native function: RegisterAllPreregisteredTabInfos 0xa700d94)
	void RegisterAllPreregisteredTabInfos(); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortTabListWidgetBase.OnTabContentCreated__DelegateSignature (Has no native function)
	void OnTabContentCreatedDelegateSignature(struct FName& TabId, class UCommonUserWidget*& TabWidget); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortTabListWidgetBase.IsTabVisible (Underlying native function: IsTabVisible 0xa6ffa20)
	bool IsTabVisible(struct FName& TabId); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortTabListWidgetBase.IsLastTabActive (Underlying native function: IsLastTabActive 0xa6ff9d8)
	bool IsLastTabActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTabListWidgetBase.IsFirstTabActive (Underlying native function: IsFirstTabActive 0xa6ff988)
	bool IsFirstTabActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTabListWidgetBase.HandleDividerCreation (Has no native function)
	void HandleDividerCreation(class UUserWidget*& DividerWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTabListWidgetBase.GetVisibleTabCount (Underlying native function: GetVisibleTabCount 0x15119ec)
	int GetVisibleTabCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortTabListWidgetBase.GetPreregisteredTabInfo (Underlying native function: GetPreregisteredTabInfo 0xa6fe3f8)
	bool GetPreregisteredTabInfo(struct FName& TabNameID, struct FFortTabListRegistrationInfo& OutTabInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

