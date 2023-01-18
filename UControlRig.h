// Class /Script/ControlRig.ControlRig
// Size: 0x558
class UControlRig : public UObject
{
	unsigned char unreflected_28[0x1e]; // 0x28 (0x1e) 
	enum ERigExecutionType ExecutionType; // 0x46 (0x1)
	unsigned char unreflected_47[0x1]; // 0x47 (0x1) 
	struct FRigHierarchySettings HierarchySettings; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct FRigVMRuntimeSettings VMRuntimeSettings; // 0x50 (0x18)
	struct TMap<struct FRigElementKey*, struct FRigControlElementCustomization> ControlCustomizations; // 0x68 (0x50)
	class URigVM* VM; // 0xb8 (0x8)
	struct TMap<uint32_t, class URigVM*> InitializedVMSnapshots; // 0xc0 (0x50)
	unsigned char unreflected_110[0x8]; // 0x110 (0x8) 
	class URigHierarchy* DynamicHierarchy; // 0x118 (0x8)
	struct TWeakObjectPtr<class UControlRigShapeLibrary> GizmoLibrary; // 0x120 (0x28)
	struct TArray<struct TWeakObjectPtr<class UControlRigShapeLibrary>> ShapeLibraries; // 0x148 (0x10)
	unsigned char unreflected_158[0x10]; // 0x158 (0x10) 
	struct TMap<struct FName, struct FCachedPropertyPath> InputProperties; // 0x168 (0x50)
	struct TMap<struct FName, struct FCachedPropertyPath> OutputProperties; // 0x1b8 (0x50)
	unsigned char unreflected_208[0xa8]; // 0x208 (0xa8) 
	struct FControlRigDrawContainer DrawContainer; // 0x2b0 (0x18)
	unsigned char unreflected_2c8[0x18]; // 0x2c8 (0x18) 
	class UAnimationDataSourceRegistry* DataSourceRegistry; // 0x2e0 (0x8)
	struct TArray<struct FName> EventQueue; // 0x2e8 (0x10)
	unsigned char unreflected_2f8[0xd0]; // 0x2f8 (0xd0) 
	struct FRigInfluenceMapPerEvent Influences; // 0x3c8 (0x60)
	class UControlRig* InteractionRig; // 0x428 (0x8)
	class UClass* InteractionRigClass; // 0x430 (0x8)
	struct TArray<class UAssetUserData*> AssetUserData; // 0x438 (0x10)
	unsigned char unreflected_448[0xc8]; // 0x448 (0xc8) 
	struct FMulticastSparseDelegate OnControlSelectedBP; // 0x510 (0x1)
	unsigned char padding_511[0x47]; // 0x511 (0x47)

	/* Functions */

	// Function /Script/ControlRig.ControlRig.SupportsEvent (Underlying native function: SupportsEvent 0x7a9f324)
	bool SupportsEvent(struct FName& InEventName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRig.SetVariableFromString (Underlying native function: SetVariableFromString 0x7a9f19c)
	bool SetVariableFromString(struct FName& InVariableName, struct FString& InValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ControlRig.ControlRig.SetInteractionRigClass (Underlying native function: SetInteractionRigClass 0x7a9eeb8)
	void SetInteractionRigClass(class UClass*& InInteractionRigClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRig.SetInteractionRig (Underlying native function: SetInteractionRig 0x7a9ee38)
	void SetInteractionRig(class UControlRig*& InInteractionRig); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRig.SetFramesPerSecond (Underlying native function: SetFramesPerSecond 0x7a9e89c)
	void SetFramesPerSecond(float& InFramesPerSecond); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRig.SetDeltaTime (Underlying native function: SetDeltaTime 0x7a9e794)
	void SetDeltaTime(float& InDeltaTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRig.SetAbsoluteTime (Underlying native function: SetAbsoluteTime 0x7a9da10)
	void SetAbsoluteTime(float& InAbsoluteTime, bool& InSetDeltaTimeZero); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRig.SetAbsoluteAndDeltaTime (Underlying native function: SetAbsoluteAndDeltaTime 0x7a9d948)
	void SetAbsoluteAndDeltaTime(float& InAbsoluteTime, float& InDeltaTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRig.SelectControl (Underlying native function: SelectControl 0x7a9d874)
	void SelectControl(struct FName& InControlName, bool& bSelect); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ControlRig.ControlRig.RequestInit (Underlying native function: RequestInit 0x7a9d848)
	void RequestInit(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRig.RequestConstruction (Underlying native function: RequestConstruction 0x7a9d830)
	void RequestConstruction(); // (Final | Native | Public | BlueprintCallable)

	// SparseDelegateFunction /Script/ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature (Has no native function)
	void OnControlSelectedBPDelegateSignature(class UControlRig*& Rig, struct FRigControlElement& Control, bool& bSelected); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/ControlRig.ControlRig.IsControlSelected (Underlying native function: IsControlSelected 0x7a9d3ec)
	bool IsControlSelected(struct FName& InControlName); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRig.GetVM (Underlying native function: GetVM 0x7a9d260)
	class URigVM* GetVM(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRig.GetVariableType (Underlying native function: GetVariableType 0x7a9d314)
	struct FName GetVariableType(struct FName& InVariableName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRig.GetVariableAsString (Underlying native function: GetVariableAsString 0x7a9d284)
	struct FString GetVariableAsString(struct FName& InVariableName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRig.GetSupportedEvents (Underlying native function: GetSupportedEvents 0x7a9cca8)
	struct TArray<struct FName> GetSupportedEvents(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRig.GetScriptAccessibleVariables (Underlying native function: GetScriptAccessibleVariables 0x7a9d0d8)
	struct TArray<struct FName> GetScriptAccessibleVariables(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRig.GetInteractionRigClass (Underlying native function: GetInteractionRigClass 0x7a9d0c0)
	class UClass* GetInteractionRigClass(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRig.GetInteractionRig (Underlying native function: GetInteractionRig 0x7a9d0a8)
	class UControlRig* GetInteractionRig(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRig.GetHostingActor (Underlying native function: GetHostingActor 0x7a9ce48)
	class AActor* GetHostingActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRig.GetHierarchy (Underlying native function: GetHierarchy 0x7a9ce30)
	class URigHierarchy* GetHierarchy(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.ControlRig.GetEvents (Underlying native function: GetEvents 0x7a9cca8)
	struct TArray<struct FName> GetEvents(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRig.GetCurrentFramesPerSecond (Underlying native function: GetCurrentFramesPerSecond 0x7a9cbe4)
	float GetCurrentFramesPerSecond(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRig.GetAbsoluteTime (Underlying native function: GetAbsoluteTime 0x28a35b8)
	float GetAbsoluteTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRig.FindControlRigs (Underlying native function: FindControlRigs 0x7a9c20c)
	static struct TArray<class UControlRig*> FindControlRigs(class UObject*& Outer, class UClass*& OptionalClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRig.ExecuteEvent (Underlying native function: ExecuteEvent 0x7a9c174)
	bool ExecuteEvent(struct FName& InEventName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ControlRig.ControlRig.Execute (Underlying native function: Execute 0x7a9c0a8)
	bool Execute(enum EControlRigState& State, struct FName& InEventName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ControlRig.ControlRig.CurrentControlSelection (Underlying native function: CurrentControlSelection 0x7a9bf70)
	struct TArray<struct FName> CurrentControlSelection(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRig.CreateTransformableControlHandle (Underlying native function: CreateTransformableControlHandle 0x7a9bea0)
	class UTransformableControlHandle* CreateTransformableControlHandle(class UObject*& Outer, struct FName& ControlName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRig.ContainsEvent (Underlying native function: ContainsEvent 0x7a9be08)
	bool ContainsEvent(struct FName& InEventName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRig.ClearControlSelection (Underlying native function: ClearControlSelection 0x6ae4f78)
	bool ClearControlSelection(); // (Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRig.CanExecute (Underlying native function: CanExecute 0x2ab4d90)
	bool CanExecute(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

