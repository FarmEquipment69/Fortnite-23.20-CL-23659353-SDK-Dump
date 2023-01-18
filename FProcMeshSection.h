// ScriptStruct /Script/ProceduralMeshComponent.ProcMeshSection
// Size: 0x60
struct FProcMeshSection
{
	struct TArray<struct FProcMeshVertex> ProcVertexBuffer; // 0x0 (0x10)
	struct TArray<uint32_t> ProcIndexBuffer; // 0x10 (0x10)
	struct FBox SectionLocalBox; // 0x20 (0x38)
	bool bEnableCollision; // 0x58 (0x1)
	bool bSectionVisible; // 0x59 (0x1)
	unsigned char padding_5a[0x6]; // 0x5a (0x6)
};

