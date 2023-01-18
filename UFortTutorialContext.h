// Class /Script/FortniteUI.FortTutorialContext
// Size: 0x148
class UFortTutorialContext : public UBlueprintContextBase
{
	struct FMulticastInlineDelegate OnUpdateTutorialAnnouncement; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnNewAnnouncementStartedOnClientDelegate; // 0x40 (0x10)
	unsigned char padding_50[0xf8]; // 0x50 (0xf8)

	/* Functions */

	// Function /Script/FortniteUI.FortTutorialContext.UpdateTutorialAnnouncement (Underlying native function: UpdateTutorialAnnouncement 0xa669f64)
	void UpdateTutorialAnnouncement(struct FFortClientAnnouncementData_Tutorial& AnnouncementData, bool& bShow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialContext.UnhideTutorialCallout (Underlying native function: UnhideTutorialCallout 0xa65f4a8)
	void UnhideTutorialCallout(struct FName& WidgetName, struct FName& TutorialQuestObjectiveName, enum ETutorialType& TutorialType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialContext.UnhideAllTutorialCallouts (Underlying native function: UnhideAllTutorialCallouts 0xa669d84)
	void UnhideAllTutorialCallouts(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialContext.TryGetActivePrimaryAnnouncement (Underlying native function: TryGetActivePrimaryAnnouncement 0xa669d34)
	class AFortClientAnnouncement* TryGetActivePrimaryAnnouncement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTutorialContext.TryClearingPendingQuest (Underlying native function: TryClearingPendingQuest 0xa669cb0)
	void TryClearingPendingQuest(class UFortQuestItem*& Quest); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialContext.StartTutorial (Underlying native function: StartTutorial 0xa6696cc)
	void StartTutorial(struct FName& WidgetName, enum ETutorialType& TutorialType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialContext.SkipTutorial (Underlying native function: SkipTutorial 0xa6692e8)
	void SkipTutorial(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialContext.ShouldPromptToSkipTutorial (Underlying native function: ShouldPromptToSkipTutorial 0xa6690a4)
	bool ShouldPromptToSkipTutorial(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTutorialContext.OnNewAnnouncementStartedOnClient (Underlying native function: OnNewAnnouncementStartedOnClient 0xa666bbc)
	void OnNewAnnouncementStartedOnClient(class AFortClientAnnouncement*& NewAnnouncement); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortTutorialContext.IsTutorialCalloutVisible (Underlying native function: IsTutorialCalloutVisible 0xa6655c8)
	bool IsTutorialCalloutVisible(struct FName& WidgetName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialContext.IsObjectiveNextTutorialObjective (Underlying native function: IsObjectiveNextTutorialObjective 0xa665300)
	bool IsObjectiveNextTutorialObjective(class UFortQuestItem*& Quest, struct FName& TutorialObjectiveName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialContext.HideTutorialCallout (Underlying native function: HideTutorialCallout 0xa664fc4)
	void HideTutorialCallout(struct FName& WidgetName, struct FName& TutorialQuestObjectiveName, enum ETutorialType& TutorialType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialContext.GetTutorialData (Underlying native function: GetTutorialData 0xa663eb8)
	bool GetTutorialData(struct FName& TutorialObjectiveName, struct FFortUITutorialData& OutTutorialData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTutorialContext.GetTutorialCallouts (Underlying native function: GetTutorialCallouts 0xa663e18)
	void GetTutorialCallouts(struct TArray<struct FName>& WidgetNames); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialContext.GetHiddenTutorialCallouts (Underlying native function: GetHiddenTutorialCallouts 0xa661114)
	void GetHiddenTutorialCallouts(struct TArray<struct FName>& WidgetNames); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialContext.FinishTutorial (Underlying native function: FinishTutorial 0xa65f67c)
	void FinishTutorial(class UFortQuestItem*& Quest, struct FName& WidgetName, enum ETutorialType& TutorialType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialContext.EnableTutorialCallout (Underlying native function: EnableTutorialCallout 0xa65f4a8)
	void EnableTutorialCallout(struct FName& WidgetName, struct FName& TutorialQuestObjectiveName, enum ETutorialType& TutorialType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialContext.DisableTutorialCallout (Underlying native function: DisableTutorialCallout 0xa65f2d0)
	void DisableTutorialCallout(struct FName& WidgetName, struct FName& TutorialQuestObjectiveName, enum ETutorialType& TutorialType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialContext.ContinueTutorial (Underlying native function: ContinueTutorial 0xa65f208)
	void ContinueTutorial(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialContext.ClearTutorialCallouts (Underlying native function: ClearTutorialCallouts 0xa65f1f0)
	void ClearTutorialCallouts(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialContext.CanStartTutorial (Underlying native function: CanStartTutorial 0xa65edbc)
	bool CanStartTutorial(class UFortQuestItem*& Quest, struct FName& WidgetName, enum ETutorialType& TutorialType); // (Final | Native | Public | BlueprintCallable)
};

