// Class /Script/FortniteAI.FortAIManagerMinigameComponent
// Size: 0x110
class UFortAIManagerMinigameComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x60]; // 0xa0 (0x60) 
	struct TArray<struct FGameplayTag> SpawnableAITypeTags; // 0x100 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.FortAIManagerMinigameComponent.OnPawnSpawned (Underlying native function: OnPawnSpawned 0xa2671a4)
	void OnPawnSpawned(class APawn*& Pawn, int& RequestId); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAIManagerMinigameComponent.OnPawnDied (Underlying native function: OnPawnDied 0xa266f28)
	void OnPawnDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteAI.FortAIManagerMinigameComponent.HandleMinigameStarted (Underlying native function: HandleMinigameStarted 0xa265358)
	void HandleMinigameStarted(); // (Final | Native | Public)
};

