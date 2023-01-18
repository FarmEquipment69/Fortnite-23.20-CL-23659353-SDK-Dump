// Class /Script/ModelViewViewModel.MVVMViewModelCollectionObject
// Size: 0x50
class UMVVMViewModelCollectionObject : public UObject
{
	struct FMVVMViewModelCollection ViewModelCollection; // 0x28 (0x28)

	/* Functions */

	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel (Underlying native function: RemoveViewModel 0x739a0c0)
	bool RemoveViewModel(struct FMVVMViewModelContext& Context); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance (Underlying native function: RemoveAllViewModelInstance 0x739a020)
	int RemoveAllViewModelInstance(class UMVVMViewModelBase*& ViewModel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance (Underlying native function: FindViewModelInstance 0x73995ec)
	class UMVVMViewModelBase* FindViewModelInstance(struct FMVVMViewModelContext& Context); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.FindFirstViewModelInstanceOfType (Underlying native function: FindFirstViewModelInstanceOfType 0x55a0420)
	class UMVVMViewModelBase* FindFirstViewModelInstanceOfType(class UClass*& ViewModelClass); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance (Underlying native function: AddViewModelInstance 0x73993f8)
	bool AddViewModelInstance(struct FMVVMViewModelContext& Context, class UMVVMViewModelBase*& ViewModel); // (Final | Native | Public | BlueprintCallable)
};

