// Class /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// Size: 0xd0
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
	class UNiagaraSystem* Template; // 0x38 (0x8)
	struct FVector LocationOffset; // 0x40 (0x18)
	struct FRotator RotationOffset; // 0x58 (0x18)
	struct FVector Scale; // 0x70 (0x18)
	bool bAbsoluteScale; // 0x88 (0x1)
	unsigned char unreflected_89[0x37]; // 0x89 (0x37) 
	unsigned char Attached; // 0xc0 (0x1)
	unsigned char unreflected_c1[0x3]; // 0xc1 (0x3) 
	struct FName SocketName; // 0xc4 (0x4)
	unsigned char padding_c8[0x8]; // 0xc8 (0x8)

	/* Functions */

	// Function /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect (Underlying native function: GetSpawnedEffect 0x212bd78)
	class UFXSystemComponent* GetSpawnedEffect(); // (Final | Native | Public | BlueprintCallable | Const)
};

