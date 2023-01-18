// ScriptStruct /Script/Engine.MeshSectionInfo
// Size: 0xc
struct FMeshSectionInfo
{
	int MaterialIndex; // 0x0 (0x4)
	bool bEnableCollision; // 0x4 (0x1)
	bool bCastShadow; // 0x5 (0x1)
	bool bVisibleInRayTracing; // 0x6 (0x1)
	bool bAffectDistanceFieldLighting; // 0x7 (0x1)
	bool bForceOpaque; // 0x8 (0x1)
	unsigned char padding_9[0x3]; // 0x9 (0x3)
};

