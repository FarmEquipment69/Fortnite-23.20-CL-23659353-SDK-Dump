// Class /Script/Water.GerstnerWaterWaveGeneratorSimple
// Size: 0x60
class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
{
	int NumWaves; // 0x28 (0x4)
	int Seed; // 0x2c (0x4)
	float Randomness; // 0x30 (0x4)
	float MinWavelength; // 0x34 (0x4)
	float MaxWavelength; // 0x38 (0x4)
	float WavelengthFalloff; // 0x3c (0x4)
	float MinAmplitude; // 0x40 (0x4)
	float MaxAmplitude; // 0x44 (0x4)
	float AmplitudeFalloff; // 0x48 (0x4)
	float WindAngleDeg; // 0x4c (0x4)
	float DirectionAngularSpreadDeg; // 0x50 (0x4)
	float SmallWaveSteepness; // 0x54 (0x4)
	float LargeWaveSteepness; // 0x58 (0x4)
	float SteepnessFalloff; // 0x5c (0x4)
};

