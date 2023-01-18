// ScriptStruct /Script/FortniteGame.FortAnimInput_Zipline
// Size: 0x38
struct FFortAnimInput_Zipline
{
	unsigned char bIsZiplining; // 0x0 (0x1)
	unsigned char bShouldPlayPivotTransition; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float LeanYaw; // 0x4 (0x4)
	float PivotBlendDelayRemaining; // 0x8 (0x4)
	float PivotBlendDelay; // 0xc (0x4)
	enum EFortCardinalDirection PivotCardinalDirection; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct FVector WorldVelocityLastTick; // 0x18 (0x18)
	float LeanYawSmoothingSpeed; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

