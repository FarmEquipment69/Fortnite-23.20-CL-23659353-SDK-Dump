// Class /Script/NevadaRuntime.FortCameraMode_Nevada
// Size: 0x1ba0
class UFortCameraMode_Nevada : public UFortCameraMode_AthenaVehicle
{
	unsigned char unreflected_1b30[0x28]; // 0x1b30 (0x28) 
	struct FVector TractorBeamCameraOffset; // 0x1b58 (0x18)
	float TractorBeamCameraLerpTime; // 0x1b70 (0x4)
	float TractorBeamCameraExtraPitch; // 0x1b74 (0x4)
	float TractorBeamInactiveCameraExtraPitch; // 0x1b78 (0x4)
	float TractorBeamCameraPositionResetDelay; // 0x1b7c (0x4)
	float MinPitchForOffset; // 0x1b80 (0x4)
	float MaxPitchForOffset; // 0x1b84 (0x4)
	struct FVector ExtraOffset; // 0x1b88 (0x18)
};

