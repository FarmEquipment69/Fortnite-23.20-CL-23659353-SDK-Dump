// Class /Script/FortniteGame.FortPawnComponent_Disguise
// Size: 0xc8
class UFortPawnComponent_Disguise : public UFortPawnComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	class UFortAthenaAIRuntimeParameters_AIBotDisguise* CachedAIDisguiseParameters; // 0xa8 (0x8)
	class UFortAthenaAIRuntimeParameters_NPCBehavior* CachedNPCBehaviorParameters; // 0xb0 (0x8)
	float PlayerDetectedTimestamp; // 0xb8 (0x4)
	float RevealPlayerProximityDuration; // 0xbc (0x4)
	class UFortGameStateComponent_AffiliationManager* AffiliationManager; // 0xc0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPawnComponent_Disguise.RevealDisguise (Underlying native function: RevealDisguise 0x87024d8)
	void RevealDisguise(class AActor*& RevealInstigator, enum EFortPawnComponent_DisguiseRevealReason& RevealReason); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawnComponent_Disguise.OnOwnerPawnDamaged (Underlying native function: OnOwnerPawnDamaged 0x8701d04)
	void OnOwnerPawnDamaged(class AActor*& DamageOnOwnerPawnDamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteGame.FortPawnComponent_Disguise.CanBeRevealed (Underlying native function: CanBeRevealed 0x86fff20)
	bool CanBeRevealed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

