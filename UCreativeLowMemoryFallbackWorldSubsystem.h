// Class /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackWorldSubsystem
// Size: 0x50
class UCreativeLowMemoryFallbackWorldSubsystem : public UWorldSubsystem
{
	struct FCreativeLowMemoryFallbackFreeMemoryThresholds CurrentThresholds; // 0x30 (0xc)
	unsigned char padding_3c[0x14]; // 0x3c (0x14)

	/* Functions */

	// Function /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackWorldSubsystem.OnPlaylistDataChanged (Underlying native function: OnPlaylistDataChanged 0x53368c0)
	void OnPlaylistDataChanged(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)
};

