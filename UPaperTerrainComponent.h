// Class /Script/Paper2D.PaperTerrainComponent
// Size: 0x5a0
class UPaperTerrainComponent : public UPrimitiveComponent
{
	class UPaperTerrainMaterial* TerrainMaterial; // 0x540 (0x8)
	bool bClosedSpline; // 0x548 (0x1)
	bool bFilledSpline; // 0x549 (0x1)
	unsigned char unreflected_54a[0x6]; // 0x54a (0x6) 
	class UPaperTerrainSplineComponent* AssociatedSpline; // 0x550 (0x8)
	int RandomSeed; // 0x558 (0x4)
	float SegmentOverlapAmount; // 0x55c (0x4)
	struct FLinearColor TerrainColor; // 0x560 (0x10)
	int ReparamStepsPerSegment; // 0x570 (0x4)
	struct TEnumAsByte<ESpriteCollisionMode> SpriteCollisionDomain; // 0x574 (0x1)
	unsigned char unreflected_575[0x3]; // 0x575 (0x3) 
	float CollisionThickness; // 0x578 (0x4)
	unsigned char unreflected_57c[0x4]; // 0x57c (0x4) 
	class UBodySetup* CachedBodySetup; // 0x580 (0x8)
	unsigned char padding_588[0x18]; // 0x588 (0x18)

	/* Functions */

	// Function /Script/Paper2D.PaperTerrainComponent.SetTerrainColor (Underlying native function: SetTerrainColor 0x6d2e408)
	void SetTerrainColor(struct FLinearColor& NewColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

