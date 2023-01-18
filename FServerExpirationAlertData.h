// ScriptStruct /Script/FortniteGame.ServerExpirationAlertData
// Size: 0x20
struct FServerExpirationAlertData
{
	int SecondsRemainingStart; // 0x0 (0x4)
	int SecondsVisible; // 0x4 (0x4)
	bool ShowCountdown; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FTimerHandle* TimerHandle; // 0x10 (0x8)
	class UFortUINotification* Notification; // 0x18 (0x8)
};

