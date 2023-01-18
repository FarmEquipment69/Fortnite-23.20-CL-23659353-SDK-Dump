// Class /Script/KoalaUI.KoalaHUDWidget
// Size: 0x4e0
class UKoalaHUDWidget : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	float ClipDebounceTime; // 0x3b0 (0x4)
	float PlayerKilledPlayerReminderTime; // 0x3b4 (0x4)
	float MatchEndedReminderTime; // 0x3b8 (0x4)
	float ClipReminderCooldownTime; // 0x3bc (0x4)
	class USoundSubmix* ClipAudioSubmix; // 0x3c0 (0x8)
	class UCommonActionWidget* ClipActionWidget; // 0x3c8 (0x8)
	struct FDataTableRowHandle ClipObjectInputAction; // 0x3d0 (0x10)
	unsigned char unreflected_3e0[0x8]; // 0x3e0 (0x8) 
	struct TMap<int, struct FKoalaClipInfo> ClipTracker; // 0x3e8 (0x50)
	unsigned char unreflected_438[0x8]; // 0x438 (0x8) 
	int LastClipID; // 0x440 (0x4)
	unsigned char unreflected_444[0x16]; // 0x444 (0x16) 
	enum EKoalaMockClipMode MockClipMode; // 0x45a (0x1)
	unsigned char unreflected_45b[0x1]; // 0x45b (0x1) 
	int MockClipUploadShortTime; // 0x45c (0x4)
	int MockClipUploadLongTime; // 0x460 (0x4)
	int MockClipCreateShortTime; // 0x464 (0x4)
	int MockClipCreateLongTime; // 0x468 (0x4)
	unsigned char padding_46c[0x74]; // 0x46c (0x74)

	/* Functions */

	// Function /Script/KoalaUI.KoalaHUDWidget.UnregisterClipButtonInput (Underlying native function: UnregisterClipButtonInput 0x7481490)
	void UnregisterClipButtonInput(); // (Final | Native | Private)

	// Function /Script/KoalaUI.KoalaHUDWidget.RegisterClipButtonInput (Underlying native function: RegisterClipButtonInput 0x748147c)
	void RegisterClipButtonInput(); // (Final | Native | Private)

	// Function /Script/KoalaUI.KoalaHUDWidget.OnTouchAreaMouseDown (Underlying native function: OnTouchAreaMouseDown 0x7481468)
	void OnTouchAreaMouseDown(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/KoalaUI.KoalaHUDWidget.OnReminderTimerStarted (Has no native function)
	void OnReminderTimerStarted(float& Time); // (Event | Protected | BlueprintEvent)

	// Function /Script/KoalaUI.KoalaHUDWidget.OnReminderEnded (Underlying native function: OnReminderEnded 0x7481450)
	void OnReminderEnded(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/KoalaUI.KoalaHUDWidget.OnRecordingStatusChanged (Has no native function)
	void OnRecordingStatusChanged(enum EKoalaRecording& InRecordingStatus); // (Event | Protected | BlueprintEvent)

	// Function /Script/KoalaUI.KoalaHUDWidget.OnInputProgress (Has no native function)
	void OnInputProgress(float& Progress); // (Event | Protected | BlueprintEvent)

	// Function /Script/KoalaUI.KoalaHUDWidget.OnInputComplete (Has no native function)
	void OnInputComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/KoalaUI.KoalaHUDWidget.OnConnectionChanged (Has no native function)
	void OnConnectionChanged(enum EKoalaConnectionStatus& InStatus); // (Event | Protected | BlueprintEvent)

	// Function /Script/KoalaUI.KoalaHUDWidget.OnClipStatusChanged (Has no native function)
	void OnClipStatusChanged(int& InClipID, enum EKoalaClipStatus& InClipStatus, float& InUploadProgress); // (Event | Protected | BlueprintEvent)

	// Function /Script/KoalaUI.KoalaHUDWidget.OnAvailabilityChanged (Has no native function)
	void OnAvailabilityChanged(enum EKoalaAvailability& Availability); // (Event | Protected | BlueprintEvent)

	// Function /Script/KoalaUI.KoalaHUDWidget.HandlePlayerPawnEmoteStopped (Underlying native function: HandlePlayerPawnEmoteStopped 0x7481288)
	void HandlePlayerPawnEmoteStopped(class UFortItemDefinition*& MontageItemDef, class AFortPawn*& PawnEmoting); // (Final | Native | Private)

	// Function /Script/KoalaUI.KoalaHUDWidget.HandlePlayerMatchWon (Underlying native function: HandlePlayerMatchWon 0x7481274)
	void HandlePlayerMatchWon(); // (Final | Native | Private)

	// Function /Script/KoalaUI.KoalaHUDWidget.HandleLocalPlayerKilledPlayer (Underlying native function: HandleLocalPlayerKilledPlayer 0x74811f4)
	void HandleLocalPlayerKilledPlayer(class AFortPlayerStateAthena*& Player); // (Final | Native | Private)

	// Function /Script/KoalaUI.KoalaHUDWidget.HandleAthenaGamePhaseChanged (Underlying native function: HandleAthenaGamePhaseChanged 0x7480eec)
	void HandleAthenaGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)

	// Function /Script/KoalaUI.KoalaHUDWidget.GetUploadingClipCount (Underlying native function: GetUploadingClipCount 0x7480ec8)
	int GetUploadingClipCount(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/KoalaUI.KoalaHUDWidget.GetTrackedClipCount (Underlying native function: GetTrackedClipCount 0x7480ea8)
	int GetTrackedClipCount(); // (Final | Native | Protected | BlueprintCallable)
};

