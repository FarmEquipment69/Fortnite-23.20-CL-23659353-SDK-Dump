// Class /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider
// Size: 0x348
class AFortAthenaPointAroundPlayerProvider : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct FGameplayTagContainer FiltersTags; // 0x290 (0x20)
	class UEnvQuery* QueryTemplate; // 0x2b0 (0x8)
	struct TEnumAsByte<EEnvQueryRunMode> RunMode; // 0x2b8 (0x1)
	unsigned char bStartEnabled; // 0x2b9 (0x1)
	unsigned char bGenerateAroundPlayerBots; // 0x2b9 (0x1)
	unsigned char unreflected_2ba[0x2]; // 0x2ba (0x2) 
	struct FGameplayTag IgnorePlayerWithTag; // 0x2bc (0x4)
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x2c0 (0x68)
	struct FMulticastInlineDelegate OnActorSpawnedResult; // 0x328 (0x10)
	class AFortGameStateAthena* CachedGameState; // 0x338 (0x8)
	unsigned char padding_340[0x8]; // 0x340 (0x8)

	/* Functions */

	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.OnCurrentPlaylistLoaded (Underlying native function: OnCurrentPlaylistLoaded 0x723a694)
	void OnCurrentPlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)

	// DelegateFunction /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.OnActorSpawnedResult__DelegateSignature (Has no native function)
	void OnActorSpawnedResultDelegateSignature(class AActor*& SpawnedActor, bool& bResult); // (MulticastDelegate | Public | Delegate)

	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.EnablePointProvider (Underlying native function: EnablePointProvider 0x72389e8)
	void EnablePointProvider(); // (Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.DisablePointProvider (Underlying native function: DisablePointProvider 0x7238948)
	void DisablePointProvider(); // (Native | Public | BlueprintCallable)
};

