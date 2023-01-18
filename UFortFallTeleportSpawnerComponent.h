// Class /Script/FallTeleportationRuntime.FortFallTeleportSpawnerComponent
// Size: 0x150
class UFortFallTeleportSpawnerComponent : public UActorComponent
{
	struct TWeakObjectPtr<class UClass> PlayerPawnReceiverClass; // 0xa0 (0x28)
	class UClass* ComponentToAddClass; // 0xc8 (0x8)
	struct FScalableFloat TeleportEnabled; // 0xd0 (0x28)
	struct FScalableFloat RemoveComponentRequestTimeOffset; // 0xf8 (0x28)
	unsigned char padding_120[0x30]; // 0x120 (0x30)

	/* Functions */

	// Function /Script/FallTeleportationRuntime.FortFallTeleportSpawnerComponent.HandleWarmupCountdownEndTimeUpdated (Underlying native function: HandleWarmupCountdownEndTimeUpdated 0x55b4930)
	void HandleWarmupCountdownEndTimeUpdated(float& NewEndTime); // (Final | Native | Protected)

	// Function /Script/FallTeleportationRuntime.FortFallTeleportSpawnerComponent.HandleGamePhaseChanged (Underlying native function: HandleGamePhaseChanged 0x7436800)
	void HandleGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)
};

