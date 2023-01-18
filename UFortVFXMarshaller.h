// Class /Script/FortniteGame.FortVFXMarshaller
// Size: 0x188
class UFortVFXMarshaller : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct FMarshalledVFXAuthoredData AuthoredData; // 0xa8 (0x70)
	struct FMarshalledVFXRuntimeData RuntimeData; // 0x118 (0x68)
	unsigned char padding_180[0x8]; // 0x180 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortVFXMarshaller.Setup (Underlying native function: Setup 0x88660b8)
	void Setup(); // (Final | BlueprintCosmetic | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortVFXMarshaller.DeactivateAll (Underlying native function: DeactivateAll 0x8860618)
	void DeactivateAll(); // (Final | BlueprintCosmetic | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortVFXMarshaller.Cleanup (Underlying native function: Cleanup 0x886041c)
	void Cleanup(); // (Final | BlueprintCosmetic | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortVFXMarshaller.ActivateAll (Underlying native function: ActivateAll 0x885d3fc)
	void ActivateAll(); // (Final | BlueprintCosmetic | Native | Protected | BlueprintCallable)
};

