// ScriptStruct /Script/McpProfileSys.McpLootEntry
// Size: 0x58
struct FMcpLootEntry
{
	struct FString ItemType; // 0x0 (0x10)
	struct FString ItemGuid; // 0x10 (0x10)
	int Quantity; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FJsonObjectWrapper Attributes; // 0x28 (0x20)
	struct FString ItemProfile; // 0x48 (0x10)
};

