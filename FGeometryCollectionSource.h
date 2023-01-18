// ScriptStruct /Script/GeometryCollectionEngine.GeometryCollectionSource
// Size: 0xa0
struct FGeometryCollectionSource
{
	struct FSoftObjectPath SourceGeometryObject; // 0x0 (0x18)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FTransform LocalTransform; // 0x20 (0x60)
	struct TArray<class UMaterialInterface*> SourceMaterial; // 0x80 (0x10)
	bool bAddInternalMaterials; // 0x90 (0x1)
	bool bSplitComponents; // 0x91 (0x1)
	unsigned char padding_92[0xe]; // 0x92 (0xe)
};

