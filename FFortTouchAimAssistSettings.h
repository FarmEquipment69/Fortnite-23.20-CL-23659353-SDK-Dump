// ScriptStruct /Script/FortniteGame.FortTouchAimAssistSettings
// Size: 0x68
struct FFortTouchAimAssistSettings
{
	float AssistReticleWidth; // 0x0 (0x4)
	float AssistReticleHeight; // 0x4 (0x4)
	float AutoFireReticleWidth; // 0x8 (0x4)
	float AutoFireReticleHeight; // 0xc (0x4)
	struct FVector2D AutofireTargetSizeReduction; // 0x10 (0x10)
	float AutoFireTrackingReticleWidth; // 0x20 (0x4)
	float AutoFireTrackingReticleHeight; // 0x24 (0x4)
	float TargetingReticleWidth; // 0x28 (0x4)
	float TargetingReticleHeight; // 0x2c (0x4)
	float TargetRange; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	class UCurveFloat* TargetWeightCurve; // 0x38 (0x8)
	class UCurveFloat* PullStrengthYawCurve; // 0x40 (0x8)
	class UCurveFloat* PullStrengthPitchCurve; // 0x48 (0x8)
	float PullMaxRate; // 0x50 (0x4)
	float AutoTrackDuration; // 0x54 (0x4)
	float AutoTrackPullStrength; // 0x58 (0x4)
	float ProjectileMinSpeedForAssist; // 0x5c (0x4)
	float ProjectileMaxLookAheadTime; // 0x60 (0x4)
	unsigned char padding_64[0x4]; // 0x64 (0x4)
};

