// Class /Script/FortniteUI.FortUIStateWidget_JoinServer
// Size: 0x570
class UFortUIStateWidget_JoinServer : public UFortUIStateWidget_NUI
{
	class UCommonWidgetStackLegacy* StackMainContent; // 0x548 (0x8)
	struct FDataTableRowHandle TutorialCompleteStatHandle; // 0x550 (0x10)
	class UClass* RejoinWindowClass; // 0x560 (0x8)
	unsigned char padding_568[0x8]; // 0x568 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortUIStateWidget_JoinServer.OnShowTutorialDialog (Has no native function)
	void OnShowTutorialDialog(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIStateWidget_JoinServer.HandleMatchmakingStateChange (Underlying native function: HandleMatchmakingStateChange 0xa954208)
	void HandleMatchmakingStateChange(struct TEnumAsByte<EMatchmakingState>& OldState, struct TEnumAsByte<EMatchmakingState>& NewState); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortUIStateWidget_JoinServer.HandleMatchmakingComplete (Underlying native function: HandleMatchmakingComplete 0xa9540fc)
	void HandleMatchmakingComplete(enum EMatchmakingCompleteResult& MatchmakingResult); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortUIStateWidget_JoinServer.HandleLobbyTimeUpdated (Underlying native function: HandleLobbyTimeUpdated 0xa95407c)
	void HandleLobbyTimeUpdated(int& TimeRemaining); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortUIStateWidget_JoinServer.HandleLobbyDisconnected (Underlying native function: HandleLobbyDisconnected 0xa954058)
	void HandleLobbyDisconnected(); // (Final | Native | Private)
};

