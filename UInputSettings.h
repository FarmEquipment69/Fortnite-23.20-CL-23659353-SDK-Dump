// Class /Script/Engine.InputSettings
// Size: 0x138
class UInputSettings : public UObject
{
	struct TArray<struct FInputAxisConfigEntry> AxisConfig; // 0x28 (0x10)
	struct FPerPlatformSettings PlatformSettings; // 0x38 (0x10)
	unsigned char bAltEnterTogglesFullscreen; // 0x48 (0x1)
	unsigned char bF11TogglesFullscreen; // 0x48 (0x1)
	unsigned char bUseMouseForTouch; // 0x48 (0x1)
	unsigned char bEnableMouseSmoothing; // 0x48 (0x1)
	unsigned char bEnableFOVScaling; // 0x48 (0x1)
	unsigned char bCaptureMouseOnLaunch; // 0x48 (0x1)
	unsigned char bEnableLegacyInputScales; // 0x48 (0x1)
	unsigned char bEnableMotionControls; // 0x48 (0x1)
	unsigned char bFilterInputByPlatformUser; // 0x49 (0x1)
	unsigned char bShouldFlushPressedKeysOnViewportFocusLost; // 0x49 (0x1)
	unsigned char bEnableDynamicComponentInputBinding; // 0x49 (0x1)
	unsigned char bAlwaysShowTouchInterface; // 0x49 (0x1)
	unsigned char bShowConsoleOnFourFingerTap; // 0x49 (0x1)
	unsigned char bEnableGestureRecognizer; // 0x49 (0x1)
	unsigned char bUseAutocorrect; // 0x49 (0x1)
	unsigned char unreflected_4a[0x6]; // 0x4a (0x6) 
	struct TArray<struct FString> ExcludedAutocorrectOS; // 0x50 (0x10)
	struct TArray<struct FString> ExcludedAutocorrectCultures; // 0x60 (0x10)
	struct TArray<struct FString> ExcludedAutocorrectDeviceModels; // 0x70 (0x10)
	enum EMouseCaptureMode DefaultViewportMouseCaptureMode; // 0x80 (0x1)
	enum EMouseLockMode DefaultViewportMouseLockMode; // 0x81 (0x1)
	unsigned char unreflected_82[0x2]; // 0x82 (0x2) 
	float FOVScale; // 0x84 (0x4)
	float DoubleClickTime; // 0x88 (0x4)
	unsigned char unreflected_8c[0x4]; // 0x8c (0x4) 
	struct TArray<struct FInputActionKeyMapping> ActionMappings; // 0x90 (0x10)
	struct TArray<struct FInputAxisKeyMapping> AxisMappings; // 0xa0 (0x10)
	struct TArray<struct FInputActionSpeechMapping*> SpeechMappings; // 0xb0 (0x10)
	struct TWeakObjectPtr<class UClass> DefaultPlayerInputClass; // 0xc0 (0x28)
	struct TWeakObjectPtr<class UClass> DefaultInputComponentClass; // 0xe8 (0x28)
	struct FSoftObjectPath DefaultTouchInterface; // 0x110 (0x18)
	struct TArray<struct FKey> ConsoleKeys; // 0x128 (0x10)

	/* Functions */

	// Function /Script/Engine.InputSettings.SaveKeyMappings (Underlying native function: SaveKeyMappings 0x9fc6fe8)
	void SaveKeyMappings(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.InputSettings.RemoveAxisMapping (Underlying native function: RemoveAxisMapping 0x9fc6eb8)
	void RemoveAxisMapping(struct FInputAxisKeyMapping& KeyMapping, bool& bForceRebuildKeymaps); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.InputSettings.RemoveActionMapping (Underlying native function: RemoveActionMapping 0x9fc6d78)
	void RemoveActionMapping(struct FInputActionKeyMapping& KeyMapping, bool& bForceRebuildKeymaps); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.InputSettings.GetInputSettings (Underlying native function: GetInputSettings 0x9fc3ed8)
	static class UInputSettings* GetInputSettings(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.InputSettings.GetAxisNames (Underlying native function: GetAxisNames 0x9fc3e3c)
	void GetAxisNames(struct TArray<struct FName>& AxisNames); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InputSettings.GetAxisMappingByName (Underlying native function: GetAxisMappingByName 0x9fc3d60)
	void GetAxisMappingByName(struct FName& InAxisName, struct TArray<struct FInputAxisKeyMapping>& OutMappings); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InputSettings.GetActionNames (Underlying native function: GetActionNames 0x9fc3cc4)
	void GetActionNames(struct TArray<struct FName>& ActionNames); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InputSettings.GetActionMappingByName (Underlying native function: GetActionMappingByName 0x9fc3be8)
	void GetActionMappingByName(struct FName& InActionName, struct TArray<struct FInputActionKeyMapping>& OutMappings); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InputSettings.ForceRebuildKeymaps (Underlying native function: ForceRebuildKeymaps 0x9fc3bd4)
	void ForceRebuildKeymaps(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.InputSettings.AddAxisMapping (Underlying native function: AddAxisMapping 0x9fc39e0)
	void AddAxisMapping(struct FInputAxisKeyMapping& KeyMapping, bool& bForceRebuildKeymaps); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.InputSettings.AddActionMapping (Underlying native function: AddActionMapping 0x9fc3858)
	void AddActionMapping(struct FInputActionKeyMapping& KeyMapping, bool& bForceRebuildKeymaps); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

