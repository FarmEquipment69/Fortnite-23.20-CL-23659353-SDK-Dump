// Class /Script/FortniteAI.AthenaAIPopulationTracker
// Size: 0x170
class UAthenaAIPopulationTracker : public UAISubsystem
{
	struct FMulticastInlineDelegate OnAIPawnDied; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnAIPawnDestroyed; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnAIPawnSpawned; // 0x58 (0x10)
	unsigned char unreflected_68[0x60]; // 0x68 (0x60) 
	struct TArray<class AController*> AIList; // 0xc8 (0x10)
	class AFortGameModeAthena* CachedGameMode; // 0xd8 (0x8)
	unsigned char padding_e0[0x90]; // 0xe0 (0x90)

	/* Functions */

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.OnFortPawnDied (Underlying native function: OnFortPawnDied 0xa3e35f8)
	void OnFortPawnDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.OnFortPawnDestroyed (Underlying native function: OnFortPawnDestroyed 0x615c090)
	void OnFortPawnDestroyed(class AActor*& DestroyedActor); // (Final | Native | Public)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.OnAISpawned (Underlying native function: OnAISpawned 0xa3e31c8)
	void OnAISpawned(class APawn*& Pawn, int& RequestId); // (Final | Native | Private)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.OnAgentGameOver (Underlying native function: OnAgentGameOver 0xa3e32d8)
	void OnAgentGameOver(class AFortAthenaAIBotController*& AIBotController, class AFortPawn*& Pawn, class AController*& Instigator); // (Final | Native | Private)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.GetNumTotalBots (Underlying native function: GetNumTotalBots 0xa3e24fc)
	int GetNumTotalBots(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.GetNumPlayerBots (Underlying native function: GetNumPlayerBots 0x801127c)
	int GetNumPlayerBots(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.GetNumNonAthenaParticipantBots (Underlying native function: GetNumNonAthenaParticipantBots 0xa3e24e8)
	int GetNumNonAthenaParticipantBots(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.GetNumAIPawn (Underlying native function: GetNumAIPawn 0x9c5d2a4)
	int GetNumAIPawn(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.GetAIPopulationTrackerCount (Underlying native function: GetAIPopulationTrackerCount 0xa3e2340)
	struct FAIPopulationCountSnapshot GetAIPopulationTrackerCount(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AthenaAIPopulationTracker.GetAIMatchingQuery (Underlying native function: GetAIMatchingQuery 0xa3e21fc)
	struct TArray<class AController*> GetAIMatchingQuery(struct FGameplayTagQuery& TagQuery); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

