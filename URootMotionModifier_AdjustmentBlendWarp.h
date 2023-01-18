// Class /Script/MotionWarping.RootMotionModifier_AdjustmentBlendWarp
// Size: 0x3a0
class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{
	bool bWarpIKBones; // 0x240 (0x1)
	unsigned char unreflected_241[0x7]; // 0x241 (0x7) 
	struct TArray<struct FName> IKBones; // 0x248 (0x10)
	unsigned char unreflected_258[0x8]; // 0x258 (0x8) 
	struct FTransform CachedMeshTransform; // 0x260 (0x60)
	struct FTransform CachedMeshRelativeTransform; // 0x2c0 (0x60)
	struct FTransform CachedRootMotion; // 0x320 (0x60)
	struct FAnimSequenceTrackContainer Result; // 0x380 (0x20)
};

