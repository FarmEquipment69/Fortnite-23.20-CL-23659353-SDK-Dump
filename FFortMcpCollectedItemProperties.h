// ScriptStruct /Script/FortniteGame.FortMcpCollectedItemProperties
// Size: 0x48
struct FFortMcpCollectedItemProperties
{
	struct FString VariantTag; // 0x0 (0x10)
	struct TArray<struct FString> ContextTags; // 0x10 (0x10)
	struct FJsonObjectWrapper Properties; // 0x20 (0x20)
	enum EFortCollectedState SeenState; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	int Count; // 0x44 (0x4)
};

