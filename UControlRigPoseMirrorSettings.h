// Class /Script/ControlRig.ControlRigPoseMirrorSettings
// Size: 0x50
class UControlRigPoseMirrorSettings : public UObject
{
	struct FString RightSide; // 0x28 (0x10)
	struct FString LeftSide; // 0x38 (0x10)
	struct TEnumAsByte<EAxis> MirrorAxis; // 0x48 (0x1)
	struct TEnumAsByte<EAxis> AxisToFlip; // 0x49 (0x1)
	unsigned char padding_4a[0x6]; // 0x4a (0x6)
};

