// ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot
// Size: 0x48
struct FAnimNode_Slot : FAnimNode_Base
{
	struct FPoseLink Source; // 0x10 (0x10)
	struct FName SlotName; // 0x20 (0x4)
	bool bAlwaysUpdateSourcePose; // 0x24 (0x1)
	unsigned char padding_25[0x23]; // 0x25 (0x23)
};

