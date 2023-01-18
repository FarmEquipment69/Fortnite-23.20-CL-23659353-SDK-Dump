// Class /Script/FortniteGame.PlayspaceComponent_ServerExpiration
// Size: 0x190
class UPlayspaceComponent_ServerExpiration : public UFortPlayspaceComponent
{
	unsigned char unreflected_f8[0x40]; // 0xf8 (0x40) 
	struct TArray<struct FServerExpirationAlertData> AlertDataList; // 0x138 (0x10)
	int ServerShutdownTimeInSeconds; // 0x148 (0x4)
	unsigned char unreflected_14c[0x4]; // 0x14c (0x4) 
	struct TWeakObjectPtr<class UObject> UINotificationIcon; // 0x150 (0x28)
	unsigned char padding_178[0x18]; // 0x178 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.PlayspaceComponent_ServerExpiration.OnGameStateReady (Underlying native function: OnGameStateReady 0x8dfebac)
	void OnGameStateReady(class AGameStateBase*& GameState); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteGame.PlayspaceComponent_ServerExpiration.NotifyCountdownTimerUpdated__DelegateSignature (Has no native function)
	void NotifyCountdownTimerUpdatedDelegateSignature(int& SecondsRemaining); // (MulticastDelegate | Public | Delegate)
};

