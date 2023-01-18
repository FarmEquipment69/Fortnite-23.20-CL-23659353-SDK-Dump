// Class /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel
// Size: 0x88
class UCreativeModalDialogViewmodel : public UMVVMViewModelBase
{
	struct FText Title; // 0x68 (0x18)
	int NumberOfButtons; // 0x80 (0x4)
	enum ECreativeModalDialogViewmodelResponse Response; // 0x84 (0x1)
	unsigned char padding_85[0x3]; // 0x85 (0x3)

	/* Functions */

	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton1Visible (Underlying native function: IsButton1Visible 0x559cd40)
	bool IsButton1Visible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton1Visible (Underlying native function: GetButton1Visible 0x559cd10)
	enum ESlateVisibility GetButton1Visible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

