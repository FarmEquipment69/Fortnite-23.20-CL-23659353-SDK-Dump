// ScriptStruct /Script/ValetRuntime.FortDagwoodCmd
// Size: 0x30
struct FFortDagwoodCmd
{
	float ForwardAlpha; // 0x0 (0x4)
	float RightAlpha; // 0x4 (0x4)
	float AccelerationAlpha; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FVector_NetQuantize100 MovementDir; // 0x10 (0x18)
	unsigned char bBoost; // 0x28 (0x1)
	unsigned char bHandbrake; // 0x28 (0x1)
	unsigned char padding_29[0x7]; // 0x29 (0x7)
};

