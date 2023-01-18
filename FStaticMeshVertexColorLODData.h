// ScriptStruct /Script/Engine.StaticMeshVertexColorLODData
// Size: 0x28
struct FStaticMeshVertexColorLODData
{
	struct TArray<struct FPaintedVertex> PaintedVertices; // 0x0 (0x10)
	struct TArray<struct FColor> VertexBufferColors; // 0x10 (0x10)
	uint32_t LODIndex; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

