// ScriptStruct /Script/FortniteGame.FortCollectionTabAnalytics
// Size: 0x68
struct FFortCollectionTabAnalytics
{
	struct TMap<struct FString, struct FCollectionPageStats> CollectionPageStats; // 0x0 (0x50)
	struct FString ActivePage; // 0x50 (0x10)
	float CurrentPageActivationTimestamp; // 0x60 (0x4)
	unsigned char padding_64[0x4]; // 0x64 (0x4)
};

