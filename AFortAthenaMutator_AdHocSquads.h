// Class /Script/FortniteGame.FortAthenaMutator_AdHocSquads
// Size: 0x6f8
class AFortAthenaMutator_AdHocSquads : public AFortAthenaMutator
{
	unsigned char unreflected_330[0x30]; // 0x330 (0x30) 
	int MaxAdHocSquadSize; // 0x360 (0x4)
	unsigned char unreflected_364[0x4]; // 0x364 (0x4) 
	struct FScalableFloat bVoiceChatSquaddingEnabled; // 0x368 (0x28)
	struct FScalableFloat MaxDistInviteNotificationCanBeReceived; // 0x390 (0x28)
	struct FScalableFloat MinimumDistInviteNotificationIsLost; // 0x3b8 (0x28)
	int ForceDisplaySquadInfoDuringGamePhases; // 0x3e0 (0x4)
	unsigned char unreflected_3e4[0x4]; // 0x3e4 (0x4) 
	struct FText SquadsTooBigToMergeText; // 0x3e8 (0x18)
	class UClass* AdHocSquadsControllerComponentClass; // 0x400 (0x8)
	class UClass* AdHocSquadDataClass; // 0x408 (0x8)
	bool bMaintainSquadDataForNonAdHocSquads; // 0x410 (0x1)
	unsigned char unreflected_411[0x7]; // 0x411 (0x7) 
	struct FScalableFloat bForceAllPlayersOntoIndividualTeams; // 0x418 (0x28)
	struct FScalableFloat bFollowingPlayerAutomaticallyLeavesCurrentSquadWhenSquadingUp; // 0x440 (0x28)
	struct FScalableFloat bSquadingUpMergesSquads; // 0x468 (0x28)
	struct FScalableFloat bEnsureOnOutsideTeamOrSquadChanged; // 0x490 (0x28)
	struct FScalableFloat bBreakUpSocialPartiesOnInit; // 0x4b8 (0x28)
	struct FGameplayTagContainer HUDElementTags; // 0x4e0 (0x20)
	unsigned char unreflected_500[0x20]; // 0x500 (0x20) 
	struct TMap<unsigned char, class UAdHocSquadData*> AdHocSquadDataMap; // 0x520 (0x50)
	unsigned char unreflected_570[0x50]; // 0x570 (0x50) 
	struct FAdHocSquad_InviteDataArray InviteDataArray; // 0x5c0 (0x120)
	struct TArray<struct FAdHocSquad_InviteData> LocalClientInviteDataArray; // 0x6e0 (0x10)
	unsigned char padding_6f0[0x8]; // 0x6f0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_AdHocSquads.SquadUpPlayers (Underlying native function: SquadUpPlayers 0x846133c)
	bool SquadUpPlayers(enum EAdHocSquads_SquadUpResult& OutSquadUpResult, unsigned char& OutNewSharedSquad, class AFortPlayerControllerAthena*& SquadUpInstigatorPlayerController, class AFortPlayerControllerAthena*& SquadUpFollowerPlayerController); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_AdHocSquads.ShouldAllowAdHocSquads (Underlying native function: ShouldAllowAdHocSquads 0x8460fc4)
	static bool ShouldAllowAdHocSquads(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAthenaMutator_AdHocSquads.PlayerSquadInviteEnded (Underlying native function: PlayerSquadInviteEnded 0x738c2ac)
	void PlayerSquadInviteEnded(class AFortPlayerStateAthena*& PlayerStateInviting, enum EAdHocSquads_InviteStatus& InviteEndedReason); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_AdHocSquads.PlayerInitiatedSquadInvite (Underlying native function: PlayerInitiatedSquadInvite 0x723ba10)
	bool PlayerInitiatedSquadInvite(class AFortPlayerPawn*& InFortPlayerPawn); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_AdHocSquads.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x72ab98c)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_AdHocSquads.IsPlayersSquadFull (Underlying native function: IsPlayersSquadFull 0x845e62c)
	bool IsPlayersSquadFull(class AFortPlayerControllerAthena*& PlayerController); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_AdHocSquads.HavePlayerLeaveAdHocSquad (Underlying native function: HavePlayerLeaveAdHocSquad 0x738c2ac)
	void HavePlayerLeaveAdHocSquad(class AFortPlayerControllerAthena*& LeavingPlayerController, enum EAdHocSquads_LeaveSquadReason& LeaveReason); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

