// Class /Script/FortniteGame.FortMountedTurretConfigs
// Size: 0x910
class UFortMountedTurretConfigs : public UFortPhysicsVehicleConfigs
{
	float CameraShakeAmplitudeMin; // 0x890 (0x4)
	float CameraShakeAmplitudeMax; // 0x894 (0x4)
	float CameraShakeNormalizedSpeed; // 0x898 (0x4)
	float CameraShakeSpeedCurvePow; // 0x89c (0x4)
	float AimInterpSpeed; // 0x8a0 (0x4)
	float InitialCameraInterpSpeed; // 0x8a4 (0x4)
	float InitialCameraLerpTime; // 0x8a8 (0x4)
	float MaxYawPerSecondThreshold; // 0x8ac (0x4)
	float MaxPitchPerSecondThreshold; // 0x8b0 (0x4)
	float PitchConstraintAngleOffset; // 0x8b4 (0x4)
	bool bConstrainVerticalRotationOnly; // 0x8b8 (0x1)
	unsigned char unreflected_8b9[0x7]; // 0x8b9 (0x7) 
	struct FVector LocalAimOffsetWhenPitchedUp; // 0x8c0 (0x18)
	struct FVector LocalAimOffsetWhenPitchedFlat; // 0x8d8 (0x18)
	struct FVector LocalAimOffsetWhenPitchedDown; // 0x8f0 (0x18)
	float PedalCyclesPerFullTurn; // 0x908 (0x4)
	int bWeaponIgnoresMountedTurretBase; // 0x90c (0x4)
};

