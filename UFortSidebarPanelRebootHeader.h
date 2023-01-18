// Class /Script/FortniteUI.FortSidebarPanelRebootHeader
// Size: 0x298
class UFortSidebarPanelRebootHeader : public UUserWidget
{
	struct TWeakObjectPtr<class URebootRallyQuestDataAsset> RebootRallyQuestDataPtr; // 0x268 (0x28)
	class UCommonButtonBase* RebootButton; // 0x290 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSidebarPanelRebootHeader.OnRebootRallyEligibilityUpdated (Has no native function)
	void OnRebootRallyEligibilityUpdated(bool& bEligible); // (Event | Public | BlueprintEvent)
};

