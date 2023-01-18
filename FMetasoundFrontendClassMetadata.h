// ScriptStruct /Script/MetasoundFrontend.MetasoundFrontendClassMetadata
// Size: 0x28
struct FMetasoundFrontendClassMetadata
{
	struct FMetasoundFrontendClassName ClassName; // 0x0 (0xc)
	struct FMetasoundFrontendVersionNumber* Version; // 0xc (0x8)
	enum EMetasoundFrontendClassType Type; // 0x14 (0x1)
	bool bIsDeprecated; // 0x15 (0x1)
	bool bAutoUpdateManagesInterface; // 0x16 (0x1)
	unsigned char unreflected_17[0x1]; // 0x17 (0x1) 
	struct FGuid ChangeID; // 0x18 (0x10)
};

