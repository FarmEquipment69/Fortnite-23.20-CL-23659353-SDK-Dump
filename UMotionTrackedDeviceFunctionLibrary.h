// Class /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// Size: 0x28
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault (Underlying native function: SetIsControllerMotionTrackingEnabledByDefault 0x97cfd60)
	static void SetIsControllerMotionTrackingEnabledByDefault(bool& Enable); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource (Underlying native function: IsMotionTrackingEnabledForSource 0x97cf8d8)
	static bool IsMotionTrackingEnabledForSource(int& PlayerIndex, struct FName& SourceName); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice (Underlying native function: IsMotionTrackingEnabledForDevice 0x97cf818)
	static bool IsMotionTrackingEnabledForDevice(int& PlayerIndex, enum EControllerHand& Hand); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent (Underlying native function: IsMotionTrackingEnabledForComponent 0x97cf784)
	static bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent*& MotionControllerComponent); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary (Underlying native function: IsMotionTrackedDeviceCountManagementNecessary 0x97cf734)
	static bool IsMotionTrackedDeviceCountManagementNecessary(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking (Underlying native function: IsMotionSourceTracking 0x97cf674)
	static bool IsMotionSourceTracking(int& PlayerIndex, struct FName& SourceName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount (Underlying native function: GetMotionTrackingEnabledControllerCount 0x97ce3e4)
	static int GetMotionTrackingEnabledControllerCount(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount (Underlying native function: GetMaximumMotionTrackedControllerCount 0x97ce214)
	static int GetMaximumMotionTrackedControllerCount(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName (Underlying native function: GetActiveTrackingSystemName 0x97cd4e8)
	static struct FName GetActiveTrackingSystemName(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources (Underlying native function: EnumerateMotionSources 0x97cd37c)
	static struct TArray<struct FName> EnumerateMotionSources(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource (Underlying native function: EnableMotionTrackingOfSource 0x97cd2bc)
	static bool EnableMotionTrackingOfSource(int& PlayerIndex, struct FName& SourceName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice (Underlying native function: EnableMotionTrackingOfDevice 0x97cd1fc)
	static bool EnableMotionTrackingOfDevice(int& PlayerIndex, enum EControllerHand& Hand); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent (Underlying native function: EnableMotionTrackingForComponent 0x97cd168)
	static bool EnableMotionTrackingForComponent(class UMotionControllerComponent*& MotionControllerComponent); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource (Underlying native function: DisableMotionTrackingOfSource 0x97cd004)
	static void DisableMotionTrackingOfSource(int& PlayerIndex, struct FName& SourceName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice (Underlying native function: DisableMotionTrackingOfDevice 0x97ccf54)
	static void DisableMotionTrackingOfDevice(int& PlayerIndex, enum EControllerHand& Hand); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer (Underlying native function: DisableMotionTrackingOfControllersForPlayer 0x97ccee8)
	static void DisableMotionTrackingOfControllersForPlayer(int& PlayerIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers (Underlying native function: DisableMotionTrackingOfAllControllers 0x97cce68)
	static void DisableMotionTrackingOfAllControllers(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent (Underlying native function: DisableMotionTrackingForComponent 0x97ccdf0)
	static void DisableMotionTrackingForComponent(class UMotionControllerComponent*& MotionControllerComponent); // (Final | Native | Static | Public | BlueprintCallable)
};

