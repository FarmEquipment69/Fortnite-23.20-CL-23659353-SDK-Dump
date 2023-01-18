// ScriptStruct /Script/McpProfileSys.McpAddItemRequest
// Size: 0x48
struct FMcpAddItemRequest
{
	struct FString ItemId; // 0x0 (0x10)
	struct FString TemplateId; // 0x10 (0x10)
	int Quantity; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FJsonObjectWrapper Attributes; // 0x28 (0x20)
};

