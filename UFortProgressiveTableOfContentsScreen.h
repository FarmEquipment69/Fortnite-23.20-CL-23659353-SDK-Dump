// Class /Script/CrewUI.FortProgressiveTableOfContentsScreen
// Size: 0x760
class UFortProgressiveTableOfContentsScreen : public UFortProgressiveScreenBase
{
	class UWidget* ContentPurchasedFocusWidget; // 0x6d0 (0x8)
	class UCommonButtonBase* ButtonBack; // 0x6d8 (0x8)
	class UCommonButtonBase* ButtonMobileBack; // 0x6e0 (0x8)
	class UCommonButtonBase* ButtonMoreInfo; // 0x6e8 (0x8)
	class UBattlePassCrewPurchaseButton* ButtonSubscribe; // 0x6f0 (0x8)
	class UFortProgressiveSetList* WidgetSetList; // 0x6f8 (0x8)
	class UFortProgressiveSetDetailsWidget* WidgetSetDetails; // 0x700 (0x8)
	class UFortProgressiveItemStateTitleWidget* WidgetItemStateTitle; // 0x708 (0x8)
	class UDynamicEntryBox* EntryBoxSetPagesPips; // 0x710 (0x8)
	class UCommonButtonGroupBase* ButtonGroupSetPagesPips; // 0x718 (0x8)
	struct TWeakObjectPtr<class UClass> MoreInfoModalClass; // 0x720 (0x28)
	struct FName SubscribedMaterialParameterName; // 0x748 (0x4)
	unsigned char padding_74c[0x14]; // 0x74c (0x14)

	/* Functions */

	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateSubscriptionState (Has no native function)
	void BPOnUpdateSubscriptionState(bool& bSubscribed); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateNumTilesAvailable (Has no native function)
	void BPOnUpdateNumTilesAvailable(int& NumTiles); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateErrorStateText (Has no native function)
	void BPOnUpdateErrorStateText(struct FText& ErrorStateText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateBanner (Has no native function)
	void BPOnUpdateBanner(struct FText& BannerText, bool& bAllSetsCompleted, bool& bSubscribed); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnSetDescriptionText (Has no native function)
	void BPOnSetDescriptionText(struct FText& ProductDescription); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BlockScreenContent (Has no native function)
	void BlockScreenContent(bool& bBlockScreen, struct FText& ContentBlockedText); // (Event | Protected | HasOutParms | BlueprintEvent)
};

