// ScriptStruct /Script/FortniteGame.FortAnimInput_TurnCorrection
// Size: 0x34
struct FFortAnimInput_TurnCorrection
{
	struct FFortCachedFloatCurve* RotationCurve; // 0x0 (0x8)
	float MaxYawCorrectionOffset; // 0x8 (0x4)
	float CharacterMeshYawOffset; // 0xc (0x4)
	float CurveMultiplier; // 0x10 (0x4)
	bool bEnableDebug; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	float YawCorrectionOffset; // 0x18 (0x4)
	float CharacterInitialWorldYaw; // 0x1c (0x4)
	float CharacterWorldYawLastFrame; // 0x20 (0x4)
	float AccumulatedAnimationYaw; // 0x24 (0x4)
	float TotalYawFromCurve; // 0x28 (0x4)
	float RotationCurveYawLastFrame; // 0x2c (0x4)
	bool bIsTurnFinished; // 0x30 (0x1)
	unsigned char padding_31[0x3]; // 0x31 (0x3)
};

