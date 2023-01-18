// ScriptStruct /Script/Curie.CurieElementDefinitionBase
// Size: 0x80
struct FCurieElementDefinitionBase : FTableRowBase
{
	class UClass* ElementAllocationHandler; // 0x8 (0x8)
	struct TArray<class UClass*> ElementAttachHandlers; // 0x10 (0x10)
	class UClass* ElementAttachConditionHandler; // 0x20 (0x8)
	struct TArray<class UClass*> ElementInteractHandlers; // 0x28 (0x10)
	struct TArray<class UClass*> ElementMaterialInteractHandlers; // 0x38 (0x10)
	struct TArray<class UClass*> ElementContainerInteractHandlers; // 0x48 (0x10)
	struct FGameplayTagContainer ElementalImmunities; // 0x58 (0x20)
	unsigned char bIsEnabled; // 0x78 (0x1)
	unsigned char padding_79[0x7]; // 0x79 (0x7)
};

