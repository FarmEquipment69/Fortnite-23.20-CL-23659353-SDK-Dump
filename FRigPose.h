// ScriptStruct /Script/ControlRig.RigPose
// Size: 0x70
struct FRigPose
{
	struct TArray<struct FRigPoseElement> Elements; // 0x0 (0x10)
	int HierarchyTopologyVersion; // 0x10 (0x4)
	int PoseHash; // 0x14 (0x4)
	unsigned char padding_18[0x58]; // 0x18 (0x58)
};

