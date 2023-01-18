// Class /Script/AudioMotorSimStandardComponents.ThrottleStateMotorSimComponent
// Size: 0xe8
class UThrottleStateMotorSimComponent : public UAudioMotorSimComponent
{
	struct FMulticastInlineDelegate OnThrottleEngaged; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnThrottleReleased; // 0xb8 (0x10)
	struct FMulticastInlineDelegate OnEngineBlowoff; // 0xc8 (0x10)
	float BlowoffMinThrottleTime; // 0xd8 (0x4)
	unsigned char padding_dc[0xc]; // 0xdc (0xc)
};

