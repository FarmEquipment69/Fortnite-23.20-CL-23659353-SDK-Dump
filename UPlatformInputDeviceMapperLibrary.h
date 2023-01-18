// Class /Script/Engine.PlatformInputDeviceMapperLibrary
// Size: 0x28
class UPlatformInputDeviceMapperLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.PlatformUserId_None (Underlying native function: PlatformUserId_None 0x9ef6f14)
	static struct FPlatformUserId PlatformUserIdNone(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.NotEqual_PlatformUserId (Underlying native function: NotEqual_PlatformUserId 0x9ef6db0)
	static bool NotEqualPlatformUserId(struct FPlatformUserId& A, struct FPlatformUserId& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.NotEqual_InputDeviceId (Underlying native function: NotEqual_InputDeviceId 0x9ef6db0)
	static bool NotEqualInputDeviceId(struct FInputDeviceId& A, struct FInputDeviceId& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.IsValidPlatformId (Underlying native function: IsValidPlatformId 0x9ef6bdc)
	static bool IsValidPlatformId(struct FPlatformUserId& UserId); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.IsValidInputDevice (Underlying native function: IsValidInputDevice 0x9ef6b68)
	static bool IsValidInputDevice(struct FInputDeviceId& DeviceID); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.IsUnpairedUserId (Underlying native function: IsUnpairedUserId 0x9ef6adc)
	static bool IsUnpairedUserId(struct FPlatformUserId& PlatformId); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.IsInputDeviceMappedToUnpairedUser (Underlying native function: IsInputDeviceMappedToUnpairedUser 0x9ef696c)
	static bool IsInputDeviceMappedToUnpairedUser(struct FInputDeviceId& InputDevice); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.InputDeviceId_None (Underlying native function: InputDeviceId_None 0x9ef692c)
	static struct FInputDeviceId InputDeviceIdNone(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.GetUserForUnpairedInputDevices (Underlying native function: GetUserForUnpairedInputDevices 0x9ef6434)
	static struct FPlatformUserId GetUserForUnpairedInputDevices(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.GetUserForInputDevice (Underlying native function: GetUserForInputDevice 0x9ef63a0)
	static struct FPlatformUserId GetUserForInputDevice(struct FInputDeviceId& DeviceID); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.GetPrimaryPlatformUser (Underlying native function: GetPrimaryPlatformUser 0x609e2e0)
	static struct FPlatformUserId GetPrimaryPlatformUser(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.GetPrimaryInputDeviceForUser (Underlying native function: GetPrimaryInputDeviceForUser 0x9ef6054)
	static struct FInputDeviceId GetPrimaryInputDeviceForUser(struct FPlatformUserId& UserId); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.GetInputDeviceConnectionState (Underlying native function: GetInputDeviceConnectionState 0x9ef58e4)
	static enum EInputDeviceConnectionState GetInputDeviceConnectionState(struct FInputDeviceId& DeviceID); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.GetDefaultInputDevice (Underlying native function: GetDefaultInputDevice 0x9ef4d8c)
	static struct FInputDeviceId GetDefaultInputDevice(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.GetAllInputDevicesForUser (Underlying native function: GetAllInputDevicesForUser 0x9ef470c)
	static int GetAllInputDevicesForUser(struct FPlatformUserId& UserId, struct TArray<struct FInputDeviceId>& OutInputDevices); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.GetAllInputDevices (Underlying native function: GetAllInputDevices 0x9ef4598)
	static int GetAllInputDevices(struct TArray<struct FInputDeviceId>& OutInputDevices); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.GetAllConnectedInputDevices (Underlying native function: GetAllConnectedInputDevices 0x9ef4424)
	static int GetAllConnectedInputDevices(struct TArray<struct FInputDeviceId>& OutInputDevices); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.GetAllActiveUsers (Underlying native function: GetAllActiveUsers 0x9ef42b0)
	static int GetAllActiveUsers(struct TArray<struct FPlatformUserId>& OutUsers); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.EqualEqual_PlatformUserId (Underlying native function: EqualEqual_PlatformUserId 0x9ef3e20)
	static bool EqualEqualPlatformUserId(struct FPlatformUserId& A, struct FPlatformUserId& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.PlatformInputDeviceMapperLibrary.EqualEqual_InputDeviceId (Underlying native function: EqualEqual_InputDeviceId 0x9ef3e20)
	static bool EqualEqualInputDeviceId(struct FInputDeviceId& A, struct FInputDeviceId& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

