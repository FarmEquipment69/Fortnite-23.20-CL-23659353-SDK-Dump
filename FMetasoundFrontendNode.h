// ScriptStruct /Script/MetasoundFrontend.MetasoundFrontendNode
// Size: 0x68
struct FMetasoundFrontendNode
{
	struct FGuid ID; // 0x0 (0x10)
	struct FGuid ClassID; // 0x10 (0x10)
	struct FName Name; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FMetasoundFrontendNodeInterface Interface; // 0x28 (0x30)
	struct TArray<struct FMetasoundFrontendVertexLiteral> InputLiterals; // 0x58 (0x10)
};

