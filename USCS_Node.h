// Class /Script/Engine.SCS_Node
// Size: 0xc8
class USCS_Node : public UObject
{
	unsigned char ComponentClass_28[0x8]; // 0x28 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	class UActorComponent* ComponentTemplate; // 0x30 (0x8)
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x38 (0x48)
	struct FName AttachToName; // 0x80 (0x4)
	struct FName ParentComponentOrVariableName; // 0x84 (0x4)
	struct FName ParentComponentOwnerClassName; // 0x88 (0x4)
	bool bIsParentComponentNative; // 0x8c (0x1)
	unsigned char unreflected_8d[0x3]; // 0x8d (0x3) 
	struct TArray<class USCS_Node*> ChildNodes; // 0x90 (0x10)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0xa0 (0x10)
	struct FGuid VariableGuid; // 0xb0 (0x10)
	struct FName InternalVariableName; // 0xc0 (0x4)
	unsigned char padding_c4[0x4]; // 0xc4 (0x4)
};

