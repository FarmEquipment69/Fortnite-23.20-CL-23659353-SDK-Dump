// ScriptStruct /Script/ControlRig.RigUnit_MathVectorSelectBool
// Size: 0x58
struct FRigUnit_MathVectorSelectBool : FRigUnit_MathVectorBase
{
	bool Condition; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FVector IfTrue; // 0x10 (0x18)
	struct FVector IfFalse; // 0x28 (0x18)
	struct FVector Result; // 0x40 (0x18)
};

