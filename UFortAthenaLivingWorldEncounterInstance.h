// Class /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance
// Size: 0x100
class UFortAthenaLivingWorldEncounterInstance : public UObject
{
	struct FMulticastInlineDelegate OnActorSpawned; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnActorDestroyed; // 0x38 (0x10)
	unsigned char unreflected_48[0x50]; // 0x48 (0x50) 
	struct TArray<struct TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> OriginalPointProviders; // 0x98 (0x10)
	struct TArray<struct TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> RegisteredPointProviders; // 0xa8 (0x10)
	struct TWeakObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterDefinition; // 0xb8 (0x28)
	class AActor* ActorDensityReservoir; // 0xe0 (0x8)
	unsigned char unreflected_e8[0x8]; // 0xe8 (0x8) 
	int CurrentStageIndex; // 0xf0 (0x4)
	unsigned char unreflected_f4[0x4]; // 0xf4 (0x4) 
	bool bIsPaused; // 0xf8 (0x1)
	unsigned char padding_f9[0x7]; // 0xf9 (0x7)

	/* Functions */

	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.StartEncounterStage (Underlying native function: StartEncounterStage 0x723c77c)
	void StartEncounterStage(int& StageIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.ResumeEncounter (Underlying native function: ResumeEncounter 0x723c1a0)
	void ResumeEncounter(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.Reset (Underlying native function: Reset 0x26daa0c)
	void Reset(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.RequestEventGeneration (Underlying native function: RequestEventGeneration 0x723c008)
	void RequestEventGeneration(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.PauseEncounter (Underlying native function: PauseEncounter 0x723ba7c)
	void PauseEncounter(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OwnsActor (Underlying native function: OwnsActor 0x723ba10)
	bool OwnsActor(class AActor*& Actor); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorSpawned__DelegateSignature (Has no native function)
	void OnActorSpawnedDelegateSignature(class AActor*& SpawnedActor); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDestroyed__DelegateSignature (Has no native function)
	void OnActorDestroyedDelegateSignature(class AActor*& DestroyedActor); // (MulticastDelegate | Public | Delegate)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.GetTotalActorCount (Underlying native function: GetTotalActorCount 0x7238fb0)
	int GetTotalActorCount(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.AdvanceEncounterStage (Underlying native function: AdvanceEncounterStage 0x7238580)
	void AdvanceEncounterStage(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

