// ScriptStruct /Script/MIDIDevice.FoundMIDIDevice
// Size: 0x20
struct FFoundMIDIDevice
{
	int DeviceID; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FString DeviceName; // 0x8 (0x10)
	bool bCanReceiveFrom; // 0x18 (0x1)
	bool bCanSendTo; // 0x19 (0x1)
	bool bIsAlreadyInUse; // 0x1a (0x1)
	bool bIsDefaultInputDevice; // 0x1b (0x1)
	bool bIsDefaultOutputDevice; // 0x1c (0x1)
	unsigned char padding_1d[0x3]; // 0x1d (0x3)
};

