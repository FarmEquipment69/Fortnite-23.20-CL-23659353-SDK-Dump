// ScriptStruct /Script/FortniteGame.FortAnimInput_VelocityImpact
// Size: 0xf0
struct FFortAnimInput_VelocityImpact
{
	struct FVector LastVelocity; // 0x0 (0x18)
	struct FVector DeltaVelocityThreshold; // 0x18 (0x18)
	struct FVector ImpactScale; // 0x30 (0x18)
	struct FInputRange* ImpactLimitX; // 0x48 (0x8)
	struct FInputRange* ImpactLimitY; // 0x50 (0x8)
	struct FInputRange* ImpactLimitZ; // 0x58 (0x8)
	struct FFloatRK4SpringInterpolator* SpringInterpolatorX; // 0x60 (0x8)
	unsigned char unreflected_68[0x1c]; // 0x68 (0x1c) 
	struct FFloatRK4SpringInterpolator* SpringInterpolatorY; // 0x84 (0x8)
	unsigned char unreflected_8c[0x1c]; // 0x8c (0x1c) 
	struct FFloatRK4SpringInterpolator* SpringInterpolatorZ; // 0xa8 (0x8)
	unsigned char unreflected_b0[0x1c]; // 0xb0 (0x1c) 
	unsigned char bTestVelocity; // 0xcc (0x1)
	unsigned char unreflected_cd[0x3]; // 0xcd (0x3) 
	struct FVector TestVelocity; // 0xd0 (0x18)
	unsigned char bIsForwardImpact; // 0xe8 (0x1)
	unsigned char bIsBackwardImpact; // 0xe8 (0x1)
	unsigned char bIsLeftImpact; // 0xe8 (0x1)
	unsigned char bIsRightImpact; // 0xe8 (0x1)
	unsigned char bIsUpImpact; // 0xe8 (0x1)
	unsigned char bIsDownImpact; // 0xe8 (0x1)
	unsigned char padding_e9[0x7]; // 0xe9 (0x7)
};

