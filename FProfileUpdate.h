// ScriptStruct /Script/McpProfileSys.ProfileUpdate
// Size: 0x70
struct FProfileUpdate : FProfileUpdateSingle
{
	int ResponseVersion; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct FDateTime* ServerTime; // 0x58 (0x8)
	struct TArray<struct FProfileUpdateSingle> MultiUpdate; // 0x60 (0x10)
};

