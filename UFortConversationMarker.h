// Class /Script/FortniteConversationUI.FortConversationMarker
// Size: 0x448
class UFortConversationMarker : public UFortActorIndicatorWidget
{
	unsigned char unreflected_378[0x38]; // 0x378 (0x38) 
	struct FVector InitialOffset; // 0x3b0 (0x18)
	struct FVector ManualOffset; // 0x3c8 (0x18)
	float MessageBubbleDuration; // 0x3e0 (0x4)
	float LastTextBubbleDuration; // 0x3e4 (0x4)
	class UCommonVisibilitySwitcher* SwitcherStates; // 0x3e8 (0x8)
	class UWidget* OverlayPreviewState; // 0x3f0 (0x8)
	unsigned char unreflected_3f8[0x8]; // 0x3f8 (0x8) 
	class UFortConversationMessageWidget* ConversationMessageMain; // 0x400 (0x8)
	unsigned char unreflected_408[0x8]; // 0x408 (0x8) 
	class UCommonTextBlock* TextParticipantName; // 0x410 (0x8)
	unsigned char unreflected_418[0x8]; // 0x418 (0x8) 
	class UFortKeybindWidget* KeybindNameplate; // 0x420 (0x8)
	class UImage* NPCIcon; // 0x428 (0x8)
	class UTexture2D* CustomDialogMarkerIndicatorIcon; // 0x430 (0x8)
	class UTexture2D* DefaultDialogMarkerIndicatorIcon; // 0x438 (0x8)
	unsigned char padding_440[0x8]; // 0x440 (0x8)

	/* Functions */

	// Function /Script/FortniteConversationUI.FortConversationMarker.OnSetIndicatedActor (Has no native function)
	void OnSetIndicatedActor(class AActor*& NewIndicatorActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortConversationMarker.OnMessageShownOverActor (Has no native function)
	void OnMessageShownOverActor(class AActor*& OverActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortConversationMarker.OnInteractionRangeChanged (Has no native function)
	void OnInteractionRangeChanged(enum EInteractionRange& TargetInteractionRange); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortConversationMarker.OnConversationActorProximityChanged (Has no native function)
	void OnConversationActorProximityChanged(enum EInteractionRange& TargetInteractionRange, class UFortNonPlayerConversationParticipantComponent*& ConversationComponent); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortConversationMarker.OnCanInteract (Has no native function)
	void OnCanInteract(bool& bCanInteract); // (Event | Protected | BlueprintEvent)
};

