// ScriptStruct /Script/Engine.AnimNotifyQueue
// Size: 0x70
struct FAnimNotifyQueue
{
	struct TArray<struct FAnimNotifyEventReference> AnimNotifies; // 0x10 (0x10)
	struct TMap<struct FName, struct FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20 (0x50)
};

