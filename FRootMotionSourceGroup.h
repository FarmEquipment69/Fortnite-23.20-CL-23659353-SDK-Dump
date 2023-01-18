// ScriptStruct /Script/Engine.RootMotionSourceGroup
// Size: 0x48
struct FRootMotionSourceGroup
{
	unsigned char bHasAdditiveSources; // 0x28 (0x1)
	unsigned char bHasOverrideSources; // 0x28 (0x1)
	unsigned char bHasOverrideSourcesWithIgnoreZAccumulate; // 0x28 (0x1)
	unsigned char bIsAdditiveVelocityApplied; // 0x28 (0x1)
	struct FRootMotionSourceSettings LastAccumulatedSettings; // 0x29 (0x1)
	unsigned char unreflected_2a[0x6]; // 0x2a (0x6) 
	struct FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x30 (0x18)
};

