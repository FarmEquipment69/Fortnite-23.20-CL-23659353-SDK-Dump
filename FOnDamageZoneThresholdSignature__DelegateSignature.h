// DelegateFunction /Script/CRDBossRuntime.OnDamageZoneThresholdSignature__DelegateSignature
// Size: 0x20
struct FOnDamageZoneThresholdSignature__DelegateSignature
{
	class AActor* Actor; // 0x0 (0x8)
	struct FName ZoneName; // 0x8 (0x4)
	struct TEnumAsByte<EFortDamageZone> ZoneType; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	float ThresholdPct; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	class AController* InstigatedBy; // 0x18 (0x8)
};

