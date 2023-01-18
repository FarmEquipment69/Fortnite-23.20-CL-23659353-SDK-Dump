// Class /Script/FortniteGame.FortPartyContext
// Size: 0x360
class UFortPartyContext : public UFortBlueprintContext
{
	unsigned char unreflected_30[0x10]; // 0x30 (0x10) 
	struct FMulticastInlineDelegate OnPartyJoined; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnClientPartyStateChanged; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnPartyTypeChanged; // 0x60 (0x10)
	struct FMulticastInlineDelegate OnCrossplayPreferenceChanged; // 0x70 (0x10)
	struct FMulticastInlineDelegate OnPlayerStateChanged; // 0x80 (0x10)
	struct FMulticastInlineDelegate OnAthenaNumAliveChanged; // 0x90 (0x10)
	struct FMulticastInlineDelegate OnAthenaTimeSpentInMatch; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnAthenaReadyTypeChanged; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnPartyJoinRequested; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnPartyInvitesCountChanged; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnLFGChanged; // 0xe0 (0x10)
	struct FMulticastInlineDelegate OnPartyPrivacyChanged; // 0xf0 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerStateChanged; // 0x100 (0x10)
	struct FMulticastInlineDelegate OnPartyLeft; // 0x110 (0x10)
	unsigned char unreflected_120[0xa0]; // 0x120 (0xa0) 
	struct TMap<unsigned char, class UFortUITeamInfo*> TeamsMap; // 0x1c0 (0x50)
	struct TMap<struct FUniqueNetIdRepl, class AFortPlayerState*> UnassignedPlayerStatesByID; // 0x210 (0x50)
	unsigned char unreflected_260[0x20]; // 0x260 (0x20) 
	class UFortUITeamInfo* LocalPlayerTeam; // 0x280 (0x8)
	unsigned char unreflected_288[0x18]; // 0x288 (0x18) 
	struct TSet<struct FFortTeamMemberInfo> PendingChangedMemberInfos; // 0x2a0 (0x50)
	unsigned char padding_2f0[0x70]; // 0x2f0 (0x70)

	/* Functions */

	// Function /Script/FortniteGame.FortPartyContext.ShowInitialCrossplayPrompt (Underlying native function: ShowInitialCrossplayPrompt 0x8c78cc0)
	void ShowInitialCrossplayPrompt(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.ShouldShowCrossplayWarningDialog (Underlying native function: ShouldShowCrossplayWarningDialog 0x8c78c48)
	bool ShouldShowCrossplayWarningDialog(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.SetPartyPrivacySetting (Underlying native function: SetPartyPrivacySetting 0x8c78b3c)
	void SetPartyPrivacySetting(enum EPartyType& PartyType, bool& bLeaderFriendsOnly, bool& bLeaderInvitesOnly); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.SetLocalPlayerLFG (Underlying native function: SetLocalPlayerLFG 0x8c78ab8)
	void SetLocalPlayerLFG(bool& bInLFG); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.SetLocalPartyMemberLocation (Underlying native function: SetLocalPartyMemberLocation 0x8c78a38)
	void SetLocalPartyMemberLocation(enum EFortPartyMemberLocation& Location); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.SendMcpFriendRequest (Underlying native function: SendMcpFriendRequest 0x8c781a8)
	void SendMcpFriendRequest(struct FUniqueNetIdRepl& PlayerId); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnTimeSpentInMatchChanged__DelegateSignature (Has no native function)
	void OnTimeSpentInMatchChangedDelegateSignature(struct FUniqueNetIdRepl& UniqueId, struct FText& Mins, struct FText& Seconds); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnPlayerStateChangedDelegate__DelegateSignature (Has no native function)
	void OnPlayerStateChangedDelegateDelegateSignature(struct FFortTeamMemberInfo& PlayerInfo); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnPartyTypeChanged__DelegateSignature (Has no native function)
	void OnPartyTypeChangedDelegateSignature(enum EPartyType& PartyType); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnPartyPrivacyChangedDelegate__DelegateSignature (Has no native function)
	void OnPartyPrivacyChangedDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnPartyLeftDelegate__DelegateSignature (Has no native function)
	void OnPartyLeftDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnPartyJoinRequested__DelegateSignature (Has no native function)
	void OnPartyJoinRequestedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnPartyJoinedDelegate__DelegateSignature (Has no native function)
	void OnPartyJoinedDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnPartyInvitesCountUpdatedDelegate__DelegateSignature (Has no native function)
	void OnPartyInvitesCountUpdatedDelegateDelegateSignature(int& PartyInvitesCount); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnNumAliveChanged__DelegateSignature (Has no native function)
	void OnNumAliveChangedDelegateSignature(struct FUniqueNetIdRepl& UniqueId, int& NumAlive); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnLFGChanged__DelegateSignature (Has no native function)
	void OnLFGChangedDelegateSignature(bool& bLFG); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnCrossplayPreferenceChanged__DelegateSignature (Has no native function)
	void OnCrossplayPreferenceChangedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnClientPartyStateChanged__DelegateSignature (Has no native function)
	void OnClientPartyStateChangedDelegateSignature(enum EFortPartyState& PartyState); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortPartyContext.LeaveParty (Underlying native function: LeaveParty 0x8c78090)
	void LeaveParty(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.LeaveAction (Underlying native function: LeaveAction 0x8c78010)
	void LeaveAction(bool& bInStayWithParty); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.IsValidNetID (Underlying native function: IsValidNetID 0x893daac)
	static bool IsValidNetID(struct FUniqueNetIdRepl& UniqueNetId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.IsNetIdFromLocalPlayersPlatform (Underlying native function: IsNetIdFromLocalPlayersPlatform 0x8c77f38)
	bool IsNetIdFromLocalPlayersPlatform(struct FUniqueNetIdRepl& PlayerId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.IsLocalPlayerPartyLeader (Underlying native function: IsLocalPlayerPartyLeader 0x8c77f10)
	bool IsLocalPlayerPartyLeader(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.IsLocalPlayerLFG (Underlying native function: IsLocalPlayerLFG 0x8c77ee8)
	bool IsLocalPlayerLFG(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.IsEntirePartyInFrontEnd (Underlying native function: IsEntirePartyInFrontEnd 0x8c77ec0)
	bool IsEntirePartyInFrontEnd(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetPartyPrivacySetting (Underlying native function: GetPartyPrivacySetting 0x8c77d40)
	bool GetPartyPrivacySetting(enum EPartyType& OutPartyType, bool& OutLeaderFriendsOnly, bool& OutLeaderInvitesOnly); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.GetPartyMemberLocation (Underlying native function: GetPartyMemberLocation 0x8c77c1c)
	bool GetPartyMemberLocation(struct FUniqueNetIdRepl& MemberId, enum EFortPartyMemberLocation& LocationOut); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetPartyMemberInputType (Underlying native function: GetPartyMemberInputType 0x8c77b48)
	enum ECommonInputType GetPartyMemberInputType(struct FUniqueNetIdRepl& MemberId); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetPartyMemberDisplayState (Underlying native function: GetPartyMemberDisplayState 0x8c77a3c)
	enum EFortPartyMemberDisplayState GetPartyMemberDisplayState(struct FFortTeamMemberInfo& PartyMemberInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetNumPlayersInLocalParty (Underlying native function: GetNumPlayersInLocalParty 0x8c77a18)
	int GetNumPlayersInLocalParty(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetMcpFriendRequestStatusForPlayer (Underlying native function: GetMcpFriendRequestStatusForPlayer 0x8c77944)
	enum EFortFriendRequestStatus GetMcpFriendRequestStatusForPlayer(struct FUniqueNetIdRepl& PlayerId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetMaxTeamSizeForSelectedTheater (Underlying native function: GetMaxTeamSizeForSelectedTheater 0x8c77910)
	int GetMaxTeamSizeForSelectedTheater(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetLocalTeamTeamMemberInfo (Underlying native function: GetLocalTeamTeamMemberInfo 0x8c777f0)
	bool GetLocalTeamTeamMemberInfo(class AFortPlayerState*& TeamMemberState, struct FFortTeamMemberInfo& TeamMemberInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.GetLocalPlayerTeamMemberInfo (Underlying native function: GetLocalPlayerTeamMemberInfo 0x8c7772c)
	void GetLocalPlayerTeamMemberInfo(struct FFortTeamMemberInfo& LocalPlayerInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetLocalPlayerTeam (Underlying native function: GetLocalPlayerTeam 0x27e5c24)
	class UFortUITeamInfo* GetLocalPlayerTeam(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetLocalPlayerDisplayName (Underlying native function: GetLocalPlayerDisplayName 0x8c776b8)
	struct FString GetLocalPlayerDisplayName(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetLocalPartyProgression (Underlying native function: GetLocalPartyProgression 0x8c77690)
	enum EFortPartyState GetLocalPartyProgression(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetLocalPartyMemberLocation (Underlying native function: GetLocalPartyMemberLocation 0x8c775f4)
	bool GetLocalPartyMemberLocation(enum EFortPartyMemberLocation& Location); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetFriendRequestStatusForTeamMember (Underlying native function: GetFriendRequestStatusForTeamMember 0x8c77454)
	enum EFortFriendRequestStatus GetFriendRequestStatusForTeamMember(struct FFortTeamMemberInfo& TeamMemberInfo, struct FUniqueNetIdRepl& UniqueIdUsed, bool& bIsMcpId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetConsoleFriendRequestStatusForPlayer (Underlying native function: GetConsoleFriendRequestStatusForPlayer 0x8c77380)
	enum EFortFriendRequestStatus GetConsoleFriendRequestStatusForPlayer(struct FUniqueNetIdRepl& PlayerId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetAthenaPartyMemberReadyType (Underlying native function: GetAthenaPartyMemberReadyType 0x8c772ac)
	enum EAthenaPartyMemberReadyType GetAthenaPartyMemberReadyType(struct FUniqueNetIdRepl& MemberId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetAthenaPartyMemberReadyText (Underlying native function: GetAthenaPartyMemberReadyText 0x8c77184)
	struct FText GetAthenaPartyMemberReadyText(struct FUniqueNetIdRepl& MemberId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.AthenaPartyMemberReadyTypeChanged__DelegateSignature (Has no native function)
	void AthenaPartyMemberReadyTypeChangedDelegateSignature(struct FUniqueNetIdRepl& UniqueId, enum EAthenaPartyMemberReadyType& MemberReadyType); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/FortniteGame.FortPartyContext.AcceptMcpFriendRequest (Underlying native function: AcceptMcpFriendRequest 0x8c76ef8)
	void AcceptMcpFriendRequest(struct FUniqueNetIdRepl& PlayerId); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

