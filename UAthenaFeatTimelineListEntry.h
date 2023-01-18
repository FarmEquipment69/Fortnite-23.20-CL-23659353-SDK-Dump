// Class /Script/FortniteUI.AthenaFeatTimelineListEntry
// Size: 0x2f0
class UAthenaFeatTimelineListEntry : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	class UPanelWidget* PanelFeatInfo; // 0x298 (0x8)
	class UPanelWidget* PanelDate; // 0x2a0 (0x8)
	class UCommonButtonLegacy* SimpleButtonClickArea; // 0x2a8 (0x8)
	class UCommonTextBlock* TextFeatName; // 0x2b0 (0x8)
	class UCommonTextBlock* TextFeatDescription; // 0x2b8 (0x8)
	class UFortLazyImage* LazyImageQuestIcon; // 0x2c0 (0x8)
	class UCommonTextBlock* TextCompletedTime; // 0x2c8 (0x8)
	class UCommonRichTextBlock* RichTextDate; // 0x2d0 (0x8)
	unsigned char unreflected_2d8[0x10]; // 0x2d8 (0x10) 
	bool bIsHovered; // 0x2e8 (0x1)
	unsigned char padding_2e9[0x7]; // 0x2e9 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.AthenaFeatTimelineListEntry.UnHoverFeat (Has no native function)
	void UnHoverFeat(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaFeatTimelineListEntry.OnWaitingForCompletedTimer (Has no native function)
	void OnWaitingForCompletedTimer(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaFeatTimelineListEntry.OnTimespanInfoSet (Has no native function)
	void OnTimespanInfoSet(int& NumDays); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaFeatTimelineListEntry.OnFeatInfoSet (Has no native function)
	void OnFeatInfoSet(int& NumFeatsOnDay, int& IdxOnDay); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaFeatTimelineListEntry.OnFeatCompletedThisSession (Has no native function)
	void OnFeatCompletedThisSession(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaFeatTimelineListEntry.HoverFeat (Has no native function)
	void HoverFeat(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaFeatTimelineListEntry.CalculateSourceTag (Underlying native function: CalculateSourceTag 0xa5091e4)
	struct FGameplayTag CalculateSourceTag(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

