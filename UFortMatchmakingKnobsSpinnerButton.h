// Class /Script/FortniteUI.FortMatchmakingKnobsSpinnerButton
// Size: 0x1510
class UFortMatchmakingKnobsSpinnerButton : public UCommonRotator
{
	unsigned char unreflected_1440[0x18]; // 0x1440 (0x18) 
	bool bIsDisabledInNative; // 0x1458 (0x1)
	bool bEnabledStateWhenDisabledViaNative; // 0x1459 (0x1)
	unsigned char unreflected_145a[0x6]; // 0x145a (0x6) 
	struct FMulticastInlineDelegate OnKnobDataInitialized; // 0x1460 (0x10)
	struct FMulticastInlineDelegate OnHandleOptionWidgetGenerated; // 0x1470 (0x10)
	class UObject* OptionDataObj; // 0x1480 (0x8)
	class APlayerState* AssociatedPlayerState; // 0x1488 (0x8)
	class UFortUserPermissions* RepresentedPlayer; // 0x1490 (0x8)
	class UFortCreativeOption* CreativeOption; // 0x1498 (0x8)
	unsigned char unreflected_14a0[0x38]; // 0x14a0 (0x38) 
	class UMaterial* DisplayImageMaterial; // 0x14d8 (0x8)
	class USocialUser* SocialUser; // 0x14e0 (0x8)
	unsigned char unreflected_14e8[0x8]; // 0x14e8 (0x8) 
	class USizeBox* SizeBoxTextEntry; // 0x14f0 (0x8)
	class UFortEditableFilteredCountedTextBox* FilteredTextEntryWidget; // 0x14f8 (0x8)
	class UCommonTextBlock* TextBlockOptionDisplayName; // 0x1500 (0x8)
	unsigned char padding_1508[0x8]; // 0x1508 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortMatchmakingKnobsSpinnerButton.SetSpinnerOptionsVisiblity (Has no native function)
	void SetSpinnerOptionsVisiblity(bool& bVisible); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortMatchmakingKnobsSpinnerButton.OnSpinnerRotated (Has no native function)
	void OnSpinnerRotated(int& Value, bool& bUserInitiated); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortMatchmakingKnobsSpinnerButton.OnSelectionRotated (Underlying native function: OnSelectionRotated 0xa700b68)
	void OnSelectionRotated(int& Value, bool& bUserInitiated); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortMatchmakingKnobsSpinnerButton.OnNavigatedRight (Has no native function)
	void OnNavigatedRight(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortMatchmakingKnobsSpinnerButton.OnNavigatedLeft (Has no native function)
	void OnNavigatedLeft(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortMatchmakingKnobsSpinnerButton.OnLocalPlayerExperienceStateChanged (Underlying native function: OnLocalPlayerExperienceStateChanged 0xa700154)
	void OnLocalPlayerExperienceStateChanged(struct FEventMessageTag& Channel, struct FSpatialGamePlayActorLoadingStateUpdatedContext& StateContext); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortMatchmakingKnobsSpinnerButton.OnLoadingStateChanged (Has no native function)
	void OnLoadingStateChanged(bool& bCurrentlyLoading); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortMatchmakingKnobsSpinnerButton.HasMatchingTags (Underlying native function: HasMatchingTags 0xa6ff664)
	bool HasMatchingTags(struct FGameplayTagContainer& Tags); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortMatchmakingKnobsSpinnerButton.GetTitleText (Underlying native function: GetTitleText 0xa6fe7d0)
	struct FText GetTitleText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortMatchmakingKnobsSpinnerButton.GetDescription (Underlying native function: GetDescription 0xa6fe0f8)
	struct FText GetDescription(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

