// Class /Script/FortniteGame.FortGameplayCueNotify_Burst
// Size: 0x210
class UFortGameplayCueNotify_Burst : public UGameplayCueNotify_Static
{
	struct FFortGameplayCueSpawnCondition DefaultCondition; // 0x38 (0x38)
	struct FFortGameplayCueAttachInfo DefaultAttachment; // 0x70 (0x58)
	struct FFortBurstEffectData BurstEffectData; // 0xc8 (0x140)
	unsigned char padding_208[0x8]; // 0x208 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayCueNotify_Burst.OnBurstNiagara (Has no native function)
	void OnBurstNiagara(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UNiagaraComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Burst.OnBurstGeneric (Has no native function)
	void OnBurstGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Burst.OnBurst (Underlying native function: OnBurst 0x2335264)
	void OnBurst(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Native | Event | Public | HasOutParms | BlueprintEvent | Const)
};

