// ScriptStruct /Script/FortniteGame.FortAnimInput_SkydivingExternalForce
// Size: 0xe8
struct FFortAnimInput_SkydivingExternalForce
{
	bool bUseSkydivingVectorForce; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FVector SkydivingVectorForce; // 0x8 (0x18)
	struct FVector HeadToPelvisDirection; // 0x20 (0x18)
	struct FVector FloatingMultiplier; // 0x38 (0x18)
	struct FVector FloatingAdditive; // 0x50 (0x18)
	struct FVector DivingMultiplier; // 0x68 (0x18)
	struct FVector DivingAdditive; // 0x80 (0x18)
	struct FVector ParachutingMultiplier; // 0x98 (0x18)
	struct FVector ParachutingAdditive; // 0xb0 (0x18)
	bool bUseNoisyClothGravity; // 0xc8 (0x1)
	bool bApplyNoiseInActorSpace; // 0xc9 (0x1)
	unsigned char unreflected_ca[0x2]; // 0xca (0x2) 
	float PerlinRangedOutMinX; // 0xcc (0x4)
	float PerlinRangedOutMaxX; // 0xd0 (0x4)
	float PerlinRangedOutMinY; // 0xd4 (0x4)
	float PerlinRangedOutMaxY; // 0xd8 (0x4)
	float PerlinRangedOutMinZ; // 0xdc (0x4)
	float PerlinRangedOutMaxZ; // 0xe0 (0x4)
	unsigned char padding_e4[0x4]; // 0xe4 (0x4)
};

