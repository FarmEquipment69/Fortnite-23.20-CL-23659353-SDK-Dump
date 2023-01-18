// Class /Script/FortniteUI.FortJoinablePartyPortrait
// Size: 0x2b0
class UFortJoinablePartyPortrait : public UUserWidget
{
	class UCommonVisibilitySwitcher* CommonSwitcherPortraitState; // 0x268 (0x8)
	class UFortSocialAvatarIcon* AvatarMemberIcon; // 0x270 (0x8)
	class UFortPlayerAvatar* PlayerAvatar; // 0x278 (0x8)
	class UOverlay* OverlayPortrait; // 0x280 (0x8)
	class UOverlay* OverlayRemainingPlayersValue; // 0x288 (0x8)
	class UCommonRichTextBlock* TextRemainingPlayers; // 0x290 (0x8)
	struct FText RemainingPlayersFormat; // 0x298 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortJoinablePartyPortrait.OnNewAvatarsEnabledChanged (Has no native function)
	void OnNewAvatarsEnabledChanged(bool& bUsingNewAvatars); // (Event | Protected | BlueprintEvent)
};

