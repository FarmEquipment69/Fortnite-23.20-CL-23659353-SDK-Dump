// ScriptStruct /Script/FortniteGame.FortPlacementActorFinderEntry
// Size: 0xb8
struct FFortPlacementActorFinderEntry
{
	struct TWeakObjectPtr<class UClass> BuildingToSpawn; // 0x0 (0x28)
	class UClass* BuildingClassToFind; // 0x28 (0x8)
	struct TArray<class UClass*> BuildingClassesToFind; // 0x30 (0x10)
	struct FGameplayTagContainer RequiredTags; // 0x40 (0x20)
	struct FGameplayTagContainer PreferredTags; // 0x60 (0x20)
	struct FGameplayTagContainer ExlusionTags; // 0x80 (0x20)
	struct TArray<struct FFortFinderProperty> RequiredProperties; // 0xa0 (0x10)
	bool bIgnoreCollisionCheck; // 0xb0 (0x1)
	bool bSnapToGrid; // 0xb1 (0x1)
	unsigned char padding_b2[0x6]; // 0xb2 (0x6)
};

