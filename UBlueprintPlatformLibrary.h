// Class /Script/Engine.BlueprintPlatformLibrary
// Size: 0x28
class UBlueprintPlatformLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.BlueprintPlatformLibrary.SetAllowedDeviceOrientation (Underlying native function: SetAllowedDeviceOrientation 0x9e3238c)
	static void SetAllowedDeviceOrientation(struct TEnumAsByte<EScreenOrientation>& NewAllowedDeviceOrientation); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationFromNow (Underlying native function: ScheduleLocalNotificationFromNow 0x9e31f94)
	static int ScheduleLocalNotificationFromNow(int& inSecondsFromNow, struct FText& Title, struct FText& Body, struct FText& Action, struct FString& ActivationEvent); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationBadgeFromNow (Underlying native function: ScheduleLocalNotificationBadgeFromNow 0x9e31e00)
	static void ScheduleLocalNotificationBadgeFromNow(int& inSecondsFromNow, struct FString& ActivationEvent); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationBadgeAtTime (Underlying native function: ScheduleLocalNotificationBadgeAtTime 0x9e31c14)
	static int ScheduleLocalNotificationBadgeAtTime(struct FDateTime*& FireDateTime, bool& LocalTime, struct FString& ActivationEvent); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationAtTime (Underlying native function: ScheduleLocalNotificationAtTime 0x9e318f8)
	static int ScheduleLocalNotificationAtTime(struct FDateTime*& FireDateTime, bool& LocalTime, struct FText& Title, struct FText& Body, struct FText& Action, struct FString& ActivationEvent); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.BlueprintPlatformLibrary.GetLaunchNotification (Underlying native function: GetLaunchNotification 0x9e2d9b4)
	static void GetLaunchNotification(bool& NotificationLaunchedApp, struct FString& ActivationEvent, int& FireDate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintPlatformLibrary.GetDeviceOrientation (Underlying native function: GetDeviceOrientation 0x9e2d588)
	static struct TEnumAsByte<EScreenOrientation> GetDeviceOrientation(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPlatformLibrary.GetAllowedDeviceOrientation (Underlying native function: GetAllowedDeviceOrientation 0x9e2d154)
	static struct TEnumAsByte<EScreenOrientation> GetAllowedDeviceOrientation(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPlatformLibrary.ClearAllLocalNotifications (Underlying native function: ClearAllLocalNotifications 0x9e29efc)
	static void ClearAllLocalNotifications(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.BlueprintPlatformLibrary.CancelLocalNotificationById (Underlying native function: CancelLocalNotificationById 0x9e29bd0)
	static void CancelLocalNotificationById(int& NotificationId); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.BlueprintPlatformLibrary.CancelLocalNotification (Underlying native function: CancelLocalNotification 0x9e29a34)
	static void CancelLocalNotification(struct FString& ActivationEvent); // (Final | Native | Static | Public | BlueprintCallable)
};

