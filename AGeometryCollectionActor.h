// Class /Script/GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x298
class AGeometryCollectionActor : public AActor
{
	class UGeometryCollectionComponent* GeometryCollectionComponent; // 0x288 (0x8)
	class UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x290 (0x8)

	/* Functions */

	// Function /Script/GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle (Underlying native function: RaycastSingle 0x99cd5a8)
	bool RaycastSingle(struct FVector& Start, struct FVector& End, struct FHitResult& OutHit); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

