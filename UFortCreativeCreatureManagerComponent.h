// Class /Script/FortniteAI.FortCreativeCreatureManagerComponent
// Size: 0x160
class UFortCreativeCreatureManagerComponent : public UActorComponent
{
	struct TArray<class UFortCreativeCreatureManagerInfoComponent*> CreatureManagerInfos; // 0xa0 (0x10)
	struct TMap<struct TWeakObjectPtr<class UClass>, class UFortCreativeCreatureManagerInfoComponent*> EnabledCreatureManagerInfos; // 0xb0 (0x50)
	unsigned char padding_100[0x60]; // 0x100 (0x60)

	/* Functions */

	// Function /Script/FortniteAI.FortCreativeCreatureManagerComponent.OnInfoComponentRemoved (Underlying native function: OnInfoComponentRemoved 0xa2c1e3c)
	void OnInfoComponentRemoved(class UFortCreativeCreatureManagerInfoComponent*& CreatureManagerInfoComponent); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerComponent.OnInfoComponentAdded (Underlying native function: OnInfoComponentAdded 0xa2c1d90)
	void OnInfoComponentAdded(class UFortCreativeCreatureManagerInfoComponent*& CreatureManagerInfoComponent); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerComponent.OnAIPawnDied (Underlying native function: OnAIPawnDied 0xa2c19c8)
	void OnAIPawnDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)
};

