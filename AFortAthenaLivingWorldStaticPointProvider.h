// Class /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider
// Size: 0x358
class AFortAthenaLivingWorldStaticPointProvider : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x290 (0x68)
	struct FGameplayTagContainer FiltersTags; // 0x2f8 (0x20)
	struct TArray<struct FTransform> SpawnPoints; // 0x318 (0x10)
	bool bStartEnabled; // 0x328 (0x1)
	bool bRandomizeStartPoint; // 0x329 (0x1)
	unsigned char unreflected_32a[0x6]; // 0x32a (0x6) 
	struct FMulticastInlineDelegate OnActorSpawned; // 0x330 (0x10)
	class AFortGameStateAthena* CachedGameState; // 0x340 (0x8)
	class UFortAthenaLivingWorldManager* CachedLivingWorldManager; // 0x348 (0x8)
	unsigned char padding_350[0x8]; // 0x350 (0x8)

	/* Functions */

	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnCurrentPlaylistLoaded (Underlying native function: OnCurrentPlaylistLoaded 0x723a3a8)
	void OnCurrentPlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Protected | HasOutParms)

	// DelegateFunction /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnActorSpawned__DelegateSignature (Has no native function)
	void OnActorSpawnedDelegateSignature(class AActor*& SpawnedActor); // (MulticastDelegate | Public | Delegate)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.EnablePointProvider (Underlying native function: EnablePointProvider 0x72389e8)
	void EnablePointProvider(); // (Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.DisablePointProvider (Underlying native function: DisablePointProvider 0x7238948)
	void DisablePointProvider(); // (Native | Public | BlueprintCallable)
};

