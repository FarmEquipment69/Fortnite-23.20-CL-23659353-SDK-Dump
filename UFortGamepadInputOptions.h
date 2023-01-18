// Class /Script/FortniteUI.FortGamepadInputOptions
// Size: 0x428
class UFortGamepadInputOptions : public UFortInputOptions
{
	unsigned char unreflected_428[0x428]; 

	/* Functions */

	// Function /Script/FortniteUI.FortGamepadInputOptions.SetControllerPlatformEnum (Underlying native function: SetControllerPlatformEnum 0xa79ab00)
	void SetControllerPlatformEnum(enum ECommonGamepadType& InControllerPlatform); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGamepadInputOptions.SetControllerPlatform (Underlying native function: SetControllerPlatform 0xa79aa30)
	void SetControllerPlatform(struct FString& InControllerPlatform); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGamepadInputOptions.ResetCustomGamepadToDefault (Underlying native function: ResetCustomGamepadToDefault 0xa79a828)
	void ResetCustomGamepadToDefault(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGamepadInputOptions.IsCustomGamepadConfig (Underlying native function: IsCustomGamepadConfig 0xa799dac)
	bool IsCustomGamepadConfig(struct FString& ConfigName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGamepadInputOptions.HasCustomGamepadBindingChanges (Underlying native function: HasCustomGamepadBindingChanges 0xa799c60)
	bool HasCustomGamepadBindingChanges(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGamepadInputOptions.HandleGamePadToggleMode (Has no native function)
	void HandleGamePadToggleMode(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortGamepadInputOptions.GetControllerPlatform (Underlying native function: GetControllerPlatform 0xa798a58)
	struct FString GetControllerPlatform(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGamepadInputOptions.BroadcastModalClosed (Underlying native function: BroadcastModalClosed 0xa798464)
	void BroadcastModalClosed(); // (Final | Native | Private | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortGamepadInputOptions.AreAllImportantActionsBound (Underlying native function: AreAllImportantActionsBound 0xa7982e4)
	bool AreAllImportantActionsBound(struct TArray<struct FText>& OutUnboundScreenLabels, bool& bRichText); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

