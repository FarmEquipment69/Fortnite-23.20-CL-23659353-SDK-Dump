// ScriptStruct /Script/ControlRig.RigUnit_ChainHarmonics_Reach
// Size: 0x48
struct FRigUnit_ChainHarmonics_Reach
{
	bool bEnabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FVector ReachTarget; // 0x8 (0x18)
	struct FVector ReachAxis; // 0x20 (0x18)
	float ReachMinimum; // 0x38 (0x4)
	float ReachMaximum; // 0x3c (0x4)
	enum EControlRigAnimEasingType ReachEase; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

