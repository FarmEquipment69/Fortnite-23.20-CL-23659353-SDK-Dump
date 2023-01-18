// Class /Script/FortniteGame.FortGameplayCueNotify_Loop
// Size: 0x960
class AFortGameplayCueNotify_Loop : public AFortGameplayCueNotify_Actor
{
	struct FFortBurstEffectData ApplicationBurst; // 0x3a0 (0x140)
	struct FFortGameplayCueSpawnResult ApplicationResult; // 0x4e0 (0x40)
	struct FFortGameplayCueAttachInfo DefaultLoopingAttachment; // 0x520 (0x58)
	struct TArray<struct FFortGameplayCueParticleInfo> LoopingParticles; // 0x578 (0x10)
	struct TArray<struct FFortGameplayCueAudioInfo_Looping> LoopingSounds; // 0x588 (0x10)
	struct FFortGameplayCueForceFeedbackInfo LoopingForceFeedbackEffect; // 0x598 (0x28)
	struct FFortGameplayCueCameraLensEffectInfo LoopingCameraLensEffect; // 0x5c0 (0x18)
	struct FFortGameplayCueCameraShakeInfo LoopingCameraShake; // 0x5d8 (0x38)
	struct FFortGameplayCueSpawnResult LoopingResult; // 0x610 (0x40)
	struct FFortBurstEffectData RecurringBurst; // 0x650 (0x140)
	struct FFortGameplayCueSpawnResult RecurringResult; // 0x790 (0x40)
	struct FFortBurstEffectData RemovalBurst; // 0x7d0 (0x140)
	struct FFortGameplayCueSpawnResult RemovalResult; // 0x910 (0x40)
	bool bTickEnabled; // 0x950 (0x1)
	unsigned char unreflected_951[0x3]; // 0x951 (0x3) 
	float TickInterval; // 0x954 (0x4)
	struct TEnumAsByte<ETickingGroup> TickGroup; // 0x958 (0x1)
	unsigned char padding_959[0x7]; // 0x959 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayCueNotify_Loop.OnRemovalNiagara (Has no native function)
	void OnRemovalNiagara(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UNiagaraComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Loop.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Loop.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Loop.OnRecurringNiagara (Has no native function)
	void OnRecurringNiagara(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UNiagaraComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Loop.OnRecurringGeneric (Has no native function)
	void OnRecurringGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Loop.OnRecurring (Has no native function)
	void OnRecurring(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Loop.OnLoopingStartNiagara (Has no native function)
	void OnLoopingStartNiagara(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UNiagaraComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Loop.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Loop.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Loop.OnApplicationNiagara (Has no native function)
	void OnApplicationNiagara(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UNiagaraComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Loop.OnApplicationGeneric (Has no native function)
	void OnApplicationGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayCueNotify_Loop.OnApplication (Has no native function)
	void OnApplication(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)
};

