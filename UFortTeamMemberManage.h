// Class /Script/FortniteUI.FortTeamMemberManage
// Size: 0x598
class UFortTeamMemberManage : public UFortActivatablePanel
{
	struct TWeakObjectPtr<class UFortTeamMember> TeamMember; // 0x518 (0x8)
	class UFortPlayerBanner* BannerPlayerBanner; // 0x520 (0x8)
	class UCommonTextBlock* TextPlayerName; // 0x528 (0x8)
	class UCommonWidgetSwitcherLegacy* PowerRatingWidgetSwitcher; // 0x530 (0x8)
	class UFortPlayerPowerRating* PowerRatingMemberPowerRating; // 0x538 (0x8)
	class UFortPlayerPowerRating* MoonbeamPowerRatingMemberPowerRating; // 0x540 (0x8)
	class UVerticalBox* VBoxButtons; // 0x548 (0x8)
	class UCommonButtonBase* ButtonEditBanner; // 0x550 (0x8)
	class UCommonButtonBase* ButtonLeaveParty; // 0x558 (0x8)
	class UCommonButtonBase* ButtonMakePartyLeader; // 0x560 (0x8)
	class UCommonButtonBase* ButtonWhisper; // 0x568 (0x8)
	class UCommonButtonBase* ButtonKick; // 0x570 (0x8)
	class UCommonButtonBase* ButtonViewProfile; // 0x578 (0x8)
	class UCommonButtonBase* ButtonMute; // 0x580 (0x8)
	class UCommonButtonBase* ButtonUnmute; // 0x588 (0x8)
	class UCommonButtonBase* ButtonToggleParticipation; // 0x590 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortTeamMemberManage.SetRepresentingTeamMember (Underlying native function: SetRepresentingTeamMember 0xa93a460)
	void SetRepresentingTeamMember(int& LocalTeamMemberIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTeamMemberManage.OpenBannerEditor (Has no native function)
	void OpenBannerEditor(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberManage.OnParticipationChanged (Has no native function)
	void OnParticipationChanged(bool& bIsParticipating); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberManage.OnBannerEditorClosed (Underlying native function: OnBannerEditorClosed 0xa9398b8)
	void OnBannerEditorClosed(); // (Final | Native | Protected | BlueprintCallable)
};

