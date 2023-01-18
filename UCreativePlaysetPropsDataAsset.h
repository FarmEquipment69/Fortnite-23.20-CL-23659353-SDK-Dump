// Class /Script/FortniteGame.CreativePlaysetPropsDataAsset
// Size: 0xf0
class UCreativePlaysetPropsDataAsset : public UDataAsset
{
	struct TSet<struct FName> GeneratedActorPaths; // 0x30 (0x50)
	struct TArray<class UFortCreativeRealEstatePlotItemDefinition*> IncludedCreativeRealEstatePlotItemDefinitions; // 0x80 (0x10)
	struct TArray<class UFortPlaysetItemDefinition*> IncludedPlaysetItemDefinitions; // 0x90 (0x10)
	struct TSet<struct FName> ActorPaths; // 0xa0 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.CreativePlaysetPropsDataAsset.Generate (Underlying native function: Generate 0x26daa0c)
	void Generate(); // (Final | 0x00000002 | Exec | Native | Public)
};

