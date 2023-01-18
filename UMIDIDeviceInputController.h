// Class /Script/MIDIDevice.MIDIDeviceInputController
// Size: 0xd8
class UMIDIDeviceInputController : public UMIDIDeviceControllerBase
{
	struct FMulticastInlineDelegate OnMIDINoteOn; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnMIDINoteOff; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnMIDIPitchBend; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnMIDIAftertouch; // 0x58 (0x10)
	struct FMulticastInlineDelegate OnMIDIControlChange; // 0x68 (0x10)
	struct FMulticastInlineDelegate OnMIDIProgramChange; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnMIDIChannelAftertouch; // 0x88 (0x10)
	unsigned char unreflected_98[0x18]; // 0x98 (0x18) 
	int DeviceID; // 0xb0 (0x4)
	unsigned char unreflected_b4[0x4]; // 0xb4 (0x4) 
	struct FString DeviceName; // 0xb8 (0x10)
	unsigned char padding_c8[0x10]; // 0xc8 (0x10)
};

