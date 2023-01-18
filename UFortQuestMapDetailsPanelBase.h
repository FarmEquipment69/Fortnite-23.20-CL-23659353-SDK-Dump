// Class /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase
// Size: 0x2a8
class UFortQuestMapDetailsPanelBase : public UCommonUserWidget
{
	class UClass* QuestConversationClass; // 0x290 (0x8)
	float QuestUpdateDelayTime; // 0x298 (0x4)
	unsigned char unreflected_29c[0x4]; // 0x29c (0x4) 
	struct FTimerHandle* QuestUpdateTimerHandle; // 0x2a0 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase.SetScrollWidget (Underlying native function: SetScrollWidget 0x756d600)
	void SetScrollWidget(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase.SetQuestToDisplay (Underlying native function: SetQuestToDisplay 0x735cf90)
	void SetQuestToDisplay(class UFortQuestItemDefinition*& QuestDef); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase.HandleQuestsUpdatedInternal (Underlying native function: HandleQuestsUpdatedInternal 0x75989c0)
	void HandleQuestsUpdatedInternal(); // (Final | Native | Private)
};

