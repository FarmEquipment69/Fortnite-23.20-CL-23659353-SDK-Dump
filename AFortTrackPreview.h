// Class /Script/FortniteGame.FortTrackPreview
// Size: 0x418
class AFortTrackPreview : public AFortDecoPreview
{
	class UStaticMesh* TrackPieceMeshesByType[0x5]; // 0x3e0 (0x8) (ARRAY) 
	float CellSize; // 0x408 (0x4)
	unsigned char unreflected_40c[0x4]; // 0x40c (0x4) 
	class UStaticMeshComponent* TrackMeshComp; // 0x410 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortTrackPreview.InitializeTrackPreview (Underlying native function: InitializeTrackPreview 0x8f7d2b0)
	void InitializeTrackPreview(class UStaticMeshComponent*& InTrackMeshComp); // (Final | Native | Public | BlueprintCallable)
};

