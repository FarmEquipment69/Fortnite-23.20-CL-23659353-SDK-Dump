// Class /Script/HmxAudio.MidiMusicMidiFile
// Size: 0x78
class UMidiMusicMidiFile : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct TWeakObjectPtr<class UMidiFileAsset> MidiFileAsset; // 0x30 (0x28)
	struct FString TrackId; // 0x58 (0x10)
	int TrackIndex; // 0x68 (0x4)
	struct FTickSpan* TickSpan; // 0x6c (0x8)
	unsigned char padding_74[0x4]; // 0x74 (0x4)
};

