// ScriptStruct /Script/Engine.AnimNode_SaveCachedPose
// Size: 0x100
struct FAnimNode_SaveCachedPose : FAnimNode_Base
{
	struct FPoseLink Pose; // 0x10 (0x10)
	struct FName CachePoseName; // 0x20 (0x4)
	unsigned char padding_24[0xdc]; // 0x24 (0xdc)
};

