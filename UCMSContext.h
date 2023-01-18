// Class /Script/FortniteUI.CMSContext
// Size: 0x668
class UCMSContext : public UBlueprintContextBase
{
	unsigned char unreflected_30[0x118]; // 0x30 (0x118) 
	struct FCmsJsonMessages CachedCmsMessages; // 0x148 (0x268)
	unsigned char unreflected_3b0[0x8]; // 0x3b0 (0x8) 
	class UFortPlayerSurveyInterpreter* PlayerSurveyInterpreter; // 0x3b8 (0x8)
	unsigned char padding_3c0[0x2a8]; // 0x3c0 (0x2a8)

	/* Functions */

	// Function /Script/FortniteUI.CMSContext.ShouldAutoOpenNews (Underlying native function: ShouldAutoOpenNews 0xa62368c)
	bool ShouldAutoOpenNews(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CMSContext.MarkPlaylistInformationAsViewed (Underlying native function: MarkPlaylistInformationAsViewed 0xa62124c)
	void MarkPlaylistInformationAsViewed(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.CMSContext.MarkNewsAsShown (Underlying native function: MarkNewsAsShown 0xa6211c4)
	void MarkNewsAsShown(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.CMSContext.IsNewPlaylistInformationAvailable (Underlying native function: IsNewPlaylistInformationAvailable 0xa620d24)
	bool IsNewPlaylistInformationAvailable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CMSContext.HasScoringRuleDisplayInfo (Underlying native function: HasScoringRuleDisplayInfo 0xa620610)
	bool HasScoringRuleDisplayInfo(struct FName& RuleName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CMSContext.GetSurvivalCMSText (Underlying native function: GetSurvivalCMSText 0xa61f214)
	bool GetSurvivalCMSText(struct FText& Title, struct FText& Body); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CMSContext.GetScoringRuleDisplayInfo (Underlying native function: GetScoringRuleDisplayInfo 0xa61ee80)
	struct FFortShowdownScoringRuleDisplayInfo GetScoringRuleDisplayInfo(struct FName& RuleName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CMSContext.GetLatestSubgameInfo (Underlying native function: GetLatestSubgameInfo 0xa61e228)
	struct FSubgameScreenSource GetLatestSubgameInfo(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.CMSContext.GetLatestDynamicBackgrounds (Underlying native function: GetLatestDynamicBackgrounds 0xa61e164)
	struct FDynamicBackgroundsSource GetLatestDynamicBackgrounds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CMSContext.GetLatestCreativeAds (Underlying native function: GetLatestCreativeAds 0xa61e128)
	struct FCreativeAdSource GetLatestCreativeAds(); // (Final | Native | Public | BlueprintCallable)
};

