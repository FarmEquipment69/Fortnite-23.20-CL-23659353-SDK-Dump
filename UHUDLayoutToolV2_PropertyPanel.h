// Class /Script/FortniteUI.HUDLayoutToolV2_PropertyPanel
// Size: 0x310
class UHUDLayoutToolV2_PropertyPanel : public UCommonUserWidget
{
	class UFortMobileHUDElementProxy* WidgetProxyToEdit; // 0x290 (0x8)
	struct TArray<class UFortSetting*> VisibleSettings; // 0x298 (0x10)
	class UFortMobileHUDWidgetCustomPropertySettingRegistry* HUDWidgetCustomPropertySettingRegistry; // 0x2a8 (0x8)
	class UFortMobileHUDWidgetRegistry* HUDWidgetRegistry; // 0x2b0 (0x8)
	unsigned char unreflected_2b8[0x18]; // 0x2b8 (0x18) 
	class UCommonActivatableWidgetSwitcher* SwitcherPropertiesAndMessage; // 0x2d0 (0x8)
	class UCommonTextBlock* TextSelectWidgetMessage; // 0x2d8 (0x8)
	class UVerticalBox* VerticalBoxPropertiesContainer; // 0x2e0 (0x8)
	class UCommonTextBlock* TextWidgetName; // 0x2e8 (0x8)
	class UHUDLayoutToolV2_Button* ButtonEditLinks; // 0x2f0 (0x8)
	class UHUDLayoutToolV2_Button* ButtonRevertHUDWidget; // 0x2f8 (0x8)
	class UHUDLayoutToolV2_Button* ButtonDeleteHUDWidget; // 0x300 (0x8)
	class UFortSettingsListView* ListViewSettings; // 0x308 (0x8)
};

