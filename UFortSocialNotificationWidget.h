// Class /Script/FortniteUI.FortSocialNotificationWidget
// Size: 0x2f0
class UFortSocialNotificationWidget : public UFortToastWidget
{
	class UFortSocialAvatarIcon* AvatarMemberIcon; // 0x2b8 (0x8)
	class UFortPlayerAvatar* PlayerAvatar; // 0x2c0 (0x8)
	class USidebarSocialTagListBase* SidebarSocialTagList; // 0x2c8 (0x8)
	class UFortKeybindWidget* ActionHoldKeybindWidget; // 0x2d0 (0x8)
	unsigned char padding_2d8[0x18]; // 0x2d8 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortSocialNotificationWidget.OnUserStartedHoldActionNotification (Has no native function)
	void OnUserStartedHoldActionNotification(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialNotificationWidget.OnTakeActionNotification (Has no native function)
	void OnTakeActionNotification(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialNotificationWidget.OnNewAvatarsEnabledChanged (Has no native function)
	void OnNewAvatarsEnabledChanged(bool& bUsingNewAvatars); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialNotificationWidget.OnInputModeChanged (Has no native function)
	void OnInputModeChanged(enum ECommonInputType& NewInputType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialNotificationWidget.OnCursorModeChanged (Has no native function)
	void OnCursorModeChanged(bool& bCursorModeEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialNotificationWidget.OnCancelNotification (Has no native function)
	void OnCancelNotification(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialNotificationWidget.HoldReleased (Underlying native function: HoldReleased 0xa6ff80c)
	void HoldReleased(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortSocialNotificationWidget.HoldPressed (Underlying native function: HoldPressed 0xa6ff7f8)
	void HoldPressed(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortSocialNotificationWidget.HoldAction (Underlying native function: HoldAction 0xa6ff7b0)
	void HoldAction(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortSocialNotificationWidget.HandleInputMethodChanged (Underlying native function: HandleInputMethodChanged 0xa6fecb0)
	void HandleInputMethodChanged(enum ECommonInputType& NewInputType); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortSocialNotificationWidget.HandleCursorModeChanged (Underlying native function: HandleCursorModeChanged 0x29dc1a4)
	void HandleCursorModeChanged(bool& bCursorModeEnabled, struct FName& ActionName, class UUserWidget*& CustomWidget); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortSocialNotificationWidget.GetIsInGame (Underlying native function: GetIsInGame 0x2861ecc)
	bool GetIsInGame(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

