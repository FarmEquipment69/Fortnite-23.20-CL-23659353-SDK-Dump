// Class /Script/SaveTheWorldUI.FortQuestMapQuestTile
// Size: 0x2b0
class UFortQuestMapQuestTile : public UCommonUserWidget
{
	class UCommonButtonBase* QuestButton; // 0x290 (0x8)
	struct FFortQuestMapNode QuestNodeData; // 0x298 (0x18)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile.HandleSelectedChange (Has no native function)
	void HandleSelectedChange(bool& Selected); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile.HandleQuestDataChangedBP (Has no native function)
	void HandleQuestDataChangedBP(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile.GetQuestNodeData (Underlying native function: GetQuestNodeData 0x7597474)
	void GetQuestNodeData(class UFortQuestItemDefinition*& QuestItemDefinition, struct FFortQuestMapNode& NodeData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

