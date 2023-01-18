// Class /Script/FortniteGame.FortProjectileTrajectory
// Size: 0x2b0
class AFortProjectileTrajectory : public AActor
{
	class USplineComponent* SplineComponent; // 0x288 (0x8)
	class UClass* SplineMeshComponentClass; // 0x290 (0x8)
	struct TArray<class USplineMeshComponent*> SplineMeshComponents; // 0x298 (0x10)
	int MaxSplineMeshesToCreate; // 0x2a8 (0x4)
	unsigned char padding_2ac[0x4]; // 0x2ac (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortProjectileTrajectory.SetTrajectorySpline (Underlying native function: SetTrajectorySpline 0x9068cc8)
	void SetTrajectorySpline(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)
};

