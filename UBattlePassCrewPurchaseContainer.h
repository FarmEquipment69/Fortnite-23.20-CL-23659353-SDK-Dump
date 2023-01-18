// Class /Script/CrewUI.BattlePassCrewPurchaseContainer
// Size: 0x428
class UBattlePassCrewPurchaseContainer : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x20]; // 0x3a8 (0x20) 
	float CrewUpsellTransitionDelayTime; // 0x3c8 (0x4)
	unsigned char unreflected_3cc[0xc]; // 0x3cc (0xc) 
	class UCommonActivatableWidgetSwitcher* SwitcherContentContainer; // 0x3d8 (0x8)
	class UBattlePassPurchaseScreen* BattlePassPurchaseScreen; // 0x3e0 (0x8)
	class UWidgetAnimation* Intro; // 0x3e8 (0x8)
	class UWidgetAnimation* QuickIntro; // 0x3f0 (0x8)
	class UWidgetAnimation* CrewBenefitsIntro; // 0x3f8 (0x8)
	class UClass* CrewSubscriptionErrorModalClass; // 0x400 (0x8)
	unsigned char padding_408[0x20]; // 0x408 (0x20)

	/* Functions */

	// Function /Script/CrewUI.BattlePassCrewPurchaseContainer.OnTriggerIntroAnimation (Has no native function)
	void OnTriggerIntroAnimation(bool& bCanClaimRewards); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.BattlePassCrewPurchaseContainer.OnContentStateUpdated (Has no native function)
	void OnContentStateUpdated(enum EBattlePassCrewContentState& InState, bool& bInScreenOpened); // (Event | Protected | BlueprintEvent)
};

