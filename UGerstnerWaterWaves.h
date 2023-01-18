// Class /Script/Water.GerstnerWaterWaves
// Size: 0x48
class UGerstnerWaterWaves : public UWaterWaves
{
	class UGerstnerWaterWaveGeneratorBase* GerstnerWaveGenerator; // 0x28 (0x8)
	struct TArray<struct FGerstnerWave> GerstnerWaves; // 0x30 (0x10)
	float MaxWaveHeight; // 0x40 (0x4)
	unsigned char padding_44[0x4]; // 0x44 (0x4)
};

