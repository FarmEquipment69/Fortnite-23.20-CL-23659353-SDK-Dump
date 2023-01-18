// ScriptStruct /Script/FortniteGame.HitData
// Size: 0xc0
struct FHitData
{
	float PingOfHitter; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class APawn* HittingPawn; // 0x8 (0x8)
	struct FVector HitNormal; // 0x10 (0x18)
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FTimeStampedPhysicsPawnState ObjectState; // 0x30 (0x90)
};

