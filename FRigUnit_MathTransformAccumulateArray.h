// ScriptStruct /Script/ControlRig.RigUnit_MathTransformAccumulateArray
// Size: 0xc0
struct FRigUnit_MathTransformAccumulateArray : FRigUnit_MathTransformMutableBase
{
	struct TArray<struct FTransform> Transforms; // 0x38 (0x10)
	enum EBoneGetterSetterMode TargetSpace; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct FTransform Root; // 0x50 (0x60)
	struct TArray<int> ParentIndices; // 0xb0 (0x10)
};

