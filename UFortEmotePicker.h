// Class /Script/FortniteUI.FortEmotePicker
// Size: 0x520
class UFortEmotePicker : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x18]; // 0x3a8 (0x18) 
	struct TMap<struct FGameplayTag, struct TWeakObjectPtr<class UTexture2D>> CategoryIcons; // 0x3c0 (0x50)
	struct TArray<struct FFortEmotePickerSubCategoryIdentifier> SubCategoryIdentifiers; // 0x410 (0x10)
	unsigned char unreflected_420[0xc]; // 0x420 (0xc) 
	struct FPrimaryContentSetup PrimaryContentSetup; // 0x42c (0x3)
	unsigned char unreflected_42f[0x1]; // 0x42f (0x1) 
	struct TArray<struct FDataTableRowHandle> QuickSelectBindings; // 0x430 (0x10)
	struct FDataTableRowHandle FrontEndOpenAction; // 0x440 (0x10)
	struct FDataTableRowHandle PreviousWheelInputAction; // 0x450 (0x10)
	struct FDataTableRowHandle NextWheelInputAction; // 0x460 (0x10)
	struct FDataTableRowHandle PreviousCategoryInputAction; // 0x470 (0x10)
	struct FDataTableRowHandle NextCategoryInputAction; // 0x480 (0x10)
	class UCommonButtonLegacy* ButtonPreviousWheel; // 0x490 (0x8)
	class UCommonButtonLegacy* ButtonNextWheel; // 0x498 (0x8)
	class UFortTextButton* ButtonCategoryMinusOne; // 0x4a0 (0x8)
	class UFortTextButton* ButtonCategoryMinusTwo; // 0x4a8 (0x8)
	class UFortTextButton* ButtonCategoryPlusOne; // 0x4b0 (0x8)
	class UFortTextButton* ButtonCategoryPlusTwo; // 0x4b8 (0x8)
	class UCommonTextBlock* TextItemName; // 0x4c0 (0x8)
	class UCommonTextBlock* TextWheelLabel; // 0x4c8 (0x8)
	class UFortKeybindWidget* KeybindConfirm; // 0x4d0 (0x8)
	class UCommonButtonLegacy* ButtonEmoteFrontend; // 0x4d8 (0x8)
	class UCommonButtonLegacy* ButtonCancel; // 0x4e0 (0x8)
	class UWidget* OverlayInGameEmoteBinding; // 0x4e8 (0x8)
	class UCommonLazyImage* ImageCategoryIcon; // 0x4f0 (0x8)
	class UFortPickerOverlay* PickerOverlayEmoteWheel; // 0x4f8 (0x8)
	class UCommonVisibilitySwitcher* VisibilitySwitcherPagination; // 0x500 (0x8)
	class UFortDottedPagination* DottedPaginationCategory; // 0x508 (0x8)
	class UCommonTextBlock* TextPagination; // 0x510 (0x8)
	class UCommonTextBlock* TextItemDescription; // 0x518 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortEmotePicker.OnControllerComponentAttached (Underlying native function: OnControllerComponentAttached 0xa50a6f8)
	void OnControllerComponentAttached(class AFortPlayerController*& OwningController, class UFortControllerComponent*& ControllerComponent); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortEmotePicker.HandleExternalEmoteRemoved (Underlying native function: HandleExternalEmoteRemoved 0xa5096ec)
	void HandleExternalEmoteRemoved(struct FName& ActionName); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortEmotePicker.HandleExternalEmoteAdded (Underlying native function: HandleExternalEmoteAdded 0xa50966c)
	void HandleExternalEmoteAdded(struct FName& ActionName); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortEmotePicker.BP_PageChanged (Has no native function)
	void BPPageChanged(int& Direction); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortEmotePicker.BP_ChangeElementVisibilitiesForFrontend (Has no native function)
	void BPChangeElementVisibilitiesForFrontend(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortEmotePicker.BP_CategoryChanged (Has no native function)
	void BPCategoryChanged(int& Direction); // (Event | Protected | BlueprintEvent)
};

