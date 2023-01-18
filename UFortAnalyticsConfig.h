// Class /Script/FortniteGame.FortAnalyticsConfig
// Size: 0x170
class UFortAnalyticsConfig : public UObject
{
	unsigned char unreflected_28[0x18]; // 0x28 (0x18) 
	struct TArray<struct FString> AltDomains; // 0x40 (0x10)
	struct FString UrlEndpoint; // 0x50 (0x10)
	unsigned char unreflected_60[0x10]; // 0x60 (0x10) 
	struct TArray<struct FFortAnalyticsEventDenylistEntry> EventDenylist; // 0x70 (0x10)
	unsigned char padding_80[0xf0]; // 0x80 (0xf0)
};

