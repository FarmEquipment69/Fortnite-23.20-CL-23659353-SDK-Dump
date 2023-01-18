// Class /Script/FortniteUI.InfiltrationPerkSelectionPanel
// Size: 0x508
class UInfiltrationPerkSelectionPanel : public UFortActivatablePanelLTM
{
	struct TWeakObjectPtr<class AFortAthenaMutator_PerkSystemMutator> CachedMutator; // 0x3c0 (0x8)
	struct TArray<class UPerkSelectionEntryWidget*> EntryWidgets; // 0x3c8 (0x10)
	class UPerkIntroScreenWidget* PerkIntroScreenWidget; // 0x3d8 (0x8)
	struct FPerkMutatorData MutatorData; // 0x3e0 (0x108)
	class UOverlay* PerkIntroOverlay; // 0x4e8 (0x8)
	unsigned char padding_4f0[0x18]; // 0x4f0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.InfiltrationPerkSelectionPanel.UpdateBackgroundImage (Has no native function)
	void UpdateBackgroundImage(bool& bShouldShowBackground); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.InfiltrationPerkSelectionPanel.StartClosingWidget (Has no native function)
	void StartClosingWidget(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.InfiltrationPerkSelectionPanel.SetTimeRemaining (Has no native function)
	void SetTimeRemaining(float& TimeRemaining); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.InfiltrationPerkSelectionPanel.SetReRollCount (Has no native function)
	void SetReRollCount(int& NewCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.InfiltrationPerkSelectionPanel.OnSelectionMade (Underlying native function: OnSelectionMade 0xa57fa48)
	void OnSelectionMade(class UPerkSelectionEntryWidget*& Widget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.InfiltrationPerkSelectionPanel.OnReRollSelected (Underlying native function: OnReRollSelected 0xa57f7e4)
	void OnReRollSelected(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.InfiltrationPerkSelectionPanel.OnPerkIntroFinished (Has no native function)
	void OnPerkIntroFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.InfiltrationPerkSelectionPanel.NativeOnPerkIntroFinished (Underlying native function: NativeOnPerkIntroFinished 0xa57e898)
	void NativeOnPerkIntroFinished(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.InfiltrationPerkSelectionPanel.AttempShowPerkIntro (Underlying native function: AttempShowPerkIntro 0xa57c5fc)
	void AttempShowPerkIntro(); // (Final | Native | Protected | BlueprintCallable)
};

