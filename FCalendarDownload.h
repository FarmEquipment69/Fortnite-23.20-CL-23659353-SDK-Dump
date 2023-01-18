// ScriptStruct /Script/ScheduledEvents.CalendarDownload
// Size: 0x60
struct FCalendarDownload
{
	struct FDateTime* CurrentTime; // 0x0 (0x8)
	double CacheIntervalMins; // 0x8 (0x8)
	struct TMap<struct FString, struct FEventsTimeline> Channels; // 0x10 (0x50)
};

