// ScriptStruct /Script/RockVehicleRuntime.RockVehicleDriveConfig
// Size: 0x510
struct FRockVehicleDriveConfig
{
	struct FRockScalableFloat DriveAccel; // 0x0 (0x30)
	struct FRockScalableFloat DriveTopSpeed; // 0x30 (0x30)
	struct FRockScalableFloat BrakeAccel; // 0x60 (0x30)
	struct FRockScalableFloat StopSpeed; // 0x90 (0x30)
	float IdleBrakeFactor; // 0xc0 (0x4)
	unsigned char unreflected_c4[0x4]; // 0xc4 (0x4) 
	struct FRuntimeFloatCurve DriveAccelCurve; // 0xc8 (0x88)
	struct FRuntimeFloatCurve SteerAngleCurve; // 0x150 (0x88)
	struct FRuntimeFloatCurve LatFrictionCurve; // 0x1d8 (0x88)
	struct FRuntimeFloatCurve LongFrictionCurve; // 0x260 (0x88)
	struct FRuntimeFloatCurve WallFrictionCurve; // 0x2e8 (0x88)
	struct FRuntimeFloatCurve HandbrakeSteerAngleCurve; // 0x370 (0x88)
	struct FRuntimeFloatCurve HandbrakeLatFrictionCurve; // 0x3f8 (0x88)
	struct FRuntimeFloatCurve HandbrakeLongFrictionCurve; // 0x480 (0x88)
	struct FRockThrottledValue* HandbrakeRate; // 0x508 (0x8)
};

