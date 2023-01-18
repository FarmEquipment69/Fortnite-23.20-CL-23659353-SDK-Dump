// Class /Script/FortniteUI.FortQuestObjectiveEntry
// Size: 0x2b0
class UFortQuestObjectiveEntry : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	struct FMulticastInlineDelegate OnFinishedDisplaying; // 0x298 (0x10)
	class UFortQuestObjectiveInfo* MyObjectiveInfo; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortQuestObjectiveEntry.UpdateLevelUpObjectiveVisuals (Has no native function)
	void UpdateLevelUpObjectiveVisuals(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuestObjectiveEntry.UpdateDefaultObjectiveVisuals (Has no native function)
	void UpdateDefaultObjectiveVisuals(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuestObjectiveEntry.UpdateCharmObjectiveVisuals (Has no native function)
	void UpdateCharmObjectiveVisuals(struct FFortChallengeSetStyle& DisplayStyle, struct FText& CharmName, struct TWeakObjectPtr<class UTexture2D>& CharmIcon); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuestObjectiveEntry.UpdateChallengeBundleObjectiveVisuals (Has no native function)
	void UpdateChallengeBundleObjectiveVisuals(struct FFortChallengeSetStyle& DisplayStyle, struct FText& ChallengeBundleName); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuestObjectiveEntry.StartDisplayingObjective (Has no native function)
	void StartDisplayingObjective(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuestObjectiveEntry.SetRewardVisuals (Has no native function)
	void SetRewardVisuals(class UFortItemDefinition*& RewardDef, struct FText& SourceText, struct FText& TypeText); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuestObjectiveEntry.ObjectiveInfoSet (Has no native function)
	void ObjectiveInfoSet(class UFortQuestObjectiveInfo*& ObjectiveInfo, bool& IsAnnouncement, bool& bQuestCompleted); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuestObjectiveEntry.HideRewardVisuals (Has no native function)
	void HideRewardVisuals(); // (Event | Public | BlueprintEvent)
};

