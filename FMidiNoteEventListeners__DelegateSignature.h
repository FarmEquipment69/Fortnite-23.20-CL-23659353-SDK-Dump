// DelegateFunction /Script/HmxAudio.MidiNoteEventListeners__DelegateSignature
// Size: 0x28
struct FMidiNoteEventListeners__DelegateSignature
{
	struct FString trackName; // 0x0 (0x10)
	int Tick; // 0x10 (0x4)
	int midiChannel; // 0x14 (0x4)
	int noteNum; // 0x18 (0x4)
	int Velocity; // 0x1c (0x4)
	bool isNoteOff; // 0x20 (0x1)
	bool isPreroll; // 0x21 (0x1)
	unsigned char padding_22[0x6]; // 0x22 (0x6)
};

