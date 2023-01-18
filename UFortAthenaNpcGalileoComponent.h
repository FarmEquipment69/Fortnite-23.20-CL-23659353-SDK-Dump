// Class /Script/FortniteAI.FortAthenaNpcGalileoComponent
// Size: 0x100
class UFortAthenaNpcGalileoComponent : public UActorComponent
{
	class AFortAthenaAIBotController* CachedBotController; // 0xa0 (0x8)
	class AFortPawn* PossessedPawn; // 0xa8 (0x8)
	struct TArray<struct FVector> PatrolPath; // 0xb0 (0x10)
	struct TArray<class AFortAthenaAIBotController*> CommunicationGroup; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnPatrollingStart; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnPatrollingStop; // 0xe0 (0x10)
	unsigned char padding_f0[0x10]; // 0xf0 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaNpcGalileoComponent.SetPatrolPath (Underlying native function: SetPatrolPath 0xa3e4744)
	void SetPatrolPath(struct TArray<struct FVector>& NewPatrolPath); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaNpcGalileoComponent.SetCommunicationGroup (Underlying native function: SetCommunicationGroup 0xa3e45a8)
	void SetCommunicationGroup(struct TArray<class AFortAthenaAIBotController*>& AIBotControllerList); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaNpcGalileoComponent.OnPawnDied (Underlying native function: OnPawnDied 0xa3e3c5c)
	void OnPawnDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteAI.FortAthenaNpcGalileoComponent.GetPatrolPath (Underlying native function: GetPatrolPath 0xa3e2514)
	struct TArray<struct FVector> GetPatrolPath(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaNpcGalileoComponent.GetCommunicationGroup (Underlying native function: GetCommunicationGroup 0xa3e23fc)
	struct TArray<class AFortAthenaAIBotController*> GetCommunicationGroup(); // (Final | Native | Public | BlueprintCallable)
};

