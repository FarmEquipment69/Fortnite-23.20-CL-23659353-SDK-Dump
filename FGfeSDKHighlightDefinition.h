// ScriptStruct /Script/NVIDIAGfeSDK.GfeSDKHighlightDefinition
// Size: 0x68
struct FGfeSDKHighlightDefinition
{
	struct FString ID; // 0x0 (0x10)
	bool UserDefaultInterest; // 0x10 (0x1)
	enum EGfeSDKHighlightType HighlightTags; // 0x11 (0x1)
	enum EGfeSDKHighlightSignificance Significance; // 0x12 (0x1)
	unsigned char unreflected_13[0x5]; // 0x13 (0x5) 
	struct TMap<struct FString, struct FString> NameTranslationTable; // 0x18 (0x50)
};

