// ScriptStruct /Script/FortniteGame.FortTimeOfDayTheme
// Size: 0x40
struct FFortTimeOfDayTheme
{
	struct TArray<class UFortTimeOfDayCollection*> TimeOfDayCollections; // 0x0 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> AdditionalTimeOfDayManagers; // 0x10 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> ProhibitedTimeOfDayManagers; // 0x20 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> ValidTimeOfDayManagers; // 0x30 (0x10)
};

