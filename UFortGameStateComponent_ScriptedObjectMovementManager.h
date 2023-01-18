// Class /Script/SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager
// Size: 0x1c0
class UFortGameStateComponent_ScriptedObjectMovementManager : public UFortGameStateComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct TArray<class AFortScriptedObjectMovement_WorldPhaseSite*> WorldPhaseSites; // 0xa8 (0x10)
	unsigned char unreflected_b8[0x98]; // 0xb8 (0x98) 
	struct TArray<class AScriptedObjectMovement_StaticPath*> RegisteredStaticPaths; // 0x150 (0x10)
	class AScriptedObjectMovement_StaticPath* CurrentlyMovingStaticPath; // 0x160 (0x8)
	unsigned char unreflected_168[0x28]; // 0x168 (0x28) 
	struct FScalableFloat StaticPathCooldownBetweenMoves; // 0x190 (0x28)
	unsigned char padding_1b8[0x8]; // 0x1b8 (0x8)

	/* Functions */

	// Function /Script/SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager.HandleCurrentPlaylistReady (Underlying native function: HandleCurrentPlaylistReady 0x72d29fc)
	void HandleCurrentPlaylistReady(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)
};

