// ScriptStruct /Script/Engine.AngularDriveConstraint
// Size: 0x68
struct FAngularDriveConstraint
{
	struct FConstraintDrive TwistDrive; // 0x0 (0x10)
	struct FConstraintDrive SwingDrive; // 0x10 (0x10)
	struct FConstraintDrive SlerpDrive; // 0x20 (0x10)
	struct FRotator OrientationTarget; // 0x30 (0x18)
	struct FVector AngularVelocityTarget; // 0x48 (0x18)
	struct TEnumAsByte<EAngularDriveMode> AngularDriveMode; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};

