// Class /Script/FortniteUI.FortToastDisplayArea
// Size: 0x2e8
class UFortToastDisplayArea : public UCommonUserWidget
{
	class UFortToastWidget* ToastWidgetNew; // 0x290 (0x8)
	class UFortToastWidget* ToastBattlePassPageUnlocked; // 0x298 (0x8)
	class UFortToastWidget* PowerToastWidget; // 0x2a0 (0x8)
	class UFortToastWidget* ToastWidgetMinorError; // 0x2a8 (0x8)
	class UFortVoiceChannelChangePopup* VoiceChannelChangePopup; // 0x2b0 (0x8)
	class UFortToastWidget* ToastWidgetDonut; // 0x2b8 (0x8)
	class UFortSocialNotificationWidget* ToastSocialWidget; // 0x2c0 (0x8)
	class UFortSocialNotificationWidget* ToastSocialWidgetNew; // 0x2c8 (0x8)
	class UFortUINotificationQueue* NotificationQueue; // 0x2d0 (0x8)
	class UFortUINotification* CurrentNotification; // 0x2d8 (0x8)
	unsigned char padding_2e0[0x8]; // 0x2e0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortToastDisplayArea.TestBasicToast (Underlying native function: TestBasicToast 0xa8740ec)
	void TestBasicToast(enum EFortNotificationType& InNotificationType, struct FText& InTitle, struct FText& InDescription); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortToastDisplayArea.RegisterToastHandler (Underlying native function: RegisterToastHandler 0xa873620)
	void RegisterToastHandler(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortToastDisplayArea.HandleToastFinished (Underlying native function: HandleToastFinished 0xa873294)
	void HandleToastFinished(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortToastDisplayArea.HandleNewToastAvailable (Underlying native function: HandleNewToastAvailable 0xa873138)
	void HandleNewToastAvailable(); // (Final | Native | Private)
};

