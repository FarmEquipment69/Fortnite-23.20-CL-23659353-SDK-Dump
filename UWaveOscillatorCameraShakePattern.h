// Class /Script/GameplayCameras.WaveOscillatorCameraShakePattern
// Size: 0xd8
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{
	float LocationAmplitudeMultiplier; // 0x38 (0x4)
	float LocationFrequencyMultiplier; // 0x3c (0x4)
	struct FWaveOscillator X; // 0x40 (0xc)
	struct FWaveOscillator Y; // 0x4c (0xc)
	struct FWaveOscillator Z; // 0x58 (0xc)
	float RotationAmplitudeMultiplier; // 0x64 (0x4)
	float RotationFrequencyMultiplier; // 0x68 (0x4)
	struct FWaveOscillator Pitch; // 0x6c (0xc)
	struct FWaveOscillator Yaw; // 0x78 (0xc)
	struct FWaveOscillator Roll; // 0x84 (0xc)
	struct FWaveOscillator FOV; // 0x90 (0xc)
	unsigned char padding_9c[0x3c]; // 0x9c (0x3c)
};

