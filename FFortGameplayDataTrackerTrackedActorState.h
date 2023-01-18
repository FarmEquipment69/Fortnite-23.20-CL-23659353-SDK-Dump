// ScriptStruct /Script/FortniteGame.FortGameplayDataTrackerTrackedActorState
// Size: 0x20
struct FFortGameplayDataTrackerTrackedActorState
{
	class AActor* TrackedActor; // 0x0 (0x8)
	class AFortPawn* TrackedActorAsPawn; // 0x8 (0x8)
	class ABuildingActor* TrackedActorAsBuilding; // 0x10 (0x8)
	struct FGameplayTag CurrentState; // 0x18 (0x4)
	bool bHasUnprocessedStateEntry; // 0x1c (0x1)
	unsigned char padding_1d[0x3]; // 0x1d (0x3)
};

