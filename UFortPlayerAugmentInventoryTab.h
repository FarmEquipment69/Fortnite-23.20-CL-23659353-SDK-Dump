// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab
// Size: 0x4d0
class UFortPlayerAugmentInventoryTab : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	struct FScalableFloat AugmentsEnabledViaHotfix; // 0x3b0 (0x28)
	struct FName TabNameID; // 0x3d8 (0x4)
	unsigned char unreflected_3dc[0x4]; // 0x3dc (0x4) 
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x3e0 (0xe0)
	class UFortPlayerAugmentInventoryInfoWidget* AugmentInfo; // 0x4c0 (0x8)
	class UCommonListView* ListViewAugments; // 0x4c8 (0x8)

	/* Functions */

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnTimerUpdated (Has no native function)
	void OnTimerUpdated(float& TimeRemaining, float& TimePercentage); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnNumPendingAugmentsToGrantUpdated (Has no native function)
	void OnNumPendingAugmentsToGrantUpdated(int& NumPendingAugmentsToGrant); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentListUpdated (Has no native function)
	void OnAugmentListUpdated(int& NumAugments); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentGrantingTimersFinishedForMatch (Has no native function)
	void OnAugmentGrantingTimersFinishedForMatch(); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleTimerUpdated (Underlying native function: HandleTimerUpdated 0x7528fc8)
	void HandleTimerUpdated(float& TimeRemaining, float& TimePercentage); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleNumPendingAugmentsToGrantUpdated (Underlying native function: HandleNumPendingAugmentsToGrantUpdated 0x7528bc0)
	void HandleNumPendingAugmentsToGrantUpdated(int8_t& NumPendingAugmentsToGrant); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleAugmentGrantingTimersFinishedForMatch (Underlying native function: HandleAugmentGrantingTimersFinishedForMatch 0x75284dc)
	void HandleAugmentGrantingTimersFinishedForMatch(); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.GetPendingAugmentsToGrant (Underlying native function: GetPendingAugmentsToGrant 0x7528470)
	int GetPendingAugmentsToGrant(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

