// Class /Script/SaveTheWorldUI.FortQuestTreeItemWidget
// Size: 0x1440
class UFortQuestTreeItemWidget : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	struct TWeakObjectPtr<class UObject> QuestOrCategory; // 0x1438 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget.SetupAsQuest (Has no native function)
	void SetupAsQuest(class UFortQuestItem*& category); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget.SetupAsCategory (Has no native function)
	void SetupAsCategory(class UFortQuestCategory*& category); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget.OnQuestsUpdated (Has no native function)
	void OnQuestsUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget.HandleQuestsUpdated (Underlying native function: HandleQuestsUpdated 0x75c0274)
	void HandleQuestsUpdated(); // (Final | Native | Protected)
};

