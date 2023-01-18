// Class /Script/FortniteGame.ReplicationGraphNode_FortVolumeGrid
// Size: 0x88
class UReplicationGraphNode_FortVolumeGrid : public UReplicationGraphNode
{
	unsigned char unreflected_50[0x18]; // 0x50 (0x18) 
	class AFortVolume* FortVolume; // 0x68 (0x8)
	class UReplicationGraphNode_GridSpatialization2D* FortVolumeGrid2D; // 0x70 (0x8)
	class UReplicationGraphNode_FortVolumeGlobalRelevancyNode* FortVolumeGlobalRelevancyNode; // 0x78 (0x8)
	unsigned char padding_80[0x8]; // 0x80 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.ReplicationGraphNode_FortVolumeGrid.HandleStreamedLevelUnloaded (Underlying native function: HandleStreamedLevelUnloaded 0x8c77eac)
	void HandleStreamedLevelUnloaded(); // (Final | Native | Private)

	// Function /Script/FortniteGame.ReplicationGraphNode_FortVolumeGrid.HandleStreamedLevelShown (Underlying native function: HandleStreamedLevelShown 0x8c77e98)
	void HandleStreamedLevelShown(); // (Final | Native | Private)

	// Function /Script/FortniteGame.ReplicationGraphNode_FortVolumeGrid.HandleStreamedLevelLoaded (Underlying native function: HandleStreamedLevelLoaded 0x8c77e84)
	void HandleStreamedLevelLoaded(); // (Final | Native | Private)

	// Function /Script/FortniteGame.ReplicationGraphNode_FortVolumeGrid.HandleStreamedLevelHidden (Underlying native function: HandleStreamedLevelHidden 0x8c77e70)
	void HandleStreamedLevelHidden(); // (Final | Native | Private)
};

