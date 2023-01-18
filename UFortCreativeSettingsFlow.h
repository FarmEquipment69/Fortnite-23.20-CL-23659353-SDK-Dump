// Class /Script/FortniteUI.FortCreativeSettingsFlow
// Size: 0x710
class UFortCreativeSettingsFlow : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x8]; // 0x518 (0x8) 
	class UCommonButtonGroupLegacy* TabButtonGroup; // 0x520 (0x8)
	unsigned char unreflected_528[0x20]; // 0x528 (0x20) 
	class UCommonTextBlock* IslandName; // 0x548 (0x8)
	class UCommonTextBlock* PublishedIslandCode; // 0x550 (0x8)
	class UCommonTextBlock* IslandBulletOne; // 0x558 (0x8)
	class UImage* BulletPointImageOne; // 0x560 (0x8)
	class UCommonTextBlock* IslandBulletTwo; // 0x568 (0x8)
	class UImage* BulletPointImageTwo; // 0x570 (0x8)
	class UCommonTextBlock* IslandBulletThree; // 0x578 (0x8)
	class UImage* BulletPointImageThree; // 0x580 (0x8)
	class UWidgetSwitcher* SwitcherEditorConnected; // 0x588 (0x8)
	struct FName TabNameID; // 0x590 (0x4)
	unsigned char unreflected_594[0xc]; // 0x594 (0xc) 
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x5a0 (0xe0)
	struct FDataTableRowHandle ChannelBrowserInputRowHandle; // 0x680 (0x10)
	struct TWeakObjectPtr<class UClass> SoftChannelBrowserClass; // 0x690 (0x28)
	unsigned char unreflected_6b8[0x8]; // 0x6b8 (0x8) 
	struct FDataTableRowHandle DeviceBrowserInputRowHandle; // 0x6c0 (0x10)
	struct TWeakObjectPtr<class UClass> SoftDeviceBrowserClass; // 0x6d0 (0x28)
	unsigned char padding_6f8[0x18]; // 0x6f8 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeSettingsFlow.SetupIslandDisplayInformation (Underlying native function: SetupIslandDisplayInformation 0xa6dbbbc)
	void SetupIslandDisplayInformation(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeSettingsFlow.SetIslandDescriptionTags (Underlying native function: SetIslandDescriptionTags 0xa6db338)
	void SetIslandDescriptionTags(struct TArray<struct FCreativeIslandDescriptionTag>& CreativeIslandDescriptionTags); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeSettingsFlow.IsOwnerOfCurrentVolume (Underlying native function: IsOwnerOfCurrentVolume 0xa6d9c48)
	bool IsOwnerOfCurrentVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortCreativeSettingsFlow.HasActiveModalWidget (Has no native function)
	void HasActiveModalWidget(bool& OutWidgetActive); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeSettingsFlow.GetMiniGameSettings (Underlying native function: GetMiniGameSettings 0xa6d8ba8)
	class UFortMatchmakingKnobsModal* GetMiniGameSettings(); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteUI.FortCreativeSettingsFlow.GetLinkedIslandTagline (Underlying native function: GetLinkedIslandTagline 0xa6d8b18)
	struct FText GetLinkedIslandTagline(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortCreativeSettingsFlow.GetLinkedIslandMnemonic (Underlying native function: GetLinkedIslandMnemonic 0xa6d8a50)
	struct FOnlineLinkId GetLinkedIslandMnemonic(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortCreativeSettingsFlow.GetIslandDescriptionTags (Underlying native function: GetIslandDescriptionTags 0xa6d8978)
	struct TArray<struct FCreativeIslandDescriptionTag> GetIslandDescriptionTags(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortCreativeSettingsFlow.GetIslandCreatorName (Underlying native function: GetIslandCreatorName 0xa6d8674)
	struct FString GetIslandCreatorName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortCreativeSettingsFlow.GetAvailableDescriptionTags (Underlying native function: GetAvailableDescriptionTags 0xa6d7e0c)
	struct TArray<struct FCreativeIslandDescriptionTag> GetAvailableDescriptionTags(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

