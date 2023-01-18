// Class /Script/AudioMotorSimStandardComponents.RpmCurveMotorSimComponent
// Size: 0xe0
class URpmCurveMotorSimComponent : public UAudioMotorSimComponent
{
	struct TArray<struct FMotorSimGearCurve> Gears; // 0xa8 (0x10)
	float InterpSpeed; // 0xb8 (0x4)
	unsigned char unreflected_bc[0x4]; // 0xbc (0x4) 
	struct FMulticastInlineDelegate OnUpShift; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnDownShift; // 0xd0 (0x10)
};

