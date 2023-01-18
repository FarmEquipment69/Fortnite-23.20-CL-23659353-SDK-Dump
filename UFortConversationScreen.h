// Class /Script/FortniteConversationUI.FortConversationScreen
// Size: 0x578
class UFortConversationScreen : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x10]; // 0x3a8 (0x10) 
	class UCommonVisibilitySwitcher* SwitcherDetails; // 0x3b8 (0x8)
	unsigned char unreflected_3c0[0x38]; // 0x3c0 (0x38) 
	class UInputComponent* ConversationInputComp; // 0x3f8 (0x8)
	int CurrentlySelectedIndex; // 0x400 (0x4)
	bool bBlockOptionIntroAnimation; // 0x404 (0x1)
	unsigned char unreflected_405[0x3]; // 0x405 (0x3) 
	struct FName RadialSelectionMaterialParameterName; // 0x408 (0x4)
	unsigned char unreflected_40c[0x4]; // 0x40c (0x4) 
	struct TArray<struct FGameplayTag> TagPriorities; // 0x410 (0x10)
	struct FName InteractActionNameKBM; // 0x420 (0x4)
	struct FName ADSInputAction; // 0x424 (0x4)
	struct FName InteractActionNameGamepad; // 0x428 (0x4)
	unsigned char unreflected_42c[0x4]; // 0x42c (0x4) 
	struct FDataTableRowHandle ConfirmBinding; // 0x430 (0x10)
	struct FDataTableRowHandle MakeSelectionBinding; // 0x440 (0x10)
	struct FDataTableRowHandle ADSMouseBinding; // 0x450 (0x10)
	struct FDataTableRowHandle CancelActionBinding; // 0x460 (0x10)
	struct FDataTableRowHandle RightTriggerBinding; // 0x470 (0x10)
	struct TMap<struct FString, struct TWeakObjectPtr<class UClass>> DetailsNodeTypeToBrief; // 0x480 (0x50)
	struct TWeakObjectPtr<class UClass> ChatBrief; // 0x4d0 (0x28)
	struct FString DataDrivenBriefPrefix; // 0x4f8 (0x10)
	struct TWeakObjectPtr<class UClass> DataDrivenBrief; // 0x508 (0x28)
	class UFortSlottedRadialMenu* RadialMenuDialogOptions; // 0x530 (0x8)
	class UImage* ImageRadialHighlight; // 0x538 (0x8)
	class UFortKeybindWidget* KeybindConfirm; // 0x540 (0x8)
	class UFortBasicBrief* BasicBriefMain; // 0x548 (0x8)
	class USizeBox* SizeBoxRadialMenu; // 0x550 (0x8)
	class UWidget* OverlayDetails; // 0x558 (0x8)
	class UWidget* OverlayWheelContainer; // 0x560 (0x8)
	class UImage* ImageBackground; // 0x568 (0x8)
	class UImage* ImageLoadingSpinner; // 0x570 (0x8)

	/* Functions */

	// Function /Script/FortniteConversationUI.FortConversationScreen.ShouldBlockOptionIntroAnim (Underlying native function: ShouldBlockOptionIntroAnim 0x7172404)
	bool ShouldBlockOptionIntroAnim(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteConversationUI.FortConversationScreen.OnSelectedItemAvailabilityChanged (Has no native function)
	void OnSelectedItemAvailabilityChanged(bool& bIsAvailable); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortConversationScreen.OnOptionsPopulated (Has no native function)
	void OnOptionsPopulated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortConversationScreen.OnItemSelected (Has no native function)
	void OnItemSelected(int& OriginalIndex); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortConversationScreen.OnConversationStarted (Has no native function)
	void OnConversationStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortConversationScreen.OnConversationOptionUnavailable (Has no native function)
	void OnConversationOptionUnavailable(class UFortRadialSlot*& SelectedEntry); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortConversationScreen.EndConversation (Underlying native function: EndConversation 0x7171f98)
	void EndConversation(); // (Final | Native | Protected)
};

