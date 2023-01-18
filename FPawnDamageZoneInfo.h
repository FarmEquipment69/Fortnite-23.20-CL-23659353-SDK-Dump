// ScriptStruct /Script/CRDBossRuntime.PawnDamageZoneInfo
// Size: 0x48
struct FPawnDamageZoneInfo
{
	bool bActive; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName Name; // 0x4 (0x4)
	struct TEnumAsByte<EFortDamageZone> DamageZone; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct TArray<struct FName> Bones; // 0x10 (0x10)
	bool bLimitedHealth; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	float MaxHealth; // 0x24 (0x4)
	float CurrentHealth; // 0x28 (0x4)
	bool bReactivates; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	float ReactivationTime; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct TArray<struct FPawnDamageZoneBroadcastThreshold*> DamageBroadcastThresholds; // 0x38 (0x10)
};

