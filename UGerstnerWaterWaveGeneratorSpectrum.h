// Class /Script/Water.GerstnerWaterWaveGeneratorSpectrum
// Size: 0x40
class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
{
	enum EWaveSpectrumType SpectrumType; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct TArray<struct FGerstnerWaveOctave> Octaves; // 0x30 (0x10)
};

