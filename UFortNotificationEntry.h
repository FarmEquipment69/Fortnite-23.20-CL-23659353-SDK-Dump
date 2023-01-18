// Class /Script/FortniteUI.FortNotificationEntry
// Size: 0x2d0
class UFortNotificationEntry : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	struct FMulticastInlineDelegate FinishedDisplayingNotification; // 0x298 (0x10)
	float DisplayTime; // 0x2a8 (0x4)
	float MinDisplayTime; // 0x2ac (0x4)
	bool bRushDisplay; // 0x2b0 (0x1)
	unsigned char unreflected_2b1[0x3]; // 0x2b1 (0x3) 
	int RushWidgetThreshold; // 0x2b4 (0x4)
	struct TArray<class UFortNotificationEntry*> LinkedNotifications; // 0x2b8 (0x10)
	unsigned char padding_2c8[0x8]; // 0x2c8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortNotificationEntry.StartNotificationOutro (Has no native function)
	void StartNotificationOutro(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortNotificationEntry.StartNotificationIntro (Has no native function)
	void StartNotificationIntro(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortNotificationEntry.NativeStartNotificationOutro (Underlying native function: NativeStartNotificationOutro 0xa7c38dc)
	void NativeStartNotificationOutro(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortNotificationEntry.FinishNotificationOutro (Underlying native function: FinishNotificationOutro 0x87b42ec)
	void FinishNotificationOutro(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortNotificationEntry.FinishNotificationIntro (Underlying native function: FinishNotificationIntro 0x756d600)
	void FinishNotificationIntro(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortNotificationEntry.AddNotificationBackIntoPool (Has no native function)
	void AddNotificationBackIntoPool(); // (Event | Public | BlueprintEvent)
};

