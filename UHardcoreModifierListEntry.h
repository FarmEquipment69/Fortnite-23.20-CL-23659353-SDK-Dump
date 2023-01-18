// Class /Script/FortniteUI.HardcoreModifierListEntry
// Size: 0x2b8
class UHardcoreModifierListEntry : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	class UCommonTextBlock* TextModifier; // 0x298 (0x8)
	class UButton* ButtonClickCatcher; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x10]; // 0x2a8 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.HardcoreModifierListEntry.SetMaxLevelCompleted (Has no native function)
	void SetMaxLevelCompleted(int& MaxLevel); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.HardcoreModifierListEntry.HandleModifierEnabled (Has no native function)
	void HandleModifierEnabled(bool& bModifierEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.HardcoreModifierListEntry.HandleEntryClicked (Underlying native function: HandleEntryClicked 0x7570aa8)
	void HandleEntryClicked(); // (Native | Protected)
};

