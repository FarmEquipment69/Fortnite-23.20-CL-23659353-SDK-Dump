// Class /Script/ModelViewViewModel.MVVMSubsystem
// Size: 0x38
class UMVVMSubsystem : public UEngineSubsystem
{
	class UMVVMViewModelCollectionObject* GlobalViewModelCollection; // 0x30 (0x8)

	/* Functions */

	// Function /Script/ModelViewViewModel.MVVMSubsystem.GetViewFromUserWidget (Underlying native function: GetViewFromUserWidget 0x7399978)
	class UMVVMView* GetViewFromUserWidget(class UUserWidget*& UserWidget); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection (Underlying native function: GetGlobalViewModelCollection 0x7399960)
	class UMVVMViewModelCollectionObject* GetGlobalViewModelCollection(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ModelViewViewModel.MVVMSubsystem.GetAvailableBindings (Underlying native function: GetAvailableBindings 0x73997f0)
	struct TArray<struct FMVVMAvailableBinding*> GetAvailableBindings(class UClass*& Class, class UClass*& Accessor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ModelViewViewModel.MVVMSubsystem.GetAvailableBinding (Underlying native function: GetAvailableBinding 0x7399688)
	struct FMVVMAvailableBinding* GetAvailableBinding(class UClass*& Class, struct FMVVMBindingName& BindingName, class UClass*& Accessor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget (Underlying native function: DoesWidgetTreeContainedWidget 0x73994d8)
	bool DoesWidgetTreeContainedWidget(class UWidgetTree*& WidgetTree, class UWidget*& ViewWidget); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

