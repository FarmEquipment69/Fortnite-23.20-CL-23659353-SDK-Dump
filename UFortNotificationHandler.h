// Class /Script/FortniteGame.FortNotificationHandler
// Size: 0x40
class UFortNotificationHandler : public UObject
{
	struct FMulticastInlineDelegate OnNotificationCleared; // 0x28 (0x10)
	bool bNotificationCleared; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortNotificationHandler.NotificationShown (Underlying native function: NotificationShown 0x735d960)
	void NotificationShown(); // (0x00000002 | BlueprintCosmetic | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortNotificationHandler.CreateWidget (Has no native function)
	class UUserWidget* CreateWidget(class APlayerController*& OwningPlayer); // (0x00000002 | BlueprintCosmetic | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortNotificationHandler.ClearNotification (Underlying native function: ClearNotification 0x145ca48)
	void ClearNotification(); // (0x00000002 | BlueprintCosmetic | Native | Event | Public | BlueprintCallable | BlueprintEvent)
};

