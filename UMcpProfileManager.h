// Class /Script/McpProfileSys.McpProfileManager
// Size: 0x68
class UMcpProfileManager : public UObject
{
	unsigned char unreflected_28[0x10]; // 0x28 (0x10) 
	struct TArray<struct FProfileGroupEntry> ServerProfileGroups; // 0x38 (0x10)
	struct TArray<struct FProfileGroupEntry> ClientProfileGroups; // 0x48 (0x10)
	unsigned char unreflected_58[0x8]; // 0x58 (0x8) 
	int MaxItemsProcessedInInitialUpdatesPerTick; // 0x60 (0x4)
	unsigned char padding_64[0x4]; // 0x64 (0x4)
};

