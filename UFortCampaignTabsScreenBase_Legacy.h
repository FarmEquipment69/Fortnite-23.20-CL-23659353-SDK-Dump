// Class /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy
// Size: 0x550
class UFortCampaignTabsScreenBase_Legacy : public UCommonActivatablePanelLegacy
{
	struct TMap<enum EFortUIFeature, struct FName> FeaturesTabsMap; // 0x4e0 (0x50)
	class UHorizontalBox* TopTabContainer; // 0x530 (0x8)
	class UFortTabListWidgetBase_Legacy* TopTabList; // 0x538 (0x8)
	class UClass* MainTabSet; // 0x540 (0x8)
	unsigned char padding_548[0x8]; // 0x548 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleMainTabSelected (Has no native function)
	void HandleMainTabSelected(struct FName& TabNameID); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleMainTabCreated (Has no native function)
	void HandleMainTabCreated(struct FName& TabNameID, class UCommonButtonBase*& TabButton); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleFeatureStateChanged (Underlying native function: HandleFeatureStateChanged 0x5b46f70)
	void HandleFeatureStateChanged(enum EFortUIFeature& ChangedFeature, enum EFortUIFeatureState& NewState, enum EFortUIFeatureStateReason& Reason); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleFeatureNavigateRequest (Underlying native function: HandleFeatureNavigateRequest 0x5b46ed0)
	void HandleFeatureNavigateRequest(enum EFortUIFeature& Feature); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.ConstructTabs (Underlying native function: ConstructTabs 0x5b46d10)
	void ConstructTabs(); // (Final | Native | Protected | BlueprintCallable)
};

