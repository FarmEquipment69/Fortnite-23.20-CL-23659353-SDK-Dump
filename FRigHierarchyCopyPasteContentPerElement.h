// ScriptStruct /Script/ControlRig.RigHierarchyCopyPasteContentPerElement
// Size: 0x200
struct FRigHierarchyCopyPasteContentPerElement
{
	struct FRigElementKey* Key; // 0x0 (0x8)
	struct FString Content; // 0x8 (0x10)
	struct TArray<struct FRigElementKey*> Parents; // 0x18 (0x10)
	struct TArray<struct FRigElementWeight> ParentWeights; // 0x28 (0x10)
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FRigCurrentAndInitialTransform Pose; // 0x40 (0x1c0)
};

