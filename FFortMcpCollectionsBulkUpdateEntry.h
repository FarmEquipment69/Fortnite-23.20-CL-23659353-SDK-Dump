// ScriptStruct /Script/FortniteGame.FortMcpCollectionsBulkUpdateEntry
// Size: 0x58
struct FFortMcpCollectionsBulkUpdateEntry
{
	struct FString category; // 0x0 (0x10)
	struct FString Variant; // 0x10 (0x10)
	struct TArray<struct FString> ContextTags; // 0x20 (0x10)
	struct FJsonObjectWrapper Properties; // 0x30 (0x20)
	enum EFortCollectedState SeenState; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	int Count; // 0x54 (0x4)
};

