// Class /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning
// Size: 0x118
class UPlayspaceControllerComponent_PlayerSpawning : public UControllerComponent
{
	struct FMulticastInlineDelegate OnPlayerQueuedToSpawn; // 0xa0 (0x10)
	class ACameraActor* SpawnCameraActor; // 0xb0 (0x8)
	bool bClientReadyForSpawning; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x7]; // 0xb9 (0x7) 
	struct FReplicatedSpawnInfo ReplicatedSpawnInfo; // 0xc0 (0x58)

	/* Functions */

	// Function /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ServerMarkReadyForSpawning (Underlying native function: ServerMarkReadyForSpawning 0x7062234)
	void ServerMarkReadyForSpawning(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.OnRep_ReplicatedSpawnInfo (Underlying native function: OnRep_ReplicatedSpawnInfo 0x706218c)
	void OnRepReplicatedSpawnInfo(); // (Final | Native | Private)

	// Function /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.GetSpawnInfo (Underlying native function: GetSpawnInfo 0x7061ae4)
	struct FReplicatedSpawnInfo GetSpawnInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

