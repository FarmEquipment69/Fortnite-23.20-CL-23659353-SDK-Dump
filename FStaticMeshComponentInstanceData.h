// ScriptStruct /Script/Engine.StaticMeshComponentInstanceData
// Size: 0x170
struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData
{
	class UStaticMesh* StaticMesh; // 0x130 (0x8)
	struct TArray<struct FStaticMeshVertexColorLODData> VertexColorLODs; // 0x138 (0x10)
	struct TArray<struct FGuid> CachedStaticLighting; // 0x148 (0x10)
	struct TArray<struct FStreamingTextureBuildInfo> StreamingTextureData; // 0x158 (0x10)
	unsigned char padding_168[0x8]; // 0x168 (0x8)
};

