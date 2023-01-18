// Class /Script/FortniteUI.FortToastWidget
// Size: 0x2b8
class UFortToastWidget : public UCommonUserWidget
{
	class UFortUINotification* CachedNotification; // 0x290 (0x8)
	float DefaultDisplayTime; // 0x298 (0x4)
	unsigned char padding_29c[0x1c]; // 0x29c (0x1c)

	/* Functions */

	// Function /Script/FortniteUI.FortToastWidget.OnPlayOpenAnimation (Has no native function)
	void OnPlayOpenAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortToastWidget.OnPlayCloseAnimation (Has no native function)
	void OnPlayCloseAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortToastWidget.OnNotificationUpdated (Has no native function)
	void OnNotificationUpdated(class UFortUINotification*& Notification); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortToastWidget.OnNotificationSet (Has no native function)
	void OnNotificationSet(class UFortUINotification*& Notification); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortToastWidget.NotifyCloseAnimationFinished (Underlying native function: NotifyCloseAnimationFinished 0xa6ffbf8)
	void NotifyCloseAnimationFinished(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortToastWidget.GetDisplayTime (Underlying native function: GetDisplayTime 0xa6fe16c)
	float GetDisplayTime(bool& bOutDisplayTimeOverridden); // (Native | Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

