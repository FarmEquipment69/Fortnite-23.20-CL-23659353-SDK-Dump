// Class /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent
// Size: 0xf8
class UFortAthenaLinearEncounterAnalyticComponent : public UActorComponent
{
	unsigned char unreflected_f8[0xf8]; 

	/* Functions */

	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnStageCompleted (Underlying native function: OnStageCompleted 0x723b5f8)
	void OnStageCompleted(struct TArray<class AFortPickup*>& SpawnedRewards); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnEncounterStart (Underlying native function: OnEncounterStart 0x70dc290)
	void OnEncounterStart(class UFortAthenaLivingWorldEncounterInstance*& InAttackerEncounter, class UFortAthenaLivingWorldEncounterInstance*& InDefenderEncounter); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnEncounterEnd (Underlying native function: OnEncounterEnd 0x26daa0c)
	void OnEncounterEnd(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderSpawned (Underlying native function: OnDefenderSpawned 0x723b220)
	void OnDefenderSpawned(class AActor*& SpawnedDefender); // (Final | Native | Private)

	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDied (Underlying native function: OnDefenderDied 0x723af60)
	void OnDefenderDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDidDamage (Underlying native function: OnDefenderDidDamage 0x723acf0)
	void OnDefenderDidDamage(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDamaged (Underlying native function: OnDefenderDamaged 0x723aa90)
	void OnDefenderDamaged(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnAttackerSpawned (Underlying native function: OnAttackerSpawned 0x723a330)
	void OnAttackerSpawned(class AActor*& SpawnedAttacker); // (Final | Native | Private)
};

