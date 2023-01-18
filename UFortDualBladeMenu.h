// Class /Script/FortniteUI.FortDualBladeMenu
// Size: 0x408
class UFortDualBladeMenu : public UCommonActivatableWidget
{
	struct FUIActionTag OpenSocialPanelActionTag; // 0x3a8 (0x4)
	struct FUIActionTag OpenMainMenuActionTag; // 0x3ac (0x4)
	struct FUIActionTag SwitchProfileActionTag; // 0x3b0 (0x4)
	unsigned char unreflected_3b4[0x4]; // 0x3b4 (0x4) 
	struct FDataTableRowHandle TriggeringSocialPanelInputAction; // 0x3b8 (0x10)
	struct FDataTableRowHandle TriggeringMainMenuInputAction; // 0x3c8 (0x10)
	struct FDataTableRowHandle SwitchProfileInputAction; // 0x3d8 (0x10)
	class UFortSocialPanelView_Sidebar* Sidebar; // 0x3e8 (0x8)
	class UFortBladeMenu* TopRightWindowControlsWidget; // 0x3f0 (0x8)
	class UCommonButtonBase* ButtonBackBoard; // 0x3f8 (0x8)
	class UFortSeasonDataWidget* BladesMenuXpBar; // 0x400 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortDualBladeMenu.OnFullScreenWidgetCreated (Has no native function)
	void OnFullScreenWidgetCreated(class UWidget*& NewWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortDualBladeMenu.HandleBladeMenuRequestedClose (Underlying native function: HandleBladeMenuRequestedClose 0x6a4a708)
	void HandleBladeMenuRequestedClose(); // (Final | Native | Private)
};

