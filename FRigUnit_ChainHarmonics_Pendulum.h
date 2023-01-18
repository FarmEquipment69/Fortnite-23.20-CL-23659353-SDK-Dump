// ScriptStruct /Script/ControlRig.RigUnit_ChainHarmonics_Pendulum
// Size: 0x58
struct FRigUnit_ChainHarmonics_Pendulum
{
	bool bEnabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float PendulumStiffness; // 0x4 (0x4)
	struct FVector PendulumGravity; // 0x8 (0x18)
	float PendulumBlend; // 0x20 (0x4)
	float PendulumDrag; // 0x24 (0x4)
	float PendulumMinimum; // 0x28 (0x4)
	float PendulumMaximum; // 0x2c (0x4)
	enum EControlRigAnimEasingType PendulumEase; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FVector UnwindAxis; // 0x38 (0x18)
	float UnwindMinimum; // 0x50 (0x4)
	float UnwindMaximum; // 0x54 (0x4)
};

