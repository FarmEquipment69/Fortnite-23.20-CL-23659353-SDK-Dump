// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase
// Size: 0xb68
class UFortGameplayAbility_ScoutDrone_TargetingBase : public UFortGameplayAbility
{
	class UTargetingPreset* TargetingPreset; // 0xb20 (0x8)
	struct FTargetingRequestHandle AsyncTargetingHandle; // 0xb28 (0x4)
	unsigned char unreflected_b2c[0x4]; // 0xb2c (0x4) 
	struct FTimerHandle* TargetingTimerHandle; // 0xb30 (0x8)
	struct FScalableFloat TargetingInterval; // 0xb38 (0x28)
	bool bUseControllerAsInstigator; // 0xb60 (0x1)
	unsigned char padding_b61[0x7]; // 0xb61 (0x7)

	/* Functions */

	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.StopTargeting (Underlying native function: StopTargeting 0x5358410)
	void StopTargeting(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.StartTargeting (Underlying native function: StartTargeting 0x5358370)
	void StartTargeting(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.BP_OnTargetsFound (Has no native function)
	void BPOnTargetsFound(struct FTargetingRequestHandle& TargetingHandle); // (Event | Protected | HasOutParms | BlueprintEvent)
};

