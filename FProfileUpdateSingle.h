// ScriptStruct /Script/McpProfileSys.ProfileUpdateSingle
// Size: 0x50
struct FProfileUpdateSingle
{
	int64_t ProfileRevision; // 0x0 (0x8)
	struct FString ProfileId; // 0x8 (0x10)
	int64_t ProfileChangesBaseRevision; // 0x18 (0x8)
	struct TArray<struct FJsonObjectWrapper> ProfileChanges; // 0x20 (0x10)
	struct FDateTime* LockExpiration; // 0x30 (0x8)
	struct TArray<struct FJsonObjectWrapper> Notifications; // 0x38 (0x10)
	int ProfileCommandRevision; // 0x48 (0x4)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)
};

