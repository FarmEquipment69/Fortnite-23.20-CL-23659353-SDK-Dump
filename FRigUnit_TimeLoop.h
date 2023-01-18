// ScriptStruct /Script/ControlRig.RigUnit_TimeLoop
// Size: 0x30
struct FRigUnit_TimeLoop : FRigUnit_SimBase
{
	float Speed; // 0x8 (0x4)
	float Duration; // 0xc (0x4)
	bool Normalize; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	float Absolute; // 0x14 (0x4)
	float Relative; // 0x18 (0x4)
	float FlipFlop; // 0x1c (0x4)
	bool Even; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	float AccumulatedAbsolute; // 0x24 (0x4)
	float AccumulatedRelative; // 0x28 (0x4)
	int NumIterations; // 0x2c (0x4)
};

