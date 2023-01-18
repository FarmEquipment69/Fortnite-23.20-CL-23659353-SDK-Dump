// Class /Script/FortniteGame.FortCurieSpatialManager
// Size: 0x6b0
class UFortCurieSpatialManager : public UFortCurieManagerComponent
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct TArray<class UFoliageType*> GrassFoliageTypePtrs; // 0x38 (0x10)
	struct FFortCurieBuildingGrid CurieBuildingGrid; // 0x48 (0x1a8)
	struct FFortCurieGrassGrid GrassGrid; // 0x1f0 (0x120)
	struct FFortCurieNavRelevantSpatialGrid NavRelevantSpatialGrid; // 0x310 (0x1c8)
	unsigned char unreflected_4d8[0x1c8]; // 0x4d8 (0x1c8) 
	class UFortCurieSpatialManagerConfig* InternalManagerConfig; // 0x6a0 (0x8)
	unsigned char padding_6a8[0x8]; // 0x6a8 (0x8)
};

