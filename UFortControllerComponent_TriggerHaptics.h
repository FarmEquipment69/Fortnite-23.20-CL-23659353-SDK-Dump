// Class /Script/FortniteGame.FortControllerComponent_TriggerHaptics
// Size: 0xa8
class UFortControllerComponent_TriggerHaptics : public UControllerComponent
{
	unsigned char bTriggerHapticsAvailable; // 0xa0 (0x1)
	unsigned char padding_a1[0x7]; // 0xa1 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_TriggerHaptics.UpdateTriggerHaptics (Underlying native function: UpdateTriggerHaptics 0x26daa0c)
	void UpdateTriggerHaptics(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortControllerComponent_TriggerHaptics.ResetTriggerHaptics (Underlying native function: ResetTriggerHaptics 0x26daa0c)
	void ResetTriggerHaptics(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_TriggerHaptics.OnWeaponEquipped (Underlying native function: OnWeaponEquipped 0x70dc290)
	void OnWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PreviousWeapon); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_TriggerHaptics.OnPawnChanged (Underlying native function: OnPawnChanged 0x86e9580)
	void OnPawnChanged(class AFortPawn*& InPawn); // (Final | Native | Private)
};

