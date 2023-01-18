// ScriptStruct /Script/FortniteGame.FortAIBatchedDamageCues
// Size: 0x28
struct FFortAIBatchedDamageCues
{
	bool bImpact; // 0x0 (0x1)
	bool bImpactWeapon; // 0x1 (0x1)
	bool bDamage; // 0x2 (0x1)
	bool bDamageShields; // 0x3 (0x1)
	bool bDamageWeapon; // 0x4 (0x1)
	bool bFatal; // 0x5 (0x1)
	bool bWeaponActivated; // 0x6 (0x1)
	unsigned char unreflected_7[0x1]; // 0x7 (0x1) 
	struct FVector_NetQuantize10 HitLocation; // 0x8 (0x18)
	class AActor* TargetActor; // 0x20 (0x8)
};

