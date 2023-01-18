// Class /Script/FortniteGame.FortAIProxyActor
// Size: 0x2c8
class AFortAIProxyActor : public AActor
{
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	struct TEnumAsByte<EPhysicalSurface> PrimaryPhysicalSurface; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	class UFortHealthSet* HealthSet; // 0x2a0 (0x8)
	class UFortDamageSet* DamageSet; // 0x2a8 (0x8)
	class UFortMovementSet* MovementSet; // 0x2b0 (0x8)
	class UFortAbilitySystemComponent* AbilitySystemComponent; // 0x2b8 (0x8)
	struct TEnumAsByte<EFortBaseWeaponDamage> BaseWeaponDamageResponseType; // 0x2c0 (0x1)
	unsigned char padding_2c1[0x7]; // 0x2c1 (0x7)
};

