// ScriptStruct /Script/Engine.RootMotionSource_RadialForce
// Size: 0x140
struct FRootMotionSource_RadialForce : FRootMotionSource
{
	struct FVector Location; // 0xd8 (0x18)
	class AActor* LocationActor; // 0xf0 (0x8)
	float Radius; // 0xf8 (0x4)
	float Strength; // 0xfc (0x4)
	bool bIsPush; // 0x100 (0x1)
	bool bNoZForce; // 0x101 (0x1)
	unsigned char unreflected_102[0x6]; // 0x102 (0x6) 
	class UCurveFloat* StrengthDistanceFalloff; // 0x108 (0x8)
	class UCurveFloat* StrengthOverTime; // 0x110 (0x8)
	bool bUseFixedWorldDirection; // 0x118 (0x1)
	unsigned char unreflected_119[0x7]; // 0x119 (0x7) 
	struct FRotator FixedWorldDirection; // 0x120 (0x18)
	unsigned char padding_138[0x8]; // 0x138 (0x8)
};

