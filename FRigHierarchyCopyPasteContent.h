// ScriptStruct /Script/ControlRig.RigHierarchyCopyPasteContent
// Size: 0x50
struct FRigHierarchyCopyPasteContent
{
	struct TArray<struct FRigHierarchyCopyPasteContentPerElement> Elements; // 0x0 (0x10)
	struct TArray<enum ERigElementType> Types; // 0x10 (0x10)
	struct TArray<struct FString> Contents; // 0x20 (0x10)
	struct TArray<struct FTransform> LocalTransforms; // 0x30 (0x10)
	struct TArray<struct FTransform> GlobalTransforms; // 0x40 (0x10)
};

