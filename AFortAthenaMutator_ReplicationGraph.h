// Class /Script/FortniteGame.FortAthenaMutator_ReplicationGraph
// Size: 0x3d8
class AFortAthenaMutator_ReplicationGraph : public AFortAthenaMutator
{
	struct TMap<enum ERepGraphMutatorSpatializationZoneType, struct FRepGraphMutatorSpatializationZoneArray> MutatorZonesMap; // 0x330 (0x50)
	unsigned char padding_380[0x58]; // 0x380 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_ReplicationGraph.RestoreZones (Underlying native function: RestoreZones 0x72ab98c)
	void RestoreZones(enum ERepGraphMutatorSpatializationZoneType& ZoneType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_ReplicationGraph.RestoreAllZones (Underlying native function: RestoreAllZones 0x26daa0c)
	void RestoreAllZones(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_ReplicationGraph.OverrideZones (Underlying native function: OverrideZones 0x84ee918)
	void OverrideZones(enum ERepGraphMutatorSpatializationZoneType& ZoneType, struct TArray<struct FRepGraphMutatorSpatializationZone>& MutatorZones); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

