// ScriptStruct /Script/ControlRig.RigUnit_MathVectorRemap
// Size: 0xa0
struct FRigUnit_MathVectorRemap : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8 (0x18)
	struct FVector SourceMinimum; // 0x20 (0x18)
	struct FVector SourceMaximum; // 0x38 (0x18)
	struct FVector TargetMinimum; // 0x50 (0x18)
	struct FVector TargetMaximum; // 0x68 (0x18)
	bool bClamp; // 0x80 (0x1)
	unsigned char unreflected_81[0x7]; // 0x81 (0x7) 
	struct FVector Result; // 0x88 (0x18)
};

