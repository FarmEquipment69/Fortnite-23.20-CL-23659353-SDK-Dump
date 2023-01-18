// Class /Script/FortniteGame.FortGameplayCueNotify_BurstLatent
// Size: 0x528
class AFortGameplayCueNotify_BurstLatent : public AFortGameplayCueNotify_Actor
{
	struct FFortBurstEffectData BurstEffectData; // 0x3a0 (0x140)
	struct FFortGameplayCueSpawnResult BurstResult; // 0x4e0 (0x40)
	float MaxBurstLatentLifetime; // 0x520 (0x4)
	unsigned char padding_524[0x4]; // 0x524 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayCueNotify_BurstLatent.OnBurstNiagara (Has no native function)
	void OnBurstNiagara(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UNiagaraComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortGameplayCueNotify_BurstLatent.OnBurstGeneric (Has no native function)
	void OnBurstGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortGameplayCueNotify_BurstLatent.OnBurst (Has no native function)
	void OnBurst(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent | Const)
};

