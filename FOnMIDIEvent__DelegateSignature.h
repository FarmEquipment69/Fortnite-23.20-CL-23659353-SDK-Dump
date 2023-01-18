// DelegateFunction /Script/MIDIDevice.OnMIDIEvent__DelegateSignature
// Size: 0x20
struct FOnMIDIEvent__DelegateSignature
{
	class UMIDIDeviceController* MIDIDeviceController; // 0x0 (0x8)
	int Timestamp; // 0x8 (0x4)
	enum EMIDIEventType EventType; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	int Channel; // 0x10 (0x4)
	int ControlID; // 0x14 (0x4)
	int Velocity; // 0x18 (0x4)
	int RawEventType; // 0x1c (0x4)
};

