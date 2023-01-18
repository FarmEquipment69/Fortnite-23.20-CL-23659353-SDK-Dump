// Class /Script/FortniteGame.FortCheatManager_Quests
// Size: 0xc0
class UFortCheatManager_Quests : public UChildCheatManager
{
	unsigned char unreflected_c0[0xc0]; 

	/* Functions */

	// Function /Script/FortniteGame.FortCheatManager_Quests.UnpinQuest (Underlying native function: UnpinQuest 0x26daa0c)
	void UnpinQuest(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.TeleportToBountyTarget (Underlying native function: TeleportToBountyTarget 0x26daa0c)
	void TeleportToBountyTarget(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.SendQuestEvent (Underlying native function: SendQuestEvent 0x8e00b0c)
	void SendQuestEvent(struct FName& Type, struct FString& TargetTag, struct FString& SourceTag, struct FString& ContextTag, int& Count); // (Final | Exec | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager_Quests.RemoveSharedQuest (Underlying native function: RemoveSharedQuest 0x7239f74)
	void RemoveSharedQuest(struct FString& QuestName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.QueryRebootData (Underlying native function: QueryRebootData 0x26daa0c)
	void QueryRebootData(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.ProgressAllQuestsByName (Underlying native function: ProgressAllQuestsByName 0x5e74410)
	void ProgressAllQuestsByName(struct FString& QuestPartialName, int& Count); // (Final | Exec | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager_Quests.PinQuest (Underlying native function: PinQuest 0x7239f74)
	void PinQuest(struct FString& QuestMcpId); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.OnXPEvent (Underlying native function: OnXPEvent 0x8dff57c)
	void OnXPEvent(struct FXPEventInfo& XPEvent); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager_Quests.LogSquadSharedQuestData (Underlying native function: LogSquadSharedQuestData 0x26daa0c)
	void LogSquadSharedQuestData(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.LogRebootData (Underlying native function: LogRebootData 0x26daa0c)
	void LogRebootData(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.LogQuestInfo (Underlying native function: LogQuestInfo 0x7291288)
	void LogQuestInfo(struct FString& QuestName); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.LogPinnedQuest (Underlying native function: LogPinnedQuest 0x26daa0c)
	void LogPinnedQuest(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.LogCurrentQuests (Underlying native function: LogCurrentQuests 0x26daa0c)
	void LogCurrentQuests(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.LogActiveTransientQuests (Underlying native function: LogActiveTransientQuests 0x26daa0c)
	void LogActiveTransientQuests(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.ListChallenges (Underlying native function: ListChallenges 0x6b13f58)
	void ListChallenges(struct FString& Filter); // (Final | Exec | Native | Public | Const)

	// Function /Script/FortniteGame.FortCheatManager_Quests.ListActiveQuestContextTags (Underlying native function: ListActiveQuestContextTags 0x26daa0c)
	void ListActiveQuestContextTags(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.GrantWorldProcessorQuest (Underlying native function: GrantWorldProcessorQuest 0x7239f74)
	void GrantWorldProcessorQuest(struct FString& QuestName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.GrantQuestTransientlyNoTrack (Underlying native function: GrantQuestTransientlyNoTrack 0x7291288)
	void GrantQuestTransientlyNoTrack(struct FString& QuestName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public | Const)

	// Function /Script/FortniteGame.FortCheatManager_Quests.GrantQuestTransiently (Underlying native function: GrantQuestTransiently 0x7291288)
	void GrantQuestTransiently(struct FString& QuestName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public | Const)

	// Function /Script/FortniteGame.FortCheatManager_Quests.GrantQuestToReleventSpatialQuestManagers (Underlying native function: GrantQuestToReleventSpatialQuestManagers 0x52f5880)
	void GrantQuestToReleventSpatialQuestManagers(struct FString& QuestName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.GrantProcessorQuest (Underlying native function: GrantProcessorQuest 0x7239f74)
	void GrantProcessorQuest(struct FString& QuestName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.GrantAccolade (Underlying native function: GrantAccolade 0x8b0832c)
	void GrantAccolade(struct FString& AccoladeName, int& AccoladeIndex); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.GiveAthenaXpAtLocation (Underlying native function: GiveAthenaXpAtLocation 0x8b07df8)
	void GiveAthenaXpAtLocation(float& XpAmount, struct FString& DesiredPriority); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.GiveAthenaXp (Underlying native function: GiveAthenaXp 0x8dfda20)
	void GiveAthenaXp(float& XpAmount); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.ForceCompleteAccolades (Underlying native function: ForceCompleteAccolades 0x76c5ccc)
	void ForceCompleteAccolades(float& TimerDelay, bool& bSkipAcknowledgements); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.EnableQuestStateLogging (Underlying native function: EnableQuestStateLogging 0x8dfc988)
	void EnableQuestStateLogging(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.DisableQuestStateLogging (Underlying native function: DisableQuestStateLogging 0x8dfc918)
	void DisableQuestStateLogging(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.CompleteAllSquadMemberQuestsByName (Underlying native function: CompleteAllSquadMemberQuestsByName 0x723b5f8)
	void CompleteAllSquadMemberQuestsByName(struct FString& QuestPartialName); // (Final | Exec | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager_Quests.CompleteAllQuestsByName (Underlying native function: CompleteAllQuestsByName 0x723b5f8)
	void CompleteAllQuestsByName(struct FString& QuestPartialName); // (Final | Exec | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager_Quests.CompleteAccoladesByDisplayName (Underlying native function: CompleteAccoladesByDisplayName 0x7239f74)
	void CompleteAccoladesByDisplayName(struct FString& DisplayNameSearchString); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Quests.CheckObjectiveStatUsage (Underlying native function: CheckObjectiveStatUsage 0x26daa0c)
	void CheckObjectiveStatUsage(); // (Final | Exec | Native | Public)
};

