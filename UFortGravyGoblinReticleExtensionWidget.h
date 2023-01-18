// Class /Script/MotherGameplayUI.FortGravyGoblinReticleExtensionWidget
// Size: 0x2f8
class UFortGravyGoblinReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{
	struct FEventMessageTag ItemActivatableTag; // 0x2e0 (0x4)
	struct FEventMessageTag ItemInactivatableTag; // 0x2e4 (0x4)
	unsigned char padding_2e8[0x10]; // 0x2e8 (0x10)

	/* Functions */

	// Function /Script/MotherGameplayUI.FortGravyGoblinReticleExtensionWidget.OnItemInactivatable (Has no native function)
	void OnItemInactivatable(); // (Event | Protected | BlueprintEvent)

	// Function /Script/MotherGameplayUI.FortGravyGoblinReticleExtensionWidget.OnItemActivatable (Has no native function)
	void OnItemActivatable(); // (Event | Protected | BlueprintEvent)
};

