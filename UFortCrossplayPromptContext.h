// Class /Script/FortniteGame.FortCrossplayPromptContext
// Size: 0x48
class UFortCrossplayPromptContext : public UFortLocalPlayerSubsystem
{
	struct FMulticastInlineDelegate CrossplayPreferenceChanged; // 0x30 (0x10)
	unsigned char padding_40[0x8]; // 0x40 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCrossplayPromptContext.IsPlaylistLimitedPoolMatchmakingEnabled (Underlying native function: IsPlaylistLimitedPoolMatchmakingEnabled 0x8bc2710)
	bool IsPlaylistLimitedPoolMatchmakingEnabled(class UFortPlaylistAthena*& PlaylistData); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCrossplayPromptContext.IsCrossplayEnabled (Underlying native function: IsCrossplayEnabled 0x8bc26ec)
	bool IsCrossplayEnabled(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

