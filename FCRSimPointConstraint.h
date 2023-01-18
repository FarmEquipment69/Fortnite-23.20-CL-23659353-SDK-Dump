// ScriptStruct /Script/ControlRig.CRSimPointConstraint
// Size: 0x40
struct FCRSimPointConstraint
{
	enum ECRSimConstraintType Type; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int SubjectA; // 0x4 (0x4)
	int SubjectB; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FVector DataA; // 0x10 (0x18)
	struct FVector DataB; // 0x28 (0x18)
};

