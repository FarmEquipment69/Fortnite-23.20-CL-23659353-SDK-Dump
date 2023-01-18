// Class /Script/FortniteUI.FortCreativeTabGroup
// Size: 0x2b8
class UFortCreativeTabGroup : public UUserWidget
{
	struct FMulticastInlineDelegate OnCurrentTabChanged; // 0x268 (0x10)
	class UClass* TabButtonClass; // 0x278 (0x8)
	unsigned char unreflected_280[0x10]; // 0x280 (0x10) 
	class USoundBase* TabOnHoveredSound; // 0x290 (0x8)
	class USoundBase* TabOnPressedSound; // 0x298 (0x8)
	class UClass* TabButtonStyle; // 0x2a0 (0x8)
	class UAthenaScrollBox* TabBox; // 0x2a8 (0x8)
	class UCommonButtonGroupBase* TabGroup; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeTabGroup.PreviousTab (Underlying native function: PreviousTab 0xa69340c)
	void PreviousTab(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeTabGroup.OnTabButtonAdded (Has no native function)
	void OnTabButtonAdded(class UCommonButtonBase*& Button, struct FText& TabName, struct FSlateBrush& TabIcon); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeTabGroup.OnSimpleTabButtonAdded (Has no native function)
	void OnSimpleTabButtonAdded(class UCommonButtonBase*& Button, struct FText& TabName); // (Event | Public | HasOutParms | BlueprintEvent)

	// DelegateFunction /Script/FortniteUI.FortCreativeTabGroup.OnCurrentTabChanged__DelegateSignature (Has no native function)
	void OnCurrentTabChangedDelegateSignature(int& CurrentTabIndex); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortCreativeTabGroup.NextTab (Underlying native function: NextTab 0xa692ef8)
	void NextTab(); // (Final | Native | Public | BlueprintCallable)
};

