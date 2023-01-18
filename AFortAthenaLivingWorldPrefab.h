// Class /Script/LagerRuntime.FortAthenaLivingWorldPrefab
// Size: 0x940
class AFortAthenaLivingWorldPrefab : public ABuildingLevelInstance
{
	struct TArray<struct FFortAthenaLivingWorldPrefabActorSpawnerData> ActorSpawnerDatas; // 0x808 (0x10)
	struct FBox LocalLevelBounds; // 0x818 (0x38)
	struct FBox LocalGrassRemovalBox; // 0x850 (0x38)
	struct FMulticastInlineDelegate OnAllActorSpawnedDelegate; // 0x888 (0x10)
	unsigned char unreflected_898[0x18]; // 0x898 (0x18) 
	struct TArray<struct TWeakObjectPtr<class ABuildingActor>> BuildingsToKill; // 0x8b0 (0x10)
	struct TArray<struct TWeakObjectPtr<class AActor>> SpawnedActors; // 0x8c0 (0x10)
	struct FDelegate FinishedDestroyingBuildingCallback; // 0x8d0 (0xc)
	bool bHasFinishedSpawn; // 0x8dc (0x1)
	bool bHasRemovedFoliage; // 0x8dd (0x1)
	unsigned char unreflected_8de[0x2]; // 0x8de (0x2) 
	struct FScalableFloat bIsEnabled; // 0x8e0 (0x28)
	struct FScalableFloat Weight; // 0x908 (0x28)
	bool bShouldLevelBeVisible; // 0x930 (0x1)
	bool bShouldSpawnerBeAllowedToSpawn; // 0x931 (0x1)
	bool bShouldAlwaysSnapAboveLandscape; // 0x932 (0x1)
	unsigned char padding_933[0xd]; // 0x933 (0xd)

	/* Functions */

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.RemoveFoliageInsideLevelBound (Underlying native function: RemoveFoliageInsideLevelBound 0x291baac)
	void RemoveFoliageInsideLevelBound(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnRep_ShouldLevelBeVisible (Underlying native function: OnRep_ShouldLevelBeVisible 0x1af2004)
	void OnRepShouldLevelBeVisible(); // (Final | Native | Protected)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnLevelShown (Underlying native function: OnLevelShown 0x723b310)
	void OnLevelShown(); // (Final | Native | Protected)

	// DelegateFunction /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnBuildingInLevelBoundsDestroyed__DelegateSignature (Has no native function)
	void OnBuildingInLevelBoundsDestroyedDelegateSignature(); // (Public | Delegate)

	// DelegateFunction /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawnedDelegate__DelegateSignature (Has no native function)
	void OnAllActorSpawnedDelegateDelegateSignature(struct TArray<class AActor*>& SpawnedActors); // (Public | Delegate | HasOutParms)

	// DelegateFunction /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawned__DelegateSignature (Has no native function)
	void OnAllActorSpawnedDelegateSignature(struct TArray<class AActor*>& SpawnedActors); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.MakeLevelVisible (Underlying native function: MakeLevelVisible 0x723a230)
	void MakeLevelVisible(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.GetOwningLivingWorldPrefab (Underlying native function: GetOwningLivingWorldPrefab 0x7238e8c)
	static class AFortAthenaLivingWorldPrefab* GetOwningLivingWorldPrefab(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.GetLevelBounds (Underlying native function: GetLevelBounds 0x7238bdc)
	struct FBox GetLevelBounds(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.DestroyBuildingsInLevelBounds (Underlying native function: DestroyBuildingsInLevelBounds 0x72388a4)
	void DestroyBuildingsInLevelBounds(struct FDelegate& FinishedDelegate); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.CallWhenAllActorHaveSpawned (Underlying native function: CallWhenAllActorHaveSpawned 0x7238770)
	void CallWhenAllActorHaveSpawned(struct FDelegate& DelegateToCall); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.AllowSpawnerToSpawn (Underlying native function: AllowSpawnerToSpawn 0x7238594)
	void AllowSpawnerToSpawn(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

