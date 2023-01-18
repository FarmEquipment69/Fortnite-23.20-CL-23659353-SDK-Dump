// ScriptStruct /Script/AnimGraphRuntime.AnimNode_Sync
// Size: 0x28
struct FAnimNode_Sync : FAnimNode_Base
{
	struct FPoseLink Source; // 0x10 (0x10)
	struct FName GroupName; // 0x20 (0x4)
	struct TEnumAsByte<EAnimGroupRole> GroupRole; // 0x24 (0x1)
	unsigned char padding_25[0x3]; // 0x25 (0x3)
};

