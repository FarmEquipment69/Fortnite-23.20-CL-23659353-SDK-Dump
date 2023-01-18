// Class /Script/Engine.CameraLensEffectInterface
// Size: 0x28
class ICameraLensEffectInterface : public IInterface
{

	/* Functions */

	// Function /Script/Engine.CameraLensEffectInterface.GetPrimaryParticleComponent (Underlying native function: GetPrimaryParticleComponent 0x85a34dc)
	class UFXSystemComponent* GetPrimaryParticleComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CameraLensEffectInterface.GetParticleComponents (Underlying native function: GetParticleComponents 0x9c9bc50)
	struct TArray<class UFXSystemComponent*> GetParticleComponents(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

