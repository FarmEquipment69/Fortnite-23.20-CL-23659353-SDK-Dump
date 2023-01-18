// ScriptStruct /Script/ControlRig.RigUnit_MathVectorClampLength
// Size: 0x40
struct FRigUnit_MathVectorClampLength : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8 (0x18)
	float MinimumLength; // 0x20 (0x4)
	float MaximumLength; // 0x24 (0x4)
	struct FVector Result; // 0x28 (0x18)
};

