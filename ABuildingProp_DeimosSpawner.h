// Class /Script/FortniteGame.BuildingProp_DeimosSpawner
// Size: 0x1098
class ABuildingProp_DeimosSpawner : public ABuildingProp_AISpawner
{
	struct TArray<class UClass*> DeimosSpawnerOptions; // 0xf30 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> PawnNumberCapOptions; // 0xf40 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> SpawnGroupOptions; // 0xf50 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> SpawnTimingOptions; // 0xf60 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> SpawnLimitOptions; // 0xf70 (0x10)
	struct TArray<struct TWeakObjectPtr<class UEnvQuery>> EQSQueryOptions; // 0xf80 (0x10)
	struct TWeakObjectPtr<class UClass> SelectedPawnNumberCap; // 0xf90 (0x28)
	struct TWeakObjectPtr<class UClass> SelectedSpawnGroup; // 0xfb8 (0x28)
	struct TWeakObjectPtr<class UClass> SelectedSpawnTiming; // 0xfe0 (0x28)
	struct TWeakObjectPtr<class UClass> SelectedSpawnLimit; // 0x1008 (0x28)
	struct TWeakObjectPtr<class UEnvQuery> SelectedEQSQuery; // 0x1030 (0x28)
	bool bNoSpawnLimitEnabled; // 0x1058 (0x1)
	bool bDamageBuildingsOnSpawn; // 0x1059 (0x1)
	bool bInvulnerable; // 0x105a (0x1)
	bool bVisible; // 0x105b (0x1)
	bool bHideVFX; // 0x105c (0x1)
	unsigned char unreflected_105d[0x3]; // 0x105d (0x3) 
	float OverrideQueryRadius; // 0x1060 (0x4)
	bool bSortSlotsByBestScore; // 0x1064 (0x1)
	bool bEnabledOnMinigameStart; // 0x1065 (0x1)
	unsigned char unreflected_1066[0x2]; // 0x1066 (0x2) 
	class UFortGameplayReceiverMessageComponent* TurnOnReceiverComponent; // 0x1068 (0x8)
	class UFortGameplayReceiverMessageComponent* TurnOffReceiverComponent; // 0x1070 (0x8)
	class UFortGameplayReceiverMessageComponent* KillAllAIReceiverComponent; // 0x1078 (0x8)
	class UFortGameplayReceiverMessageComponent* KillSpawnerReceiverComponent; // 0x1080 (0x8)
	class UFortGameplayTriggerMessageComponent* OnKilledMessagerComponent; // 0x1088 (0x8)
	bool bEnableCreativeCreatureSpawners; // 0x1090 (0x1)
	unsigned char padding_1091[0x7]; // 0x1091 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_DeimosSpawner.OnTurnOnReceived (Underlying native function: OnTurnOnReceived 0x860c640)
	void OnTurnOnReceived(class AController*& TriggerInstigator); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_DeimosSpawner.OnTurnOffReceived (Underlying native function: OnTurnOffReceived 0x860c534)
	void OnTurnOffReceived(class AController*& TriggerInstigator); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_DeimosSpawner.OnKillRiftReceived (Underlying native function: OnKillRiftReceived 0x860bbac)
	void OnKillRiftReceived(class AController*& TriggerInstigator); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_DeimosSpawner.OnKillAIReceived (Underlying native function: OnKillAIReceived 0x860bb30)
	void OnKillAIReceived(class AController*& TriggerInstigator); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_DeimosSpawner.MinigameStarted (Underlying native function: MinigameStarted 0x860a58c)
	void MinigameStarted(); // (Native | Event | Public | BlueprintEvent)
};

