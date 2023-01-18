// ScriptStruct /Script/ControlRig.RigUnit_MathDoubleRemap
// Size: 0x40
struct FRigUnit_MathDoubleRemap : FRigUnit_MathDoubleBase
{
	double Value; // 0x8 (0x8)
	double SourceMinimum; // 0x10 (0x8)
	double SourceMaximum; // 0x18 (0x8)
	double TargetMinimum; // 0x20 (0x8)
	double TargetMaximum; // 0x28 (0x8)
	bool bClamp; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	double Result; // 0x38 (0x8)
};

