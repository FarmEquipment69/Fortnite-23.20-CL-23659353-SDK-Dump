// Class /Script/FortniteGame.FortAthenaInventoryLoadout
// Size: 0x98
class UFortAthenaInventoryLoadout : public UPrimaryDataAsset
{
	struct FText LoadoutTitle; // 0x30 (0x18)
	struct FText LoadoutDescription; // 0x48 (0x18)
	struct TArray<struct FAthenaLoadoutEntry> LoadoutInfo; // 0x60 (0x10)
	struct FScalableFloat LoadoutEnabled; // 0x70 (0x28)
};

