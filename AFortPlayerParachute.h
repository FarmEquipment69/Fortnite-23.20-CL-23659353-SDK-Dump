// Class /Script/FortniteGame.FortPlayerParachute
// Size: 0x5b8
class AFortPlayerParachute : public AActor
{
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	struct TWeakObjectPtr<class USoundBase> GliderOpenSoundFromDef; // 0x298 (0x28)
	class USoundBase* CurrentGliderOpenSound; // 0x2c0 (0x8)
	struct TWeakObjectPtr<class UAudioComponent> CurrentGliderOpenAudioComponent; // 0x2c8 (0x8)
	struct TWeakObjectPtr<class USoundBase> GliderCloseSoundFromDef; // 0x2d0 (0x28)
	class USoundBase* CurrentGliderCloseSound; // 0x2f8 (0x8)
	struct TWeakObjectPtr<class UAudioComponent> CurrentGliderCloseAudioComponent; // 0x300 (0x8)
	class UFortGliderAudioComponent* FortLayeredAudioComponentGlider; // 0x308 (0x8)
	unsigned char unreflected_310[0x10]; // 0x310 (0x10) 
	class AFortPlayerPawn* PlayerPawn; // 0x320 (0x8)
	class UAthenaGliderItemDefinition* ParachuteItemDef; // 0x328 (0x8)
	float ParachuteHiddenAnimFinishTime; // 0x330 (0x4)
	unsigned char bGliderFullyLoaded; // 0x334 (0x1)
	unsigned char bGliderFullyDeployed; // 0x334 (0x1)
	unsigned char bChuteOpened; // 0x334 (0x1)
	unsigned char bIsFrontEndPreview; // 0x334 (0x1)
	unsigned char bParachuteVisible; // 0x334 (0x1)
	unsigned char bCustomizedPreview; // 0x334 (0x1)
	unsigned char bActivateTrailOnRotationalMovement; // 0x334 (0x1)
	unsigned char unreflected_335[0x3]; // 0x335 (0x3) 
	struct FRotator LastRotationalMovement; // 0x338 (0x18)
	struct FName ParachuteTrailParameterName; // 0x350 (0x4)
	bool IsCosmeticPreview; // 0x354 (0x1)
	unsigned char unreflected_355[0x13]; // 0x355 (0x13) 
	unsigned char bIsEtherealBackgroundPreview; // 0x368 (0x1)
	unsigned char unreflected_369[0x7]; // 0x369 (0x7) 
	class UFXSystemComponent* TrailVFX; // 0x370 (0x8)
	class UFXSystemComponent* TrailVFX2; // 0x378 (0x8)
	struct TArray<class UNiagaraComponent*> TrailComponents; // 0x380 (0x10)
	class USkeletalMeshComponentBudgeted* ParachuteMesh; // 0x390 (0x8)
	class UParticleSystemComponent* TrailParticles; // 0x398 (0x8)
	class UFortPlayerGliderAnimSet* CurrentGliderPlayerAnimSet; // 0x3a0 (0x8)
	struct TArray<class USkeletalMeshComponentBudgeted*> BitsMeshComponents; // 0x3a8 (0x10)
	unsigned char bUsesDayPhaseChange; // 0x3b8 (0x1)
	unsigned char unreflected_3b9[0x197]; // 0x3b9 (0x197) 
	struct TArray<class UObject*> LoadedAssets; // 0x550 (0x10)
	unsigned char unreflected_560[0x8]; // 0x560 (0x8) 
	struct TMap<class UNiagaraComponent*, int> TrailComponentDefinitionMap; // 0x568 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerParachute.SetPlayerPawn (Underlying native function: SetPlayerPawn 0x83fd48c)
	void SetPlayerPawn(class AFortPlayerPawn*& InPlayerPawn); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerParachute.SetChuteMeshVisibility (Underlying native function: SetChuteMeshVisibility 0x83fd074)
	void SetChuteMeshVisibility(bool& bNewParachuteVisible); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerParachute.OnRep_PlayerPawn (Underlying native function: OnRep_PlayerPawn 0x83fc6d8)
	void OnRepPlayerPawn(class AFortPlayerPawn*& PreviousPlayerPawn); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerParachute.OnRep_ParachuteItemDef (Underlying native function: OnRep_ParachuteItemDef 0x83fc6c4)
	void OnRepParachuteItemDef(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerParachute.OnReceiveParachuteItemdef (Has no native function)
	void OnReceiveParachuteItemdef(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerParachute.OnPlayerPawnSet (Has no native function)
	void OnPlayerPawnSet(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerParachute.OnParachuteTrailUpdated (Underlying native function: OnParachuteTrailUpdated 0x83fc4dc)
	void OnParachuteTrailUpdated(float& MovementLengthSquared, float& ForwardDot, float& RightDot, float& RotationalMovementAcceleration); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerParachute.OnGliderFullyDeployed (Has no native function)
	void OnGliderFullyDeployed(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerParachute.OnDayPhaseChanged (Has no native function)
	void OnDayPhaseChanged(enum EFortDayPhase& CurrentDayPhase, enum EFortDayPhase& PreviousDayPhase, bool& bAtCreation); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerParachute.K2_SetChuteMeshVisibility (Has no native function)
	void K2SetChuteMeshVisibility(bool& bParachuteVisibility); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerParachute.IsGliderFullyDeployedAccordingToAnim (Underlying native function: IsGliderFullyDeployedAccordingToAnim 0x83fc330)
	bool IsGliderFullyDeployedAccordingToAnim(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerParachute.InitalizeFromItemDef (Underlying native function: InitalizeFromItemDef 0x83fc1dc)
	void InitalizeFromItemDef(class UAthenaGliderItemDefinition*& InParachuteItemDef, bool& bSynchronousLoad); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerParachute.GetTrailVFXComponent (Underlying native function: GetTrailVFXComponent 0x83fc164)
	class UFXSystemComponent* GetTrailVFXComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerParachute.GetTrailVFX2Component (Underlying native function: GetTrailVFX2Component 0x83fc14c)
	class UFXSystemComponent* GetTrailVFX2Component(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerParachute.GetParachuteRootMesh (Underlying native function: GetParachuteRootMesh 0x756e1f8)
	class USkeletalMeshComponent* GetParachuteRootMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerParachute.GetFortPlayerPawn (Underlying native function: GetFortPlayerPawn 0x83fc0f4)
	class AFortPlayerPawn* GetFortPlayerPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerParachute.GetBitsMeshComponents (Underlying native function: GetBitsMeshComponents 0x83fc04c)
	struct TArray<class USkeletalMeshComponentBudgeted*> GetBitsMeshComponents(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerParachute.DisableTrailParticles (Underlying native function: DisableTrailParticles 0x83fbf34)
	void DisableTrailParticles(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerParachute.ApplyVariants (Underlying native function: ApplyVariants 0x83fbab4)
	void ApplyVariants(); // (Final | Native | Public | BlueprintCallable)
};

