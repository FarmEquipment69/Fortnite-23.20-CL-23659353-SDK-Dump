// ScriptStruct /Script/McpProfileSys.McpProfileChangeRequest
// Size: 0x58
struct FMcpProfileChangeRequest
{
	int BaseCommandRevision; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FMcpAddItemRequest> AddRequests; // 0x8 (0x10)
	struct TArray<struct FMcpRemoveItemRequest> RemoveRequests; // 0x18 (0x10)
	struct TArray<struct FMcpChangeQuantityRequest> ChangeQuantityRequests; // 0x28 (0x10)
	struct TArray<struct FMcpChangeAttributesRequest> ChangeAttributesRequests; // 0x38 (0x10)
	struct TArray<struct FJsonObjectWrapper> ChangeStatRequests; // 0x48 (0x10)
};

