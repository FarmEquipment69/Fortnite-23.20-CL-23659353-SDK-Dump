// Class /Script/SaveTheWorldUI.FortCampaignTabsScreenBase
// Size: 0x550
class UFortCampaignTabsScreenBase : public UCommonActivatablePanelLegacy
{
	struct TMap<enum EFortUIFeature, struct FName> FeaturesTabsMap; // 0x4e0 (0x50)
	class UHorizontalBox* TopTabContainer; // 0x530 (0x8)
	class UFortTabListWidgetBase* TopTabList; // 0x538 (0x8)
	class UClass* MainTabSet; // 0x540 (0x8)
	unsigned char padding_548[0x8]; // 0x548 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.HandleMainTabSelected (Has no native function)
	void HandleMainTabSelected(struct FName& TabNameID); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.HandleMainTabCreated (Has no native function)
	void HandleMainTabCreated(struct FName& TabNameID, class UCommonButtonBase*& TabButton); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.HandleFeatureStateChanged (Underlying native function: HandleFeatureStateChanged 0x5b46f70)
	void HandleFeatureStateChanged(enum EFortUIFeature& ChangedFeature, enum EFortUIFeatureState& NewState, enum EFortUIFeatureStateReason& Reason); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.ConstructTabs (Underlying native function: ConstructTabs 0x5b46cf0)
	void ConstructTabs(); // (Final | Native | Protected | BlueprintCallable)
};

