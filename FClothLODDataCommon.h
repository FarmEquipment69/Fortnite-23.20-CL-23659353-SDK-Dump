// ScriptStruct /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon
// Size: 0x148
struct FClothLODDataCommon
{
	struct FClothPhysicalMeshData PhysicalMeshData; // 0x0 (0xd8)
	struct FClothCollisionData CollisionData; // 0xd8 (0x40)
	bool bUseMultipleInfluences; // 0x118 (0x1)
	unsigned char unreflected_119[0x3]; // 0x119 (0x3) 
	float SkinningKernelRadius; // 0x11c (0x4)
	bool bSmoothTransition; // 0x120 (0x1)
	unsigned char padding_121[0x27]; // 0x121 (0x27)
};

