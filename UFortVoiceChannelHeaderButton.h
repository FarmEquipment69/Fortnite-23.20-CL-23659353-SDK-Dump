// Class /Script/FortniteUI.FortVoiceChannelHeaderButton
// Size: 0x1490
class UFortVoiceChannelHeaderButton : public USocialListEntryBase
{
	unsigned char unreflected_1450[0x18]; // 0x1450 (0x18) 
	class UCommonRichTextBlock* TextChannelTitle; // 0x1468 (0x8)
	class UCommonRichTextBlock* TextChannelTitleHover; // 0x1470 (0x8)
	class UCommonTextBlock* TextChannelInfo; // 0x1478 (0x8)
	class UCommonTextBlock* TextChannelInfoHover; // 0x1480 (0x8)
	unsigned char padding_1488[0x8]; // 0x1488 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortVoiceChannelHeaderButton.OnUpdateVisuals (Has no native function)
	void OnUpdateVisuals(bool& bIsActiveAndListening, bool& bIsActiveOrAvailable, bool& bIsAvailableAndNotActive, bool& bIsListening, bool& bShowingRestriction); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortVoiceChannelHeaderButton.IsActiveChannel (Underlying native function: IsActiveChannel 0xa775b58)
	bool IsActiveChannel(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortVoiceChannelHeaderButton.CanJoinChannel (Underlying native function: CanJoinChannel 0xa775430)
	bool CanJoinChannel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

