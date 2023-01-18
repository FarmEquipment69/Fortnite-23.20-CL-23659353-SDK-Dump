// Class /Script/FortniteGame.FortCreativeTimerDevice
// Size: 0xf80
class AFortCreativeTimerDevice : public AFortCreativeDeviceProp
{
	unsigned char unreflected_ef8[0x8]; // 0xef8 (0x8) 
	enum ETimerDeviceState ClientCurrentState; // 0xf00 (0x1)
	unsigned char unreflected_f01[0x7]; // 0xf01 (0x7) 
	struct FString ClientCurrentSecondaryText; // 0xf08 (0x10)
	struct FName ClientTimerTextStyle; // 0xf18 (0x4)
	bool bClientShowOnHud; // 0xf1c (0x1)
	unsigned char unreflected_f1d[0x3]; // 0xf1d (0x3) 
	int ClientCurrentTime; // 0xf20 (0x4)
	float ServerDisplayUpdateRate; // 0xf24 (0x4)
	unsigned char unreflected_f28[0x50]; // 0xf28 (0x50) 
	class AFortVolume* Volume; // 0xf78 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeTimerDevice.TimerStart (Underlying native function: TimerStart 0x87b7444)
	void TimerStart(class AController*& TrackedPlayer, float& Duration, float& TimeUntilUrgency); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.TimerSetState (Underlying native function: TimerSetState 0x87b7348)
	void TimerSetState(class AController*& TrackedPlayer, enum ETimerDeviceState& NewState, bool& bLoadingFromSave); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.TimerResume (Underlying native function: TimerResume 0x87b72c8)
	void TimerResume(class AController*& TrackedPlayer); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.TimerPause (Underlying native function: TimerPause 0x87b7248)
	void TimerPause(class AController*& TrackedPlayer); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.TimerClearHandles (Underlying native function: TimerClearHandles 0x87b71c8)
	void TimerClearHandles(class AController*& TrackedPlayer); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.ServerRequestDisplayUpdate (Underlying native function: ServerRequestDisplayUpdate 0x87b6568)
	void ServerRequestDisplayUpdate(class AController*& TrackedPlayer, struct TArray<class AController*>& PlayersToUpdate); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.ServerRequestClearDisplay (Underlying native function: ServerRequestClearDisplay 0x87b6458)
	void ServerRequestClearDisplay(struct TArray<class AController*>& PlayersToUpdate); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.RemoveTrackedTimer (Underlying native function: RemoveTrackedTimer 0x87b5f28)
	void RemoveTrackedTimer(class AController*& PlayerController); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.OnUrgencyTimeReached (Has no native function)
	void OnUrgencyTimeReached(class AController*& TrackedPlayer); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.OnTimerStateChanged (Has no native function)
	void OnTimerStateChanged(class AController*& TrackedPlayer, struct FTimerHandle*& TimerHandle, enum ETimerDeviceState& CurrentState, enum ETimerDeviceState& PreviousState, bool& bLoadingFromSave); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.OnTimerCompleted (Has no native function)
	void OnTimerCompleted(class AController*& TrackedPlayer); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.OnServerDisplayUpdateTimerCompleted (Has no native function)
	void OnServerDisplayUpdateTimerCompleted(class AController*& TrackedPlayer); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.OnGameStateSet (Underlying native function: OnGameStateSet 0x87b5a54)
	void OnGameStateSet(class AFortGameState*& GameState); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.GetTrackedPlayers (Underlying native function: GetTrackedPlayers 0x87b3ddc)
	int GetTrackedPlayers(struct TArray<class AController*>& OutTrackedPlayers); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.GetTimerState (Underlying native function: GetTimerState 0x87b3d0c)
	bool GetTimerState(class AController*& TrackedPlayer, enum ETimerDeviceState& OutState); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.GetTimerRemaining (Underlying native function: GetTimerRemaining 0x87b3c7c)
	float GetTimerRemaining(class AController*& TrackedPlayer); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.DisplayUpdate (Has no native function)
	void DisplayUpdate(unsigned char& CurrentState, float& ServerTimeFinished); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.CreateTrackedTimer (Underlying native function: CreateTrackedTimer 0x87b1754)
	void CreateTrackedTimer(class AController*& PlayerController, enum ETimerDeviceState& StartingState); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.ClearTrackedTimers (Underlying native function: ClearTrackedTimers 0x87b0b98)
	void ClearTrackedTimers(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.ClearDisplay (Has no native function)
	void ClearDisplay(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.BroadcastUpdateToHUD (Underlying native function: BroadcastUpdateToHUD 0x87b0adc)
	void BroadcastUpdateToHUD(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerDevice.AddTimerDeviceToVolume (Underlying native function: AddTimerDeviceToVolume 0x87b095c)
	void AddTimerDeviceToVolume(); // (Final | Native | Public)
};

