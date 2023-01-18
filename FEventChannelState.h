// ScriptStruct /Script/ScheduledEvents.EventChannelState
// Size: 0x38
struct FEventChannelState
{
	struct FDateTime* ValidFrom; // 0x0 (0x8)
	struct TArray<struct FEventRecord> ActiveEvents; // 0x8 (0x10)
	struct FJsonObjectWrapper State; // 0x18 (0x20)
};

