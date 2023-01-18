// Class /Script/FortniteGame.FortGameplayCueNotify_Looping
// Size: 0x368
class AFortGameplayCueNotify_Looping : public AGameplayCueNotify_Actor
{
	class USoundBase* StartSound; // 0x2e0 (0x8)
	class USoundBase* StopSound; // 0x2e8 (0x8)
	class UParticleSystem* StartParticleSystem; // 0x2f0 (0x8)
	struct FFortParticleSystemParamBucket StartParticleSystemParameters; // 0x2f8 (0x10)
	class UParticleSystem* StopParticleSystem; // 0x308 (0x8)
	struct FFortParticleSystemParamBucket StopParticleSystemParameters; // 0x310 (0x10)
	struct FName AttachPoint; // 0x320 (0x4)
	bool bStayAttached; // 0x324 (0x1)
	bool bSnapToAttachPointAndPreserveWorldRotation; // 0x325 (0x1)
	bool bUseHitResult; // 0x326 (0x1)
	bool bUseWeapon; // 0x327 (0x1)
	bool bIgnoreRotation; // 0x328 (0x1)
	unsigned char unreflected_329[0x7]; // 0x329 (0x7) 
	struct FGameplayTagContainer HUDElementTag; // 0x330 (0x20)
	enum EPSCPoolMethod PoolingMethod; // 0x350 (0x1)
	bool bIsValid; // 0x351 (0x1)
	unsigned char unreflected_352[0x6]; // 0x352 (0x6) 
	class UAudioComponent* AudioComponent; // 0x358 (0x8)
	class UParticleSystemComponent* ParticleSystemComponent; // 0x360 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayCueNotify_Looping.OnWhileActiveParticleSystemDeactivate (Has no native function)
	void OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent*& WhileActiveParticleSysComponent, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Looping.OnWhileActiveParticleSystemActivate (Has no native function)
	void OnWhileActiveParticleSystemActivate(class UParticleSystemComponent*& WhileActiveParticleSysComponent, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Looping.OnStopParticleSystemSpawned (Has no native function)
	void OnStopParticleSystemSpawned(class UParticleSystemComponent*& SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Looping.OnStartParticleSystemSpawned (Has no native function)
	void OnStartParticleSystemSpawned(class UParticleSystemComponent*& SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Looping.GetTargetComponent (Underlying native function: GetTargetComponent 0x8140c8c)
	class USceneComponent* GetTargetComponent(class AActor*& TargetActor, struct FGameplayCueParameters& Parameters); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Looping.GetSpawnTransform (Underlying native function: GetSpawnTransform 0x8140a14)
	bool GetSpawnTransform(class AActor*& TargetActor, struct FName& AttachPointName, struct FGameplayCueParameters& Parameters, struct FTransform& OutTransform); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

