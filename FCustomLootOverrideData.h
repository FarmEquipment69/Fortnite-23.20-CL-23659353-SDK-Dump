// ScriptStruct /Script/FortniteGame.CustomLootOverrideData
// Size: 0x68
struct FCustomLootOverrideData
{
	enum ECustomLootSelection CustomLootType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UDataTable* LootTierData; // 0x8 (0x8)
	class UDataTable* LootPackages; // 0x10 (0x8)
	class UDataTable* ExperimentalLootTierData; // 0x18 (0x8)
	class UDataTable* ExperimentalLootPackages; // 0x20 (0x8)
	struct FGameplayTagContainer PlaylistContextTagsToAdd; // 0x28 (0x20)
	struct FGameplayTagContainer PlaylistContextTagsToRemove; // 0x48 (0x20)
};

