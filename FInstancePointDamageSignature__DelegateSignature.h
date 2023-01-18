// DelegateFunction /Script/Foliage.InstancePointDamageSignature__DelegateSignature
// Size: 0x50
struct FInstancePointDamageSignature__DelegateSignature
{
	int InstanceIndex; // 0x0 (0x4)
	float Damage; // 0x4 (0x4)
	class AController* InstigatedBy; // 0x8 (0x8)
	struct FVector HitLocation; // 0x10 (0x18)
	struct FVector ShotFromDirection; // 0x28 (0x18)
	class UDamageType* DamageType; // 0x40 (0x8)
	class AActor* DamageCauser; // 0x48 (0x8)
};

