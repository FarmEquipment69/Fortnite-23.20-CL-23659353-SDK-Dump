// ScriptStruct /Script/FortniteGame.FortAnalyticsEventDenylistEntry
// Size: 0x20
struct FFortAnalyticsEventDenylistEntry
{
	enum EFortAnalyticsEventDenylistPlaylistKey Type; // 0x0 (0x4)
	struct FName PlaylistKey; // 0x4 (0x4)
	struct FString EventName; // 0x8 (0x10)
	double Probability; // 0x18 (0x8)
};

