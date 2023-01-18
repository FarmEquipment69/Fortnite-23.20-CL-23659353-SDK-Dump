// Class /Script/FortniteUI.AthenaIGMSquadMemberWidget
// Size: 0x3b8
class UAthenaIGMSquadMemberWidget : public UAthenaIGMPartyMemberWidget
{
	class UFortLazyImage* ImageSquadMemberPortrait; // 0x390 (0x8)
	class UTextBlock* TextSquadMemberName; // 0x398 (0x8)
	class UImage* ImagePartyMemberIndicator; // 0x3a0 (0x8)
	class AFortPlayerStateAthena* CachedSquadMember; // 0x3a8 (0x8)
	unsigned char padding_3b0[0x8]; // 0x3b0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaIGMSquadMemberWidget.OnSetupAsFillSlot (Has no native function)
	void OnSetupAsFillSlot(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaIGMSquadMemberWidget.OnMatchmakingStarted (Has no native function)
	void OnMatchmakingStarted(bool& bWasOptedIn); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaIGMSquadMemberWidget.OnKeepPlayingTogetherVotingStatusChanged (Has no native function)
	void OnKeepPlayingTogetherVotingStatusChanged(enum EKeepPlayingTogetherVotingStatus& NewStatus, bool& bWasOptedIn); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaIGMSquadMemberWidget.HandlePreserveSquadChanged (Has no native function)
	void HandlePreserveSquadChanged(bool& bPreserveSquad); // (Event | Protected | BlueprintEvent)
};

