// ScriptStruct /Script/MotionWarping.MotionWarpingTarget
// Size: 0x48
struct FMotionWarpingTarget
{
	struct FName Name; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector Location; // 0x8 (0x18)
	struct FRotator Rotation; // 0x20 (0x18)
	struct TWeakObjectPtr<class USceneComponent> Component; // 0x38 (0x8)
	struct FName BoneName; // 0x40 (0x4)
	bool bFollowComponent; // 0x44 (0x1)
	unsigned char padding_45[0x3]; // 0x45 (0x3)
};

