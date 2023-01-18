// ScriptStruct /Script/ScheduledEvents.EventRecord
// Size: 0x20
struct FEventRecord
{
	struct FString EventType; // 0x0 (0x10)
	struct FDateTime* ActiveUntil; // 0x10 (0x8)
	struct FDateTime* ActiveSince; // 0x18 (0x8)
};

