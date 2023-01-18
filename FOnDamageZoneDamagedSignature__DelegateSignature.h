// DelegateFunction /Script/CRDBossRuntime.OnDamageZoneDamagedSignature__DelegateSignature
// Size: 0x30
struct FOnDamageZoneDamagedSignature__DelegateSignature
{
	class AActor* DamagedActor; // 0x0 (0x8)
	float Damage; // 0x8 (0x4)
	float PreviousHealth; // 0xc (0x4)
	float CurrentHealth; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	class AController* InstigatedBy; // 0x18 (0x8)
	class AActor* DamageCauser; // 0x20 (0x8)
	struct FName ZoneName; // 0x28 (0x4)
	struct TEnumAsByte<EFortDamageZone> ZoneType; // 0x2c (0x1)
	unsigned char padding_2d[0x3]; // 0x2d (0x3)
};

