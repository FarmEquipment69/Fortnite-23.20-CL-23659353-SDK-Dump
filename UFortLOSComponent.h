// Class /Script/FortniteGame.FortLOSComponent
// Size: 0xe8
class UFortLOSComponent : public UActorComponent
{
	float LOSMaxDistance; // 0xa0 (0x4)
	float FOVInDegrees; // 0xa4 (0x4)
	float TimeBetweenChecks; // 0xa8 (0x4)
	bool bStopAfterHasBeenFound; // 0xac (0x1)
	bool bDistanceCheckOnly; // 0xad (0x1)
	unsigned char unreflected_ae[0x2]; // 0xae (0x2) 
	struct FMulticastInlineDelegate OnHasBeenFound; // 0xb0 (0x10)
	bool bHasBeenFound; // 0xc0 (0x1)
	unsigned char padding_c1[0x27]; // 0xc1 (0x27)
};

