// ScriptStruct /Script/ControlRig.ConstraintTarget
// Size: 0x70
struct FConstraintTarget
{
	struct FTransform Transform; // 0x0 (0x60)
	float Weight; // 0x60 (0x4)
	bool bMaintainOffset; // 0x64 (0x1)
	struct FTransformFilter Filter; // 0x65 (0x9)
	unsigned char padding_6e[0x2]; // 0x6e (0x2)
};

