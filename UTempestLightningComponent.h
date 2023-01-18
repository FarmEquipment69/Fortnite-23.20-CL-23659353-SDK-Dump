// Class /Script/SuperstormRuntime.TempestLightningComponent
// Size: 0x418
class UTempestLightningComponent : public UGameFrameworkComponent
{
	class UClass* LightningBoltClass; // 0xa0 (0x8)
	struct TArray<struct FTempestLightningBoltEffectContainer> LightningBoltTargetEffectContainers; // 0xa8 (0x10)
	class UTargetingPreset* LightningBoltTargetingPreset; // 0xb8 (0x8)
	class UEnvQuery* FindTargetablePawnsQuery; // 0xc0 (0x8)
	class UEnvQuery* FindTargetableLocationQuery; // 0xc8 (0x8)
	struct FName EnvironmentQueryParamNameLightningRadius; // 0xd0 (0x4)
	struct FName EnvironmentQueryParamNameMinLightningTargetDistance; // 0xd4 (0x4)
	struct FScalableFloat LightningCloudHeight; // 0xd8 (0x28)
	struct FScalableFloat LightningRadius; // 0x100 (0x28)
	struct FScalableFloat MinLightningTargetDistance; // 0x128 (0x28)
	struct FScalableFloat LightningFrequencyMin; // 0x150 (0x28)
	struct FScalableFloat LightningFrequencyMax; // 0x178 (0x28)
	struct FScalableFloat LightningBoltsMin; // 0x1a0 (0x28)
	struct FScalableFloat LightningBoltsMax; // 0x1c8 (0x28)
	struct FScalableFloat LightningBoltIntervalMin; // 0x1f0 (0x28)
	struct FScalableFloat LightningBoltIntervalMax; // 0x218 (0x28)
	struct FScalableFloat LightningBoltSeparationDistance; // 0x240 (0x28)
	struct FScalableFloat LightningStruckPawnReselectionInterval; // 0x268 (0x28)
	struct FScalableFloat LightningBoltTelegraphDuration; // 0x290 (0x28)
	struct FScalableFloat LightningBoltImpactIgnitionRadius; // 0x2b8 (0x28)
	struct FScalableFloat LightningBoltGrassIgnitionRadius; // 0x2e0 (0x28)
	struct FScalableFloat LightningBoltGrassFirePropagationFuel; // 0x308 (0x28)
	struct FGameplayTag LightningAreaTargetTelegraphCue; // 0x330 (0x4)
	struct FGameplayTag LightningBoltTargetTelegraphCue; // 0x334 (0x4)
	struct TArray<struct FTempestLightningBoltData> LightningBoltData; // 0x338 (0x10)
	unsigned char padding_348[0xd0]; // 0x348 (0xd0)

	/* Functions */

	// Function /Script/SuperstormRuntime.TempestLightningComponent.GetLightningRadius (Underlying native function: GetLightningRadius 0x76e4758)
	float GetLightningRadius(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SuperstormRuntime.TempestLightningComponent.GetCloudHeight (Underlying native function: GetCloudHeight 0x76e4724)
	float GetCloudHeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

