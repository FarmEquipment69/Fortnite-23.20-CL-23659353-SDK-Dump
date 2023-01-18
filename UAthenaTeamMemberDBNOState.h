// Class /Script/FortniteUI.AthenaTeamMemberDBNOState
// Size: 0x348
class UAthenaTeamMemberDBNOState : public UCommonUserWidget
{
	struct TWeakObjectPtr<class UObject> DBNOIndicatorVisual; // 0x290 (0x28)
	struct TWeakObjectPtr<class UObject> RevivingIndicatorVisual; // 0x2b8 (0x28)
	class UCommonVisibilitySwitcher* SwitcherIndicator; // 0x2e0 (0x8)
	class UPanelWidget* PanelDefaultIndicator; // 0x2e8 (0x8)
	class UPanelWidget* PanelCustomIndicator; // 0x2f0 (0x8)
	class UCommonLazyImage* LazyImageIndicator; // 0x2f8 (0x8)
	class UImage* ImageTimer; // 0x300 (0x8)
	class UCommonLazyWidget* LazyWidgetCustomWidgetContainer; // 0x308 (0x8)
	class UCommonLazyImage* LazyImageCustomWidgetTimer; // 0x310 (0x8)
	struct FName StartTimeName; // 0x318 (0x4)
	struct FName BaseDurationName; // 0x31c (0x4)
	struct FName InteractingMultiplierName; // 0x320 (0x4)
	struct FName TotalDurationName; // 0x324 (0x4)
	struct FName NewMethodWeightName; // 0x328 (0x4)
	unsigned char padding_32c[0x1c]; // 0x32c (0x1c)

	/* Functions */

	// Function /Script/FortniteUI.AthenaTeamMemberDBNOState.SetPlayerState (Underlying native function: SetPlayerState 0x15947ac)
	void SetPlayerState(class AFortPlayerStateAthena*& InPlayerState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaTeamMemberDBNOState.RefreshVisuals (Underlying native function: RefreshVisuals 0xa50b628)
	void RefreshVisuals(int& InteractingActorCount, float& InteractingMultiplier, float& InteractDuration); // (Final | Native | Public)
};

