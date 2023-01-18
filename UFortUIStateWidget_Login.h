// Class /Script/FortniteUI.FortUIStateWidget_Login
// Size: 0x4c8
class UFortUIStateWidget_Login : public UFortUIStateWidgetBase
{
	unsigned char unreflected_3c0[0x90]; // 0x3c0 (0x90) 
	class UCommonButtonLegacy* ButtonCancel; // 0x450 (0x8)
	class UUserWidget* ActionBarBottom; // 0x458 (0x8)
	class UCommonActivatableWidgetSwitcher* SwitcherScreenContents; // 0x460 (0x8)
	class UFortSafeZoneEditor* EditorSafeZone; // 0x468 (0x8)
	unsigned char unreflected_470[0x8]; // 0x470 (0x8) 
	class UFortLoginStatus* StatusLoginInfo; // 0x478 (0x8)
	unsigned char unreflected_480[0x8]; // 0x480 (0x8) 
	class UFortSplashScreenWidget* SplashScreen; // 0x488 (0x8)
	unsigned char unreflected_490[0x8]; // 0x490 (0x8) 
	class UFortLoginInteractions* LoginInteractions; // 0x498 (0x8)
	unsigned char unreflected_4a0[0x8]; // 0x4a0 (0x8) 
	class UHealthWarningScreen* HealthWarningScreenHealthInfo; // 0x4a8 (0x8)
	unsigned char unreflected_4b0[0x8]; // 0x4b0 (0x8) 
	class UFortQualityLevelSelectScreen* QualityLevelSelectScreenSelectInfo; // 0x4b8 (0x8)
	unsigned char padding_4c0[0x8]; // 0x4c0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortUIStateWidget_Login.SetKeyArtVisibility (Has no native function)
	void SetKeyArtVisibility(int& NewActiveWidgetIndex); // (Event | Protected | BlueprintEvent)
};

