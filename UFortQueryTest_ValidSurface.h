// Class /Script/FortniteAI.FortQueryTest_ValidSurface
// Size: 0x318
class UFortQueryTest_ValidSurface : public UEnvQueryTest
{
	struct FAIDataProviderFloatValue Radius; // 0x1f8 (0x38)
	struct FAIDataProviderFloatValue TraceOffsetUp; // 0x230 (0x38)
	struct FAIDataProviderFloatValue TraceOffsetDown; // 0x268 (0x38)
	struct TEnumAsByte<ECollisionChannel> TraceCollisionChannel; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x7]; // 0x2a1 (0x7) 
	struct FAIDataProviderFloatValue FlatSurfaceToleranceZ; // 0x2a8 (0x38)
	struct TArray<struct TWeakObjectPtr<class UPhysicalMaterial>> SurfaceMaterials; // 0x2e0 (0x10)
	bool bAreSurfaceMaterialsValid; // 0x2f0 (0x1)
	unsigned char unreflected_2f1[0x7]; // 0x2f1 (0x7) 
	struct TArray<struct TWeakObjectPtr<class UClass>> ValidHitActorClasses; // 0x2f8 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> InvalidHitActorClasses; // 0x308 (0x10)
};

