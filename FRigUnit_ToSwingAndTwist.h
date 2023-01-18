// ScriptStruct /Script/ControlRig.RigUnit_ToSwingAndTwist
// Size: 0x90
struct FRigUnit_ToSwingAndTwist : FRigUnit
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FQuat Input; // 0x10 (0x20)
	struct FVector TwistAxis; // 0x30 (0x18)
	unsigned char unreflected_48[0x8]; // 0x48 (0x8) 
	struct FQuat Swing; // 0x50 (0x20)
	struct FQuat Twist; // 0x70 (0x20)
};

