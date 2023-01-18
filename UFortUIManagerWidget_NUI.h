// Class /Script/FortniteUI.FortUIManagerWidget_NUI
// Size: 0x3a8
class UFortUIManagerWidget_NUI : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	class UCommonActivatablePanelLegacy* CurrentModalWidget; // 0x298 (0x8)
	struct TArray<class UCommonActivatablePanelLegacy*> ModalPanelQueue; // 0x2a0 (0x10)
	class UClass* PlayerBannedScreen; // 0x2b0 (0x8)
	class UFortUIStateWidget_NUI* CurrentStateWidget; // 0x2b8 (0x8)
	class UFortUINotificationManager* NotificationManager; // 0x2c0 (0x8)
	unsigned char TypedWidgetCache_2c8[0x50]; // 0x2c8 (0x50) (UNHANDLED PROPERTY TYPE: MapProperty UID: 0)
	struct TArray<struct FFortDialogDescription_NUI> ConfirmationQueue; // 0x318 (0x10)
	unsigned char unreflected_328[0x48]; // 0x328 (0x48) 
	class UNamedSlot* StateContentLayer; // 0x370 (0x8)
	class UNamedSlot* ModalLayer; // 0x378 (0x8)
	class UFortErrorWindow* ErrorWindowErrors; // 0x380 (0x8)
	class UFortRestartClientModal* RestartModal; // 0x388 (0x8)
	class UFortPinModal* PinModal; // 0x390 (0x8)
	class UFortConfirmationWindow* ConfirmationWindowConfirmationWidget; // 0x398 (0x8)
	class UFortProgressModal* ProgressModalProgress; // 0x3a0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortUIManagerWidget_NUI.UpdateStateWidgetContent (Has no native function)
	void UpdateStateWidgetContent(class UFortUIStateWidget_NUI*& StateWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIManagerWidget_NUI.RequestClearConfirmationLayer (Underlying native function: RequestClearConfirmationLayer 0xa939fb4)
	void RequestClearConfirmationLayer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIManagerWidget_NUI.OnStateStarted (Has no native function)
	void OnStateStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIManagerWidget_NUI.OnStateEnded (Has no native function)
	void OnStateEnded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIManagerWidget_NUI.OnModalQueueEmptied (Has no native function)
	void OnModalQueueEmptied(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIManagerWidget_NUI.NativeClearLayers (Underlying native function: NativeClearLayers 0xa9398a4)
	void NativeClearLayers(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIManagerWidget_NUI.KillConfirmationDialog (Underlying native function: KillConfirmationDialog 0xa93982c)
	static void KillConfirmationDialog(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIManagerWidget_NUI.IsStateContentChildShowing (Underlying native function: IsStateContentChildShowing 0xa93980c)
	bool IsStateContentChildShowing(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIManagerWidget_NUI.IsShowingModalsConfirmationsErrors (Has no native function)
	bool IsShowingModalsConfirmationsErrors(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIManagerWidget_NUI.HandleErrorWindowDeactivated (Underlying native function: HandleErrorWindowDeactivated 0xa939564)
	void HandleErrorWindowDeactivated(class UCommonActivatablePanelLegacy*& RemovedPanel); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortUIManagerWidget_NUI.HandleDeactivatedModal (Underlying native function: HandleDeactivatedModal 0xa9394e4)
	void HandleDeactivatedModal(class UCommonActivatablePanelLegacy*& DeactivatedPanel); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortUIManagerWidget_NUI.HandleConfirmationWindowDeactivated (Underlying native function: HandleConfirmationWindowDeactivated 0xa9393d0)
	void HandleConfirmationWindowDeactivated(class UCommonActivatablePanelLegacy*& DeactivatedPanel); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortUIManagerWidget_NUI.GetUINotificationQueue (Underlying native function: GetUINotificationQueue 0xa9392f0)
	static class UFortUINotificationQueue* GetUINotificationQueue(class UObject*& WorldContextObject, enum EFortNotificationQueueType& QueueType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIManagerWidget_NUI.GetUIManagerWidget (Underlying native function: GetUIManagerWidget 0xa9391f0)
	static class UFortUIManagerWidget_NUI* GetUIManagerWidget(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIManagerWidget_NUI.CreateNotification (Underlying native function: CreateNotification 0xa938ddc)
	class UFortUINotification* CreateNotification(class UClass*& UINotificationClass); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIManagerWidget_NUI._BPGetCurrentUIState (Underlying native function: _BPGetCurrentUIState 0xa93aab4)
	enum EFortUIState BPGetCurrentUIState(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

