// ScriptStruct /Script/GeometryCollectionEngine.GeomComponentCacheParameters
// Size: 0x50
struct FGeomComponentCacheParameters
{
	enum EGeometryCollectionCacheType CacheMode; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UGeometryCollectionCache* TargetCache; // 0x8 (0x8)
	float ReverseCacheBeginTime; // 0x10 (0x4)
	bool SaveCollisionData; // 0x14 (0x1)
	bool DoGenerateCollisionData; // 0x15 (0x1)
	unsigned char unreflected_16[0x2]; // 0x16 (0x2) 
	int CollisionDataSizeMax; // 0x18 (0x4)
	bool DoCollisionDataSpatialHash; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	float CollisionDataSpatialHashRadius; // 0x20 (0x4)
	int MaxCollisionPerCell; // 0x24 (0x4)
	bool SaveBreakingData; // 0x28 (0x1)
	bool DoGenerateBreakingData; // 0x29 (0x1)
	unsigned char unreflected_2a[0x2]; // 0x2a (0x2) 
	int BreakingDataSizeMax; // 0x2c (0x4)
	bool DoBreakingDataSpatialHash; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float BreakingDataSpatialHashRadius; // 0x34 (0x4)
	int MaxBreakingPerCell; // 0x38 (0x4)
	bool SaveTrailingData; // 0x3c (0x1)
	bool DoGenerateTrailingData; // 0x3d (0x1)
	unsigned char unreflected_3e[0x2]; // 0x3e (0x2) 
	int TrailingDataSizeMax; // 0x40 (0x4)
	float TrailingMinSpeedThreshold; // 0x44 (0x4)
	float TrailingMinVolumeThreshold; // 0x48 (0x4)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)
};

