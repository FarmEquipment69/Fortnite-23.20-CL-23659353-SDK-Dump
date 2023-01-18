// Class /Script/Engine.Emitter
// Size: 0x2d8
class AEmitter : public AActor
{
	class UParticleSystemComponent* ParticleSystemComponent; // 0x288 (0x8)
	unsigned char bDestroyOnSystemFinish; // 0x290 (0x1)
	unsigned char bPostUpdateTickGroup; // 0x290 (0x1)
	unsigned char bCurrentlyActive; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	struct FMulticastInlineDelegate OnParticleSpawn; // 0x298 (0x10)
	struct FMulticastInlineDelegate OnParticleBurst; // 0x2a8 (0x10)
	struct FMulticastInlineDelegate OnParticleDeath; // 0x2b8 (0x10)
	struct FMulticastInlineDelegate OnParticleCollide; // 0x2c8 (0x10)

	/* Functions */

	// Function /Script/Engine.Emitter.ToggleActive (Underlying native function: ToggleActive 0x9e929e0)
	void ToggleActive(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Emitter.SetVectorParameter (Underlying native function: SetVectorParameter 0x9e92908)
	void SetVectorParameter(struct FName& ParameterName, struct FVector& Param); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Emitter.SetTemplate (Underlying native function: SetTemplate 0x72ed728)
	void SetTemplate(class UParticleSystem*& NewTemplate); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Emitter.SetMaterialParameter (Underlying native function: SetMaterialParameter 0x9e92844)
	void SetMaterialParameter(struct FName& ParameterName, class UMaterialInterface*& Param); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Emitter.SetFloatParameter (Underlying native function: SetFloatParameter 0x9e92778)
	void SetFloatParameter(struct FName& ParameterName, float& Param); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Emitter.SetColorParameter (Underlying native function: SetColorParameter 0x9e926ac)
	void SetColorParameter(struct FName& ParameterName, struct FLinearColor& Param); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Emitter.SetActorParameter (Underlying native function: SetActorParameter 0x9e925e4)
	void SetActorParameter(struct FName& ParameterName, class AActor*& Param); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Emitter.OnRep_bCurrentlyActive (Underlying native function: OnRep_bCurrentlyActive 0x22c0e58)
	void OnRepbCurrentlyActive(); // (Native | Public)

	// Function /Script/Engine.Emitter.OnParticleSystemFinished (Underlying native function: OnParticleSystemFinished 0x29a4fb4)
	void OnParticleSystemFinished(class UParticleSystemComponent*& FinishedComponent); // (Native | Public)

	// Function /Script/Engine.Emitter.IsActive (Underlying native function: IsActive 0x9e925b4)
	bool IsActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Emitter.Deactivate (Underlying native function: Deactivate 0x9e92580)
	void Deactivate(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Emitter.Activate (Underlying native function: Activate 0x9e9256c)
	void Activate(); // (Final | Native | Public | BlueprintCallable)
};

