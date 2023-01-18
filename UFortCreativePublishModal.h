// Class /Script/FortniteUI.FortCreativePublishModal
// Size: 0x458
class UFortCreativePublishModal : public UCommonActivatableWidget
{
	int DescriptionEntryCharLimit; // 0x3a8 (0x4)
	int NameEntryCharLimit; // 0x3ac (0x4)
	bool bFakePublishingFlow; // 0x3b0 (0x1)
	unsigned char unreflected_3b1[0x7]; // 0x3b1 (0x7) 
	class UCommonAnimatedSwitcher* SwitcherContent; // 0x3b8 (0x8)
	class UCommonTextBlock* TextIslandCode; // 0x3c0 (0x8)
	class UCommonTextBlock* TextErrorInNameField; // 0x3c8 (0x8)
	class UCommonTextBlock* TextErrorInDescriptionField; // 0x3d0 (0x8)
	class UCommonTextBlock* TextErrorInRequiredTags; // 0x3d8 (0x8)
	class UCommonTextBlock* TextErrorInIslandBudget; // 0x3e0 (0x8)
	class UCommonTextBlock* TextErrorOnPublish; // 0x3e8 (0x8)
	class UCommonTextBlock* TextCharCountTitle; // 0x3f0 (0x8)
	class UCommonTextBlock* TextCharCountDesc; // 0x3f8 (0x8)
	class UCommonTextBlock* TextIslandPublishedSuccess; // 0x400 (0x8)
	class UCommonButtonBase* ButtonSubmit; // 0x408 (0x8)
	class UCommonButtonBase* ButtonCopyCode; // 0x410 (0x8)
	class UCheckBox* CheckBoxClearAllPlayersData; // 0x418 (0x8)
	class UEditableTextBox* EditTextName; // 0x420 (0x8)
	class UEditableTextBox* EditTextDescription; // 0x428 (0x8)
	int NumTagsRequiredToPublish; // 0x430 (0x4)
	unsigned char unreflected_434[0x4]; // 0x434 (0x4) 
	class AFortVolume* VolumeToPublish; // 0x438 (0x8)
	unsigned char padding_440[0x18]; // 0x440 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativePublishModal.OnValidCheckComplete (Has no native function)
	void OnValidCheckComplete(bool& bSuccess); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePublishModal.OnPublishSuccess (Has no native function)
	void OnPublishSuccess(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePublishModal.OnPublishError (Has no native function)
	void OnPublishError(struct FText& ErrorText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePublishModal.OnPublishBegin (Has no native function)
	void OnPublishBegin(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePublishModal.OnNameTextCommitted (Has no native function)
	void OnNameTextCommitted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePublishModal.OnDescriptionTextCommitted (Has no native function)
	void OnDescriptionTextCommitted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePublishModal.OnCodeCopied (Has no native function)
	void OnCodeCopied(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePublishModal.HandleNameTextCommitted (Underlying native function: HandleNameTextCommitted 0xa692580)
	void HandleNameTextCommitted(struct FText& Text, struct TEnumAsByte<ETextCommit>& CommittMethod); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortCreativePublishModal.HandleNameTextChanged (Underlying native function: HandleNameTextChanged 0xa6924c4)
	void HandleNameTextChanged(struct FText& Text); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortCreativePublishModal.HandleDescriptionTextCommitted (Underlying native function: HandleDescriptionTextCommitted 0xa691c18)
	void HandleDescriptionTextCommitted(struct FText& Text, struct TEnumAsByte<ETextCommit>& CommittMethod); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortCreativePublishModal.HandleDescriptionTextChanged (Underlying native function: HandleDescriptionTextChanged 0xa691b7c)
	void HandleDescriptionTextChanged(struct FText& Text); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortCreativePublishModal.BP_Reset (Has no native function)
	void BPReset(); // (Event | Protected | BlueprintEvent)
};

