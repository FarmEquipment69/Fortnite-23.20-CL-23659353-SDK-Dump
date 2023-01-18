// Class /Script/FortniteGame.FortMarkerDetailsTable
// Size: 0xd8
class UFortMarkerDetailsTable : public UPrimaryDataAsset
{
	struct TMap<enum EFortWorldMarkerType, struct FMarkedActorDisplayInfo> DefaultMarker; // 0x30 (0x50)
	struct TMap<enum EFortWorldMarkerType, struct FName> MarkerTypeToIdMap; // 0x80 (0x50)
	struct FDataRegistryType MarkerRegistryType; // 0xd0 (0x4)
	unsigned char padding_d4[0x4]; // 0xd4 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortMarkerDetailsTable.GetDisplayInfoForMarkerData (Underlying native function: GetDisplayInfoForMarkerData 0x845db0c)
	struct FMarkedActorDisplayInfo GetDisplayInfoForMarkerData(struct FFortWorldMarkerData& MarkerData); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)
};

