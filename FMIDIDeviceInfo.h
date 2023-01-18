// ScriptStruct /Script/MIDIDevice.MIDIDeviceInfo
// Size: 0x20
struct FMIDIDeviceInfo
{
	int DeviceID; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FString DeviceName; // 0x8 (0x10)
	bool bIsAlreadyInUse; // 0x18 (0x1)
	bool bIsDefaultDevice; // 0x19 (0x1)
	unsigned char padding_1a[0x6]; // 0x1a (0x6)
};

