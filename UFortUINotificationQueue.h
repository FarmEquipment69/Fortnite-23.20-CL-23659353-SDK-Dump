// Class /Script/FortniteUI.FortUINotificationQueue
// Size: 0x50
class UFortUINotificationQueue : public UObject
{
	int MaxNotificationsInQueue; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TArray<class UFortUINotification*> NotificationQueue; // 0x30 (0x10)
	unsigned char padding_40[0x10]; // 0x40 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortUINotificationQueue.UnregisterToReceiveNotifications (Underlying native function: UnregisterToReceiveNotifications 0xa874230)
	void UnregisterToReceiveNotifications(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINotificationQueue.RemoveNotification (Underlying native function: RemoveNotification 0xa873634)
	void RemoveNotification(class UFortUINotification*& InNotificationDescription); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINotificationQueue.RegisterToReceiveNotifications (Underlying native function: RegisterToReceiveNotifications 0xa87357c)
	void RegisterToReceiveNotifications(struct FDelegate& NotificationDelegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINotificationQueue.QueueNotification (Underlying native function: QueueNotification 0xa8734b4)
	void QueueNotification(class UFortUINotification*& Notification, bool& bShowImmediately); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINotificationQueue.GetNextNotification (Underlying native function: GetNextNotification 0xa872eac)
	class UFortUINotification* GetNextNotification(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUINotificationQueue.CanNotificationBeQueued (Underlying native function: CanNotificationBeQueued 0xa872bc8)
	bool CanNotificationBeQueued(enum EFortNotificationPriority& Priority); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

