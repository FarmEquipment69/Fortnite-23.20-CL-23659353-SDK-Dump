// Class /Script/Engine.DistributionFloatParameterBase
// Size: 0x58
class UDistributionFloatParameterBase : public UDistributionFloatConstant
{
	struct FName ParameterName; // 0x40 (0x4)
	float MinInput; // 0x44 (0x4)
	float MaxInput; // 0x48 (0x4)
	float MinOutput; // 0x4c (0x4)
	float MaxOutput; // 0x50 (0x4)
	struct TEnumAsByte<DistributionParamMode> ParamMode; // 0x54 (0x1)
	unsigned char padding_55[0x3]; // 0x55 (0x3)
};

