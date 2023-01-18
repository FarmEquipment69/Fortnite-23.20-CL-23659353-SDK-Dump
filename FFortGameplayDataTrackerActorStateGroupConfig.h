// ScriptStruct /Script/FortniteGame.FortGameplayDataTrackerActorStateGroupConfig
// Size: 0x38
struct FFortGameplayDataTrackerActorStateGroupConfig
{
	struct TArray<struct TWeakObjectPtr<class UClass>> RelevantActorClasses; // 0x0 (0x10)
	bool bAllowDBNOPawns; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct TArray<struct FFortGameplayDataTrackerActorStateConfig> StateConfigs; // 0x18 (0x10)
	struct TArray<struct FFortGameplayDataTrackerTrackedActorState> ActorStates; // 0x28 (0x10)
};

