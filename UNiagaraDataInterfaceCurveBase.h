// Class /Script/Niagara.NiagaraDataInterfaceCurveBase
// Size: 0x70
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
	struct TArray<float> ShaderLUT; // 0x38 (0x10)
	float LUTMinTime; // 0x48 (0x4)
	float LUTMaxTime; // 0x4c (0x4)
	float LUTInvTimeRange; // 0x50 (0x4)
	float LUTNumSamplesMinusOne; // 0x54 (0x4)
	unsigned char unreflected_58[0x4]; // 0x58 (0x4) 
	unsigned char bUseLUT; // 0x5c (0x1)
	unsigned char bExposeCurve; // 0x5c (0x1)
	unsigned char unreflected_5d[0x3]; // 0x5d (0x3) 
	struct FName ExposedName; // 0x60 (0x4)
	unsigned char unreflected_64[0x4]; // 0x64 (0x4) 
	class UTexture2D* ExposedTexture; // 0x68 (0x8)
};

