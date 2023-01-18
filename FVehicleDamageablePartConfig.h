// ScriptStruct /Script/FortniteGame.VehicleDamageablePartConfig
// Size: 0x40
struct FVehicleDamageablePartConfig
{
	struct FName ShapeName; // 0x0 (0x4)
	struct FName BoneName; // 0x4 (0x4)
	struct FGameplayTag PartTag; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FScalableFloat MaxHealth; // 0x10 (0x28)
	bool bStartsDisabled; // 0x38 (0x1)
	bool bConsideredCriticalHit; // 0x39 (0x1)
	unsigned char padding_3a[0x6]; // 0x3a (0x6)
};

