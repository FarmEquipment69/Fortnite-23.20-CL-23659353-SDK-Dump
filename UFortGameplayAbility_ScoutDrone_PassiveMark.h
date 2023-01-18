// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark
// Size: 0xd40
class UFortGameplayAbility_ScoutDrone_PassiveMark : public UFortGameplayAbility_ScoutDrone_TargetingBase
{
	struct FScoutDroneStatusData* CurrentTargetStatus; // 0xb68 (0x8)
	struct FStenciledActorData StenciledActorData; // 0xb70 (0x80)
	struct FIndicatedActorData IndicatedActorData; // 0xbf0 (0xd8)
	struct FScalableFloat ActorTargetingRange; // 0xcc8 (0x28)
	struct FScalableFloat TimeToConfirmTarget; // 0xcf0 (0x28)
	class AActor* CurrentTarget; // 0xd18 (0x8)
	struct FTimerHandle* TargetConfirmationTimerHandle; // 0xd20 (0x8)
	class UScoutDronePassiveMarkPayload* PayloadCache; // 0xd28 (0x8)
	unsigned char padding_d30[0x10]; // 0xd30 (0x10)

	/* Functions */

	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.OnRep_CurrentTargetStatus (Underlying native function: OnRep_CurrentTargetStatus 0x5357e80)
	void OnRepCurrentTargetStatus(); // (Final | Native | Protected)

	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.OnActorIndicatorExpired (Underlying native function: OnActorIndicatorExpired 0x5357a00)
	void OnActorIndicatorExpired(class AActor*& IndicatedActor); // (Final | Native | Private)

	// Function /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.BP_OnTargetStatusChanged (Has no native function)
	void BPOnTargetStatusChanged(); // (BlueprintAuthorityOnly | Event | Protected | BlueprintEvent)
};

