// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether
// Size: 0xb98
class UFortGameplayAbility_ScoutDrone_Tether : public UFortGameplayAbility
{
	struct FScalableFloat WarningRange; // 0xb20 (0x28)
	struct FScalableFloat SignalLossRange; // 0xb48 (0x28)
	bool bIsInWarningRange; // 0xb70 (0x1)
	bool bIsInSignalLossRange; // 0xb71 (0x1)
	unsigned char unreflected_b72[0x6]; // 0xb72 (0x6) 
	struct FTimerHandle* TetheringTimerHandle; // 0xb78 (0x8)
	struct FTimerHandle* TetheringReportTimerHandle; // 0xb80 (0x8)
	struct FScoutDroneDeferredDestructionData DismissDelayData; // 0xb88 (0x10)

	/* Functions */

	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.StopCheckingDistances (Underlying native function: StopCheckingDistances 0x5358390)
	void StopCheckingDistances(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.StartCheckingDistances (Underlying native function: StartCheckingDistances 0x5358350)
	void StartCheckingDistances(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.OnRep_bIsInWarningRange (Underlying native function: OnRep_bIsInWarningRange 0x5357fe0)
	void OnRepbIsInWarningRange(); // (Final | Native | Private)

	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.OnRep_bIsInSignalLossRange (Underlying native function: OnRep_bIsInSignalLossRange 0x5357f80)
	void OnRepbIsInSignalLossRange(); // (Final | Native | Private)
};

