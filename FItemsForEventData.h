// ScriptStruct /Script/FortniteGame.ItemsForEventData
// Size: 0x70
struct FItemsForEventData
{
	struct FString RequiredEventName; // 0x0 (0x10)
	struct FEventItemNamedWeight EventItemNamedWeight; // 0x10 (0x30)
	struct TArray<struct FPrimaryAssetId*> ItemsToLoad; // 0x40 (0x10)
	struct TArray<struct FString> GlobalTableHotfixSyntax; // 0x50 (0x10)
	struct TArray<struct FEventHotfixForPlaylistData> PlaylistTableHotfixSyntax; // 0x60 (0x10)
};

