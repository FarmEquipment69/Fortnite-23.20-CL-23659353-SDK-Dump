// Class /Script/MIDIDevice.MIDIDeviceController
// Size: 0x60
class UMIDIDeviceController : public UMIDIDeviceControllerBase
{
	struct FMulticastInlineDelegate OnMIDIEvent; // 0x28 (0x10)
	int DeviceID; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FString DeviceName; // 0x40 (0x10)
	unsigned char padding_50[0x10]; // 0x50 (0x10)
};

