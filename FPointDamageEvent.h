// ScriptStruct /Script/Engine.PointDamageEvent
// Size: 0x110
struct FPointDamageEvent : FDamageEvent
{
	float Damage; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FVector_NetQuantizeNormal ShotDirection; // 0x18 (0x18)
	struct FHitResult HitInfo; // 0x30 (0xe0)
};

