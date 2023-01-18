// Class /Script/EventModeUI.FortEventModeEmotesWidget
// Size: 0x380
class UFortEventModeEmotesWidget : public UFortHUDElementWidget
{
	struct TWeakObjectPtr<class UFortMontageItemDefinitionBase> Emote1; // 0x2d0 (0x28)
	struct TWeakObjectPtr<class UFortMontageItemDefinitionBase> Emote2; // 0x2f8 (0x28)
	struct TWeakObjectPtr<class UFortMontageItemDefinitionBase> Emote3; // 0x320 (0x28)
	struct TArray<struct TWeakObjectPtr<class UFortMontageItemDefinitionBase>> RandomEmotes; // 0x348 (0x10)
	unsigned char unreflected_358[0x8]; // 0x358 (0x8) 
	class URichTextBlock* TextEmote1; // 0x360 (0x8)
	class URichTextBlock* TextEmote2; // 0x368 (0x8)
	class URichTextBlock* TextEmote3; // 0x370 (0x8)
	class URichTextBlock* TextEmoteRandom; // 0x378 (0x8)

	/* Functions */

	// Function /Script/EventModeUI.FortEventModeEmotesWidget.OnFocusStateChanged (Has no native function)
	void OnFocusStateChanged(bool& bIsFocusing); // (Event | Public | BlueprintEvent)

	// Function /Script/EventModeUI.FortEventModeEmotesWidget.OnFocusAvailableChanged (Has no native function)
	void OnFocusAvailableChanged(bool& bIsFocusAvailable); // (Event | Public | BlueprintEvent)
};

