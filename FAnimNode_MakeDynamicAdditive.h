// ScriptStruct /Script/AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// Size: 0x38
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base
{
	struct FPoseLink Base; // 0x10 (0x10)
	struct FPoseLink Additive; // 0x20 (0x10)
	bool bMeshSpaceAdditive; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};

