// Class /Script/HmxAudio.MidiMsgBroadcasterComponent
// Size: 0x188
class UMidiMsgBroadcasterComponent : public UActorComponent
{
	enum FMidiSourceType MidiSourceType; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	class UMusicEmitterComponent* Emitter; // 0xa8 (0x8)
	class UMusicPlayerComponentBase* MusicPlayer; // 0xb0 (0x8)
	class UMusicHandle* MusicHandle; // 0xb8 (0x8)
	struct TArray<struct FCursorSettings> CursorSettings; // 0xc0 (0x10)
	struct FMulticastInlineDelegate Text; // 0xd0 (0x10)
	struct FMulticastInlineDelegate NoteOn; // 0xe0 (0x10)
	struct FMulticastInlineDelegate NoteOff; // 0xf0 (0x10)
	unsigned char padding_100[0x88]; // 0x100 (0x88)

	/* Functions */

	// Function /Script/HmxAudio.MidiMsgBroadcasterComponent.SetMusicPlayer (Underlying native function: SetMusicPlayer 0x5457fa0)
	void SetMusicPlayer(class UMusicPlayerComponentBase*& InMusicPlayer); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MidiMsgBroadcasterComponent.SetMusicHandle (Underlying native function: SetMusicHandle 0x5457b30)
	void SetMusicHandle(class UMusicHandle*& InHandle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MidiMsgBroadcasterComponent.SetEmitter (Underlying native function: SetEmitter 0x54538d0)
	void SetEmitter(class UMusicEmitterComponent*& InEmitter); // (Final | Native | Public | BlueprintCallable)
};

