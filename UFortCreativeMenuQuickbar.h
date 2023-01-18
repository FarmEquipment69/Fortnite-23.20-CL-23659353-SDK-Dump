// Class /Script/FortniteUI.FortCreativeMenuQuickbar
// Size: 0x420
class UFortCreativeMenuQuickbar : public UCommonActivatableWidget
{
	struct FMulticastInlineDelegate OnFocusChanged; // 0x3a8 (0x10)
	struct FMulticastInlineDelegate OnEquipItem; // 0x3b8 (0x10)
	class UFortItemDefinition* CurrentItemDefinition; // 0x3c8 (0x8)
	enum EFortCreativeItemType CurrentType; // 0x3d0 (0x1)
	unsigned char unreflected_3d1[0x2f]; // 0x3d1 (0x2f) 
	class UWidgetSwitcher* SwitcherQuickBars; // 0x400 (0x8)
	class UAthenaQuickbarEditorBase* AthenaQuickbarCreative; // 0x408 (0x8)
	class UAthenaQuickbarEditorBase* AthenaQuickbarTrap; // 0x410 (0x8)
	class UAthenaQuickbarEditorBase* AthenaQuickbarPrimary; // 0x418 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeMenuQuickbar.ShowQuickbar (Underlying native function: ShowQuickbar 0xa6dbc14)
	void ShowQuickbar(enum EFortContentBrowserQuickbarState& InQuickbarState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMenuQuickbar.OnQuickbarHighlight (Has no native function)
	void OnQuickbarHighlight(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMenuQuickbar.HandleAddItemToQuickbarAction (Underlying native function: HandleAddItemToQuickbarAction 0xa6d8ed4)
	void HandleAddItemToQuickbarAction(enum EFortQuickBars& QuickBarType, int& SlotNum, class UFortItemDefinition*& ItemDefinition); // (Final | Native | Protected | BlueprintCallable)
};

