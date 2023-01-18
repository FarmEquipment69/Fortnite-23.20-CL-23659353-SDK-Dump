// Class /Script/FortniteUI.FortCreativeQuestHUDWidget
// Size: 0x360
class UFortCreativeQuestHUDWidget : public UMinigameWidgetBase
{
	unsigned char unreflected_328[0x8]; // 0x328 (0x8) 
	class UCreativeQuestComponent* LastKnownQuestComponent; // 0x330 (0x8)
	class UCommonTextBlock* TextCurrentAmount; // 0x338 (0x8)
	class UCommonTextBlock* TextTargetAmount; // 0x340 (0x8)
	class UCommonTextBlock* TextQuestName; // 0x348 (0x8)
	class UCommonTextBlock* TextQuestDetails; // 0x350 (0x8)
	int questIndex; // 0x358 (0x4)
	unsigned char padding_35c[0x4]; // 0x35c (0x4)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeQuestHUDWidget.SetToQuest (Underlying native function: SetToQuest 0xa6db9c0)
	void SetToQuest(int& questIndex, bool& bForceUpdate); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeQuestHUDWidget.SetQuestIndex (Underlying native function: SetQuestIndex 0xa6db8c4)
	void SetQuestIndex(int& newQuestIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeQuestHUDWidget.OnQuestChanged (Has no native function)
	void OnQuestChanged(class UCreativeQuestComponent*& CurrentQuestComponent, bool& bHasActiveQuest); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeQuestHUDWidget.OnProgressChanged (Has no native function)
	void OnProgressChanged(); // (Event | Protected | BlueprintEvent)
};

