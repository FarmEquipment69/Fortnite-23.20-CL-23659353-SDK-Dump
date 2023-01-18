// Class /Script/Foliage.FoliageStatistics
// Size: 0x28
class UFoliageStatistics : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingSphereCount (Underlying native function: FoliageOverlappingSphereCount 0x9929dbc)
	static int FoliageOverlappingSphereCount(class UObject*& WorldContextObject, class UStaticMesh*& StaticMesh, struct FVector& CenterPosition, float& Radius); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms (Underlying native function: FoliageOverlappingBoxTransforms 0x9929c38)
	static void FoliageOverlappingBoxTransforms(class UObject*& WorldContextObject, class UStaticMesh*& StaticMesh, struct FBox& Box, struct TArray<struct FTransform>& OutTransforms); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingBoxCount (Underlying native function: FoliageOverlappingBoxCount 0x9929b18)
	static int FoliageOverlappingBoxCount(class UObject*& WorldContextObject, class UStaticMesh*& StaticMesh, struct FBox& Box); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

