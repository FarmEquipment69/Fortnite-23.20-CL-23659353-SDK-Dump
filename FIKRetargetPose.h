// ScriptStruct /Script/IKRig.IKRetargetPose
// Size: 0x68
struct FIKRetargetPose
{
	struct FVector RootTranslationOffset; // 0x0 (0x18)
	struct TMap<struct FName, struct FQuat> BoneRotationOffsets; // 0x18 (0x50)
};

