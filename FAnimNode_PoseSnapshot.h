// ScriptStruct /Script/AnimGraphRuntime.AnimNode_PoseSnapshot
// Size: 0x80
struct FAnimNode_PoseSnapshot : FAnimNode_Base
{
	struct FName SnapshotName; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FPoseSnapshot Snapshot; // 0x18 (0x30)
	enum ESnapshotSourceMode Mode; // 0x48 (0x1)
	unsigned char padding_49[0x37]; // 0x49 (0x37)
};

