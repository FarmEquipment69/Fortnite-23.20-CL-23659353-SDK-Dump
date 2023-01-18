// ScriptStruct /Script/Engine.RootMotionFinishVelocitySettings
// Size: 0x28
struct FRootMotionFinishVelocitySettings
{
	enum ERootMotionFinishVelocityMode Mode; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FVector SetVelocity; // 0x8 (0x18)
	float ClampVelocity; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

