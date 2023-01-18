// Class /Script/FortniteUI.TalkingHead
// Size: 0x298
class UTalkingHead : public UCommonUserWidget
{
	unsigned char unreflected_298[0x298]; 

	/* Functions */

	// Function /Script/FortniteUI.TalkingHead.OnShouldBlockSubtitlePortraitChanged (Has no native function)
	void OnShouldBlockSubtitlePortraitChanged(bool& bShouldBlockSubtitlePortrait); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.TalkingHead.OnOpenTalkingHead (Has no native function)
	void OnOpenTalkingHead(class UTexture2D*& Image, struct FText& Title, struct FText& Subtitle, enum EFortAnnouncementDisplayPreference& DisplayPreference); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.TalkingHead.OnEndSpokenDialog (Has no native function)
	void OnEndSpokenDialog(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.TalkingHead.OnCloseTalkingHead (Has no native function)
	void OnCloseTalkingHead(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.TalkingHead.OnBeginSpokenDialog (Has no native function)
	void OnBeginSpokenDialog(); // (Event | Protected | BlueprintEvent)
};

