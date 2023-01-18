// Class /Script/FortniteGame.FortAsyncAction_CalendarEventWatcherBase
// Size: 0x88
class UFortAsyncAction_CalendarEventWatcherBase : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnEventActive; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnEventUpdated; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnEventEnded; // 0x50 (0x10)
	class UFortGameInstance* MyGameInstance; // 0x60 (0x8)
	unsigned char padding_68[0x20]; // 0x68 (0x20)
};

