// Class /Script/FortniteConversationUI.FortQuestBrief
// Size: 0x2e0
class UFortQuestBrief : public UFortConversationOptionBrief
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	struct FText ThisMatchOnlyQuestText; // 0x298 (0x18)
	class UCommonRichTextBlock* TextObjective; // 0x2b0 (0x8)
	class UCommonTextBlock* TextMoneyReward; // 0x2b8 (0x8)
	class UCommonTextBlock* TextXpReward; // 0x2c0 (0x8)
	class UCommonTextBlock* TextExpirationTime; // 0x2c8 (0x8)
	class UCommonLazyImage* LazyImageQuestProviderImage; // 0x2d0 (0x8)
	class UOverlay* OverlayQuestProvider; // 0x2d8 (0x8)

	/* Functions */

	// Function /Script/FortniteConversationUI.FortQuestBrief.OnQuestInformationRecieved (Has no native function)
	void OnQuestInformationRecieved(struct FText& Objective, struct FFortRarityItemData& RarityData, struct FGameplayTag& CategoryTag, int& XPReward, int& MoneyReward); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortQuestBrief.OnQuestExpirationTimeSet (Has no native function)
	void OnQuestExpirationTimeSet(bool& bDisplayExpirationTime); // (Event | Protected | BlueprintEvent)
};

