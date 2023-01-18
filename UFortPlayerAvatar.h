// Class /Script/FortniteUI.FortPlayerAvatar
// Size: 0x278
class UFortPlayerAvatar : public UUserWidget
{
	struct TWeakObjectPtr<class UFortSocialUser> SocialUser; // 0x268 (0x8)
	class UFortSocialAvatarIcon* SocialAvatarIcon; // 0x270 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPlayerAvatar.OnOnlinePresenceChanged (Has no native function)
	void OnOnlinePresenceChanged(bool& bHidePresence, enum EPresenceIndicatorState& PresenceState); // (Event | Protected | BlueprintEvent)
};

