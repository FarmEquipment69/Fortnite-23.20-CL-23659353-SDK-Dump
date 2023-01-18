// Class /Script/ModelViewViewModel.MVVMViewModelBase
// Size: 0x68
class UMVVMViewModelBase : public UObject
{
	unsigned char unreflected_68[0x68]; 

	/* Functions */

	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue (Underlying native function: K2_SetPropertyValue 0x7399ca8)
	bool K2SetPropertyValue(int& OldValue, int& NewValue); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate (Underlying native function: K2_RemoveFieldValueChangedDelegate 0x7399ba8)
	void K2RemoveFieldValueChangedDelegate(struct FFieldNotificationId& FieldId, struct FDelegate& Delegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged (Underlying native function: K2_BroadcastFieldValueChanged 0x7399b04)
	void K2BroadcastFieldValueChanged(struct FFieldNotificationId& FieldId); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate (Underlying native function: K2_AddFieldValueChangedDelegate 0x7399a04)
	void K2AddFieldValueChangedDelegate(struct FFieldNotificationId& FieldId, struct FDelegate& Delegate); // (Final | Native | Public | BlueprintCallable)
};

