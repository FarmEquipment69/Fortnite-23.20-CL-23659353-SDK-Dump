// ScriptStruct /Script/FortniteGame.FortPlayerSpawnPadPlacementData
// Size: 0x58
struct FFortPlayerSpawnPadPlacementData
{
	class UEnvQuery* PlacementQuery; // 0x0 (0x8)
	struct TWeakObjectPtr<class UClass> ActorToPlace; // 0x8 (0x28)
	bool bSnapToGrid; // 0x30 (0x1)
	bool bAdjustPlacementForFloors; // 0x31 (0x1)
	unsigned char unreflected_32[0x6]; // 0x32 (0x6) 
	struct FGameplayTagContainer TagsToAddToChosenPlacementActor; // 0x38 (0x20)
};

