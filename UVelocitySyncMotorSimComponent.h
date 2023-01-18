// Class /Script/AudioMotorSimStandardComponents.VelocitySyncMotorSimComponent
// Size: 0x150
class UVelocitySyncMotorSimComponent : public UAudioMotorSimComponent
{
	float NoThrottleTime; // 0xa8 (0x4)
	float SpeedThreshold; // 0xac (0x4)
	struct FRuntimeFloatCurve SpeedToRpmCurve; // 0xb0 (0x88)
	float InterpSpeed; // 0x138 (0x4)
	float InterpTime; // 0x13c (0x4)
	float FirstGearThrottleThreshold; // 0x140 (0x4)
	unsigned char padding_144[0xc]; // 0x144 (0xc)
};

