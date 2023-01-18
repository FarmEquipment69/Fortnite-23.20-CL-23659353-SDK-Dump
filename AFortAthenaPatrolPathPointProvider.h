// Class /Script/LagerRuntime.FortAthenaPatrolPathPointProvider
// Size: 0x358
class AFortAthenaPatrolPathPointProvider : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct FGameplayTagContainer FiltersTags; // 0x290 (0x20)
	class AFortAthenaPatrolPath* AssociatedPatrolPath; // 0x2b0 (0x8)
	unsigned char bStartEnabled; // 0x2b8 (0x1)
	unsigned char bSpawnOnPatrolPath; // 0x2b8 (0x1)
	unsigned char bAlignOrientationToPath; // 0x2b8 (0x1)
	unsigned char unreflected_2b9[0x7]; // 0x2b9 (0x7) 
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x2c0 (0x68)
	struct FMulticastInlineDelegate OnActorSpawnedResult; // 0x328 (0x10)
	struct TWeakObjectPtr<class AFortAthenaPatrolPath> RuntimePatrolPathWeakPtr; // 0x338 (0x8)
	class AFortGameStateAthena* CachedGameState; // 0x340 (0x8)
	class UFortAthenaLivingWorldManager* CachedLivingWorldManager; // 0x348 (0x8)
	unsigned char padding_350[0x8]; // 0x350 (0x8)

	/* Functions */

	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.OnCurrentPlaylistLoaded (Underlying native function: OnCurrentPlaylistLoaded 0x723a598)
	void OnCurrentPlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)

	// DelegateFunction /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.OnActorSpawnedResult__DelegateSignature (Has no native function)
	void OnActorSpawnedResultDelegateSignature(class AActor*& SpawnedActor, bool& bResult); // (MulticastDelegate | Public | Delegate)

	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.EnablePointProvider (Underlying native function: EnablePointProvider 0x72389e8)
	void EnablePointProvider(); // (Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.DisablePointProvider (Underlying native function: DisablePointProvider 0x7238948)
	void DisablePointProvider(); // (Native | Public | BlueprintCallable)
};

