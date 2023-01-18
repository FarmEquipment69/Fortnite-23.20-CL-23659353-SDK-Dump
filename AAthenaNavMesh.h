// Class /Script/FortniteAI.AthenaNavMesh
// Size: 0x680
class AAthenaNavMesh : public AFortNavMesh
{
	int HotSpotPathfindingMaxSearchNodes; // 0x580 (0x4)
	float ShallowWaterTraceStartOffsetZ; // 0x584 (0x4)
	float ShallowWaterTraceEndOffsetZ; // 0x588 (0x4)
	int MaximumTilesToProcessForWaterPerFrame; // 0x58c (0x4)
	bool bSuspendNavmeshWhenNoAIUsersAlive; // 0x590 (0x1)
	unsigned char unreflected_591[0x7]; // 0x591 (0x7) 
	struct TArray<struct FBox> SerializedDirtyAreas; // 0x598 (0x10)
	unsigned char padding_5a8[0xd8]; // 0x5a8 (0xd8)

	/* Functions */

	// Function /Script/FortniteAI.AthenaNavMesh.MoveTiles (Underlying native function: MoveTiles 0xa3311d0)
	void MoveTiles(struct FBox& SourceBox, struct FIntPoint*& TileOffset, float& RotationDeg, struct FVector2D& FillerTilePosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaNavMesh.ComputeOffsetForMoveTiles (Underlying native function: ComputeOffsetForMoveTiles 0xa330a28)
	void ComputeOffsetForMoveTiles(struct FVector& StartPosition, struct FVector& DesiredPosition, struct FVector& OutEndPosition, struct FIntPoint*& OutTileOffset); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

