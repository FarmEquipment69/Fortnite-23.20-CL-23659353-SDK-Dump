// ScriptStruct /Script/FortniteGame.FortAthenaMutator_SurvivalObjectiveData
// Size: 0x270
struct FFortAthenaMutator_SurvivalObjectiveData
{
	class UClass* BuildingActorObjectiveClass; // 0x0 (0x8)
	struct FScalableFloat SpawnDistanceFromGround; // 0x8 (0x28)
	int ActivationSafeZoneIndex; // 0x30 (0x4)
	unsigned char bEndMatchOnDestroy; // 0x34 (0x1)
	unsigned char bSpawnOnPOI; // 0x34 (0x1)
	bool bClearAreaOnSpawn; // 0x35 (0x1)
	unsigned char unreflected_36[0x2]; // 0x36 (0x2) 
	float ClearAreaRadiusOverride; // 0x38 (0x4)
	float ClearAreaHalfHeightOverride; // 0x3c (0x4)
	unsigned char bIsSpecialActor; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	struct FGameplayTagQuery POIFilterQuery; // 0x48 (0x48)
	int RandomizedPOICount; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	struct TArray<int> ExtraSafezoneIndexes; // 0x98 (0x10)
	class ABuildingActor* SpawnedBuildingActorObjective; // 0xa8 (0x8)
	struct FGameplayTag SpecialActorTag; // 0xb0 (0x4)
	unsigned char unreflected_b4[0xc]; // 0xb4 (0xc) 
	struct FSlateBrush SpecialActorMinimapIconBrush; // 0xc0 (0xc0)
	struct FVector2D SpecialActorMinimapIconScale; // 0x180 (0x10)
	struct FSlateBrush SpecialActorCompassIconBrush; // 0x190 (0xc0)
	struct FVector2D SpecialActorCompassIconScale; // 0x250 (0x10)
	struct FName SpecialActorID; // 0x260 (0x4)
	unsigned char padding_264[0xc]; // 0x264 (0xc)
};

