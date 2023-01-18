// ScriptStruct /Script/ScheduledEvents.EventsTimeline
// Size: 0x18
struct FEventsTimeline
{
	struct FDateTime* CacheExpire; // 0x0 (0x8)
	struct TArray<struct FEventChannelState> States; // 0x8 (0x10)
};

