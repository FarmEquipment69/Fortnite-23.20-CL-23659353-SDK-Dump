// Class /Script/MIDIDevice.MIDIDeviceOutputController
// Size: 0x48
class UMIDIDeviceOutputController : public UMIDIDeviceControllerBase
{
	int DeviceID; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FString DeviceName; // 0x30 (0x10)
	unsigned char padding_40[0x8]; // 0x40 (0x8)

	/* Functions */

	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange (Underlying native function: SendMIDIProgramChange 0x7e4d880)
	void SendMIDIProgramChange(int& Channel, int& ProgramNumber); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend (Underlying native function: SendMIDIPitchBend 0x7e4d79c)
	void SendMIDIPitchBend(int& Channel, int& Pitch); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn (Underlying native function: SendMIDINoteOn 0x7e4d6a0)
	void SendMIDINoteOn(int& Channel, int& Note, int& Velocity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff (Underlying native function: SendMIDINoteOff 0x7e4d5a4)
	void SendMIDINoteOff(int& Channel, int& Note, int& Velocity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch (Underlying native function: SendMIDINoteAftertouch 0x7e4d4a0)
	void SendMIDINoteAftertouch(int& Channel, int& Note, float& Amount); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent (Underlying native function: SendMIDIEvent 0x7e4d368)
	void SendMIDIEvent(enum EMIDIEventType& EventType, int& Channel, int& data1, int& data2); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange (Underlying native function: SendMIDIControlChange 0x7e4d26c)
	void SendMIDIControlChange(int& Channel, int& Type, int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch (Underlying native function: SendMIDIChannelAftertouch 0x7e4d1a4)
	void SendMIDIChannelAftertouch(int& Channel, float& Amount); // (Final | Native | Public | BlueprintCallable)
};

