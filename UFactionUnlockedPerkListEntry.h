// Class /Script/FortniteUI.FactionUnlockedPerkListEntry
// Size: 0x2a8
class UFactionUnlockedPerkListEntry : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	class UFactionUnlockedPerkData* Perk; // 0x298 (0x8)
	unsigned char padding_2a0[0x8]; // 0x2a0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FactionUnlockedPerkListEntry.OnStaggerTimeStarted (Has no native function)
	void OnStaggerTimeStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FactionUnlockedPerkListEntry.OnStaggerTimeElapsed (Has no native function)
	void OnStaggerTimeElapsed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FactionUnlockedPerkListEntry.BPSetup (Has no native function)
	void BPSetup(class UFactionUnlockedPerkData*& InPerk); // (Event | Protected | BlueprintEvent)
};

