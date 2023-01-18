// Class /Script/SaveTheWorldUI.StWHUD
// Size: 0x4f8
class UStWHUD : public UFortUIStateWidgetBase
{
	class UFortPickerData* PickerData; // 0x3c0 (0x8)
	struct TWeakObjectPtr<class UClass> EmotePickerClass; // 0x3c8 (0x28)
	unsigned char unreflected_3f0[0x8]; // 0x3f0 (0x8) 
	struct TWeakObjectPtr<class UClass> ManagementTabsScreenClass; // 0x3f8 (0x28)
	struct TWeakObjectPtr<class UClass> TopBarClass; // 0x420 (0x28)
	struct TWeakObjectPtr<class UClass> MissionActivationWidgetClass; // 0x448 (0x28)
	struct TWeakObjectPtr<class UClass> PostGameScreenClass; // 0x470 (0x28)
	struct FMulticastInlineDelegate OnSTWHUDMenuStackChanged; // 0x498 (0x10)
	int ReticleExtensionSize; // 0x4a8 (0x4)
	unsigned char unreflected_4ac[0x4]; // 0x4ac (0x4) 
	class UCommonActivatableWidget* TitleBar; // 0x4b0 (0x8)
	class UOverlay* IndicatorContent; // 0x4b8 (0x8)
	class UFortUINavigationManager* NavigationManager; // 0x4c0 (0x8)
	unsigned char unreflected_4c8[0x18]; // 0x4c8 (0x18) 
	class UFortWeaponReticleExtensionWidgetBase* CurrentCustomReticleExtension; // 0x4e0 (0x8)
	struct TArray<class UFortWeaponReticleExtensionWidgetBase*> RecentReticleExtensions; // 0x4e8 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.StWHUD.NativeHandleWeaponEquipped (Underlying native function: NativeHandleWeaponEquipped 0x5b53670)
	void NativeHandleWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Public)

	// Function /Script/SaveTheWorldUI.StWHUD.HandlePickerOpenRequest (Underlying native function: HandlePickerOpenRequest 0x75cd428)
	void HandlePickerOpenRequest(enum EFortPickerMode& Mode, int& InitialOption, bool& bIgnoreFirstAccept); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.StWHUD.HandleCursorModeChanged (Underlying native function: HandleCursorModeChanged 0x75cd320)
	void HandleCursorModeChanged(bool& bCursorModeEnabled, struct FName& ActionName, class UUserWidget*& CursorModeContentWidget); // (Final | Native | Protected)
};

