// Class /Script/FortniteGame.FortPlayspaceReplicatedState
// Size: 0x290
class AFortPlayspaceReplicatedState : public AActor
{
	class UActorComponent_ReplicatedParamHelper* CachedRepParamHelper; // 0x288 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayspaceReplicatedState.IsLocalPlayerInOwningPlayspace (Underlying native function: IsLocalPlayerInOwningPlayspace 0x8dfe5f8)
	bool IsLocalPlayerInOwningPlayspace(int& PlayerIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayspaceReplicatedState.GetReplicatedParamHelper (Underlying native function: GetReplicatedParamHelper 0x8dfd794)
	class UActorComponent_ReplicatedParamHelper* GetReplicatedParamHelper(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

