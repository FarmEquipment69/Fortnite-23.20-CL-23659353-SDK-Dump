// ScriptStruct /Script/Engine.SplineMeshInstanceData
// Size: 0x1d0
struct FSplineMeshInstanceData : FStaticMeshComponentInstanceData
{
	struct FVector StartPos; // 0x168 (0x18)
	struct FVector EndPos; // 0x180 (0x18)
	struct FVector StartTangent; // 0x198 (0x18)
	struct FVector EndTangent; // 0x1b0 (0x18)
	unsigned char padding_1c8[0x8]; // 0x1c8 (0x8)
};

