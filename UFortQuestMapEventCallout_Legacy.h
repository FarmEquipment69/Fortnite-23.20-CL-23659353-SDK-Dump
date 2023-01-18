// Class /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy
// Size: 0x650
class UFortQuestMapEventCallout_Legacy : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x48]; // 0x518 (0x48) 
	class UFortBangWrapper_NUI* BangWrapperGoButton; // 0x560 (0x8)
	class UFortProgressArrowButton_Legacy* ButtonLeftNav; // 0x568 (0x8)
	class UFortProgressArrowButton_Legacy* ButtonRightNav; // 0x570 (0x8)
	class UCommonButtonLegacy* ButtonSwitchMode; // 0x578 (0x8)
	class UFortQuestMapNewBangWrapper_Legacy* BangWrapperArrow; // 0x580 (0x8)
	class UFortQuestMapEventSequence* SequenceEventProgress; // 0x588 (0x8)
	class UHorizontalBox* HorizontalBoxNavButtons; // 0x590 (0x8)
	class UCommonTextBlock* TextHeader; // 0x598 (0x8)
	class UCommonTextBlock* TextBody; // 0x5a0 (0x8)
	class UImage* ImageCallout; // 0x5a8 (0x8)
	class UFortBangWrapper_NUI* BangWrapperUnHover; // 0x5b0 (0x8)
	class USoundBase* DefaultSound; // 0x5b8 (0x8)
	class UFortQuestItemDefinition* DefaultRequiredCompletedQuest; // 0x5c0 (0x8)
	class USoundBase* OverrideSound; // 0x5c8 (0x8)
	class UAudioComponent* SoundLoop; // 0x5d0 (0x8)
	class UFortQuestMapData* QuestMapData; // 0x5d8 (0x8)
	unsigned char padding_5e0[0x70]; // 0x5e0 (0x70)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateGoButtonBangState (Underlying native function: UpdateGoButtonBangState 0x759ba04)
	void UpdateGoButtonBangState(bool& bClear); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateCalloutData (Underlying native function: UpdateCalloutData 0x759b84c)
	void UpdateCalloutData(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateActiveEvents (Underlying native function: UpdateActiveEvents 0x759b61c)
	void UpdateActiveEvents(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.SetIsFaded (Underlying native function: SetIsFaded 0x759a878)
	void SetIsFaded(bool& Faded); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.SetIsExpanded (Underlying native function: SetIsExpanded 0x759a778)
	void SetIsExpanded(bool& Expanded); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.ResetCallout (Underlying native function: ResetCallout 0x7599ec4)
	void ResetCallout(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.PlayFadeOut (Underlying native function: PlayFadeOut 0x7599b5c)
	void PlayFadeOut(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.PlayFadeIn (Underlying native function: PlayFadeIn 0x7599b04)
	void PlayFadeIn(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnResetCallout (Has no native function)
	void OnResetCallout(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnPlayFadeAnimation (Has no native function)
	void OnPlayFadeAnimation(bool& bIsFadeOut); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnEventIndexChanged (Has no native function)
	void OnEventIndexChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnDeactivatePlayAnimation (Has no native function)
	void OnDeactivatePlayAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnActivatePlayAnimation (Has no native function)
	void OnActivatePlayAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.IsCurrentEventUnlocked (Underlying native function: IsCurrentEventUnlocked 0x7598f1c)
	bool IsCurrentEventUnlocked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetRequiredQuestForCurrentEvent (Underlying native function: GetRequiredQuestForCurrentEvent 0x75976cc)
	class UFortQuestItemDefinition* GetRequiredQuestForCurrentEvent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetIsFaded (Underlying native function: GetIsFaded 0x7596c48)
	bool GetIsFaded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetIsExpanded (Underlying native function: GetIsExpanded 0x7596c18)
	bool GetIsExpanded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetEventCount (Underlying native function: GetEventCount 0x7596858)
	int GetEventCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.DeactivateCallout (Underlying native function: DeactivateCallout 0x7595ad0)
	void DeactivateCallout(); // (Final | Native | Public | BlueprintCallable)
};

