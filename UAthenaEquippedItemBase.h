// Class /Script/FortniteUI.AthenaEquippedItemBase
// Size: 0x3b8
class UAthenaEquippedItemBase : public UBacchusHUDElement
{
	enum EEquippedWeaponDisplay CurrentMode; // 0x318 (0x1)
	unsigned char unreflected_319[0xb]; // 0x319 (0xb) 
	int AmountConsideredInfinite; // 0x324 (0x4)
	struct FText DefaultOutOfAmmoText; // 0x328 (0x18)
	class UCommonVisibilitySwitcher* SwitcherContent; // 0x340 (0x8)
	class UPanelWidget* PanelResourceContent; // 0x348 (0x8)
	class UPanelWidget* PanelAmmoContent; // 0x350 (0x8)
	class UPanelWidget* PanelUtilityContent; // 0x358 (0x8)
	class UImage* ImageAmmoIcon; // 0x360 (0x8)
	class UImage* ImageResourceIcon; // 0x368 (0x8)
	class UImage* ImageUtilityIcon; // 0x370 (0x8)
	class UCommonTextBlock* TextMagazineAmmoCount; // 0x378 (0x8)
	class UCommonTextBlock* TextSurplusAmmoCount; // 0x380 (0x8)
	class UCommonTextBlock* TextResourceCount; // 0x388 (0x8)
	class UCommonTextBlock* TextUtilityAmmoCount; // 0x390 (0x8)
	class UCommonTextBlock* TextUtilityAmmoPercent; // 0x398 (0x8)
	class UCommonTextBlock* TextOutOfAmmo; // 0x3a0 (0x8)
	class UScaleBox* RootScaleBox; // 0x3a8 (0x8)
	enum ESlateVisibility WeaponEquipVisibility; // 0x3b0 (0x1)
	unsigned char padding_3b1[0x7]; // 0x3b1 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.AthenaEquippedItemBase.HandleWorldItemsChanged (Underlying native function: HandleWorldItemsChanged 0xa48d524)
	void HandleWorldItemsChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.HandleWeaponTargetingChanged (Underlying native function: HandleWeaponTargetingChanged 0xa48d480)
	void HandleWeaponTargetingChanged(bool& bIsTargeting); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.HandleWeaponReloadStarted (Underlying native function: HandleWeaponReloadStarted 0xa48d3b8)
	void HandleWeaponReloadStarted(float& ReloadTime, enum EFortWeaponReloadType& ReloadType); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.HandleWeaponReloadCancelled (Underlying native function: HandleWeaponReloadCancelled 0xa48d3a4)
	void HandleWeaponReloadCancelled(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.HandleWeaponOverheatValueChanged (Underlying native function: HandleWeaponOverheatValueChanged 0xa48d264)
	void HandleWeaponOverheatValueChanged(float& CurrentValue, float& MaxValue, enum EFortWeaponOverheatState& State, bool& bIsInCooldown); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.HandleWeaponEquipped (Underlying native function: HandleWeaponEquipped 0xa48d1a0)
	void HandleWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.HandleViewTargetChanged (Underlying native function: HandleViewTargetChanged 0xa48d18c)
	void HandleViewTargetChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.HandleSecondaryFireReleased (Underlying native function: HandleSecondaryFireReleased 0xa48cf2c)
	void HandleSecondaryFireReleased(class AFortWeapon*& Weapon); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.HandleSecondaryFirePressed (Underlying native function: HandleSecondaryFirePressed 0xa48ce94)
	void HandleSecondaryFirePressed(class AFortWeapon*& Weapon); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.HandleLocalAmmoChanged (Underlying native function: HandleLocalAmmoChanged 0xa48c544)
	void HandleLocalAmmoChanged(int& LocalCount, int& LocalRemaining); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.HandleBuildingMaterialChanged (Underlying native function: HandleBuildingMaterialChanged 0xa48c090)
	void HandleBuildingMaterialChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.BP_HandleWeaponTargetingChanged (Has no native function)
	void BPHandleWeaponTargetingChanged(bool& bIsTargeting); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.BP_HandleWeaponReloadStarted (Has no native function)
	void BPHandleWeaponReloadStarted(float& ReloadTime, enum EFortWeaponReloadType& ReloadType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.BP_HandleWeaponReloadCancelled (Has no native function)
	void BPHandleWeaponReloadCancelled(class AFortWeapon*& Weapon); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.BP_HandleWeaponOverheatValueChanged (Has no native function)
	void BPHandleWeaponOverheatValueChanged(float& CurrentValue, float& MaxValue, enum EFortWeaponOverheatState& State, bool& bIsInCooldown); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.BP_HandleWeaponModeChanged (Has no native function)
	void BPHandleWeaponModeChanged(enum EEquippedWeaponDisplay& Mode); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.BP_HandleWeaponEquipped (Has no native function)
	void BPHandleWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.BP_HandleSecondaryFireReleased (Has no native function)
	void BPHandleSecondaryFireReleased(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.BP_HandleSecondaryFirePressed (Has no native function)
	void BPHandleSecondaryFirePressed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.BP_HandleResourceTypeChanged (Has no native function)
	void BPHandleResourceTypeChanged(class UFortResourceItemDefinition*& Item, int& ResourceCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.BP_HandleResourceCountChanged (Has no native function)
	void BPHandleResourceCountChanged(int& ResourceCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.BP_HandleHideReserveAmmoChanged (Has no native function)
	void BPHandleHideReserveAmmoChanged(bool& bHideReserveAmmo); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.BP_HandleHasBulletsPerClipChanged (Has no native function)
	void BPHandleHasBulletsPerClipChanged(bool& bHasBulletsPerClip); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.BP_HandleHasAmmoChanged (Has no native function)
	void BPHandleHasAmmoChanged(bool& bHasAmmo); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEquippedItemBase.BP_HandleAmmoCountChanged (Has no native function)
	void BPHandleAmmoCountChanged(int& MagazineAmmoCount, int& SurplusAmmoCount, int& TotalRemaining); // (Event | Protected | BlueprintEvent)
};

