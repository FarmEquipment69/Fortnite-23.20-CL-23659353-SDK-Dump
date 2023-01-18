// Class /Script/HmxAudio.MidiNoteEventRouterComponent
// Size: 0x160
class UMidiNoteEventRouterComponent : public UCursorBasedMusicalEventRouterComponentBase
{
	struct FString midiTrackName; // 0x128 (0x10)
	int midiChannel; // 0x138 (0x4)
	int minMidiNoteNum; // 0x13c (0x4)
	int maxMidiNoteNum; // 0x140 (0x4)
	int minVelocity; // 0x144 (0x4)
	int MaxVelocity; // 0x148 (0x4)
	bool DontFilterNoteOffs; // 0x14c (0x1)
	bool ignorePrerollMsgs; // 0x14d (0x1)
	unsigned char unreflected_14e[0x2]; // 0x14e (0x2) 
	struct FMulticastInlineDelegate listeners; // 0x150 (0x10)
};

