// Class /Script/FortniteGame.FortGamepadSettings
// Size: 0x1f0
class UFortGamepadSettings : public UDataAsset
{
	class UCurveFloat* GamepadLookCurve; // 0x30 (0x8)
	class UCurveFloat* GamepadLookSensitivityCurve; // 0x38 (0x8)
	struct FVector2D GamepadLookScale; // 0x40 (0x10)
	float GamepadLookScaleDownsights; // 0x50 (0x4)
	float GamepadLookScaleScope; // 0x54 (0x4)
	float GamepadLookScaleDownsightsDecayTime; // 0x58 (0x4)
	float AimAssistStrength; // 0x5c (0x4)
	float AimAssistStrengthDownsights; // 0x60 (0x4)
	float AimAssistStrengthDBNO; // 0x64 (0x4)
	float GamepadLookAccelTime; // 0x68 (0x4)
	float GamepadLookDecelTime; // 0x6c (0x4)
	float AimAssistPullStrength; // 0x70 (0x4)
	float AimAssistPullMaxRate; // 0x74 (0x4)
	float AimAssistPullRampUpTime; // 0x78 (0x4)
	float AimAssistPullDecayTime; // 0x7c (0x4)
	float AimAssistInitialDownsightStrength; // 0x80 (0x4)
	float AimAssistInitialDownsightTime; // 0x84 (0x4)
	float SlowMinDistance; // 0x88 (0x4)
	float SlowMinStrength; // 0x8c (0x4)
	float SlowMaxDistance; // 0x90 (0x4)
	float SlowMaxStrength; // 0x94 (0x4)
	float SlowDecayTime; // 0x98 (0x4)
	float EditModePullStrengthStationary; // 0x9c (0x4)
	float EditModePullStrengthMovingNewTile; // 0xa0 (0x4)
	float EditModePullStrengthMovingWithinTile; // 0xa4 (0x4)
	float EditModePullMinDistance; // 0xa8 (0x4)
	float EditModePullMaxDistance; // 0xac (0x4)
	float EditModePullScaleFlat; // 0xb0 (0x4)
	float EditModePullMaxRate; // 0xb4 (0x4)
	float EditModeSlowMinDistance; // 0xb8 (0x4)
	float EditModeSlowMinStrength; // 0xbc (0x4)
	float EditModeSlowMaxDistance; // 0xc0 (0x4)
	float EditModeSlowMaxStrength; // 0xc4 (0x4)
	struct FFortAbilityTargetSelection AimAssistTargetSelection; // 0xc8 (0x128)
};

