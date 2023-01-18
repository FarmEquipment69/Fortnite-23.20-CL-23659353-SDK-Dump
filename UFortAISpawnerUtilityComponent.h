// Class /Script/FortniteAI.FortAISpawnerUtilityComponent
// Size: 0x130
class UFortAISpawnerUtilityComponent : public UActorComponent
{
	struct FGameplayTag AIPawnSpawnTypeTag; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	class UEnvQuery* EnvironmentQuery; // 0xa8 (0x8)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0xb0 (0x10)
	float QueryRadius; // 0xc0 (0x4)
	float QueryMinDistance; // 0xc4 (0x4)
	struct FMulticastInlineDelegate OnEnvironmentQueryFinishedDelegate; // 0xc8 (0x10)
	struct FMulticastInlineDelegate OnUnownedPawnDiedDelegate; // 0xd8 (0x10)
	unsigned char unreflected_e8[0x10]; // 0xe8 (0x10) 
	struct TArray<struct FVector> FreeSpawnSlots; // 0xf8 (0x10)
	unsigned char unreflected_108[0x18]; // 0x108 (0x18) 
	struct TScriptInterface<class IFortSpatialGameplayInterface> CachedFortSpatialGameplay; // 0x120 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.FortAISpawnerUtilityComponent.StartEnvironmentQuery (Underlying native function: StartEnvironmentQuery 0xa2689c4)
	void StartEnvironmentQuery(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAISpawnerUtilityComponent.SetQueryRadius (Underlying native function: SetQueryRadius 0xa268160)
	void SetQueryRadius(float& Radius); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAISpawnerUtilityComponent.SetMinigame (Underlying native function: SetMinigame 0xa267ef4)
	void SetMinigame(class AFortMinigame*& Minigame); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAISpawnerUtilityComponent.SetEQSQuery (Underlying native function: SetEQSQuery 0xa267b74)
	void SetEQSQuery(struct TWeakObjectPtr<class UEnvQuery>& SelectedEQSQuery); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAISpawnerUtilityComponent.RequestSpawn (Underlying native function: RequestSpawn 0xa2679c0)
	int RequestSpawn(class UFortAthenaAISpawnerDataComponentList*& AISpawnerComponentList, struct FTransform& SpawnTransform); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAISpawnerUtilityComponent.OnUnownedPawnDied (Underlying native function: OnUnownedPawnDied 0xa267458)
	void OnUnownedPawnDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteAI.FortAISpawnerUtilityComponent.IsSpawnCountCapped (Underlying native function: IsSpawnCountCapped 0x2486284)
	bool IsSpawnCountCapped(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAISpawnerUtilityComponent.HandleUnownedPawnSpawned (Underlying native function: HandleUnownedPawnSpawned 0xa26536c)
	void HandleUnownedPawnSpawned(class AFortPawn*& FortPawn); // (Final | Native | Public | BlueprintCallable)
};

