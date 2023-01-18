// ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpaceGraphBase
// Size: 0x60
struct FAnimNode_BlendSpaceGraphBase : FAnimNode_Base
{
	float X; // 0x10 (0x4)
	float Y; // 0x14 (0x4)
	struct FName GroupName; // 0x18 (0x4)
	struct TEnumAsByte<EAnimGroupRole> GroupRole; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	class UBlendSpace* BlendSpace; // 0x20 (0x8)
	struct TArray<struct FPoseLink> SamplePoseLinks; // 0x28 (0x10)
	unsigned char padding_38[0x28]; // 0x38 (0x28)
};

