// ScriptStruct /Script/FortniteGame.LevelInstanceListElement
// Size: 0x38
struct FLevelInstanceListElement
{
	struct FGuid Guid; // 0x0 (0x10)
	struct FString Name; // 0x10 (0x10)
	enum ELevelManagementTerrainType TerrainType; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	int MaxMemory; // 0x24 (0x4)
	int CurrentMemory; // 0x28 (0x4)
	int NumPortals; // 0x2c (0x4)
	int NumRefs; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

