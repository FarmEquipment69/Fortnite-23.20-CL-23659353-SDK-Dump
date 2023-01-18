// Class /Script/CrewUI.FortProgressiveItemScreen
// Size: 0x7f0
class UFortProgressiveItemScreen : public UFortProgressiveScreenBase
{
	class UWidget* ContentPurchasedFocusWidget; // 0x6d0 (0x8)
	class UCommonButtonBase* ButtonBack; // 0x6d8 (0x8)
	class UCommonButtonBase* ButtonMobileBack; // 0x6e0 (0x8)
	class UCommonButtonBase* ButtonMoreInfo; // 0x6e8 (0x8)
	class UBattlePassCrewPurchaseButton* ButtonSubscribe; // 0x6f0 (0x8)
	class UCommonButtonBase* ButtonPreviewStyles; // 0x6f8 (0x8)
	class UCommonTextBlock* TextExpirationFinePrint; // 0x700 (0x8)
	class UCommonTextBlock* TextNewStagesUnlockFinePrint; // 0x708 (0x8)
	class UDynamicEntryBox* EntryBoxStagesPips; // 0x710 (0x8)
	class UCommonButtonGroupBase* ButtonGroupStagesPips; // 0x718 (0x8)
	class UFortProgressiveItemDetailsWidget* WidgetProgressiveItemDetails; // 0x720 (0x8)
	class UFortProgressiveStageList* WidgetProgressiveStageList; // 0x728 (0x8)
	class UFortProgressiveItemStateTitleWidget* ProgressiveItemStateTitle; // 0x730 (0x8)
	struct TWeakObjectPtr<class UClass> MoreInfoModalClass; // 0x738 (0x28)
	struct FName SubscribedMaterialParameterName; // 0x760 (0x4)
	unsigned char padding_764[0x8c]; // 0x764 (0x8c)

	/* Functions */

	// Function /Script/CrewUI.FortProgressiveItemScreen.OnUpdateSubscriptionState (Has no native function)
	void OnUpdateSubscriptionState(bool& bSubscribed); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveItemScreen.OnSetIsSoloScreen (Has no native function)
	void OnSetIsSoloScreen(bool& bInIsSoloScreen); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveItemScreen.OnItemSelected (Has no native function)
	void OnItemSelected(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveItemScreen.OnErrorStateTextUpdated (Has no native function)
	void OnErrorStateTextUpdated(struct FText& ErrorStateText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveItemScreen.BlockScreenContent (Has no native function)
	void BlockScreenContent(bool& bBlockScreen, struct FText& ContentBlockedText); // (Event | Protected | HasOutParms | BlueprintEvent)
};

