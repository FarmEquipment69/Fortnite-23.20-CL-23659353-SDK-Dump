// Class /Script/FortniteGame.FortGameplayAbility_ObserveDuels
// Size: 0xb30
class UFortGameplayAbility_ObserveDuels : public UFortGameplayAbility
{
	unsigned char unreflected_b30[0xb30]; 

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbility_ObserveDuels.OnDuelChange (Has no native function)
	void OnDuelChange(enum EDuelState& NewDuelState, struct FDuelOverlayData& ChangedDuelOverlayData); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility_ObserveDuels.HandleDuelistDeath (Underlying native function: HandleDuelistDeath 0x8122c68)
	void HandleDuelistDeath(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteGame.FortGameplayAbility_ObserveDuels.AddDuel (Underlying native function: AddDuel 0x811e60c)
	void AddDuel(class AFortPlayerPawn*& ChallengerPlayerPawn, class AFortPlayerPawn*& ChallengedNPC); // (Final | Native | Public | BlueprintCallable)
};

