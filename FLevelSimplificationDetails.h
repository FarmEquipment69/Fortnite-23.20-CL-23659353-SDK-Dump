// ScriptStruct /Script/Engine.LevelSimplificationDetails
// Size: 0x13c
struct FLevelSimplificationDetails
{
	bool bCreatePackagePerAsset; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float DetailsPercentage; // 0x4 (0x4)
	struct FMaterialProxySettings StaticMeshMaterialSettings; // 0x8 (0x94)
	bool bOverrideLandscapeExportLOD; // 0x9c (0x1)
	unsigned char unreflected_9d[0x3]; // 0x9d (0x3) 
	int LandscapeExportLOD; // 0xa0 (0x4)
	struct FMaterialProxySettings LandscapeMaterialSettings; // 0xa4 (0x94)
	bool bBakeFoliageToLandscape; // 0x138 (0x1)
	bool bBakeGrassToLandscape; // 0x139 (0x1)
	unsigned char padding_13a[0x2]; // 0x13a (0x2)
};

