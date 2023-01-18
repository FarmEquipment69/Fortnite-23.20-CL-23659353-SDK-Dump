// Class /Script/DiscoveryBrowserUI.FortActivityLobbyTile
// Size: 0x14a0
class UFortActivityLobbyTile : public UCommonButtonLegacy
{
	class UCommonTextBlock* TextActivityName; // 0x1430 (0x8)
	class UFortActivityBrowserTag* ActivityBrowserTagEpicOriginal; // 0x1438 (0x8)
	class UClass* ActivityModeSetSelectionModalClass; // 0x1440 (0x8)
	class UFortGameActivityProvider* ActivityProvider; // 0x1448 (0x8)
	struct TArray<class UFortGameActivity*> CachedQueriedActivities; // 0x1450 (0x10)
	unsigned char padding_1460[0x40]; // 0x1460 (0x40)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.TrySendFirstTimeNotification (Underlying native function: TrySendFirstTimeNotification 0x74216b0)
	void TrySendFirstTimeNotification(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.ShowModeSetSelectionModal (Underlying native function: ShowModeSetSelectionModal 0x742169c)
	void ShowModeSetSelectionModal(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityFirstTimeNotification (Has no native function)
	void OnShowChildActivityFirstTimeNotification(); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityChangedNotification (Has no native function)
	void OnShowChildActivityChangedNotification(struct FText& DisplayName); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnPreviewImageChanged (Has no native function)
	void OnPreviewImageChanged(bool& bIsLoading, class UTexture*& Texture); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnHideChildActivityFirstTimeNotification (Has no native function)
	void OnHideChildActivityFirstTimeNotification(); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnDetailsUpdated (Has no native function)
	void OnDetailsUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.IsModeSetActivity (Underlying native function: IsModeSetActivity 0x1ca2008)
	bool IsModeSetActivity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.IsActivityEpicCreated (Underlying native function: IsActivityEpicCreated 0x74212e0)
	bool IsActivityEpicCreated(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.GetChildActivityDisplayName (Underlying native function: GetChildActivityDisplayName 0x1ca2028)
	struct FText GetChildActivityDisplayName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

