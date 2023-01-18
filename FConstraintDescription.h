// ScriptStruct /Script/AnimationCore.ConstraintDescription
// Size: 0xd
struct FConstraintDescription
{
	bool bTranslation; // 0x0 (0x1)
	bool bRotation; // 0x1 (0x1)
	bool bScale; // 0x2 (0x1)
	bool bParent; // 0x3 (0x1)
	struct FFilterOptionPerAxis TranslationAxes; // 0x4 (0x3)
	struct FFilterOptionPerAxis RotationAxes; // 0x7 (0x3)
	struct FFilterOptionPerAxis ScaleAxes; // 0xa (0x3)
};

