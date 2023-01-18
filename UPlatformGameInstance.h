// Class /Script/Engine.PlatformGameInstance
// Size: 0x290
class UPlatformGameInstance : public UGameInstance
{
	struct FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0x1c0 (0x10)
	struct FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0x1d0 (0x10)
	struct FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0x1e0 (0x10)
	struct FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0x1f0 (0x10)
	struct FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0x200 (0x10)
	struct FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x210 (0x10)
	struct FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x220 (0x10)
	struct FMulticastInlineDelegate ApplicationRegisteredForRemoteNotificationsDelegate; // 0x230 (0x10)
	struct FMulticastInlineDelegate ApplicationRegisteredForUserNotificationsDelegate; // 0x240 (0x10)
	struct FMulticastInlineDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x250 (0x10)
	struct FMulticastInlineDelegate ApplicationReceivedRemoteNotificationDelegate; // 0x260 (0x10)
	struct FMulticastInlineDelegate ApplicationReceivedLocalNotificationDelegate; // 0x270 (0x10)
	struct FMulticastInlineDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x280 (0x10)
};

