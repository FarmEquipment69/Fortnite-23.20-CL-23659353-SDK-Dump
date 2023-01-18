// Class /Script/FortniteUI.FortSidebarCollectionListEntryEditTags
// Size: 0x14c0
class UFortSidebarCollectionListEntryEditTags : public UAthenaCollectionListEntry
{

	/* Functions */

	// Function /Script/FortniteUI.FortSidebarCollectionListEntryEditTags.GetIsCheckmarkVisible (Underlying native function: GetIsCheckmarkVisible 0xa759948)
	bool GetIsCheckmarkVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSidebarCollectionListEntryEditTags.BP_OnCollectionListItemSet (Has no native function)
	void BPOnCollectionListItemSet(struct FText& TagName, enum ESocialTagCategory& TagCategory); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortSidebarCollectionListEntryEditTags.BP_OnCollectionListItemCheckmarkChanged (Has no native function)
	void BPOnCollectionListItemCheckmarkChanged(bool& bIsVisible); // (Event | Protected | BlueprintEvent)
};

