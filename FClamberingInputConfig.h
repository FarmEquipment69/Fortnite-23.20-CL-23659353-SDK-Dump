// ScriptStruct /Script/ClamberingCodeRuntime.ClamberingInputConfig
// Size: 0x210
struct FClamberingInputConfig
{
	struct FScalableFloat ClamberActivationHorizontalRange; // 0x0 (0x28)
	struct FScalableFloat ClamberActivationVerticalRange; // 0x28 (0x28)
	struct FScalableFloat EnableInputDelay; // 0x50 (0x28)
	struct FScalableFloat QueuedInputWindow; // 0x78 (0x28)
	struct FScalableFloat HeldInputDuration; // 0xa0 (0x28)
	enum EClamberingActivationMode ActivationMode; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x7]; // 0xc9 (0x7) 
	struct FScalableFloat AutoStartMovementThreshold; // 0xd0 (0x28)
	struct FScalableFloat AutoStartLookAtThreshold; // 0xf8 (0x28)
	struct FScalableFloat AutoStartWallCheckCastRadius; // 0x120 (0x28)
	struct FScalableFloat AutoStartWallCheckHorizontalRange; // 0x148 (0x28)
	struct FScalableFloat AutoStartWallCheckLookAtThresholdMultiplier; // 0x170 (0x28)
	struct FScalableFloat TargetInvalidateDistance; // 0x198 (0x28)
	struct FScalableFloat TargetAimInvalidateAngle; // 0x1c0 (0x28)
	struct FScalableFloat TargetActorMovementInvalidateDistance; // 0x1e8 (0x28)
};

