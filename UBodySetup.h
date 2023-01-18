// Class /Script/Engine.BodySetup
// Size: 0x2e0
class UBodySetup : public UBodySetupCore
{
	struct FKAggregateGeom AggGeom; // 0x30 (0x68)
	unsigned char bAlwaysFullAnimWeight; // 0x98 (0x1)
	unsigned char bConsiderForBounds; // 0x98 (0x1)
	unsigned char bMeshCollideAll; // 0x98 (0x1)
	unsigned char bDoubleSidedGeometry; // 0x98 (0x1)
	unsigned char bGenerateNonMirroredCollision; // 0x98 (0x1)
	unsigned char bSharedCookedData; // 0x98 (0x1)
	unsigned char bGenerateMirroredCollision; // 0x98 (0x1)
	unsigned char bSupportUVsAndFaceRemap; // 0x98 (0x1)
	unsigned char bNeverNeedsCookedCollisionData; // 0x99 (0x1)
	unsigned char unreflected_9a[0x6]; // 0x9a (0x6) 
	class UPhysicalMaterial* PhysMaterial; // 0xa0 (0x8)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0xa8 (0x10)
	unsigned char unreflected_b8[0x70]; // 0xb8 (0x70) 
	struct FBodyInstance DefaultInstance; // 0x128 (0x188)
	unsigned char unreflected_2b0[0x8]; // 0x2b0 (0x8) 
	struct FVector BuildScale3D; // 0x2b8 (0x18)
	unsigned char padding_2d0[0x10]; // 0x2d0 (0x10)
};

