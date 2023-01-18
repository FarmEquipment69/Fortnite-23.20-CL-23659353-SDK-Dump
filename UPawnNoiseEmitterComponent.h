// Class /Script/Engine.PawnNoiseEmitterComponent
// Size: 0xd8
class UPawnNoiseEmitterComponent : public UActorComponent
{
	unsigned char bAIPerceptionSystemCompatibilityMode; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct FVector LastRemoteNoisePosition; // 0xa8 (0x18)
	float NoiseLifetime; // 0xc0 (0x4)
	float LastRemoteNoiseVolume; // 0xc4 (0x4)
	float LastRemoteNoiseTime; // 0xc8 (0x4)
	float LastLocalNoiseVolume; // 0xcc (0x4)
	float LastLocalNoiseTime; // 0xd0 (0x4)
	unsigned char padding_d4[0x4]; // 0xd4 (0x4)

	/* Functions */

	// Function /Script/Engine.PawnNoiseEmitterComponent.MakeNoise (Underlying native function: MakeNoise 0x9cf7d40)
	void MakeNoise(class AActor*& NoiseMaker, float& Loudness, struct FVector& NoiseLocation); // (BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

