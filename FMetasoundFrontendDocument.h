// ScriptStruct /Script/MetasoundFrontend.MetasoundFrontendDocument
// Size: 0x1b8
struct FMetasoundFrontendDocument
{
	struct FMetasoundFrontendDocumentMetadata MetaData; // 0x10 (0xc)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct TSet<struct FMetasoundFrontendVersion> Interfaces; // 0x20 (0x50)
	struct FMetasoundFrontendGraphClass RootGraph; // 0x70 (0x108)
	struct TArray<struct FMetasoundFrontendGraphClass> Subgraphs; // 0x178 (0x10)
	struct TArray<struct FMetasoundFrontendClass> Dependencies; // 0x188 (0x10)
	struct FMetasoundFrontendVersion ArchetypeVersion; // 0x198 (0xc)
	unsigned char unreflected_1a4[0x4]; // 0x1a4 (0x4) 
	struct TArray<struct FMetasoundFrontendVersion> InterfaceVersions; // 0x1a8 (0x10)
};

