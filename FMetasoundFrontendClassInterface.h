// ScriptStruct /Script/MetasoundFrontend.MetasoundFrontendClassInterface
// Size: 0x40
struct FMetasoundFrontendClassInterface
{
	struct TArray<struct FMetasoundFrontendClassInput> Inputs; // 0x0 (0x10)
	struct TArray<struct FMetasoundFrontendClassOutput> Outputs; // 0x10 (0x10)
	struct TArray<struct FMetasoundFrontendClassEnvironmentVariable> Environment; // 0x20 (0x10)
	struct FGuid ChangeID; // 0x30 (0x10)
};

