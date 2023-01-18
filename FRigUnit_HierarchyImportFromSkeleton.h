// ScriptStruct /Script/ControlRig.RigUnit_HierarchyImportFromSkeleton
// Size: 0x50
struct FRigUnit_HierarchyImportFromSkeleton : FRigUnit_DynamicHierarchyBaseMutable
{
	struct FName Namespace; // 0x38 (0x4)
	bool bIncludeCurves; // 0x3c (0x1)
	unsigned char unreflected_3d[0x3]; // 0x3d (0x3) 
	struct TArray<struct FRigElementKey*> Items; // 0x40 (0x10)
};

