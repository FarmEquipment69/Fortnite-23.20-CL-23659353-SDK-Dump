// Class /Script/CommonUILegacy.CommonInputManagerLegacy
// Size: 0x108
class UCommonInputManagerLegacy : public UObject
{
	unsigned char unreflected_28[0x80]; // 0x28 (0x80) 
	struct TScriptInterface<class ICommonActionHandlerInterface> CurrentlyHeldActionInputHandler; // 0xa8 (0x10)
	struct TArray<class UCommonActivatablePanelLegacy*> ActivatablePanelStack; // 0xb8 (0x10)
	class UCommonGlobalInputHandlerLegacy* GlobalInputHandler; // 0xc8 (0x8)
	unsigned char unreflected_d0[0x18]; // 0xd0 (0x18) 
	struct TArray<struct FOperation> Operations; // 0xe8 (0x10)
	unsigned char padding_f8[0x10]; // 0xf8 (0x10)

	/* Functions */

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.SuspendStartingOperationProcessing (Underlying native function: SuspendStartingOperationProcessing 0x71836a4)
	void SuspendStartingOperationProcessing(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.StopListeningForExistingHeldAction (Underlying native function: StopListeningForExistingHeldAction 0x718352c)
	bool StopListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, struct FDelegate& CompleteEvent, struct FDelegate& ProgressEvent); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.StartListeningForExistingHeldAction (Underlying native function: StartListeningForExistingHeldAction 0x71833b4)
	bool StartListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, struct FDelegate& CompleteEvent, struct FDelegate& ProgressEvent); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.SetGlobalInputHandlerPriorityFilter (Underlying native function: SetGlobalInputHandlerPriorityFilter 0x7182dbc)
	void SetGlobalInputHandlerPriorityFilter(int& InFilterPriority); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.ResumeStartingOperationProcessing (Underlying native function: ResumeStartingOperationProcessing 0x7182700)
	void ResumeStartingOperationProcessing(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.PushActivatablePanel (Underlying native function: PushActivatablePanel 0x71824b8)
	void PushActivatablePanel(class UCommonActivatablePanelLegacy*& ActivatablePanel, bool& bIntroPanel, bool& bOutroPanelBelow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.PopActivatablePanel (Underlying native function: PopActivatablePanel 0x7182414)
	void PopActivatablePanel(class UCommonActivatablePanelLegacy*& ActivatablePanel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.IsPanelOnStack (Underlying native function: IsPanelOnStack 0x7182260)
	bool IsPanelOnStack(class UCommonActivatablePanelLegacy*& InPanel); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.IsInputSuspended (Underlying native function: IsInputSuspended 0x718221c)
	bool IsInputSuspended(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetTopPanel (Underlying native function: GetTopPanel 0x7181aa8)
	class UCommonActivatablePanelLegacy* GetTopPanel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetGlobalInputHandlerPriorityFilter (Underlying native function: GetGlobalInputHandlerPriorityFilter 0x7181818)
	int GetGlobalInputHandlerPriorityFilter(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetAvailableInputActions (Underlying native function: GetAvailableInputActions 0x7181610)
	bool GetAvailableInputActions(struct TArray<struct FCommonInputActionHandlerData>& AvailableInputActions); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

