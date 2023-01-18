// Class /Script/FortniteUI.FortActivityModeSetSelection
// Size: 0xba0
class UFortActivityModeSetSelection : public UCommonListView
{
	class UFortGameActivity* CachedGameActivity; // 0xb90 (0x8)
	class UFortGameActivity* SavedActivity; // 0xb98 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortActivityModeSetSelection.SetSelectedMnemonic (Underlying native function: SetSelectedMnemonic 0xa6b5ba4)
	class UFortGameActivity* SetSelectedMnemonic(struct FString& Mnemonic); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivityModeSetSelection.SetActivity (Underlying native function: SetActivity 0xa6b49c8)
	void SetActivity(class UFortGameActivity*& GameActivity); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivityModeSetSelection.GetSelectedLinkId (Underlying native function: GetSelectedLinkId 0xa6b2f2c)
	struct FOnlineLinkId GetSelectedLinkId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

