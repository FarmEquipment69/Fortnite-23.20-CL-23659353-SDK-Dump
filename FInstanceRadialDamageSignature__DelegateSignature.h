// DelegateFunction /Script/Foliage.InstanceRadialDamageSignature__DelegateSignature
// Size: 0x58
struct FInstanceRadialDamageSignature__DelegateSignature
{
	struct TArray<int> Instances; // 0x0 (0x10)
	struct TArray<float> Damages; // 0x10 (0x10)
	class AController* InstigatedBy; // 0x20 (0x8)
	struct FVector Origin; // 0x28 (0x18)
	float MaxRadius; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	class UDamageType* DamageType; // 0x48 (0x8)
	class AActor* DamageCauser; // 0x50 (0x8)
};

