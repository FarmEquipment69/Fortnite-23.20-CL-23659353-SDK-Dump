// ScriptStruct /Script/FortniteGame.CreativePublishOptions
// Size: 0x48
struct FCreativePublishOptions
{
	struct FString UserTitle; // 0x0 (0x10)
	struct FString UserDescription; // 0x10 (0x10)
	struct TArray<struct FString> DescriptionTags; // 0x20 (0x10)
	bool bActivateLink; // 0x30 (0x1)
	bool bClearPersistentData; // 0x31 (0x1)
	bool bUseLegacyPublish; // 0x32 (0x1)
	unsigned char unreflected_33[0x5]; // 0x33 (0x5) 
	struct FString UserLocale; // 0x38 (0x10)
};

