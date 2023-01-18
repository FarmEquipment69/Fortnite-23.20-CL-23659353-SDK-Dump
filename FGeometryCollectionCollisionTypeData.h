// ScriptStruct /Script/GeometryCollectionEngine.GeometryCollectionCollisionTypeData
// Size: 0x24
struct FGeometryCollectionCollisionTypeData
{
	enum ECollisionTypeEnum CollisionType; // 0x0 (0x1)
	enum EImplicitTypeEnum ImplicitType; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	struct FGeometryCollectionLevelSetData LevelSet; // 0x4 (0x10)
	struct FGeometryCollectionCollisionParticleData* CollisionParticles; // 0x14 (0x8)
	float CollisionObjectReductionPercentage; // 0x1c (0x4)
	float CollisionMarginFraction; // 0x20 (0x4)
};

