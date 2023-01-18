// Class /Script/FortniteGame.DestroyOnSafeZonePhaseComponent
// Size: 0x148
class UDestroyOnSafeZonePhaseComponent : public UActorComponent
{
	struct FScalableFloat DestroyInPhase; // 0xa0 (0x28)
	struct FScalableFloat MinDestroyDelay; // 0xc8 (0x28)
	struct FScalableFloat MaxDestroyDelay; // 0xf0 (0x28)
	struct FMulticastInlineDelegate OnDestroyDelayStarted; // 0x118 (0x10)
	struct FMulticastInlineDelegate OnBeforeDestroy; // 0x128 (0x10)
	unsigned char padding_138[0x10]; // 0x138 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.DestroyOnSafeZonePhaseComponent.HandlePlaylistReady (Underlying native function: HandlePlaylistReady 0x86b5970)
	void HandlePlaylistReady(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Protected | HasOutParms)
};

