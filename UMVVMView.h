// Class /Script/ModelViewViewModel.MVVMView
// Size: 0x68
class UMVVMView : public UUserWidgetExtension
{
	class UMVVMViewClass* ClassExtension; // 0x28 (0x8)
	unsigned char padding_30[0x38]; // 0x30 (0x38)

	/* Functions */

	// Function /Script/ModelViewViewModel.MVVMView.SetViewModel (Underlying native function: SetViewModel 0x739a15c)
	bool SetViewModel(struct FName& ViewModelName, struct TScriptInterface<class INotifyFieldValueChanged>& ViewModel); // (Final | Native | Public | BlueprintCallable)
};

