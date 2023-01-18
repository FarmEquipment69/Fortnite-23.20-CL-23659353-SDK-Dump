// Class /Script/CrewUI.CrewSubscriptionContentContainer
// Size: 0x448
class UCrewSubscriptionContentContainer : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x30]; // 0x3a8 (0x30) 
	struct TArray<struct FCrewSubscriptionContentTabData> TabsData; // 0x3d8 (0x10)
	struct FDataTableRowHandle NextTabInputAction; // 0x3e8 (0x10)
	struct FDataTableRowHandle PreviousTabInputAction; // 0x3f8 (0x10)
	class UDynamicEntryBox* EntryBoxTabs; // 0x408 (0x8)
	class UCommonButtonGroupBase* ButtonGroupTabs; // 0x410 (0x8)
	class UCommonActivatableWidgetSwitcher* SwitcherTabs; // 0x418 (0x8)
	class UWidget* WidgetTabsContainer; // 0x420 (0x8)
	float SpacingAdjustmentForTabs; // 0x428 (0x4)
	struct FPrimaryContentSetup ContentSetup; // 0x42c (0x3)
	unsigned char padding_42f[0x19]; // 0x42f (0x19)

	/* Functions */

	// Function /Script/CrewUI.CrewSubscriptionContentContainer.OnTabSelected (Has no native function)
	void OnTabSelected(int& TabIndex); // (Event | Protected | BlueprintEvent)
};

