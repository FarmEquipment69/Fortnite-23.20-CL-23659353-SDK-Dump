// Class /Script/FortniteConversationUI.FortItemFundBrief
// Size: 0x3c0
class UFortItemFundBrief : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	struct FEventMessageTag CurrentFundsChangedTag; // 0x298 (0x4)
	unsigned char unreflected_29c[0xa4]; // 0x29c (0xa4) 
	class UCommonTextBlock* TextTitleBar; // 0x340 (0x8)
	class UCommonTextBlock* TextProgressPercent; // 0x348 (0x8)
	class UCommonTextBlock* TextProgressCount; // 0x350 (0x8)
	class UFortSimpleMaterialProgressBar* ProgressFunding; // 0x358 (0x8)
	class UFortLazyImage* LazyImageIcon; // 0x360 (0x8)
	class UFortTransactionStrip* TransactionStripMain; // 0x368 (0x8)
	struct TMap<struct FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs; // 0x370 (0x50)

	/* Functions */

	// Function /Script/FortniteConversationUI.FortItemFundBrief.OnProgressUpdated (Has no native function)
	void OnProgressUpdated(float& CurrentFundingFraction); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortItemFundBrief.OnIntializationComplete (Has no native function)
	void OnIntializationComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortItemFundBrief.InitializeFromContext (Has no native function)
	void InitializeFromContext(struct FConversationContext& ConversationContext); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortItemFundBrief.GetDataForKey (Underlying native function: GetDataForKey 0x7171fac)
	struct FText GetDataForKey(struct FString& Key, bool& bUseIndexAdjustment); // (Final | Native | Private | BlueprintCallable)
};

