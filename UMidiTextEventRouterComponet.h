// Class /Script/HmxAudio.MidiTextEventRouterComponet
// Size: 0x160
class UMidiTextEventRouterComponet : public UCursorBasedMusicalEventRouterComponentBase
{
	struct FString midiTrackName; // 0x128 (0x10)
	struct FString specificText; // 0x138 (0x10)
	bool ignorePrerollMsgs; // 0x148 (0x1)
	unsigned char unreflected_149[0x7]; // 0x149 (0x7) 
	struct FMulticastInlineDelegate listeners; // 0x150 (0x10)
};

