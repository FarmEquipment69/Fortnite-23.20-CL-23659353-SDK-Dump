// Class /Script/FortniteGame.FortAthenaTutorial_Ambush
// Size: 0x398
class AFortAthenaTutorial_Ambush : public AFortAthenaTutorialBase
{
	class AFortAthenaTutorialMarker* ReachAmbushLocationMarker; // 0x2f0 (0x8)
	class ATriggerBox* AmbushTriggerBox; // 0x2f8 (0x8)
	class UClass* HealItemSpawnerBlueprint; // 0x300 (0x8)
	class UClass* ShieldItemSpawnerBlueprint; // 0x308 (0x8)
	class AFortStaticMeshActor* BlockerAmbush; // 0x310 (0x8)
	class AFortAthenaTutorialMarker* AmbushDirectionArrows; // 0x318 (0x8)
	class AActor* AmbushCameraPoint; // 0x320 (0x8)
	class ABuildingSMActor* AISpawnerAttachedTo; // 0x328 (0x8)
	class AFortAIPawn* SpawnedAIPawn; // 0x330 (0x8)
	struct FGameplayTagContainer HealthHUDElementTags; // 0x338 (0x20)
	float AiAccuracyRadius; // 0x358 (0x4)
	float AiRateOfFire; // 0x35c (0x4)
	float AiFirstShotDamage; // 0x360 (0x4)
	float AiDamage; // 0x364 (0x4)
	struct FName MaxLocationErrorKeyName; // 0x368 (0x4)
	float MaxLocationErrorValue; // 0x36c (0x4)
	struct FName MinLocationErrorKeyName; // 0x370 (0x4)
	float MinLocationErrorValue; // 0x374 (0x4)
	unsigned char unreflected_378[0x8]; // 0x378 (0x8) 
	class AFortAthenaAIBotController* BotController; // 0x380 (0x8)
	float AmbushCameraInSpeed; // 0x388 (0x4)
	float AmbushCameraOutSpeed; // 0x38c (0x4)
	unsigned char padding_390[0x8]; // 0x390 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaTutorial_Ambush.SpawnAmbushBot (Has no native function)
	bool SpawnAmbushBot(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaTutorial_Ambush.OnBeginOverlapAmbushTriggerBox (Underlying native function: OnBeginOverlapAmbushTriggerBox 0x856e078)
	void OnBeginOverlapAmbushTriggerBox(class AActor*& OverlappedActor, class AActor*& OtherActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaTutorial_Ambush.OnAmbushBotSpawned (Underlying native function: OnAmbushBotSpawned 0x856de70)
	void OnAmbushBotSpawned(class AFortPawn*& Pawn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaTutorial_Ambush.HandleOnPlayerDamaged (Underlying native function: HandleOnPlayerDamaged 0x8487b00)
	void HandleOnPlayerDamaged(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteGame.FortAthenaTutorial_Ambush.HandleOnAIDummyDied (Underlying native function: HandleOnAIDummyDied 0x8487b00)
	void HandleOnAIDummyDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)
};

