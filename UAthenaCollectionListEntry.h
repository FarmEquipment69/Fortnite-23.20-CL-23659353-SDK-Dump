// Class /Script/FortniteUI.AthenaCollectionListEntry
// Size: 0x14c0
class UAthenaCollectionListEntry : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x10]; // 0x1430 (0x10) 
	class UImage* ImageIcon; // 0x1440 (0x8)
	unsigned char unreflected_1448[0x8]; // 0x1448 (0x8) 
	class UCommonTextBlock* TextNumber; // 0x1450 (0x8)
	class UCommonTextBlock* TextItemName; // 0x1458 (0x8)
	unsigned char padding_1460[0x60]; // 0x1460 (0x60)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCollectionListEntry.BP_OnEntryReset (Has no native function)
	void BPOnEntryReset(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionListEntry.BP_OnEntryImageSet (Has no native function)
	void BPOnEntryImageSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionListEntry.BP_OnEntryIconLoaded (Has no native function)
	void BPOnEntryIconLoaded(class UObject*& EntryIcon); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionListEntry.BP_OnCollectionStateSet (Has no native function)
	void BPOnCollectionStateSet(enum EFortCollectedState& CollectedState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionListEntry.BP_OnCollectedByFriendSet (Has no native function)
	void BPOnCollectedByFriendSet(bool& bCollectedByFriend); // (Event | Protected | BlueprintEvent)
};

