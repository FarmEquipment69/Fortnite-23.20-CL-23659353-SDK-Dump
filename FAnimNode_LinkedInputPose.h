// ScriptStruct /Script/Engine.AnimNode_LinkedInputPose
// Size: 0xc0
struct FAnimNode_LinkedInputPose : FAnimNode_Base
{
	struct FName Name; // 0x10 (0x4)
	struct FName Graph; // 0x14 (0x4)
	struct FPoseLink InputPose; // 0x18 (0x10)
	unsigned char padding_28[0x98]; // 0x28 (0x98)
};

