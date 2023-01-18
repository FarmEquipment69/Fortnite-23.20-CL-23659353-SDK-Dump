// Class /Script/FortniteGame.FortCurieSpatialManagerConfig
// Size: 0x70
class UFortCurieSpatialManagerConfig : public UCurieManagerComponentConfig
{
	float ElementOverlapDefaultExpansion; // 0x40 (0x4)
	float GrassWaterContentDecayRate; // 0x44 (0x4)
	float AccurateActorOverlapVolumeThreshold; // 0x48 (0x4)
	float AccurateActorBoxOverlapVolumeThreshold; // 0x4c (0x4)
	struct TArray<struct TWeakObjectPtr<class UFoliageType>> GrassFoliageTypes; // 0x50 (0x10)
	struct TArray<struct TWeakObjectPtr<class UPhysicalMaterial>> IgnitablePhysicalMaterials; // 0x60 (0x10)
};

