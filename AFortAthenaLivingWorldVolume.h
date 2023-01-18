// Class /Script/LagerRuntime.FortAthenaLivingWorldVolume
// Size: 0x5b8
class AFortAthenaLivingWorldVolume : public AVolume
{
	unsigned char unreflected_2c0[0x8]; // 0x2c0 (0x8) 
	bool bStartEnabled; // 0x2c8 (0x1)
	unsigned char unreflected_2c9[0x7]; // 0x2c9 (0x7) 
	struct FGameplayTagContainer FiltersTags; // 0x2d0 (0x20)
	class UEnvQuery* EnvironmentQuery; // 0x2f0 (0x8)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x2f8 (0x10)
	bool bRemoveUsedPoint; // 0x308 (0x1)
	bool bRemoveUsedPointPermenantly; // 0x309 (0x1)
	unsigned char unreflected_30a[0x6]; // 0x30a (0x6) 
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x310 (0x68)
	struct FScalableFloat EQSRefreshInterval; // 0x378 (0x28)
	struct FScalableFloat WaterLevelIndexMin; // 0x3a0 (0x28)
	struct FScalableFloat WaterLevelIndexMax; // 0x3c8 (0x28)
	class AFortGameStateAthena* CachedGameState; // 0x3f0 (0x8)
	struct FMulticastInlineDelegate OnActorSpawnedResult; // 0x3f8 (0x10)
	struct FMulticastInlineDelegate OnPointProviderRegistered; // 0x408 (0x10)
	class UFortAthenaLivingWorldManager* CachedLivingWorldManager; // 0x418 (0x8)
	unsigned char padding_420[0x198]; // 0x420 (0x198)

	/* Functions */

	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.SetSpawnRotation (Underlying native function: SetSpawnRotation 0x723c3b8)
	void SetSpawnRotation(struct FRotator& Rotation); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.SetFiltersTags (Underlying native function: SetFiltersTags 0x723c300)
	void SetFiltersTags(struct FGameplayTagContainer& TagContainer); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQueryConfigParam (Underlying native function: SetEQSQueryConfigParam 0x723c238)
	void SetEQSQueryConfigParam(struct FName& ParameterName, float& Value); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQuery (Underlying native function: SetEQSQuery 0x723c1b8)
	void SetEQSQuery(class UEnvQuery*& Query); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.RunEQS (Underlying native function: RunEQS 0x26daa0c)
	void RunEQS(); // (Final | Native | Private)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.ResetSpawnRotation (Underlying native function: ResetSpawnRotation 0x723c17c)
	void ResetSpawnRotation(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnWorldFinishedInitialization (Underlying native function: OnWorldFinishedInitialization 0x723b7c0)
	void OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags); // (Final | Native | Private | HasOutParms)

	// DelegateFunction /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered__DelegateSignature (Has no native function)
	void OnPointProviderRegisteredDelegateSignature(class AFortAthenaLivingWorldVolume*& PointProviderVolume); // (MulticastDelegate | Public | Delegate)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded (Underlying native function: OnCurrentPlaylistLoaded 0x723a4a4)
	void OnCurrentPlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)

	// DelegateFunction /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnActorSpawnedResult__DelegateSignature (Has no native function)
	void OnActorSpawnedResultDelegateSignature(class AActor*& SpawnedActor, bool& bResult); // (MulticastDelegate | Public | Delegate)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.IsPointProviderEnabled (Underlying native function: IsPointProviderEnabled 0x7239108)
	bool IsPointProviderEnabled(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.EnablePointProvider (Underlying native function: EnablePointProvider 0x7238a04)
	void EnablePointProvider(); // (Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.DoesStartEnabled (Underlying native function: DoesStartEnabled 0x72389d0)
	bool DoesStartEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.DisablePointProvider (Underlying native function: DisablePointProvider 0x7238964)
	void DisablePointProvider(); // (Native | Public | BlueprintCallable)
};

