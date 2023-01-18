// Class /Script/VerseAIBase.VerseAISpawner
// Size: 0xf80
class AVerseAISpawner : public AFortCreativeDeviceProp
{
	struct TArray<class UClass*> VerseScriptComponents; // 0xef8 (0x10)
	class UClass* AISpawnerData; // 0xf08 (0x8)
	struct TArray<class AFortPawn*> SpawnedList; // 0xf10 (0x10)
	class UFortMinigameProgressComponent* MinigameProgress; // 0xf20 (0x8)
	class UFortAISpawnerUtilityComponent* AISpawnerUtilityComponent; // 0xf28 (0x8)
	class UFortActorOptionsComponent* OptionsComponent; // 0xf30 (0x8)
	struct TWeakObjectPtr<class UEnvQuery> SpawnEQSQuery; // 0xf38 (0x28)
	unsigned char padding_f60[0x20]; // 0xf60 (0x20)

	/* Functions */

	// Function /Script/VerseAIBase.VerseAISpawner.RequestSpawn (Underlying native function: RequestSpawn 0x72169e4)
	void RequestSpawn(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VerseAIBase.VerseAISpawner.OnSpawned (Underlying native function: OnSpawned 0x7216960)
	void OnSpawned(class AFortPawn*& Pawn); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/VerseAIBase.VerseAISpawner.OnPropertiesLoaded (Underlying native function: OnPropertiesLoaded 0x721694c)
	void OnPropertiesLoaded(); // (Final | Native | Private)

	// Function /Script/VerseAIBase.VerseAISpawner.OnPreSpawn (Underlying native function: OnPreSpawn 0x72168c8)
	void OnPreSpawn(class UFortAthenaAISpawnerDataComponentList*& ComponentList); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/VerseAIBase.VerseAISpawner.OnEQSFinished (Underlying native function: OnEQSFinished 0x7216758)
	void OnEQSFinished(struct TArray<struct FVector>& QueryResultLocations); // (Final | Native | Public | HasOutParms)

	// Function /Script/VerseAIBase.VerseAISpawner.KillAllBots (Underlying native function: KillAllBots 0x7216618)
	void KillAllBots(bool& bForceDoNotDropLoot); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/VerseAIBase.VerseAISpawner.InternalOnSpawned (Underlying native function: InternalOnSpawned 0x7216554)
	void InternalOnSpawned(class APawn*& Pawn, int& RequestId); // (Final | Native | Private)

	// Function /Script/VerseAIBase.VerseAISpawner.InternalOnAIDied (Underlying native function: InternalOnAIDied 0x72163d8)
	void InternalOnAIDied(class AController*& KilledController, bool& bIsABot, class AFortPawn*& KilledAIPawn, class AFortPlayerPawn*& KilledPlayerPawn, class AController*& KillerController); // (Final | Native | Private)
};

