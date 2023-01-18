// ScriptStruct /Script/AnimGraphRuntime.SimSpaceSettings
// Size: 0x68
struct FSimSpaceSettings
{
	float WorldAlpha; // 0x0 (0x4)
	float VelocityScaleZ; // 0x4 (0x4)
	float MaxLinearVelocity; // 0x8 (0x4)
	float MaxAngularVelocity; // 0xc (0x4)
	float MaxLinearAcceleration; // 0x10 (0x4)
	float MaxAngularAcceleration; // 0x14 (0x4)
	float ExternalLinearDrag; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FVector ExternalLinearDragV; // 0x20 (0x18)
	struct FVector ExternalLinearVelocity; // 0x38 (0x18)
	struct FVector ExternalAngularVelocity; // 0x50 (0x18)
};

