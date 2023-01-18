// Class /Script/FortniteGame.FortGameplayCueNotify_Simple
// Size: 0x68
class UFortGameplayCueNotify_Simple : public UGameplayCueNotify_Static
{
	class USoundBase* StartSound; // 0x38 (0x8)
	class UParticleSystem* StartParticleSystem; // 0x40 (0x8)
	struct FFortParticleSystemParamBucket StartParticleSystemParameters; // 0x48 (0x10)
	struct FName AttachPoint; // 0x58 (0x4)
	bool bStayAttached; // 0x5c (0x1)
	bool bUseHitResult; // 0x5d (0x1)
	bool bUseWeapon; // 0x5e (0x1)
	bool bIgnoreRotation; // 0x5f (0x1)
	bool bUseUnsmoothedNetworkPosition; // 0x60 (0x1)
	enum EPSCPoolMethod PoolingMethod; // 0x61 (0x1)
	unsigned char padding_62[0x6]; // 0x62 (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayCueNotify_Simple.OnStartParticleSystemSpawned (Has no native function)
	void OnStartParticleSystemSpawned(class UParticleSystemComponent*& SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintEvent | Const)
};

