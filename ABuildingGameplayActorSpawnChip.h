// Class /Script/FortniteGame.BuildingGameplayActorSpawnChip
// Size: 0xae0
class ABuildingGameplayActorSpawnChip : public ABuildingGameplayActor
{
	class AFortPlayerControllerAthena* OwnerPlayerController; // 0x9d8 (0x8)
	struct FUniqueNetIdRepl OwnerPlayerId; // 0x9e0 (0x30)
	class AFortPlayerStateAthena* OwnerPlayerState; // 0xa10 (0x8)
	struct FScalableFloat ChipExpirationLength; // 0xa18 (0x28)
	struct FRebootCardReplicatedState RebootCardReplicatedState; // 0xa40 (0x10)
	struct FLinearColor MarkerDetailsColor; // 0xa50 (0x10)
	struct FMarkerID* ResurrectionChipMarkerID; // 0xa60 (0x8)
	class UClass* IndicatorClass; // 0xa68 (0x8)
	struct FText InteractSubText; // 0xa70 (0x18)
	struct FLinearColor InteractSubTextColor; // 0xa88 (0x10)
	bool bAutoAcquireSpawnChip; // 0xa98 (0x1)
	unsigned char SquadId; // 0xa99 (0x1)
	unsigned char padding_a9a[0x46]; // 0xa9a (0x46)

	/* Functions */

	// Function /Script/FortniteGame.BuildingGameplayActorSpawnChip.PickUp (Underlying native function: PickUp 0x85e031c)
	void PickUp(class AFortPlayerControllerAthena*& PickingUpController); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorSpawnChip.OnRep_RebootCardReplicatedState (Underlying native function: OnRep_RebootCardReplicatedState 0x2da9fd4)
	void OnRepRebootCardReplicatedState(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingGameplayActorSpawnChip.OnDestroyPickup (Underlying native function: OnDestroyPickup 0x8288dc4)
	void OnDestroyPickup(); // (Native | Event | Protected | BlueprintEvent)
};

