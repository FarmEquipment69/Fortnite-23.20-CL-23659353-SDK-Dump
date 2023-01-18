// Class /Script/MIDIDevice.MIDIDeviceManager
// Size: 0x28
class UMIDIDeviceManager : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/MIDIDevice.MIDIDeviceManager.GetMIDIOutputDeviceIDByName (Underlying native function: GetMIDIOutputDeviceIDByName 0x7e4cfe8)
	static void GetMIDIOutputDeviceIDByName(struct FString& DeviceName, int& DeviceID); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MIDIDevice.MIDIDeviceManager.GetMIDIInputDeviceIDByName (Underlying native function: GetMIDIInputDeviceIDByName 0x7e4ce2c)
	static void GetMIDIInputDeviceIDByName(struct FString& DeviceName, int& DeviceID); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MIDIDevice.MIDIDeviceManager.GetDefaultMIDIOutputDeviceID (Underlying native function: GetDefaultMIDIOutputDeviceID 0x7e4cd90)
	static void GetDefaultMIDIOutputDeviceID(int& DeviceID); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MIDIDevice.MIDIDeviceManager.GetDefaultMIDIInputDeviceID (Underlying native function: GetDefaultMIDIInputDeviceID 0x7e4ccf4)
	static void GetDefaultMIDIInputDeviceID(int& DeviceID); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MIDIDevice.MIDIDeviceManager.FindMIDIDevices (Underlying native function: FindMIDIDevices 0x7e4cc6c)
	static void FindMIDIDevices(struct TArray<struct FFoundMIDIDevice>& OutMIDIDevices); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MIDIDevice.MIDIDeviceManager.FindAllMIDIDeviceInfo (Underlying native function: FindAllMIDIDeviceInfo 0x7e4cb90)
	static void FindAllMIDIDeviceInfo(struct TArray<struct FMIDIDeviceInfo>& OutMIDIInputDevices, struct TArray<struct FMIDIDeviceInfo>& OutMIDIOutputDevices); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceOutputController (Underlying native function: CreateMIDIDeviceOutputController 0x7e4cb10)
	static class UMIDIDeviceOutputController* CreateMIDIDeviceOutputController(int& DeviceID); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceInputController (Underlying native function: CreateMIDIDeviceInputController 0x7e4ca50)
	static class UMIDIDeviceInputController* CreateMIDIDeviceInputController(int& DeviceID, int& MIDIBufferSize); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController (Underlying native function: CreateMIDIDeviceController 0x7e4c990)
	static class UMIDIDeviceController* CreateMIDIDeviceController(int& DeviceID, int& MIDIBufferSize); // (Final | Native | Static | Public | BlueprintCallable)
};

