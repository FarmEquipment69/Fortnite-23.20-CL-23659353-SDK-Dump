// ScriptStruct /Script/FortniteGame.FortCreativeCreatorAnalyticsEventAttribute
// Size: 0x68
struct FFortCreativeCreatorAnalyticsEventAttribute
{
	struct FString CreatorEventName; // 0x0 (0x10)
	int Count; // 0x10 (0x4)
	enum ECreativeCreatorAnalyticsType SendType; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	struct TSet<struct FUniqueNetIdRepl> ListPlayerUniqueNetID; // 0x18 (0x50)
};

