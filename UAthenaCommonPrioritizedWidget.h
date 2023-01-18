// Class /Script/FortniteUI.AthenaCommonPrioritizedWidget
// Size: 0x318
class UAthenaCommonPrioritizedWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	bool bAutoManagePriorityByVisibility; // 0x310 (0x1)
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x311 (0x2)
	unsigned char padding_313[0x5]; // 0x313 (0x5)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCommonPrioritizedWidget.OnStompFailed (Has no native function)
	void OnStompFailed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCommonPrioritizedWidget.OnStompedByOtherWidget (Has no native function)
	void OnStompedByOtherWidget(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCommonPrioritizedWidget.K2_OnBecomeInactive (Has no native function)
	void K2OnBecomeInactive(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCommonPrioritizedWidget.K2_OnBecomeActive (Has no native function)
	void K2OnBecomeActive(); // (Event | Protected | BlueprintEvent)
};

