// ScriptStruct /Script/ControlRig.RigUnit_AimConstraint
// Size: 0xa0
struct FRigUnit_AimConstraint : FRigUnitMutable
{
	struct FName Joint; // 0x38 (0x4)
	enum EAimMode AimMode; // 0x3c (0x1)
	enum EAimMode UpMode; // 0x3d (0x1)
	unsigned char unreflected_3e[0x2]; // 0x3e (0x2) 
	struct FVector AimVector; // 0x40 (0x18)
	struct FVector UpVector; // 0x58 (0x18)
	struct TArray<struct FAimTarget> AimTargets; // 0x70 (0x10)
	struct TArray<struct FAimTarget> UpTargets; // 0x80 (0x10)
	struct FRigUnit_AimConstraint_WorkData WorkData; // 0x90 (0x10)
};

