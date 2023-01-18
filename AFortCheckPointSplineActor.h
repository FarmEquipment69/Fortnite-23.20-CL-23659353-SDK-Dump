// Class /Script/FortniteGame.FortCheckPointSplineActor
// Size: 0x320
class AFortCheckPointSplineActor : public AActor
{
	bool bSmoothSplineMesh; // 0x288 (0x1)
	unsigned char unreflected_289[0x3]; // 0x289 (0x3) 
	float SplineMeshTension; // 0x28c (0x4)
	bool bShowSplineMeshAtStartup; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	struct TArray<class USplineMeshComponent*> SplineMeshComponents; // 0x298 (0x10)
	bool bDrawSplineMapUI; // 0x2a8 (0x1)
	unsigned char unreflected_2a9[0x7]; // 0x2a9 (0x7) 
	struct TMap<struct TEnumAsByte<EFortTeam>, struct FLinearColor> SplineMapUITeamColors; // 0x2b0 (0x50)
	int NumSplineMapUISegments; // 0x300 (0x4)
	float SplineMapUIThickness; // 0x304 (0x4)
	bool bSplineMapUIAntialias; // 0x308 (0x1)
	unsigned char padding_309[0x17]; // 0x309 (0x17)

	/* Functions */

	// Function /Script/FortniteGame.FortCheckPointSplineActor.ShowSplineMeshes (Underlying native function: ShowSplineMeshes 0x8547824)
	void ShowSplineMeshes(int& SplineIndexStart, int& SplineIndexEnd); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCheckPointSplineActor.ShowMapUI (Underlying native function: ShowMapUI 0x8547764)
	void ShowMapUI(int& SplineIndexStart, int& SplineIndexEnd); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCheckPointSplineActor.ShowFullMapUI (Underlying native function: ShowFullMapUI 0x8547750)
	void ShowFullMapUI(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCheckPointSplineActor.HideSplineMeshes (Underlying native function: HideSplineMeshes 0x8546414)
	void HideSplineMeshes(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCheckPointSplineActor.HideMapUI (Underlying native function: HideMapUI 0x85463fc)
	void HideMapUI(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCheckPointSplineActor.GetSplineComponent (Has no native function)
	class USplineComponent* GetSplineComponent(); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortCheckPointSplineActor.GetCheckPointLocations (Has no native function)
	struct TArray<struct FVector> GetCheckPointLocations(); // (Event | Public | BlueprintEvent | Const)
};

