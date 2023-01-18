// Class /Script/FortniteUI.AthenaTransientQuestStartedOverlay
// Size: 0x320
class UAthenaTransientQuestStartedOverlay : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	class UCommonButtonLegacy* ButtonMobileClickCatcher; // 0x310 (0x8)
	unsigned char unreflected_318[0x1]; // 0x318 (0x1) 
	struct FFortPrioritizedWidgetData PrioritizedWidgetData; // 0x319 (0x2)
	unsigned char padding_31b[0x5]; // 0x31b (0x5)

	/* Functions */

	// Function /Script/FortniteUI.AthenaTransientQuestStartedOverlay.OnTransientQuestStarted (Has no native function)
	void OnTransientQuestStarted(class UFortQuestItem*& QuestItem); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTransientQuestStartedOverlay.OnPrioitizedFinished (Has no native function)
	void OnPrioitizedFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTransientQuestStartedOverlay.OnPrioitizedActivated (Has no native function)
	void OnPrioitizedActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTransientQuestStartedOverlay.HandleTransientQuestStarted (Underlying native function: HandleTransientQuestStarted 0xa55656c)
	void HandleTransientQuestStarted(class UFortQuestItem*& QuestItem, class UFortQuestItemDefinition_Athena*& PreceedingQuestDefAthena); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaTransientQuestStartedOverlay.GetOutroDelay (Underlying native function: GetOutroDelay 0xa555290)
	float GetOutroDelay(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

