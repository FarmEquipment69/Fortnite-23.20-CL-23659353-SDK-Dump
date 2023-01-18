// ScriptStruct /Script/McpProfileSys.ProfileUpdateNotification
// Size: 0x28
struct FProfileUpdateNotification
{
	struct TArray<struct FJsonObjectWrapper> Changes; // 0x0 (0x10)
	struct FDateTime* LockExpiration; // 0x10 (0x8)
	int CommandRevision; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	int64_t Revision; // 0x20 (0x8)
};

