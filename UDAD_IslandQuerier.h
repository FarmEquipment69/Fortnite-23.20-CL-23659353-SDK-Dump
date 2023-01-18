// Class /Script/FortniteGame.DAD_IslandQuerier
// Size: 0x70
class UDAD_IslandQuerier : public UObject
{
	struct FMulticastInlineDelegate OnWellKnownIslandsUpdated; // 0x28 (0x10)
	class UDAD_WellKnownIslands* WellKnownIslands; // 0x38 (0x8)
	class UDAD_FeaturedIslands* FeaturedIslands; // 0x40 (0x8)
	class UDAD_PlaylistCuratedHub* PlaylistCuratedHub; // 0x48 (0x8)
	class UCreativeDynamicXpDataAsset* CreativeDynamicXp; // 0x50 (0x8)
	bool bResolveMetrics; // 0x58 (0x1)
	unsigned char unreflected_59[0x3]; // 0x59 (0x3) 
	float UpdateMetricsInterval; // 0x5c (0x4)
	unsigned char unreflected_60[0x8]; // 0x60 (0x8) 
	bool bShouldUseDiscoveryService; // 0x68 (0x1)
	unsigned char padding_69[0x7]; // 0x69 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.DAD_IslandQuerier.GetIslandCodeByWellKnownName (Underlying native function: GetIslandCodeByWellKnownName 0x87b2658)
	struct FString GetIslandCodeByWellKnownName(struct FString& WellKnownIslandName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

