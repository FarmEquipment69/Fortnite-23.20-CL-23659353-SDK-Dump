// ScriptStruct /Script/HmxAudio.MidiMusicTimeSlotArgs
// Size: 0x18
struct FMidiMusicTimeSlotArgs
{
	struct FTickSpan* TickSpan; // 0x0 (0x8)
	struct TScriptInterface<class IMidiMusicInterface> MusicItem; // 0x8 (0x10)
};

