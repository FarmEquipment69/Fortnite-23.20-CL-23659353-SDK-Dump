// Class /Script/PlayerAugmentsCodeRuntime.FortGamestateComponent_DynamicRollTableManager
// Size: 0x2d8
class UFortGamestateComponent_DynamicRollTableManager : public UFortGameStateComponent
{
	unsigned char unreflected_a0[0x30]; // 0xa0 (0x30) 
	struct FDataRegistryType DataRegistryTypeBaseWeights; // 0xd0 (0x4)
	struct FDataRegistryType DataRegistryTypeWeightModifiers; // 0xd4 (0x4)
	struct FScalableFloat Enabled; // 0xd8 (0x28)
	unsigned char padding_100[0x1d8]; // 0x100 (0x1d8)

	/* Functions */

	// Function /Script/PlayerAugmentsCodeRuntime.FortGamestateComponent_DynamicRollTableManager.HandlePlaylistDataReady (Underlying native function: HandlePlaylistDataReady 0x7292068)
	void HandlePlaylistDataReady(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)
};

