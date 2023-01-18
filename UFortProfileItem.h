// Class /Script/FortniteGame.FortProfileItem
// Size: 0xc0
class UFortProfileItem : public UFortPersistableItem
{
	unsigned char itemseen; // 0xb8 (0x1)
	unsigned char favorite; // 0xb8 (0x1)
	unsigned char padding_b9[0x7]; // 0xb9 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortProfileItem.MarkItemAsSeen (Underlying native function: MarkItemAsSeen 0x8a93280)
	void MarkItemAsSeen(); // (Final | Native | Public | BlueprintCallable)
};

