// ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionSelectBool
// Size: 0x70
struct FRigUnit_MathQuaternionSelectBool : FRigUnit_MathQuaternionBase
{
	bool Condition; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FQuat IfTrue; // 0x10 (0x20)
	struct FQuat IfFalse; // 0x30 (0x20)
	struct FQuat Result; // 0x50 (0x20)
};

