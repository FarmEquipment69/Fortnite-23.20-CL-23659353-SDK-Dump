// ScriptStruct /Script/AnimationSharing.AnimationStateEntry
// Size: 0x30
struct FAnimationStateEntry
{
	unsigned char State; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<struct FAnimationSetup> AnimationSetups; // 0x8 (0x10)
	bool bOnDemand; // 0x18 (0x1)
	bool bAdditive; // 0x19 (0x1)
	unsigned char unreflected_1a[0x2]; // 0x1a (0x2) 
	float BlendTime; // 0x1c (0x4)
	bool bReturnToPreviousState; // 0x20 (0x1)
	bool bSetNextState; // 0x21 (0x1)
	unsigned char NextState; // 0x22 (0x1)
	unsigned char unreflected_23[0x1]; // 0x23 (0x1) 
	struct FPerPlatformInt MaximumNumberOfConcurrentInstances; // 0x24 (0x4)
	float WiggleTimePercentage; // 0x28 (0x4)
	bool bRequiresCurves; // 0x2c (0x1)
	unsigned char padding_2d[0x3]; // 0x2d (0x3)
};

