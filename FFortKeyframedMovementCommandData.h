// ScriptStruct /Script/FortniteGame.FortKeyframedMovementCommandData
// Size: 0x50
struct FFortKeyframedMovementCommandData
{
	enum EFortKeyframedMovementNetCommand Command; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float CommandServerTime; // 0x4 (0x4)
	float StartTimeForPlay; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FVector HaltLocation; // 0x10 (0x18)
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FQuat HaltRotation; // 0x30 (0x20)
};

