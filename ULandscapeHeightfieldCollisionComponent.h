// Class /Script/Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x640
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
	struct TArray<class ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x540 (0x10)
	int SectionBaseX; // 0x550 (0x4)
	int SectionBaseY; // 0x554 (0x4)
	int CollisionSizeQuads; // 0x558 (0x4)
	float CollisionScale; // 0x55c (0x4)
	int SimpleCollisionSizeQuads; // 0x560 (0x4)
	unsigned char unreflected_564[0x4]; // 0x564 (0x4) 
	struct TArray<unsigned char> CollisionQuadFlags; // 0x568 (0x10)
	struct FGuid HeightfieldGuid; // 0x578 (0x10)
	struct FBox CachedLocalBox; // 0x588 (0x38)
	struct TLazyObjectPtr<class ULandscapeComponent> RenderComponent; // 0x5c0 (0x1c)
	unsigned char unreflected_5dc[0x14]; // 0x5dc (0x14) 
	struct TArray<class UPhysicalMaterial*> CookedPhysicalMaterials; // 0x5f0 (0x10)
	unsigned char padding_600[0x40]; // 0x600 (0x40)

	/* Functions */

	// Function /Script/Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent (Underlying native function: GetRenderComponent 0x992a848)
	class ULandscapeComponent* GetRenderComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

