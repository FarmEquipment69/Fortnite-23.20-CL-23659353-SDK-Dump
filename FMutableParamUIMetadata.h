// ScriptStruct /Script/CustomizableObject.MutableParamUIMetadata
// Size: 0xf8
struct FMutableParamUIMetadata
{
	struct FString ObjectFriendlyName; // 0x0 (0x10)
	struct FString UISectionName; // 0x10 (0x10)
	int UIOrder; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct TWeakObjectPtr<class UTexture2D> UIThumbnail; // 0x28 (0x28)
	struct TMap<struct FString, struct FString> ExtraInformation; // 0x50 (0x50)
	struct TMap<struct FString, struct TWeakObjectPtr<class UObject>> ExtraAssets; // 0xa0 (0x50)
	float MinimumValue; // 0xf0 (0x4)
	float MaximumValue; // 0xf4 (0x4)
};

