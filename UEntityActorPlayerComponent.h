// Class /Script/EntityActor.EntityActorPlayerComponent
// Size: 0xe8
class UEntityActorPlayerComponent : public UEntityDataBackedComponent
{
	struct FUniqueNetIdRepl PlayerId; // 0x68 (0x30)
	struct TWeakObjectPtr<class APlayerController> PlayerControllerCache; // 0x98 (0x28)
	struct TWeakObjectPtr<class APlayerState> PlayerStateCache; // 0xc0 (0x28)

	/* Functions */

	// Function /Script/EntityActor.EntityActorPlayerComponent.OnRep_PlayerID (Underlying native function: OnRep_PlayerID 0x15de1d4)
	void OnRepPlayerID(); // (Native | Protected)
};

