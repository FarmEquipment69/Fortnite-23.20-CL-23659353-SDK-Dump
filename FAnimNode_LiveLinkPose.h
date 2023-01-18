// ScriptStruct /Script/LiveLinkAnimationCore.AnimNode_LiveLinkPose
// Size: 0x48
struct FAnimNode_LiveLinkPose : FAnimNode_Base
{
	struct FPoseLink InputPose; // 0x10 (0x10)
	struct FLiveLinkSubjectName LiveLinkSubjectName; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	class UClass* RetargetAsset; // 0x28 (0x8)
	class ULiveLinkRetargetAsset* CurrentRetargetAsset; // 0x30 (0x8)
	unsigned char padding_38[0x10]; // 0x38 (0x10)
};

