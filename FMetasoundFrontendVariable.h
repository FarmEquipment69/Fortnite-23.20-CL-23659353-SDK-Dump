// ScriptStruct /Script/MetasoundFrontend.MetasoundFrontendVariable
// Size: 0xb0
struct FMetasoundFrontendVariable
{
	struct FName Name; // 0x0 (0x4)
	struct FName TypeName; // 0x4 (0x4)
	struct FMetasoundFrontendLiteral Literal; // 0x8 (0x58)
	struct FGuid ID; // 0x60 (0x10)
	struct FGuid VariableNodeID; // 0x70 (0x10)
	struct FGuid MutatorNodeID; // 0x80 (0x10)
	struct TArray<struct FGuid> AccessorNodeIDs; // 0x90 (0x10)
	struct TArray<struct FGuid> DeferredAccessorNodeIDs; // 0xa0 (0x10)
};

