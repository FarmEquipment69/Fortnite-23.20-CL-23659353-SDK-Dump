// Class /Script/InfernoRuntime.FortCurieVoxelFireNativeFXHandler
// Size: 0x368
class UFortCurieVoxelFireNativeFXHandler : public UFortCurieNativeFXHandler
{
	unsigned char unreflected_40[0x30]; // 0x40 (0x30) 
	struct TSet<class UFortCurieComponent*> PendingUpdateComponents; // 0x70 (0x50)
	struct TSet<class UFortCurieComponent*> PendingRemoveComponents; // 0xc0 (0x50)
	unsigned char unreflected_110[0x50]; // 0x110 (0x50) 
	struct TArray<class UFortCurieWorldNiagaraComponent*> WorldFireNiagaraSystems; // 0x160 (0x10)
	struct TArray<class UFortCurieWorldNiagaraComponent*> WorldFireDebugNiagaraSystems; // 0x170 (0x10)
	float WorldSystemFireParticleSignificanceRequirement; // 0x180 (0x4)
	float WorldSystemIgnitionParticleSignificanceRequirement; // 0x184 (0x4)
	float AudioGrassFireSignificanceRequirement; // 0x188 (0x4)
	float AudioActorFireSignificanceRequirement; // 0x18c (0x4)
	struct FRandomStream* RandomStream; // 0x190 (0x8)
	struct FBox GrassFireBounds; // 0x198 (0x38)
	float LandscapeCharInterpSpeed; // 0x1d0 (0x4)
	float TimeSinceAudioUpdate; // 0x1d4 (0x4)
	struct TArray<struct FFortCurieVoxelFireParticleGrassData> CachedFireParticleGrassData; // 0x1d8 (0x10)
	struct TArray<struct FFortCurieFireParticleActorData> CachedFireParticleActorData; // 0x1e8 (0x10)
	unsigned char unreflected_1f8[0x60]; // 0x1f8 (0x60) 
	struct TSet<struct FFortSpatialCellIndex> CachedBurningGrassGridCells; // 0x258 (0x50)
	struct TMap<struct FFortSpatialCellIndex, class UAudioComponent*> GrassAudioMap; // 0x2a8 (0x50)
	unsigned char unreflected_2f8[0x50]; // 0x2f8 (0x50) 
	struct TArray<class UAudioComponent*> PreallocatedAudioComponents; // 0x348 (0x10)
	struct FTimerHandle* AudioComponentCleanupTimerHandle; // 0x358 (0x8)
	double PreviousLandscapeCharTickTime; // 0x360 (0x8)

	/* Functions */

	// Function /Script/InfernoRuntime.FortCurieVoxelFireNativeFXHandler.OnUserSettingsEffectQualityChanged (Underlying native function: OnUserSettingsEffectQualityChanged 0x74757a8)
	void OnUserSettingsEffectQualityChanged(); // (Final | Native | Private)
};

