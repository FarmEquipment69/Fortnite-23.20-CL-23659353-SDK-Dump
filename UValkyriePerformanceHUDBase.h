// Class /Script/FortniteUI.ValkyriePerformanceHUDBase
// Size: 0x370
class UValkyriePerformanceHUDBase : public UFortHUDElementWidget
{
	unsigned char unreflected_370[0x370]; 

	/* Functions */

	// Function /Script/FortniteUI.ValkyriePerformanceHUDBase.SetUIMetrics (Has no native function)
	void SetUIMetrics(struct FVolumePerformanceMetrics& VolumePerformanceMetrics); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.ValkyriePerformanceHUDBase.OnPlayspaceMemoryValueUpdated (Underlying native function: OnPlayspaceMemoryValueUpdated 0x61832b0)
	void OnPlayspaceMemoryValueUpdated(int& MemoryValue); // (Final | Native | Protected)

	// Function /Script/FortniteUI.ValkyriePerformanceHUDBase.OnPlayerExitedSpatialGameplayActor (Underlying native function: OnPlayerExitedSpatialGameplayActor 0x61831b0)
	void OnPlayerExitedSpatialGameplayActor(struct FEventMessageTag& Channel, struct FPlayerExitSpatialActorContext& PlayerExitSpatialActorContext); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.ValkyriePerformanceHUDBase.OnPlayerEnteredSpatialGameplayActor (Underlying native function: OnPlayerEnteredSpatialGameplayActor 0x61830b0)
	void OnPlayerEnteredSpatialGameplayActor(struct FEventMessageTag& Channel, struct FPlayerEnterSpatialActorContext& PlayerEnterSpatialActorContext); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.ValkyriePerformanceHUDBase.HideUIMetrics (Has no native function)
	void HideUIMetrics(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.ValkyriePerformanceHUDBase.HandleSpatialLoadingStateChanged (Underlying native function: HandleSpatialLoadingStateChanged 0x6182fb0)
	void HandleSpatialLoadingStateChanged(struct FEventMessageTag& Channel, struct FSpatialGamePlayActorLoadingStateUpdatedContext& StateContext); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.ValkyriePerformanceHUDBase.HandleGameStateInitialized (Underlying native function: HandleGameStateInitialized 0x6182ee0)
	void HandleGameStateInitialized(class AFortGameState*& GameState); // (Final | Native | Protected)

	// Function /Script/FortniteUI.ValkyriePerformanceHUDBase.BP_OnClientEnterSpatialGameplayActor (Has no native function)
	void BPOnClientEnterSpatialGameplayActor(class APlayerState*& ClientPlayerState); // (Event | Protected | BlueprintEvent)
};

