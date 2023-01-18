// Class /Script/GameplayCameras.PerlinNoiseCameraShakePattern
// Size: 0xb8
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{
	float LocationAmplitudeMultiplier; // 0x38 (0x4)
	float LocationFrequencyMultiplier; // 0x3c (0x4)
	struct FPerlinNoiseShaker* X; // 0x40 (0x8)
	struct FPerlinNoiseShaker* Y; // 0x48 (0x8)
	struct FPerlinNoiseShaker* Z; // 0x50 (0x8)
	float RotationAmplitudeMultiplier; // 0x58 (0x4)
	float RotationFrequencyMultiplier; // 0x5c (0x4)
	struct FPerlinNoiseShaker* Pitch; // 0x60 (0x8)
	struct FPerlinNoiseShaker* Yaw; // 0x68 (0x8)
	struct FPerlinNoiseShaker* Roll; // 0x70 (0x8)
	struct FPerlinNoiseShaker* FOV; // 0x78 (0x8)
	unsigned char padding_80[0x38]; // 0x80 (0x38)
};

