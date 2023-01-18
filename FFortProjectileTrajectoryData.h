// ScriptStruct /Script/FortniteGame.FortProjectileTrajectoryData
// Size: 0x20
struct FFortProjectileTrajectoryData
{
	float Speed; // 0x0 (0x4)
	float GravityZ; // 0x4 (0x4)
	float CapsuleRadius; // 0x8 (0x4)
	float CapsuleHalfHeight; // 0xc (0x4)
	bool bShouldBounce; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	float Bounciness; // 0x14 (0x4)
	float Friction; // 0x18 (0x4)
	struct TEnumAsByte<ECollisionChannel> CollisionObjectType; // 0x1c (0x1)
	unsigned char padding_1d[0x3]; // 0x1d (0x3)
};

