// ScriptStruct /Script/Engine.RootMotionSource
// Size: 0xe0
struct FRootMotionSource
{
	uint16_t Priority; // 0x10 (0x2)
	uint16_t LocalID; // 0x12 (0x2)
	enum ERootMotionAccumulateMode AccumulateMode; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	struct FName InstanceName; // 0x18 (0x4)
	float StartTime; // 0x1c (0x4)
	float CurrentTime; // 0x20 (0x4)
	float PreviousTime; // 0x24 (0x4)
	float Duration; // 0x28 (0x4)
	struct FRootMotionSourceStatus Status; // 0x2c (0x1)
	struct FRootMotionSourceSettings Settings; // 0x2d (0x1)
	bool bInLocalSpace; // 0x2e (0x1)
	unsigned char unreflected_2f[0x11]; // 0x2f (0x11) 
	struct FRootMotionMovementParams RootMotionParams; // 0x40 (0x70)
	struct FRootMotionFinishVelocitySettings FinishVelocityParams; // 0xb0 (0x28)
	unsigned char padding_d8[0x8]; // 0xd8 (0x8)
};

