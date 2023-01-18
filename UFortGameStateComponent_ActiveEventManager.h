// Class /Script/FortniteGame.FortGameStateComponent_ActiveEventManager
// Size: 0xb0
class UFortGameStateComponent_ActiveEventManager : public UFortGameStateComponent
{
	struct TArray<struct FString> EventsAlreadyApplied; // 0xa0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateComponent_ActiveEventManager.OnPlaylistDataReady (Underlying native function: OnPlaylistDataReady 0x8436cd8)
	void OnPlaylistDataReady(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortGameStateComponent_ActiveEventManager.HandleActiveSeasonDataChanged (Underlying native function: HandleActiveSeasonDataChanged 0x84366f4)
	void HandleActiveSeasonDataChanged(struct TArray<struct FString>& ActiveEventFlags); // (Final | Native | Private | HasOutParms)
};

