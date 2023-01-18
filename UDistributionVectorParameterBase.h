// Class /Script/Engine.DistributionVectorParameterBase
// Size: 0xc8
class UDistributionVectorParameterBase : public UDistributionVectorConstant
{
	struct FName ParameterName; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FVector MinInput; // 0x60 (0x18)
	struct FVector MaxInput; // 0x78 (0x18)
	struct FVector MinOutput; // 0x90 (0x18)
	struct FVector MaxOutput; // 0xa8 (0x18)
	struct TEnumAsByte<DistributionParamMode> ParamModes[0x3]; // 0xc0 (0x1) (ARRAY) 
	unsigned char padding_c3[0x5]; // 0xc3 (0x5)
};

