// Class /Script/FortniteUI.FortRewardInfoWidget
// Size: 0x318
class UFortRewardInfoWidget : public UCommonUserWidget
{
	class UPanelWidget* RewardListWidget; // 0x290 (0x8)
	struct FMargin RewardWidgetPadding; // 0x298 (0x10)
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x2a8 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x2a9 (0x1)
	bool bShowDescription; // 0x2aa (0x1)
	bool bAllowItemInteraction; // 0x2ab (0x1)
	int MaxNumRewardsShown; // 0x2ac (0x4)
	class UClass* OrWidgetType; // 0x2b0 (0x8)
	class UClass* RewardInfoButtonType; // 0x2b8 (0x8)
	unsigned char unreflected_2c0[0x20]; // 0x2c0 (0x20) 
	class UCommonButtonGroupBase* ButtonGroup; // 0x2e0 (0x8)
	unsigned char padding_2e8[0x30]; // 0x2e8 (0x30)

	/* Functions */

	// Function /Script/FortniteUI.FortRewardInfoWidget.SetRewards (Underlying native function: SetRewards 0xa88fd8c)
	void SetRewards(struct FFortRewardInfo& RewardsIn); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortRewardInfoWidget.SetReward (Underlying native function: SetReward 0xa88fc74)
	void SetReward(struct FFortItemQuantityPair& RewardIn); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortRewardInfoWidget.SetButtonGroup (Underlying native function: SetButtonGroup 0xa88f65c)
	void SetButtonGroup(class UCommonButtonGroupBase*& InButtonGroup); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortRewardInfoWidget.ContainsReward (Underlying native function: ContainsReward 0xa88cf0c)
	bool ContainsReward(struct FString& TemplateIdToCheck); // (Final | Native | Public | BlueprintCallable)
};

