// Class /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay
// Size: 0x1500
class UFortActivityTileDetailsDisplay : public UCommonButtonBase
{
	struct FMulticastInlineDelegate OnActivitySelectedDelegate; // 0x13e0 (0x10)
	struct FMulticastInlineDelegate OnActivityUnSelectedDelegate; // 0x13f0 (0x10)
	bool bShowDetailsButton; // 0x1400 (0x1)
	unsigned char unreflected_1401[0x7]; // 0x1401 (0x7) 
	class UCommonTextBlock* TextActivityName; // 0x1408 (0x8)
	class UCommonTextBlock* TextPlayerCount; // 0x1410 (0x8)
	class UCommonButtonBase* ButtonFavorite; // 0x1418 (0x8)
	class UCommonButtonBase* ButtonDetails; // 0x1420 (0x8)
	class UFortActivityBrowserTag* ActivityBrowserTagEpicOriginal; // 0x1428 (0x8)
	class UTextBlock* TextDebugId; // 0x1430 (0x8)
	class UFortActivityVideoCycle* ActivityVideoCycleWidget; // 0x1438 (0x8)
	struct TMap<uint32_t, enum ECreativeLinkPreviewSize> MinColumnSizeToImageSize; // 0x1440 (0x50)
	int MaxMobileColumnSize; // 0x1490 (0x4)
	bool bIsVideoEnabledForDynamicTileSizingV2; // 0x1494 (0x1)
	unsigned char padding_1495[0x6b]; // 0x1495 (0x6b)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StopTileVideo (Underlying native function: StopTileVideo 0x55b2f50)
	void StopTileVideo(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StartTileVideo (Underlying native function: StartTileVideo 0x55b2ee0)
	void StartTileVideo(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnUpdateColumnSize (Has no native function)
	void OnUpdateColumnSize(int& NewColumnSize); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnTileActiveSet (Has no native function)
	void OnTileActiveSet(bool& bIsTileActive); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnSocialUsersPlayingChanged (Has no native function)
	void OnSocialUsersPlayingChanged(int& NumPlaying); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnRequiresPurchaseChanged (Has no native function)
	void OnRequiresPurchaseChanged(bool& bRequiresPurchase); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPreviewImageChanged (Has no native function)
	void OnPreviewImageChanged(bool& bIsLoading, class UTexture*& Texture); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPartySizeChanged (Has no native function)
	void OnPartySizeChanged(int& PartySize); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerPromotedToLeader (Has no native function)
	void OnLocalPlayerPromotedToLeader(); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerDemoted (Has no native function)
	void OnLocalPlayerDemoted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnIsFavoriteChanged (Has no native function)
	void OnIsFavoriteChanged(bool& bIsFavorite); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnDetailsUpdated (Has no native function)
	void OnDetailsUpdated(); // (Event | Protected | BlueprintEvent)

	// DelegateFunction /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivityUnSelected__DelegateSignature (Has no native function)
	void OnActivityUnSelectedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivitySelected__DelegateSignature (Has no native function)
	void OnActivitySelectedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsModeSetActivity (Underlying native function: IsModeSetActivity 0x74213a4)
	bool IsModeSetActivity(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityFavorited (Underlying native function: IsActivityFavorited 0x742133c)
	bool IsActivityFavorited(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityEpicCreated (Underlying native function: IsActivityEpicCreated 0x7421318)
	bool IsActivityEpicCreated(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetInvalidActivityReason (Underlying native function: GetInvalidActivityReason 0x7420e44)
	enum EFortInvalidActivityReason GetInvalidActivityReason(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.DoesActivityRequirePurchase (Underlying native function: DoesActivityRequirePurchase 0x7420d0c)
	bool DoesActivityRequirePurchase(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

