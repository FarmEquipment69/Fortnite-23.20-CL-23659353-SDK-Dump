// Class /Script/FieldSystemEngine.WaveScalar
// Size: 0xd0
class UWaveScalar : public UFieldNodeFloat
{
	float Magnitude; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	struct FVector Position; // 0xa8 (0x18)
	float WaveLength; // 0xc0 (0x4)
	float Period; // 0xc4 (0x4)
	struct TEnumAsByte<EWaveFunctionType> Function; // 0xc8 (0x1)
	struct TEnumAsByte<EFieldFalloffType> Falloff; // 0xc9 (0x1)
	unsigned char padding_ca[0x6]; // 0xca (0x6)

	/* Functions */

	// Function /Script/FieldSystemEngine.WaveScalar.SetWaveScalar (Underlying native function: SetWaveScalar 0x2519d1c)
	class UWaveScalar* SetWaveScalar(float& Magnitude, struct FVector& Position, float& WaveLength, float& Period, float& Time, struct TEnumAsByte<EWaveFunctionType>& Function, struct TEnumAsByte<EFieldFalloffType>& Falloff); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)
};

