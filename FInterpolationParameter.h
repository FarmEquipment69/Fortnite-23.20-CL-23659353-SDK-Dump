// ScriptStruct /Script/Engine.InterpolationParameter
// Size: 0x10
struct FInterpolationParameter
{
	float InterpolationTime; // 0x0 (0x4)
	float DampingRatio; // 0x4 (0x4)
	float MaxSpeed; // 0x8 (0x4)
	struct TEnumAsByte<EFilterInterpolationType> InterpolationType; // 0xc (0x1)
	unsigned char padding_d[0x3]; // 0xd (0x3)
};

