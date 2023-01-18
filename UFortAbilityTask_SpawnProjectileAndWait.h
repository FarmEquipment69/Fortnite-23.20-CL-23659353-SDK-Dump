// Class /Script/FortniteGame.FortAbilityTask_SpawnProjectileAndWait
// Size: 0x2c0
class UFortAbilityTask_SpawnProjectileAndWait : public UAbilityTask
{
	struct FMulticastInlineDelegate Created; // 0x78 (0x10)
	struct FMulticastInlineDelegate Touched; // 0x88 (0x10)
	struct FMulticastInlineDelegate Bounced; // 0x98 (0x10)
	struct FMulticastInlineDelegate Stopped; // 0xa8 (0x10)
	struct FMulticastInlineDelegate Exploded; // 0xb8 (0x10)
	struct FMulticastInlineDelegate Destroyed; // 0xc8 (0x10)
	struct TWeakObjectPtr<class AFortProjectileBase> SpawnedProj; // 0xd8 (0x8)
	class AActor* RequestedBy; // 0xe0 (0x8)
	struct FVector SpawnLocation; // 0xe8 (0x18)
	struct FRotator SpawnRotation; // 0x100 (0x18)
	struct FRotator SpawnDirection; // 0x118 (0x18)
	float InitialSpeed; // 0x130 (0x4)
	unsigned char unreflected_134[0x4]; // 0x134 (0x4) 
	struct FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnHit; // 0x138 (0xb8)
	struct FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnExplode; // 0x1f0 (0xb8)
	float GravityScale; // 0x2a8 (0x4)
	unsigned char unreflected_2ac[0x4]; // 0x2ac (0x4) 
	class AActor* HomingTarget; // 0x2b0 (0x8)
	bool bAllowSpawnWhenDead; // 0x2b8 (0x1)
	bool bAllowSpawnWhenDBNO; // 0x2b9 (0x1)
	unsigned char padding_2ba[0x6]; // 0x2ba (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_SpawnProjectileAndWait.SpawnProjectileAndWait (Underlying native function: SpawnProjectileAndWait 0x81e9114)
	static class UFortAbilityTask_SpawnProjectileAndWait* SpawnProjectileAndWait(class UGameplayAbility*& OwningAbility, class UClass*& Class, class AActor*& RequestedBy, struct FVector& SpawnLocation, struct FRotator& SpawnRotation, struct FRotator& SpawnDirection, float& InitialSpeed, struct FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnHit, struct FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnExplode, float& GravityScale, class AActor*& HomingTarget, bool& bAllowProjectileSpawnWhenDead, bool& bAllowProjectileSpawnWhenDBNO); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_SpawnProjectileAndWait.OnProjectileDestroyed (Underlying native function: OnProjectileDestroyed 0x81e8d18)
	void OnProjectileDestroyed(class AActor*& DestroyedActor); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAbilityTask_SpawnProjectileAndWait.FinishSpawningActor (Underlying native function: FinishSpawningActor 0x81e882c)
	void FinishSpawningActor(class UGameplayAbility*& OwningAbility, class AFortProjectileBase*& SpawnedActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_SpawnProjectileAndWait.BeginSpawningActor (Underlying native function: BeginSpawningActor 0x81e85f0)
	bool BeginSpawningActor(class UGameplayAbility*& OwningAbility, class UClass*& Class, class AFortProjectileBase*& SpawnedActor); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

