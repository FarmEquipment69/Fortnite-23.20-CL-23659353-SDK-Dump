// Class /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton
// Size: 0x1470
class UFortHeroLoadoutSlotButton : public UCommonButtonLegacy
{
	struct FName SlotName; // 0x1430 (0x4)
	int SlotIndex; // 0x1434 (0x4)
	enum EHeroLoadoutSlotType SlotType; // 0x1438 (0x1)
	unsigned char unreflected_1439[0x7]; // 0x1439 (0x7) 
	struct FMulticastInlineDelegate OnRequestChangeHero; // 0x1440 (0x10)
	struct FMulticastInlineDelegate OnContextMenuOpenChanged; // 0x1450 (0x10)
	class UMenuAnchor* ContextMenuAnchor; // 0x1460 (0x8)
	unsigned char padding_1468[0x8]; // 0x1468 (0x8)

	/* Functions */

	// DelegateFunction /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton.OnRequestChangeHero__DelegateSignature (Has no native function)
	void OnRequestChangeHeroDelegateSignature(class UFortHeroLoadoutSlotButton*& SlotButton); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton.OnMenuOpenChangedEvent__DelegateSignature (Has no native function)
	void OnMenuOpenChangedEventDelegateSignature(class UFortHeroLoadoutSlotButton*& SlotButton, bool& bIsMenuOpen); // (MulticastDelegate | Public | Delegate)

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton.IsContextMenuOpen (Underlying native function: IsContextMenuOpen 0x7598ec4)
	bool IsContextMenuOpen(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton.HandleMenuOpenChanged (Underlying native function: HandleMenuOpenChanged 0x75986c0)
	void HandleMenuOpenChanged(bool& bIsMenuOpen); // (Final | Native | Private)
};

