// ScriptStruct /Script/CustomizableObject.CustomizableObjectMeshToMeshVertData
// Size: 0x40
struct FCustomizableObjectMeshToMeshVertData
{
	float PositionBaryCoordsAndDist[0x4]; // 0x0 (0x4) (ARRAY) 
	float NormalBaryCoordsAndDist[0x4]; // 0x10 (0x4) (ARRAY) 
	float TangentBaryCoordsAndDist[0x4]; // 0x20 (0x4) (ARRAY) 
	uint16_t SourceMeshVertIndices[0x4]; // 0x30 (0x2) (ARRAY) 
	float Weight; // 0x38 (0x4)
	int16_t SourceAssetIndex; // 0x3c (0x2)
	int16_t SourceAssetLodIndex; // 0x3e (0x2)
};

