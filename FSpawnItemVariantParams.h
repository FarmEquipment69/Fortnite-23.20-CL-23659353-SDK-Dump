// ScriptStruct /Script/FortniteGame.SpawnItemVariantParams
// Size: 0x80
struct FSpawnItemVariantParams
{
	class UFortWorldItemDefinition* WorldItemDefinition; // 0x0 (0x8)
	struct FGameplayTagContainer RequiredTags; // 0x8 (0x20)
	int NumberToSpawn; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FVector Position; // 0x30 (0x18)
	struct FVector Direction; // 0x48 (0x18)
	int OverrideMaxStackCount; // 0x60 (0x4)
	bool bToss; // 0x64 (0x1)
	bool bRandomRotation; // 0x65 (0x1)
	bool bBlockedFromAutoPickup; // 0x66 (0x1)
	unsigned char unreflected_67[0x1]; // 0x67 (0x1) 
	int PickupInstigatorHandle; // 0x68 (0x4)
	enum EFortPickupSourceTypeFlag SourceType; // 0x6c (0x1)
	enum EFortPickupSpawnSource Source; // 0x6d (0x1)
	unsigned char unreflected_6e[0x2]; // 0x6e (0x2) 
	class AFortPlayerController* OptionalOwnerPC; // 0x70 (0x8)
	bool bPickupOnlyRelevantToOwner; // 0x78 (0x1)
	unsigned char padding_79[0x7]; // 0x79 (0x7)
};

