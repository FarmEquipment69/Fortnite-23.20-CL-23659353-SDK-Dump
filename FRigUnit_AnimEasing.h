// ScriptStruct /Script/ControlRig.RigUnit_AnimEasing
// Size: 0x28
struct FRigUnit_AnimEasing : FRigUnit_AnimBase
{
	float Value; // 0x8 (0x4)
	enum EControlRigAnimEasingType Type; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	float SourceMinimum; // 0x10 (0x4)
	float SourceMaximum; // 0x14 (0x4)
	float TargetMinimum; // 0x18 (0x4)
	float TargetMaximum; // 0x1c (0x4)
	float Result; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

