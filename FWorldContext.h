// ScriptStruct /Script/Engine.WorldContext
// Size: 0x2c0
struct FWorldContext
{
	struct FURL LastURL; // 0xb8 (0x68)
	struct FURL LastRemoteURL; // 0x120 (0x68)
	class UPendingNetGame* PendingNetGame; // 0x188 (0x8)
	struct TArray<struct FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x190 (0x10)
	unsigned char unreflected_1a0[0x10]; // 0x1a0 (0x10) 
	struct TArray<class ULevel*> LoadedLevelsForPendingMapChange; // 0x1b0 (0x10)
	unsigned char unreflected_1c0[0x18]; // 0x1c0 (0x18) 
	struct TArray<class UObjectReferencer*> ObjectReferencers; // 0x1d8 (0x10)
	struct TArray<struct FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x1e8 (0x10)
	class UGameViewportClient* GameViewport; // 0x1f8 (0x8)
	class UGameInstance* OwningGameInstance; // 0x200 (0x8)
	struct TArray<struct FNamedNetDriver> ActiveNetDrivers; // 0x208 (0x10)
	unsigned char padding_218[0xa8]; // 0x218 (0xa8)
};

