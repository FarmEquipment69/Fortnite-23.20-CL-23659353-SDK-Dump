// Class /Script/FortniteUI.FortReticle
// Size: 0x320
class UFortReticle : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	class UMaterialInterface* ReticleWeaponCooldownMI; // 0x310 (0x8)
	unsigned char padding_318[0x8]; // 0x318 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortReticle.OnWeaponEquipped (Underlying native function: OnWeaponEquipped 0x1a6e52c)
	void OnWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortReticle.OnReticleColorChanged (Underlying native function: OnReticleColorChanged 0xa88f424)
	void OnReticleColorChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortReticle.OnPawnSet (Underlying native function: OnPawnSet 0x1a6e118)
	void OnPawnSet(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortReticle.OnMinigameStateChanged (Underlying native function: OnMinigameStateChanged 0xa88f1c8)
	void OnMinigameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& MinigameState); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortReticle.OnContextualReticleChanged (Underlying native function: OnContextualReticleChanged 0x2e01de8)
	void OnContextualReticleChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortReticle.OnActorEnteredVolume (Underlying native function: OnActorEnteredVolume 0xa88f014)
	void OnActorEnteredVolume(class APlayerState*& PS, class AFortVolume*& Volume); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortReticle.HandleWeaponChanged (Underlying native function: HandleWeaponChanged 0xa88ec30)
	void HandleWeaponChanged(); // (Final | Native | Private)
};

