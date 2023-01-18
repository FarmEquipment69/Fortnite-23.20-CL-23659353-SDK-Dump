// ScriptStruct /Script/ControlRig.RigUnit_RandomVector
// Size: 0x58
struct FRigUnit_RandomVector : FRigUnit_MathBase
{
	int Seed; // 0x8 (0x4)
	float Minimum; // 0xc (0x4)
	float Maximum; // 0x10 (0x4)
	float Duration; // 0x14 (0x4)
	struct FVector Result; // 0x18 (0x18)
	struct FVector LastResult; // 0x30 (0x18)
	int LastSeed; // 0x48 (0x4)
	int BaseSeed; // 0x4c (0x4)
	float TimeLeft; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};

