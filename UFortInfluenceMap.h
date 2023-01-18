// Class /Script/FortniteAI.FortInfluenceMap
// Size: 0xf8
class UFortInfluenceMap : public UObject
{
	unsigned char unreflected_28[0xb8]; // 0x28 (0xb8) 
	class AFortNavigationGraph* GraphData; // 0xe0 (0x8)
	unsigned char padding_e8[0x10]; // 0xe8 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.FortInfluenceMap.K2_GetInfluenceSourcePositions (Underlying native function: K2_GetInfluenceSourcePositions 0xa330ea0)
	static void K2GetInfluenceSourcePositions(class UObject*& WorldContext, struct TArray<struct FVector>& InfluenceSourcePositions); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortInfluenceMap.K2_AddInfluenceSource (Underlying native function: K2_AddInfluenceSource 0xa330c8c)
	static void K2AddInfluenceSource(class UObject*& WorldContext, struct FVector& Position, struct FString& SourceName, float& Strength); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

