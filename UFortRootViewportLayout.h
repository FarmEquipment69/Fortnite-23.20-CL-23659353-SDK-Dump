// Class /Script/FortniteUI.FortRootViewportLayout
// Size: 0x3b8
class UFortRootViewportLayout : public UCommonUserWidget
{
	unsigned char unreflected_290[0x20]; // 0x290 (0x20) 
	class UClass* WebPurchaseScreenWidgetClass; // 0x2b0 (0x8)
	class UFortWebPurchaseScreen* WebPurchaseWidgetRuntimeSpawned; // 0x2b8 (0x8)
	class UFortUINotificationManager* NotificationManager; // 0x2c0 (0x8)
	struct TArray<struct FFortDialogDescription_NUI> ConfirmationQueue; // 0x2c8 (0x10)
	unsigned char unreflected_2d8[0x10]; // 0x2d8 (0x10) 
	class UFortUIStateWidget_NUI* CurrentLegacyStateWidget; // 0x2e8 (0x8)
	unsigned char unreflected_2f0[0x8]; // 0x2f0 (0x8) 
	class UClass* LetoLayoutBorderClass; // 0x2f8 (0x8)
	struct TArray<struct FPluginUIStateWidgetEntry> PluginUIStateWidgetEntries; // 0x300 (0x10)
	unsigned char unreflected_310[0x60]; // 0x310 (0x60) 
	class UFortUIStateWidgetBase* CurrentStateWidget; // 0x370 (0x8)
	class UCommonActivatableWidgetQueue* WidgetQueueModalContent; // 0x378 (0x8)
	class UAthenaProgressModal* AthenaProgressModal; // 0x380 (0x8)
	class UFortConfirmationWindow* ConfirmationWindowConfirmationWidget; // 0x388 (0x8)
	class UFortErrorWindow* ErrorWindowErrors; // 0x390 (0x8)
	class UAthenaProgressModal* ProgressModalControllerDisconnected; // 0x398 (0x8)
	class UFortRestartClientModal* RestartModal; // 0x3a0 (0x8)
	class UFortPinModal* PinModal; // 0x3a8 (0x8)
	class UFortToastDisplayArea* ToastDisplayAreaToastHandler; // 0x3b0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortRootViewportLayout.PurchasingWidgetDisplayCallback (Underlying native function: PurchasingWidgetDisplayCallback 0xa939e18)
	void PurchasingWidgetDisplayCallback(class UWidget*& WebWidget, struct FString& OfferId); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortRootViewportLayout.PurchasingWidgetDismissedCallback (Underlying native function: PurchasingWidgetDismissedCallback 0xa939e04)
	void PurchasingWidgetDismissedCallback(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortRootViewportLayout.HandleControllerConnectionChanged (Underlying native function: HandleControllerConnectionChanged 0xa939450)
	void HandleControllerConnectionChanged(bool& bConnected); // (Final | Native | Private)
};

