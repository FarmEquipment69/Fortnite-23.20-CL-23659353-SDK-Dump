// Class /Script/FortniteGame.FortAthenaMutator_InventoryOverride
// Size: 0x618
class AFortAthenaMutator_InventoryOverride : public AFortAthenaMutator
{
	unsigned char unreflected_330[0x10]; // 0x330 (0x10) 
	bool bWantsAutoTDMActivation; // 0x340 (0x1)
	unsigned char unreflected_341[0x7]; // 0x341 (0x7) 
	struct FScalableFloat bForceRemoveInventoryOnGetInventoryOverride; // 0x348 (0x28)
	struct FScalableFloat bRunForAthenaGameParticipantsOnly; // 0x370 (0x28)
	struct FScalableFloat bSelectRandomLoadoutOnce; // 0x398 (0x28)
	struct FScalableFloat bSelectRandomLoadoutForAll; // 0x3c0 (0x28)
	struct FScalableFloat bSelectRandomLoadoutPerPlayer; // 0x3e8 (0x28)
	struct FScalableFloat bNoRepeat; // 0x410 (0x28)
	enum EAthenaLootDropOverride DropAllItemsOverride; // 0x438 (0x1)
	enum EAthenaLootDropOverride TrapDropOverride; // 0x439 (0x1)
	enum EAthenaLootDropOverride WeaponDropOverride; // 0x43a (0x1)
	enum EAthenaLootDropOverride MaterialDropOverride; // 0x43b (0x1)
	enum EAthenaLootDropOverride GadgetDropOverride; // 0x43c (0x1)
	enum EAthenaLootDropOverride ConsumableDropOverride; // 0x43d (0x1)
	enum EAthenaLootDropOverride AmmoDropOverride; // 0x43e (0x1)
	enum EAthenaInventorySpawnOverride InventoryUpdateOverride; // 0x43f (0x1)
	struct TArray<struct FItemLoadoutContainer> InventoryLoadouts; // 0x440 (0x10)
	struct FItemLoadoutContainer AlwaysGiveLoadout; // 0x450 (0x48)
	struct FScalableFloat bPreventPickaxe; // 0x498 (0x28)
	struct FScalableFloat bPreventAllDefaultItems; // 0x4c0 (0x28)
	struct TArray<class UFortItemDefinition*> PreventDefaultItems; // 0x4e8 (0x10)
	int InventoryLoadoutIndex; // 0x4f8 (0x4)
	unsigned char unreflected_4fc[0x4]; // 0x4fc (0x4) 
	struct TArray<struct FItemLoadoutTeamMap> TeamLoadouts; // 0x500 (0x10)
	struct TArray<enum EFortItemType> ItemTypesToRemoveOnReset; // 0x510 (0x10)
	struct FScalableFloat bKeepUnchangedItemsOnReset; // 0x520 (0x28)
	int InventoryAutoEquipSlot; // 0x548 (0x4)
	bool bForceInventoryAutoEquip; // 0x54c (0x1)
	unsigned char unreflected_54d[0xb]; // 0x54d (0xb) 
	struct TMap<class AController*, struct FInventoryOverrideLoadoutRandomization> LoadoutRandomizationPerPlayer; // 0x558 (0x50)
	struct TMap<class AController*, int> LoadoutIndexMap; // 0x5a8 (0x50)
	unsigned char padding_5f8[0x20]; // 0x5f8 (0x20)
};
