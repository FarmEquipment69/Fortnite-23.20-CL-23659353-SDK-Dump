// Class /Script/RockVehicleRuntime.RockVehicleCameraMode
// Size: 0x1d30
class URockVehicleCameraMode : public UFortCameraMode_AthenaVehicle
{
	float SwivelPitchMax; // 0x1b30 (0x4)
	float SwivelYawMax; // 0x1b34 (0x4)
	float GroundNormalInterpRate; // 0x1b38 (0x4)
	float GroundNormalAirInterpRate; // 0x1b3c (0x4)
	float GroundYawRate; // 0x1b40 (0x4)
	float WallYawRate; // 0x1b44 (0x4)
	float InterpToGroundTime; // 0x1b48 (0x4)
	float InterpToAirTime; // 0x1b4c (0x4)
	float AverageVelocityInterpRate; // 0x1b50 (0x4)
	unsigned char unreflected_1b54[0x4]; // 0x1b54 (0x4) 
	struct FRuntimeFloatCurve AirRotationInterpRateForSpeed; // 0x1b58 (0x88)
	float FocusOffsetInterpRate; // 0x1be0 (0x4)
	float DistanceSpeedScale; // 0x1be4 (0x4)
	float DistanceOffsetMin; // 0x1be8 (0x4)
	float DistanceOffsetMax; // 0x1bec (0x4)
	float DistanceInterpRate; // 0x1bf0 (0x4)
	float MaxSpeedFOVOffset; // 0x1bf4 (0x4)
	float SupersonicFOVOffset; // 0x1bf8 (0x4)
	float FOVInterpRate; // 0x1bfc (0x4)
	struct FRockCameraSettings CameraSettings; // 0x1c00 (0x1c)
	unsigned char unreflected_1c1c[0x4]; // 0x1c1c (0x4) 
	class ARockVehicle* VehicleTarget; // 0x1c20 (0x8)
	class URockVehicleAbility_Jump* JumpAbility; // 0x1c28 (0x8)
	unsigned char padding_1c30[0x100]; // 0x1c30 (0x100)
};

