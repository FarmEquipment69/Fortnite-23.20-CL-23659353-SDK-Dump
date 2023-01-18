// Class /Script/FortniteGame.FortControllerComponent_SkydiveFeedback
// Size: 0x4f0
class UFortControllerComponent_SkydiveFeedback : public UFortControllerComponent_HasCoupledWidgets
{
	unsigned char unreflected_b0[0x58]; // 0xb0 (0x58) 
	class ULegacyCameraShake* SkydiveCamShake; // 0x108 (0x8)
	class UClass* SkydiveCamShakeClass; // 0x110 (0x8)
	float DropSpeedForMinShakeMultiplier; // 0x118 (0x4)
	float DropSpeedForMaxShakeMultiplier; // 0x11c (0x4)
	float DropSpeedBlendExponent; // 0x120 (0x4)
	float CachedSkydiveDropSpeedMin; // 0x124 (0x4)
	float CachedSkydiveDropSpeedMax; // 0x128 (0x4)
	unsigned char unreflected_12c[0x4]; // 0x12c (0x4) 
	struct FScalableFloat RotOscPitchMinAmplitude; // 0x130 (0x28)
	struct FScalableFloat RotOscPitchMaxAmplitude; // 0x158 (0x28)
	struct FScalableFloat RotOscYawMinAmplitude; // 0x180 (0x28)
	struct FScalableFloat RotOscYawMaxAmplitude; // 0x1a8 (0x28)
	struct FScalableFloat RotOscRollMinAmplitude; // 0x1d0 (0x28)
	struct FScalableFloat RotOscRollMaxAmplitude; // 0x1f8 (0x28)
	struct FScalableFloat RotOscPitchMinFreq; // 0x220 (0x28)
	struct FScalableFloat RotOscPitchMaxFreq; // 0x248 (0x28)
	struct FScalableFloat RotOscYawMinFreq; // 0x270 (0x28)
	struct FScalableFloat RotOscYawMaxFreq; // 0x298 (0x28)
	struct FScalableFloat RotOscRollMinFreq; // 0x2c0 (0x28)
	struct FScalableFloat RotOscRollMaxFreq; // 0x2e8 (0x28)
	struct FScalableFloat TransOscXMinAmplitude; // 0x310 (0x28)
	struct FScalableFloat TransOscXMaxAmplitude; // 0x338 (0x28)
	struct FScalableFloat TransOscYMinAmplitude; // 0x360 (0x28)
	struct FScalableFloat TransOscYMaxAmplitude; // 0x388 (0x28)
	struct FScalableFloat TransOscZMinAmplitude; // 0x3b0 (0x28)
	struct FScalableFloat TransOscZMaxAmplitude; // 0x3d8 (0x28)
	struct FScalableFloat TransOscXMinFreq; // 0x400 (0x28)
	struct FScalableFloat TransOscXMaxFreq; // 0x428 (0x28)
	struct FScalableFloat TransOscYMinFreq; // 0x450 (0x28)
	struct FScalableFloat TransOscYMaxFreq; // 0x478 (0x28)
	struct FScalableFloat TransOscZMinFreq; // 0x4a0 (0x28)
	struct FScalableFloat TransOscZMaxFreq; // 0x4c8 (0x28)
};

