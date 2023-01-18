// ScriptStruct /Script/ControlRig.RigUnit_GetTransformArray
// Size: 0x40
struct FRigUnit_GetTransformArray : FRigUnit
{
	struct FRigElementKeyCollection Items; // 0x8 (0x10)
	enum EBoneGetterSetterMode Space; // 0x18 (0x1)
	bool bInitial; // 0x19 (0x1)
	unsigned char unreflected_1a[0x6]; // 0x1a (0x6) 
	struct TArray<struct FTransform> Transforms; // 0x20 (0x10)
	struct TArray<struct FCachedRigElement> CachedIndex; // 0x30 (0x10)
};

