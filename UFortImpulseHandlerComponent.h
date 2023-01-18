// Class /Script/FortniteGame.FortImpulseHandlerComponent
// Size: 0xb8
class UFortImpulseHandlerComponent : public UActorComponent
{
	struct FMulticastInlineDelegate ImpulseChangedEvent; // 0xa0 (0x10)
	class UFortAthenaImpulseResponseSet* ImpulseResponseSet; // 0xb0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortImpulseHandlerComponent.HandleImpulsed (Underlying native function: HandleImpulsed 0x86e9020)
	void HandleImpulsed(struct FVector& ImpulsePoint, struct FVector& ImpulseValue, struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& InEffectContext, class AController*& InEventInstigator, class AActor*& InImpulseCauser); // (Final | Native | Private | HasOutParms | HasDefaults)
};

