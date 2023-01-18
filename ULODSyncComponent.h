// Class /Script/Engine.LODSyncComponent
// Size: 0x138
class ULODSyncComponent : public UActorComponent
{
	int NumLODs; // 0xa0 (0x4)
	int ForcedLOD; // 0xa4 (0x4)
	int MinLOD; // 0xa8 (0x4)
	unsigned char unreflected_ac[0x4]; // 0xac (0x4) 
	struct TArray<struct FComponentSync*> ComponentsToSync; // 0xb0 (0x10)
	struct TMap<struct FName, struct FLODMappingData> CustomLODMapping; // 0xc0 (0x50)
	int CurrentLOD; // 0x110 (0x4)
	int CurrentNumLODs; // 0x114 (0x4)
	struct TArray<class UPrimitiveComponent*> DriveComponents; // 0x118 (0x10)
	struct TArray<class UPrimitiveComponent*> SubComponents; // 0x128 (0x10)

	/* Functions */

	// Function /Script/Engine.LODSyncComponent.GetLODSyncDebugText (Underlying native function: GetLODSyncDebugText 0x9cf7304)
	struct FString GetLODSyncDebugText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

