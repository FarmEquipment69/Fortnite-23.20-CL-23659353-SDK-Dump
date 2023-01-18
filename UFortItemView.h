// Class /Script/FortniteUI.FortItemView
// Size: 0x310
class UFortItemView : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FDataTableRowHandle UnifiedSupportsCameraControlInputAction; // 0x30 (0x10)
	struct FDataTableRowHandle UnifiedZoomInputAction; // 0x40 (0x10)
	struct FDataTableRowHandle ZoomOutInputAction; // 0x50 (0x10)
	struct FDataTableRowHandle ZoomInInputAction; // 0x60 (0x10)
	struct FDataTableRowHandle RotateInputAction; // 0x70 (0x10)
	struct FMulticastInlineDelegate OnItemRotationChanged; // 0x80 (0x10)
	struct FMulticastInlineDelegate OnItemZoomLevelChanged; // 0x90 (0x10)
	unsigned char unreflected_a0[0x208]; // 0xa0 (0x208) 
	struct TArray<struct FDataTableRowHandle> RegisteredInputActions; // 0x2a8 (0x10)
	unsigned char padding_2b8[0x58]; // 0x2b8 (0x58)

	/* Functions */

	// Function /Script/FortniteUI.FortItemView.UnregisterInputActions (Underlying native function: UnregisterInputActions 0xa84ce08)
	void UnregisterInputActions(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemView.SetSettings (Underlying native function: SetSettings 0xa84bd98)
	void SetSettings(struct FFortItemViewSettings& Settings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemView.SetSceneComponentToAffect (Underlying native function: SetSceneComponentToAffect 0xa84bd18)
	void SetSceneComponentToAffect(class USceneComponent*& Component); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemView.SetOwningWidget (Underlying native function: SetOwningWidget 0xa84afe4)
	void SetOwningWidget(class UCommonActivatableWidget*& Widget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemView.RestoreInitialTransform (Underlying native function: RestoreInitialTransform 0xa8494d8)
	void RestoreInitialTransform(bool& bKeepCurrentRotation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemView.RegisterInputActions (Underlying native function: RegisterInputActions 0xa8492c4)
	void RegisterInputActions(); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortItemView.OnUserInputChangedView__DelegateSignature (Has no native function)
	void OnUserInputChangedViewDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortItemView.GetSettings (Underlying native function: GetSettings 0xa8479e0)
	struct FFortItemViewSettings GetSettings(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

