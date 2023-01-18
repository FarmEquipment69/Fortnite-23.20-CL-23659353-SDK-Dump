// ScriptStruct /Script/ControlRig.RigControlElement
// Size: 0xa30
struct FRigControlElement : FRigMultiParentElement
{
	struct FRigControlSettings Settings; // 0x3f0 (0x280)
	struct FRigCurrentAndInitialTransform Offset; // 0x670 (0x1c0)
	struct FRigCurrentAndInitialTransform Shape; // 0x830 (0x1c0)
	struct FRigPreferredEulerAngles PreferredEulerAngles; // 0x9f0 (0x38)
	unsigned char padding_a28[0x8]; // 0xa28 (0x8)
};

