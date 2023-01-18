// ScriptStruct /Script/TankRuntime.TankWeaponAimingData
// Size: 0x1c0
struct FTankWeaponAimingData
{
	int SeatIndex; // 0x0 (0x4)
	bool bAimRotationLerpWithEasing; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct FScalableFloat AimRotationLerpSpeed; // 0x8 (0x28)
	struct FRuntimeFloatCurve AimYawRotationEasingCurve; // 0x30 (0x88)
	struct FRuntimeFloatCurve AimPitchRotationEasingCurve; // 0xb8 (0x88)
	struct TEnumAsByte<ETankAimingMode> AimingMode; // 0x140 (0x1)
	unsigned char unreflected_141[0x7]; // 0x141 (0x7) 
	struct FScalableFloat AimingCameraToMuzzleDistanceScalar; // 0x148 (0x28)
	struct FScalableFloat AimingWhileTargetingCameraToMuzzleDistanceScalar; // 0x170 (0x28)
	struct FScalableFloat AimingPitchAdjust; // 0x198 (0x28)
};

