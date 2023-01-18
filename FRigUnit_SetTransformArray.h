// ScriptStruct /Script/ControlRig.RigUnit_SetTransformArray
// Size: 0x78
struct FRigUnit_SetTransformArray : FRigUnitMutable
{
	struct FRigElementKeyCollection Items; // 0x38 (0x10)
	enum EBoneGetterSetterMode Space; // 0x48 (0x1)
	bool bInitial; // 0x49 (0x1)
	unsigned char unreflected_4a[0x6]; // 0x4a (0x6) 
	struct TArray<struct FTransform> Transforms; // 0x50 (0x10)
	float Weight; // 0x60 (0x4)
	bool bPropagateToChildren; // 0x64 (0x1)
	unsigned char unreflected_65[0x3]; // 0x65 (0x3) 
	struct TArray<struct FCachedRigElement> CachedIndex; // 0x68 (0x10)
};

