// Class /Script/FortniteUI.CampaignHUDBase
// Size: 0x598
class UCampaignHUDBase : public UFortUIStateWidget_NUI
{
	int ReticleExtensionSize; // 0x548 (0x4)
	unsigned char unreflected_54c[0x34]; // 0x54c (0x34) 
	class UFortWeaponReticleExtensionWidgetBase* CurrentCustomReticleExtension; // 0x580 (0x8)
	struct TArray<class UFortWeaponReticleExtensionWidgetBase*> RecentReticleExtensions; // 0x588 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.CampaignHUDBase.ToggleChat (Has no native function)
	void ToggleChat(bool& bShow); // (0x00000002 | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.CampaignHUDBase.SetInputReflectorBoxVisibility (Has no native function)
	void SetInputReflectorBoxVisibility(bool& bVisible); // (0x00000002 | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.CampaignHUDBase.OnExtensionWidgetRemoved (Has no native function)
	void OnExtensionWidgetRemoved(enum EUIExtensionSlot& ExtensionSlot, class UUserWidget*& Widget); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.CampaignHUDBase.OnExtensionWidgetCreated (Has no native function)
	void OnExtensionWidgetCreated(enum EUIExtensionSlot& ExtensionSlot, class UUserWidget*& Widget); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.CampaignHUDBase.NativeHandleWeaponEquipped (Underlying native function: NativeHandleWeaponEquipped 0xa919138)
	void NativeHandleWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Public | BlueprintCallable)
};

