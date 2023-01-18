// Class /Script/SaveTheWorldUI.FortQuestMapEventCallout
// Size: 0x4e0
class UFortQuestMapEventCallout : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x48]; // 0x3a8 (0x48) 
	class UFortBangWrapper_NUI* BangWrapperGoButton; // 0x3f0 (0x8)
	class UFortProgressArrowButton* ButtonLeftNav; // 0x3f8 (0x8)
	class UFortProgressArrowButton* ButtonRightNav; // 0x400 (0x8)
	class UCommonButtonBase* ButtonSwitchMode; // 0x408 (0x8)
	class UFortQuestMapNewBangWrapper* BangWrapperArrow; // 0x410 (0x8)
	class UFortQuestMapEventSequence* SequenceEventProgress; // 0x418 (0x8)
	class UHorizontalBox* HorizontalBoxNavButtons; // 0x420 (0x8)
	class UCommonTextBlock* TextHeader; // 0x428 (0x8)
	class UCommonTextBlock* TextBody; // 0x430 (0x8)
	class UImage* ImageCallout; // 0x438 (0x8)
	class UFortBangWrapper_NUI* BangWrapperUnHover; // 0x440 (0x8)
	class USoundBase* DefaultSound; // 0x448 (0x8)
	class UFortQuestItemDefinition* DefaultRequiredCompletedQuest; // 0x450 (0x8)
	class USoundBase* OverrideSound; // 0x458 (0x8)
	class UAudioComponent* SoundLoop; // 0x460 (0x8)
	class UFortQuestMapData* QuestMapData; // 0x468 (0x8)
	unsigned char padding_470[0x70]; // 0x470 (0x70)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.UpdateGoButtonBangState (Underlying native function: UpdateGoButtonBangState 0x759b960)
	void UpdateGoButtonBangState(bool& bClear); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.UpdateCalloutData (Underlying native function: UpdateCalloutData 0x759b838)
	void UpdateCalloutData(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.UpdateActiveEvents (Underlying native function: UpdateActiveEvents 0x759b608)
	void UpdateActiveEvents(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.SetIsFaded (Underlying native function: SetIsFaded 0x759a7f8)
	void SetIsFaded(bool& Faded); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.SetIsExpanded (Underlying native function: SetIsExpanded 0x759a6f8)
	void SetIsExpanded(bool& Expanded); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.ResetCallout (Underlying native function: ResetCallout 0x7599eb0)
	void ResetCallout(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.PlayFadeOut (Underlying native function: PlayFadeOut 0x7599b30)
	void PlayFadeOut(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.PlayFadeIn (Underlying native function: PlayFadeIn 0x7599ad8)
	void PlayFadeIn(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnResetCallout (Has no native function)
	void OnResetCallout(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnPlayFadeAnimation (Has no native function)
	void OnPlayFadeAnimation(bool& bIsFadeOut); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnEventIndexChanged (Has no native function)
	void OnEventIndexChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnDeactivatePlayAnimation (Has no native function)
	void OnDeactivatePlayAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnActivatePlayAnimation (Has no native function)
	void OnActivatePlayAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.IsCurrentEventUnlocked (Underlying native function: IsCurrentEventUnlocked 0x7598ef8)
	bool IsCurrentEventUnlocked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.GetRequiredQuestForCurrentEvent (Underlying native function: GetRequiredQuestForCurrentEvent 0x7597690)
	class UFortQuestItemDefinition* GetRequiredQuestForCurrentEvent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.GetIsFaded (Underlying native function: GetIsFaded 0x7596c30)
	bool GetIsFaded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.GetIsExpanded (Underlying native function: GetIsExpanded 0x7596c00)
	bool GetIsExpanded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.GetEventCount (Underlying native function: GetEventCount 0x29380f0)
	int GetEventCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.DeactivateCallout (Underlying native function: DeactivateCallout 0x7595abc)
	void DeactivateCallout(); // (Final | Native | Public | BlueprintCallable)
};

