// Class /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer
// Size: 0x3e8
class UFortUIStateWidget_STWJoinServer : public UFortUIStateWidgetBase
{
	class UFortRejoinWindowBase* RejoinWindow; // 0x3c0 (0x8)
	struct FDataTableRowHandle TutorialCompleteStatHandle; // 0x3c8 (0x10)
	class UClass* RejoinWindowClass; // 0x3d8 (0x8)
	unsigned char padding_3e0[0x8]; // 0x3e0 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.OnShowTutorialDialog (Has no native function)
	void OnShowTutorialDialog(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleMatchmakingStateChange (Underlying native function: HandleMatchmakingStateChange 0x75985ec)
	void HandleMatchmakingStateChange(struct TEnumAsByte<EMatchmakingState>& OldState, struct TEnumAsByte<EMatchmakingState>& NewState); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleMatchmakingComplete (Underlying native function: HandleMatchmakingComplete 0x75984e8)
	void HandleMatchmakingComplete(enum EMatchmakingCompleteResult& MatchmakingResult); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleLobbyTimeUpdated (Underlying native function: HandleLobbyTimeUpdated 0x75983e8)
	void HandleLobbyTimeUpdated(int& TimeRemaining); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleLobbyDisconnected (Underlying native function: HandleLobbyDisconnected 0x75983c4)
	void HandleLobbyDisconnected(); // (Final | Native | Private)
};

