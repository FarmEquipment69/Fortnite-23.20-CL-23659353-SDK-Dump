// Class /Script/FortniteGame.FortFXCustomizationComponent
// Size: 0xc0
class UFortFXCustomizationComponent : public UGameFrameworkComponent
{
	struct FMulticastInlineDelegate OnFXCustomizationApplied; // 0xa0 (0x10)
	struct TArray<struct FParticleParamterVariant> ParticleParams; // 0xb0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortFXCustomizationComponent.ApplyFXCustomizationToComponent (Underlying native function: ApplyFXCustomizationToComponent 0x86e8060)
	static bool ApplyFXCustomizationToComponent(class AActor*& SourceActor, class UFXSystemComponent*& TargetFXComp); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXCustomizationComponent.ApplyFXCustomizationToActor (Underlying native function: ApplyFXCustomizationToActor 0x86e7eec)
	static bool ApplyFXCustomizationToActor(class AActor*& SourceActor, class AActor*& TargetActor, bool& bApplyToChildActors); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXCustomizationComponent.ApplyFXCustomizationInternal (Underlying native function: ApplyFXCustomizationInternal 0x86e7cf4)
	bool ApplyFXCustomizationInternal(class UFXSystemComponent*& TargetFXComp); // (Final | Native | Protected | BlueprintCallable)
};

