// Class /Script/AudioMotorSimStandardComponents.RevLimiterMotorSimComponent
// Size: 0xf0
class URevLimiterMotorSimComponent : public UAudioMotorSimComponent
{
	float LimitTime; // 0xa8 (0x4)
	float DecelScale; // 0xac (0x4)
	float AirMaxThrottleTime; // 0xb0 (0x4)
	float SideSpeedThreshold; // 0xb4 (0x4)
	float LimiterMaxRpm; // 0xb8 (0x4)
	unsigned char unreflected_bc[0x4]; // 0xbc (0x4) 
	struct FMulticastInlineDelegate OnRevLimiterHit; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnRevLimiterStateChanged; // 0xd0 (0x10)
	unsigned char padding_e0[0x10]; // 0xe0 (0x10)
};

