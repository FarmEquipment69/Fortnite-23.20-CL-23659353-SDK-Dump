// Class /Script/HmxAudio.MidiMusicChord
// Size: 0x48
class UMidiMusicChord : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct TArray<struct FMidiNote> MidiNotes; // 0x30 (0x10)
	unsigned char Velocity; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

