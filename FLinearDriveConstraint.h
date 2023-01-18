// ScriptStruct /Script/Engine.LinearDriveConstraint
// Size: 0x68
struct FLinearDriveConstraint
{
	struct FVector PositionTarget; // 0x0 (0x18)
	struct FVector VelocityTarget; // 0x18 (0x18)
	struct FConstraintDrive XDrive; // 0x30 (0x10)
	struct FConstraintDrive YDrive; // 0x40 (0x10)
	struct FConstraintDrive ZDrive; // 0x50 (0x10)
	unsigned char bEnablePositionDrive; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};

