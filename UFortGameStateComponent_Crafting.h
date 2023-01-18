// Class /Script/CraftingRuntime.FortGameStateComponent_Crafting
// Size: 0x248
class UFortGameStateComponent_Crafting : public UFortGameStateComponent
{
	struct FDataRegistryType CraftingFormulaRegistryType; // 0xa0 (0x4)
	struct FDataRegistryType CraftingIngredientsUIDataRegistryType; // 0xa4 (0x4)
	unsigned char unreflected_a8[0x140]; // 0xa8 (0x140) 
	struct TArray<struct FCraftingResult> CraftingResultsList; // 0x1e8 (0x10)
	unsigned char padding_1f8[0x50]; // 0x1f8 (0x50)

	/* Functions */

	// Function /Script/CraftingRuntime.FortGameStateComponent_Crafting.OnRep_CraftingResultsList (Underlying native function: OnRep_CraftingResultsList 0x72faad0)
	void OnRepCraftingResultsList(); // (Final | Native | Protected)

	// Function /Script/CraftingRuntime.FortGameStateComponent_Crafting.OnPlaylistDataReady (Underlying native function: OnPlaylistDataReady 0x72fa9a0)
	void OnPlaylistDataReady(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Protected | HasOutParms)
};

