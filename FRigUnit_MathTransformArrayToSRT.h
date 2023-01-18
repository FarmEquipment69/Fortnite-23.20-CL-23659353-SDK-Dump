// ScriptStruct /Script/ControlRig.RigUnit_MathTransformArrayToSRT
// Size: 0x48
struct FRigUnit_MathTransformArrayToSRT : FRigUnit_MathTransformBase
{
	struct TArray<struct FTransform> Transforms; // 0x8 (0x10)
	struct TArray<struct FVector> Translations; // 0x18 (0x10)
	struct TArray<struct FQuat> Rotations; // 0x28 (0x10)
	struct TArray<struct FVector> Scales; // 0x38 (0x10)
};

