// Class /Script/FortniteGame.FortCurieFXManager
// Size: 0x400
class UFortCurieFXManager : public UObject
{
	class UFortPlaysetItemDefinition* CurrentPlayset; // 0x28 (0x8)
	unsigned char unreflected_30[0x110]; // 0x30 (0x110) 
	struct FFortCurieFXManagerTickFunction PrimaryManagerTick; // 0x140 (0x30)
	class UFortCurieFXSettings* FXSettings; // 0x170 (0x8)
	struct TArray<class UStaticMesh*> ValidElectricityArcMeshes; // 0x178 (0x10)
	class UNiagaraSystem* ElectricityArcImpactSystem; // 0x188 (0x8)
	class USoundBase* ElectricityArcSound; // 0x190 (0x8)
	class USoundBase* ElectricityAmbientSound; // 0x198 (0x8)
	class USoundBase* FireAmbientSound; // 0x1a0 (0x8)
	struct TMap<struct FFortCurieAmbientAudioLocationKey, struct FFortCurieActiveAmbientAudio> ActiveAmbientAudioMap; // 0x1a8 (0x50)
	struct TArray<class UAudioComponent*> AvailablePooledAmbientAudioComponents; // 0x1f8 (0x10)
	struct FTimerHandle* AudioComponentCleanupTimerHandle; // 0x208 (0x8)
	struct TSet<class UNiagaraComponent*> ActiveElectricityArcImpactFX; // 0x210 (0x50)
	struct TArray<class UNiagaraComponent*> AvailablePooledNiagaraComponents; // 0x260 (0x10)
	struct TArray<struct FFortCurieGlowFadeRequest> GlowFadeRequests; // 0x270 (0x10)
	struct TArray<class UStaticMeshComponent*> AvailablePooledElectricityMeshComponents; // 0x280 (0x10)
	struct TArray<struct FFortCurieActiveElectricityArc> ActiveElectricityArcs; // 0x290 (0x10)
	struct TArray<struct FFortCuriePendingElectricityArcRequest> PendingElectricityArcRequestHeap; // 0x2a0 (0x10)
	struct TArray<class UFortCurieComponent*> PrematureComponents; // 0x2b0 (0x10)
	struct FTimerHandle* PrematureComponentTimerHandle; // 0x2c0 (0x8)
	struct TArray<class AFortCurieGrassFireReplicator*> GrassFireReplicators; // 0x2c8 (0x10)
	class UTextureRenderTarget2D* LandscapeCharRenderTarget; // 0x2d8 (0x8)
	struct TMap<struct FGameplayTag, class UFortCurieNativeFXHandler*> NativeFXHandlers; // 0x2e0 (0x50)
	unsigned char unreflected_330[0x10]; // 0x330 (0x10) 
	struct FBox GrassFireBounds; // 0x340 (0x38)
	unsigned char unreflected_378[0x50]; // 0x378 (0x50) 
	float ElectricityArcFXSignificanceRequirement; // 0x3c8 (0x4)
	float ElectricityImpactFXSignificanceRequirement; // 0x3cc (0x4)
	float ElectricityArcSoundSignificanceRequirement; // 0x3d0 (0x4)
	float AmbientAudioSignificanceRequirement; // 0x3d4 (0x4)
	float AmbientAudioSurroundSignificanceRequirement; // 0x3d8 (0x4)
	float GlowInterpolationSignificanceRequirement; // 0x3dc (0x4)
	class UMaterialParameterCollection* MaterialParameterCollection; // 0x3e0 (0x8)
	float TimeSinceAudioUpdate; // 0x3e8 (0x4)
	unsigned char unreflected_3ec[0x4]; // 0x3ec (0x4) 
	double PreviousGlowFadeTickTime; // 0x3f0 (0x8)
	unsigned char bNiagaraImpactFXActive; // 0x3f8 (0x1)
	unsigned char bFireElementEnabled; // 0x3f8 (0x1)
	unsigned char bElectricityElementEnabled; // 0x3f8 (0x1)
	unsigned char bShutdown; // 0x3f8 (0x1)
	unsigned char padding_3f9[0x7]; // 0x3f9 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortCurieFXManager.OnElectricityImpactFXComplete (Underlying native function: OnElectricityImpactFXComplete 0x87f4ecc)
	void OnElectricityImpactFXComplete(class UNiagaraComponent*& InComponent); // (Final | Native | Private)
};
