// Class /Script/FortniteGame.BuildingRift
// Size: 0xb90
class ABuildingRift : public ABuildingActor
{
	unsigned char unreflected_780[0x8]; // 0x780 (0x8) 
	float DistToTarget; // 0x788 (0x4)
	unsigned char unreflected_78c[0x4]; // 0x78c (0x4) 
	bool bSendMissionEvents; // 0x790 (0x1)
	bool bDelayDeath; // 0x791 (0x1)
	unsigned char unreflected_792[0x1]; // 0x792 (0x1) 
	enum EFortRiftSpawnSlotSelectionMode SlotSelectionMode; // 0x793 (0x1)
	float MinSpawnDelay; // 0x794 (0x4)
	float MaxSpawnDelay; // 0x798 (0x4)
	float CosmeticStateIdleDelay; // 0x79c (0x4)
	float IntroToBeginSpawningDelay; // 0x7a0 (0x4)
	unsigned char unreflected_7a4[0x4]; // 0x7a4 (0x4) 
	class UEnvQuery* EnvironmentQuery; // 0x7a8 (0x8)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0x7b0 (0x10)
	float QueryRadius; // 0x7c0 (0x4)
	float QueryMinDistance; // 0x7c4 (0x4)
	bool bOverrideQueryMinDistance; // 0x7c8 (0x1)
	unsigned char unreflected_7c9[0x7]; // 0x7c9 (0x7) 
	bool bRegisterAsASpecialActor; // 0x7d0 (0x1)
	unsigned char unreflected_7d1[0x3]; // 0x7d1 (0x3) 
	struct FGameplayTag SpecialActorTag; // 0x7d4 (0x4)
	unsigned char unreflected_7d8[0x8]; // 0x7d8 (0x8) 
	struct FSlateBrush SpecialActorMinimapIconBrush; // 0x7e0 (0xc0)
	struct FVector2D SpecialActorMinimapIconScale; // 0x8a0 (0x10)
	struct FSlateBrush SpecialActorCompassIconBrush; // 0x8b0 (0xc0)
	struct FVector2D SpecialActorCompassIconScale; // 0x970 (0x10)
	bool bShouldDrawCompassIcon; // 0x980 (0x1)
	bool bSpawnUsingRiftRotation; // 0x981 (0x1)
	unsigned char unreflected_982[0x2]; // 0x982 (0x2) 
	float SpawnPointRadius; // 0x984 (0x4)
	struct FName SpecialActorID; // 0x988 (0x4)
	unsigned char unreflected_98c[0x4]; // 0x98c (0x4) 
	struct TArray<struct FVector> FreeSpawnSlots; // 0x990 (0x10)
	struct TArray<struct FFortSpawnSlotData> UsedSpawnSlots; // 0x9a0 (0x10)
	unsigned char unreflected_9b0[0x10]; // 0x9b0 (0x10) 
	bool bRiftIsVisible; // 0x9c0 (0x1)
	bool bRiftIsActive; // 0x9c1 (0x1)
	bool bIsReadyToSpawnAI; // 0x9c2 (0x1)
	bool bHasBeenInitialized; // 0x9c3 (0x1)
	bool bHasBadRiftSlots; // 0x9c4 (0x1)
	bool bRecalculateSpawnPointsPeriodically; // 0x9c5 (0x1)
	unsigned char unreflected_9c6[0x6]; // 0x9c6 (0x6) 
	float SpawnPointEvaluationInterval; // 0x9cc (0x4)
	unsigned char unreflected_9d0[0x70]; // 0x9d0 (0x70) 
	struct FMulticastInlineDelegate OnBuildingRiftSpawnedAI; // 0xa40 (0x10)
	bool bCreateOverlapSphere; // 0xa50 (0x1)
	unsigned char unreflected_a51[0x7]; // 0xa51 (0x7) 
	struct FScalableFloat OverlapSphereRadius; // 0xa58 (0x28)
	class USphereComponent* OverlapSphereComponent; // 0xa80 (0x8)
	struct FName DestructionLootTierGroup; // 0xa88 (0x4)
	unsigned char unreflected_a8c[0x4]; // 0xa8c (0x4) 
	struct FRotator LootDropTossDirection; // 0xa90 (0x18)
	float LootDropConeHalfAngle; // 0xaa8 (0x4)
	float LootDropSpeed; // 0xaac (0x4)
	unsigned char bCanBeMarked; // 0xab0 (0x1)
	unsigned char bBlockMarking; // 0xab0 (0x1)
	unsigned char unreflected_ab1[0x7]; // 0xab1 (0x7) 
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0xab8 (0x98)
	struct FVector MarkerPositionOffset; // 0xb50 (0x18)
	struct TArray<struct FFortRiftReservation*> RiftReservations; // 0xb68 (0x10)
	enum ERiftCosmeticState CosmeticState; // 0xb78 (0x1)
	unsigned char unreflected_b79[0x7]; // 0xb79 (0x7) 
	class UFortSpectateClickableMapIcon* SpectatorMapIcon; // 0xb80 (0x8)
	unsigned char padding_b88[0x8]; // 0xb88 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.BuildingRift.StartEnvironmentQuery (Underlying native function: StartEnvironmentQuery 0x860dc1c)
	void StartEnvironmentQuery(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingRift.SetNewEQSData (Underlying native function: SetNewEQSData 0x860d51c)
	void SetNewEQSData(class UEnvQuery*& NewEnvironmentQuery, struct TArray<struct FEnvNamedValue>& NewQueryParams); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingRift.OnStartedEncounterSpawn (Has no native function)
	void OnStartedEncounterSpawn(class AFortAIPawn*& SpawnedAI); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingRift.OnSpawnAI (Has no native function)
	void OnSpawnAI(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingRift.OnRep_RiftIsVisible (Underlying native function: OnRep_RiftIsVisible 0x860c1ec)
	void OnRepRiftIsVisible(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingRift.OnRep_RiftIsActive (Underlying native function: OnRep_RiftIsActive 0x860c1cc)
	void OnRepRiftIsActive(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingRift.OnRep_CosmeticState (Underlying native function: OnRep_CosmeticState 0x860c028)
	void OnRepCosmeticState(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingRift.OnRemoved (Has no native function)
	void OnRemoved(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingRift.OnPlaced (Has no native function)
	void OnPlaced(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingRift.OnGameDifficultyChanged (Underlying native function: OnGameDifficultyChanged 0x860bb1c)
	void OnGameDifficultyChanged(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingRift.OnFinishedEncounterSpawn (Has no native function)
	void OnFinishedEncounterSpawn(class AFortAIPawn*& SpawnedAI); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingRift.OnDeactivated (Has no native function)
	void OnDeactivated(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingRift.OnActivated (Has no native function)
	void OnActivated(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingRift.NotifyAIPawnSpawned (Underlying native function: NotifyAIPawnSpawned 0x860b62c)
	void NotifyAIPawnSpawned(class AFortAIPawn*& SpawnedAI, struct FVector& SpawnSlotLocation); // (0x00000002 | Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingRift.BroadcastRiftSpawningAI (Underlying native function: BroadcastRiftSpawningAI 0x8607628)
	void BroadcastRiftSpawningAI(); // (0x00000002 | Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.BuildingRift.BP_Cosmetic_ShouldDie (Has no native function)
	void BPCosmeticShouldDie(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingRift.BP_Cosmetic_RampUp (Has no native function)
	void BPCosmeticRampUp(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingRift.BP_Cosmetic_Intro (Has no native function)
	void BPCosmeticIntro(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingRift.BP_Cosmetic_Idle (Has no native function)
	void BPCosmeticIdle(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingRift.BlueprintHideVFX (Has no native function)
	void BlueprintHideVFX(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingRift.BlueprintHideRift (Has no native function)
	void BlueprintHideRift(); // (Event | Public | BlueprintEvent)
};

