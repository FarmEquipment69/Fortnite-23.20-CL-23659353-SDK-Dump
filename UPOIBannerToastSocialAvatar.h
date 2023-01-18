// Class /Script/POIBannerUI.POIBannerToastSocialAvatar
// Size: 0x2d8
class UPOIBannerToastSocialAvatar : public UFortHUDElementWidget
{
	class UFortSocialAvatarIcon* IconSocialAvatar; // 0x2d0 (0x8)

	/* Functions */

	// Function /Script/POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatarTexture (Underlying native function: SetSocialAvatarTexture 0x5b2f9f0)
	void SetSocialAvatarTexture(struct TWeakObjectPtr<class UTexture2D>& AvatarTexture); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatar (Underlying native function: SetSocialAvatar 0x7529408)
	void SetSocialAvatar(class AFortPlayerState*& PlayerState); // (Final | Native | Protected | BlueprintCallable)
};

