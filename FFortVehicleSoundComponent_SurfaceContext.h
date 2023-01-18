// ScriptStruct /Script/VehicleAudioRuntime.FortVehicleSoundComponent_SurfaceContext
// Size: 0x4c
struct FFortVehicleSoundComponent_SurfaceContext
{
	float BrakingHardStopThreshold; // 0x0 (0x4)
	float BrakingSoftStopThreshold; // 0x4 (0x4)
	struct FName SurfaceParamName; // 0x8 (0x4)
	float SurfaceParamInterpSpeed; // 0xc (0x4)
	int SurfaceID; // 0x10 (0x4)
	struct FName WaterParamName; // 0x14 (0x4)
	float WaterParamInterpSpeed; // 0x18 (0x4)
	struct FName AirParamName; // 0x1c (0x4)
	float AirParamAttackInterpSpeed; // 0x20 (0x4)
	float AirParamReleaseInterpSpeed; // 0x24 (0x4)
	float MinSpeedForSkidFX; // 0x28 (0x4)
	float MaxSpeedForSkidFX; // 0x2c (0x4)
	struct FName SkiddingParamName; // 0x30 (0x4)
	float SkiddingParamInterpSpeed; // 0x34 (0x4)
	unsigned char padding_38[0x14]; // 0x38 (0x14)
};

