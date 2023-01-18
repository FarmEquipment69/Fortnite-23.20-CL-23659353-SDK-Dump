// ScriptStruct /Script/FortniteGame.SphericalDriveParams
// Size: 0x48
struct FSphericalDriveParams
{
	float Radius; // 0x0 (0x4)
	float MaxSpeedKmh; // 0x4 (0x4)
	float LowSpeedAccelerationForce; // 0x8 (0x4)
	float HighSpeedAccelerationForce; // 0xc (0x4)
	float MaxInclineDeg; // 0x10 (0x4)
	float MaxAirControlForce; // 0x14 (0x4)
	float MaxAirControlSpeedKmh; // 0x18 (0x4)
	float ShellAngularDrag; // 0x1c (0x4)
	float DragCoefficient; // 0x20 (0x4)
	float DragCoefficientAutoBrake; // 0x24 (0x4)
	float MaxAutoBrakeSpeedKmh; // 0x28 (0x4)
	float ContactRepulsionForce; // 0x2c (0x4)
	float ContactThreshold; // 0x30 (0x4)
	float MassDirectionMaxAngleDeg; // 0x34 (0x4)
	float MassDirectionStiffness; // 0x38 (0x4)
	bool bMassDirectionInvert; // 0x3c (0x1)
	unsigned char unreflected_3d[0x3]; // 0x3d (0x3) 
	float TractionMultiplier; // 0x40 (0x4)
	float BounceForce; // 0x44 (0x4)
};

