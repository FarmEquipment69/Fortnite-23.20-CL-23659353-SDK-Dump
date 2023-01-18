// ScriptStruct /Script/FortniteGame.FortProjectileCues
// Size: 0x24
struct FFortProjectileCues
{
	struct FGameplayCueTag Spawn; // 0x0 (0x4)
	struct FGameplayCueTag HitPawn; // 0x4 (0x4)
	struct FGameplayCueTag HitWorld; // 0x8 (0x4)
	struct FGameplayCueTag HitWater; // 0xc (0x4)
	bool bOrientHitGCsToProjectileVelocity; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	float MaxSurfaceNormalDeviationAngle; // 0x14 (0x4)
	struct FGameplayCueTag Bounce; // 0x18 (0x4)
	struct FGameplayCueTag Explosion; // 0x1c (0x4)
	struct FGameplayCueTag UnderwaterExplosion; // 0x20 (0x4)
};

