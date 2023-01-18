// Class /Script/Engine.InputDeviceSubsystem
// Size: 0x108
class UInputDeviceSubsystem : public UEngineSubsystem
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct FMulticastInlineDelegate OnInputHardwareDeviceChanged; // 0x38 (0x10)
	struct TArray<struct FActiveDeviceProperty> ActiveProperties; // 0x48 (0x10)
	unsigned char padding_58[0xb0]; // 0x58 (0xb0)

	/* Functions */

	// Function /Script/Engine.InputDeviceSubsystem.SetDeviceProperty (Underlying native function: SetDeviceProperty 0x60485e0)
	struct FInputDevicePropertyHandle SetDeviceProperty(struct FSetDevicePropertyParams& Params); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.InputDeviceSubsystem.RemoveDevicePropertyHandles (Underlying native function: RemoveDevicePropertyHandles 0x60483f0)
	int RemoveDevicePropertyHandles(struct TSet<struct FInputDevicePropertyHandle>& HandlesToRemove, bool& bResetOnRemoval); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.InputDeviceSubsystem.RemoveDevicePropertyByHandle (Underlying native function: RemoveDevicePropertyByHandle 0x60482f0)
	int RemoveDevicePropertyByHandle(struct FInputDevicePropertyHandle& HandleToRemove, bool& bResetOnRemoval); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.InputDeviceSubsystem.RemoveDevicePropertiesOfClass (Underlying native function: RemoveDevicePropertiesOfClass 0x60481f0)
	int RemoveDevicePropertiesOfClass(struct FPlatformUserId& UserId, class UClass*& DevicePropertyClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.InputDeviceSubsystem.RemoveAllDeviceProperties (Underlying native function: RemoveAllDeviceProperties 0x60481c0)
	void RemoveAllDeviceProperties(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.InputDeviceSubsystem.IsDevicePropertyHandleValid (Underlying native function: IsDevicePropertyHandleValid 0x6048120)
	static bool IsDevicePropertyHandleValid(struct FInputDevicePropertyHandle& InHandle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.InputDeviceSubsystem.GetMostRecentlyUsedHardwareDevice (Underlying native function: GetMostRecentlyUsedHardwareDevice 0x6048070)
	struct FHardwareDeviceIdentifier* GetMostRecentlyUsedHardwareDevice(struct FPlatformUserId& InUserId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InputDeviceSubsystem.GetInputDeviceHardwareIdentifier (Underlying native function: GetInputDeviceHardwareIdentifier 0x6047fc0)
	struct FHardwareDeviceIdentifier* GetInputDeviceHardwareIdentifier(struct FInputDeviceId& InputDevice); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

