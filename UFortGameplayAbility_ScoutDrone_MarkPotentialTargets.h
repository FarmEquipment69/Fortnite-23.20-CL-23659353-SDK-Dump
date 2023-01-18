// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets
// Size: 0xc78
class UFortGameplayAbility_ScoutDrone_MarkPotentialTargets : public UFortGameplayAbility_ScoutDrone_TargetingBase
{
	struct FIndicatedActorData IndicatedActorData; // 0xb68 (0xd8)
	unsigned char unreflected_c40[0x10]; // 0xc40 (0x10) 
	struct FScalableFloat MaxNumberOfPotentialTargets; // 0xc50 (0x28)

	/* Functions */

	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets.OnStoppedHighlightingTarget (Has no native function)
	void OnStoppedHighlightingTarget(class AActor*& Target); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets.OnStartHighlightingTarget (Has no native function)
	void OnStartHighlightingTarget(class AActor*& Target); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)
};

