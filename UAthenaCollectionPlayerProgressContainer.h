// Class /Script/FortniteUI.AthenaCollectionPlayerProgressContainer
// Size: 0x2d0
class UAthenaCollectionPlayerProgressContainer : public UCommonUserWidget
{
	class UClass* PlayerProgressClass; // 0x290 (0x8)
	float CycleDelay; // 0x298 (0x4)
	int ShowLocalPlayerAfterNumEntries; // 0x29c (0x4)
	struct TArray<class UAthenaCollectionPlayerProgress*> CachedPlayerProgressEntries; // 0x2a0 (0x10)
	unsigned char padding_2b0[0x20]; // 0x2b0 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCollectionPlayerProgressContainer.BP_OverrideCategoryTitle (Has no native function)
	void BPOverrideCategoryTitle(struct FText& OverrideTitle); // (0x00000002 | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionPlayerProgressContainer.BP_OnPlayerProgressEntriesCreated (Has no native function)
	void BPOnPlayerProgressEntriesCreated(struct TArray<class UAthenaCollectionPlayerProgress*>& PlayerProgressEntries, int& NumToCollect); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionPlayerProgressContainer.BP_OnPlayerProgressContainerReset (Has no native function)
	void BPOnPlayerProgressContainerReset(); // (Event | Protected | BlueprintEvent)
};

