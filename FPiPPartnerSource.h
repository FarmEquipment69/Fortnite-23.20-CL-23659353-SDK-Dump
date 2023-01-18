// ScriptStruct /Script/PictureInPictureDescriptors.PiPPartnerSource
// Size: 0x128
struct FPiPPartnerSource
{
	enum PictureInPictureSourceType SourceType; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct FString Name; // 0x50 (0x10)
	struct FDateTime* StartTime; // 0x60 (0x8)
	struct FDateTime* EndTime; // 0x68 (0x8)
	struct FFortMediaEventsStreamAssets AssetConfig; // 0x70 (0x60)
	struct FString EventIconUrl; // 0xd0 (0x10)
	class UEpicCMSImage* CMSImage; // 0xe0 (0x8)
	class UPictureInPictureSourceActionData* ActionData; // 0xe8 (0x8)
	struct TArray<struct FString> PlatformBlacklist; // 0xf0 (0x10)
	struct TArray<struct FString> GameplayTagBlacklist; // 0x100 (0x10)
	struct TArray<struct FString> GameplayTagWhitelist; // 0x110 (0x10)
	bool bManual; // 0x120 (0x1)
	unsigned char padding_121[0x7]; // 0x121 (0x7)
};

