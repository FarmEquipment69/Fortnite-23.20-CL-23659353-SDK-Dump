// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp
// Size: 0xbd8
class UFortGameplayAbility_ScoutDrone_PickUp : public UFortGameplayAbility_ScoutDrone_TargetingBase
{
	unsigned char unreflected_b68[0x8]; // 0xb68 (0x8) 
	struct FScalableFloat MaxNumberOfItemsToGrab; // 0xb70 (0x28)
	class UScoutDronePickUpTargetsPayload* PayloadCache; // 0xb98 (0x8)
	struct FScalableFloat PickupToggleCooldownDuration; // 0xba0 (0x28)
	unsigned char padding_bc8[0x10]; // 0xbc8 (0x10)

	/* Functions */

	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp.ServerConfirmTargets (Underlying native function: ServerConfirmTargets 0x5358240)
	void ServerConfirmTargets(); // (Final | Net | NetReliable | Native | Event | Private | NetServer)
};

