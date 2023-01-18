// Class /Script/FortniteUI.FortAsyncAction_LoadCurrentSubgameProfiles
// Size: 0x58
class UFortAsyncAction_LoadCurrentSubgameProfiles : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	class AFortPlayerController* PlayerController; // 0x50 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortAsyncAction_LoadCurrentSubgameProfiles.LoadCurrentSubgameProfiles (Underlying native function: LoadCurrentSubgameProfiles 0xa4706f8)
	static class UFortAsyncAction_LoadCurrentSubgameProfiles* LoadCurrentSubgameProfiles(class AFortPlayerController*& PlayerController); // (Final | Native | Static | Public | BlueprintCallable)
};

