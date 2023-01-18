// Class /Script/FortniteUI.FortSidebarCollectionScreenContainerEditTags
// Size: 0x558
class UFortSidebarCollectionScreenContainerEditTags : public UAthenaCollectionScreenContainer
{
	class USidebarTagsEditorHeaderWidget* HeaderWidget; // 0x500 (0x8)
	class UCommonActivatableWidget* TagsInfoTooltip; // 0x508 (0x8)
	class UHorizontalBox* HBoxAddTag; // 0x510 (0x8)
	class UHorizontalBox* HBoxReplaceTag; // 0x518 (0x8)
	class UHorizontalBox* HBoxRemoveTag; // 0x520 (0x8)
	class UCommonButtonBase* RemoveTagButton; // 0x528 (0x8)
	class UCommonButtonBase* ButtonBack; // 0x530 (0x8)
	bool bPurgeSystemTagsCacheOnCheckForReady; // 0x538 (0x1)
	unsigned char padding_539[0x1f]; // 0x539 (0x1f)

	/* Functions */

	// Function /Script/FortniteUI.FortSidebarCollectionScreenContainerEditTags.ToggleTagsInfoTooltip (Has no native function)
	void ToggleTagsInfoTooltip(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortSidebarCollectionScreenContainerEditTags.BP_OnCollectionTabTitleChange (Has no native function)
	void BPOnCollectionTabTitleChange(enum ESocialTagCategory& TagCategory); // (Event | Protected | HasOutParms | BlueprintEvent)
};

