// Class /Script/FortniteGame.FortAthenaMutator_Bismuth
// Size: 0x570
class AFortAthenaMutator_Bismuth : public AFortAthenaMutator_GameModeBase
{
	class UFortAthenaAIBotCustomizationData* BotData; // 0x450 (0x8)
	struct FScalableFloat NumOfBotsToSpawn; // 0x458 (0x28)
	struct FScalableFloat AIBotsHostileToEachOther; // 0x480 (0x28)
	int BotTeamStartIndex; // 0x4a8 (0x4)
	unsigned char unreflected_4ac[0x4]; // 0x4ac (0x4) 
	struct TWeakObjectPtr<class UEnvQuery> SpawnersSelectionQuery; // 0x4b0 (0x28)
	struct FScalableFloat MinimumDistanceBetweenSpawners2D; // 0x4d8 (0x28)
	struct FScalableFloat ReflectKillDelay; // 0x500 (0x28)
	struct FGameplayTag ReflectDeathReason; // 0x528 (0x4)
	unsigned char unreflected_52c[0x4]; // 0x52c (0x4) 
	struct TArray<enum EDeathCause> ValidDeathReasons; // 0x530 (0x10)
	class UClass* ReflectGameplayEffect; // 0x540 (0x8)
	class UClass* InitiateGameplayEffect; // 0x548 (0x8)
	struct TArray<class AAthenaBismuthSpawner*> BismuthSpawners; // 0x550 (0x10)
	struct TArray<class AFortPlayerPawnAthena*> BismuthAIBots; // 0x560 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Bismuth.ReflectEliminatePlayer (Underlying native function: ReflectEliminatePlayer 0x71a663c)
	void ReflectEliminatePlayer(class AFortPlayerPawnAthena*& PlayerPawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Bismuth.AIBotPawnDeath (Underlying native function: AIBotPawnDeath 0x8487b00)
	void AIBotPawnDeath(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)
};

