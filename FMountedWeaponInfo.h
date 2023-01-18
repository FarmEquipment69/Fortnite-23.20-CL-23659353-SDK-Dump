// ScriptStruct /Script/FortniteGame.MountedWeaponInfo
// Size: 0x40
struct FMountedWeaponInfo
{
	struct TArray<class AActor*> TraceIgnoreActors; // 0x0 (0x10)
	float ThirdPersonDistanceCorrection; // 0x10 (0x4)
	float ThirdPersonDistanceCorrectionPawn; // 0x14 (0x4)
	enum EFortAbilityTargetingSource DamageStartFromSourceTowardFocus; // 0x18 (0x1)
	bool bUseMountedWeaponAimRotOverride; // 0x19 (0x1)
	bool bUseAimingClampAngles; // 0x1a (0x1)
	unsigned char unreflected_1b[0x1]; // 0x1b (0x1) 
	float MaximumPitchAimingAngle; // 0x1c (0x4)
	float MinimumPitchAimingAngle; // 0x20 (0x4)
	bool bTargetSourceFromVehicleMuzzle; // 0x24 (0x1)
	unsigned char unreflected_25[0x3]; // 0x25 (0x3) 
	float MinReticleAlphaForAimInterpolation; // 0x28 (0x4)
	float MinAimAngleDiffForReticleAlpha; // 0x2c (0x4)
	float MaxAimAngleDiffForReticleAlpha; // 0x30 (0x4)
	bool bIgnoreHostVehicleInWeaponTrace; // 0x34 (0x1)
	bool bNeedsVehicleAttachment; // 0x35 (0x1)
	unsigned char unreflected_36[0x2]; // 0x36 (0x2) 
	int AttachAttemptCount; // 0x38 (0x4)
	struct FName MuzzleFallbackSocketName; // 0x3c (0x4)
};

