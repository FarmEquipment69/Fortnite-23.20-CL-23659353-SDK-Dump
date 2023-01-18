// ScriptStruct /Script/FortniteGame.ChaseExternalForce
// Size: 0x38
struct FChaseExternalForce
{
	float Duration; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector Direction; // 0x8 (0x18)
	float Magnitude; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	class UCurveFloat* MagnitudeScaleCurve; // 0x28 (0x8)
	unsigned char padding_30[0x8]; // 0x30 (0x8)
};

