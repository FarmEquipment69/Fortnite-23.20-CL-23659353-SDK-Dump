// Class /Script/FortniteGame.FortReplicationGraph
// Size: 0x870
class UFortReplicationGraph : public UReplicationGraph
{
	class UReplicationGraphNode_GridSpatialization2D* RootGridNode; // 0x568 (0x8)
	class UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x570 (0x8)
	class UFortReplicationGraphNode_LiveSpectator* LiveSpectatorRelevancyNode; // 0x578 (0x8)
	class UFortReplicationGraphNode_PlayerStateFrequencyLimiter* PlayerStateLimiterNode; // 0x580 (0x8)
	class UFortReplicationGraphNode_PlayerStateFrequencyLimiter* ReplayPlayerStateLimiterNode; // 0x588 (0x8)
	unsigned char unreflected_590[0x80]; // 0x590 (0x80) 
	struct TArray<class UReplicationGraphNode_FortVolumeGrid*> FortVolumeGrids; // 0x610 (0x10)
	unsigned char unreflected_620[0x50]; // 0x620 (0x50) 
	unsigned char ClassToNodetoRouteTo_670[0x50]; // 0x670 (0x50) (UNHANDLED PROPERTY TYPE: MapProperty UID: 0)
	unsigned char padding_6c0[0x1b0]; // 0x6c0 (0x1b0)

	/* Functions */

	// Function /Script/FortniteGame.FortReplicationGraph.OnVehicleDestroyed (Underlying native function: OnVehicleDestroyed 0x8c78124)
	void OnVehicleDestroyed(class AActor*& DestroyedVehicle); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortReplicationGraph.OnHighFrequencyPawnDestroyed (Underlying native function: OnHighFrequencyPawnDestroyed 0x8c780a4)
	void OnHighFrequencyPawnDestroyed(class AActor*& Pawn); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortReplicationGraph.OnGameStatePlaylistLoaded (Underlying native function: OnGameStatePlaylistLoaded 0x71a6dd0)
	void OnGameStatePlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Public | HasOutParms)
};

