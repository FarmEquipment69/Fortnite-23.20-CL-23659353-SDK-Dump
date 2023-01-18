// Class /Script/FortniteAI.AthenaNavPresenceDetectorComponent
// Size: 0xe8
class UAthenaNavPresenceDetectorComponent : public UActorComponent
{
	bool bDisableUponNavMeshPresence; // 0xa0 (0x1)
	bool bHasValidNavMesh; // 0xa1 (0x1)
	unsigned char unreflected_a2[0x2]; // 0xa2 (0x2) 
	struct FName NavMeshNameToUse; // 0xa4 (0x4)
	struct TArray<struct FNavMeshDetectedInfo> NavMeshesInfo; // 0xa8 (0x10)
	struct FMulticastInlineDelegate NavMeshPresenceDetected; // 0xb8 (0x10)
	struct FMulticastInlineDelegate NavMeshPresenceUndetected; // 0xc8 (0x10)
	unsigned char padding_d8[0x10]; // 0xd8 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.AthenaNavPresenceDetectorComponent.OnNavMeshTilesUpdated (Underlying native function: OnNavMeshTilesUpdated 0xa3315c0)
	void OnNavMeshTilesUpdated(struct FUpdatedNavMeshTiles& UpdatedNavMeshTiles); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteAI.AthenaNavPresenceDetectorComponent.HasValidNavMeshLocation (Underlying native function: HasValidNavMeshLocation 0xa330bac)
	bool HasValidNavMeshLocation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

