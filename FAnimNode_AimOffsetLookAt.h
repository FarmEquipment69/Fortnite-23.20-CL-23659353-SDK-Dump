// ScriptStruct /Script/AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Size: 0x1c0
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer
{
	unsigned char unreflected_70[0xc0]; // 0x70 (0xc0) 
	struct FPoseLink BasePose; // 0x130 (0x10)
	int LODThreshold; // 0x140 (0x4)
	struct FName SourceSocketName; // 0x144 (0x4)
	struct FName PivotSocketName; // 0x148 (0x4)
	unsigned char unreflected_14c[0x4]; // 0x14c (0x4) 
	struct FVector LookAtLocation; // 0x150 (0x18)
	struct FVector SocketAxis; // 0x168 (0x18)
	float Alpha; // 0x180 (0x4)
	unsigned char padding_184[0x3c]; // 0x184 (0x3c)
};

