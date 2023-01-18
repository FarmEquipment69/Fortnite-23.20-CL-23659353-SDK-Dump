// Class /Script/FortniteUI.FortCosmeticLoadoutScreen
// Size: 0x630
class UFortCosmeticLoadoutScreen : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x28]; // 0x518 (0x28) 
	struct FDataTableRowHandle BackAction; // 0x540 (0x10)
	class UClass* NameLoadoutPopupClass; // 0x550 (0x8)
	unsigned char unreflected_558[0x2]; // 0x558 (0x2) 
	enum EFortCosmeticLoadoutScreenMode ScreenMode; // 0x55a (0x1)
	unsigned char unreflected_55b[0x5]; // 0x55b (0x5) 
	class UClass* AthenaConfirmationClass; // 0x560 (0x8)
	struct FText UnsavedPresetConfirmationTitle; // 0x568 (0x18)
	struct FText UnsavedPresetConfirmationDescriptionFormat; // 0x580 (0x18)
	struct FText UnsavedPresetConfirmationContinueButtonText; // 0x598 (0x18)
	struct FText UnsavedPresetConfirmationBackButtonText; // 0x5b0 (0x18)
	unsigned char unreflected_5c8[0x10]; // 0x5c8 (0x10) 
	class UObject* NewlySelectedItem; // 0x5d8 (0x8)
	class UFortCosmeticLockerItem* PreviewedLocker; // 0x5e0 (0x8)
	class UWidget* WidgetArchivedTag; // 0x5e8 (0x8)
	class UCommonTextBlock* TextNumArchived; // 0x5f0 (0x8)
	class UTileView* ListViewLoadouts; // 0x5f8 (0x8)
	class UCommonButtonBase* ButtonMobileClose; // 0x600 (0x8)
	class UCommonButtonBase* ButtonRenameLoadout; // 0x608 (0x8)
	class UCommonButtonBase* ButtonDeleteLoadout; // 0x610 (0x8)
	class UCommonButtonBase* SimpleFeaturedYellowButton; // 0x618 (0x8)
	class UFortCosmeticLoadoutCard* CardSelectedPreset; // 0x620 (0x8)
	class UCommonButtonBase* ButtonBack; // 0x628 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCosmeticLoadoutScreen.OnPreviewTile (Has no native function)
	void OnPreviewTile(enum EFortLoadoutCardType& CardType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCosmeticLoadoutScreen.OnFlavorForScreenMode (Has no native function)
	void OnFlavorForScreenMode(enum EFortCosmeticLoadoutScreenMode& NewMode); // (Event | Protected | BlueprintEvent)
};

