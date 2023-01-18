// ScriptStruct /Script/VerseMovement.NetPhysicsMoveLimits
// Size: 0x80
struct FNetPhysicsMoveLimits
{
	bool bClampVelocity; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FVector MaxVelocity; // 0x8 (0x18)
	bool bClampAngularVelocity; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	struct FVector MaxAngularVelocity; // 0x28 (0x18)
	bool bClampMaxPosition; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	struct FVector MaxPosition; // 0x48 (0x18)
	bool bClampMinPosition; // 0x60 (0x1)
	unsigned char unreflected_61[0x7]; // 0x61 (0x7) 
	struct FVector MinPosition; // 0x68 (0x18)
};

