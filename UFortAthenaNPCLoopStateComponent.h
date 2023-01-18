// Class /Script/FortniteAI.FortAthenaNPCLoopStateComponent
// Size: 0xb0
class UFortAthenaNPCLoopStateComponent : public UActorComponent
{
	unsigned char bSpawnOutsideTheLoop; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	class UFortAthenaAIRuntimeParameters_AIBotLoopSettings* RuntimeLoopSettings; // 0xa8 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaNPCLoopStateComponent.OnOwnerPawnDied (Underlying native function: OnOwnerPawnDied 0xa35bd94)
	void OnOwnerPawnDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/FortniteAI.FortAthenaNPCLoopStateComponent.InitLoopState (Has no native function)
	void InitLoopState(class AFortPawn*& PawnOwner); // (Event | Protected | BlueprintEvent)
};

