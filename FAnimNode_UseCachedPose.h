// ScriptStruct /Script/Engine.AnimNode_UseCachedPose
// Size: 0x28
struct FAnimNode_UseCachedPose : FAnimNode_Base
{
	struct FPoseLink LinkToCachingNode; // 0x10 (0x10)
	struct FName CachePoseName; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

