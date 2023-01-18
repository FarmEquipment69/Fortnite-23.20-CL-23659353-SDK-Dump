// Class /Script/Engine.ParticleModuleBeamNoise
// Size: 0x1c0
class UParticleModuleBeamNoise : public UParticleModuleBeamBase
{
	unsigned char bLowFreqEnabled; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	int Frequency; // 0x34 (0x4)
	int FrequencyLowRange; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FRawDistributionVector NoiseRange; // 0x40 (0x60)
	struct FRawDistributionFloat NoiseRangeScale; // 0xa0 (0x30)
	unsigned char bNRScaleEmitterTime; // 0xd0 (0x1)
	unsigned char unreflected_d1[0x7]; // 0xd1 (0x7) 
	struct FRawDistributionVector NoiseSpeed; // 0xd8 (0x60)
	unsigned char bSmooth; // 0x138 (0x1)
	unsigned char unreflected_139[0x3]; // 0x139 (0x3) 
	float NoiseLockRadius; // 0x13c (0x4)
	unsigned char bNoiseLock; // 0x140 (0x1)
	unsigned char bOscillate; // 0x140 (0x1)
	unsigned char unreflected_141[0x3]; // 0x141 (0x3) 
	float NoiseLockTime; // 0x144 (0x4)
	float NoiseTension; // 0x148 (0x4)
	unsigned char bUseNoiseTangents; // 0x14c (0x1)
	unsigned char unreflected_14d[0x3]; // 0x14d (0x3) 
	struct FRawDistributionFloat NoiseTangentStrength; // 0x150 (0x30)
	int NoiseTessellation; // 0x180 (0x4)
	unsigned char bTargetNoise; // 0x184 (0x1)
	unsigned char unreflected_185[0x3]; // 0x185 (0x3) 
	float FrequencyDistance; // 0x188 (0x4)
	unsigned char bApplyNoiseScale; // 0x18c (0x1)
	unsigned char unreflected_18d[0x3]; // 0x18d (0x3) 
	struct FRawDistributionFloat NoiseScale; // 0x190 (0x30)
};

