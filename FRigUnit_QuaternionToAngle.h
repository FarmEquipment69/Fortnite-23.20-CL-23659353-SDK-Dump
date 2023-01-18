// ScriptStruct /Script/ControlRig.RigUnit_QuaternionToAngle
// Size: 0x50
struct FRigUnit_QuaternionToAngle : FRigUnit
{
	struct FVector Axis; // 0x8 (0x18)
	struct FQuat Argument; // 0x20 (0x20)
	float Angle; // 0x40 (0x4)
	unsigned char padding_44[0xc]; // 0x44 (0xc)
};

