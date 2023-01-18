// Class /Script/HmxAudio.MediaMusicTimelineGenerator
// Size: 0xa30
class UMediaMusicTimelineGenerator : public UActorComponent
{
	unsigned char unreflected_a0[0x8f8]; // 0xa0 (0x8f8) 
	class UMidiFileAsset* MidiAsset; // 0x998 (0x8)
	class UMediaSoundComponent* MediaSoundComponent; // 0x9a0 (0x8)
	bool BecomeEmitterTimeAuthority; // 0x9a8 (0x1)
	enum EPlayEmitterFindMethod EmitterSpecification; // 0x9a9 (0x1)
	unsigned char unreflected_9aa[0x6]; // 0x9aa (0x6) 
	class AActor* EmitterObj; // 0x9b0 (0x8)
	struct FName EmitterTag; // 0x9b8 (0x4)
	unsigned char unreflected_9bc[0x4]; // 0x9bc (0x4) 
	struct FMulticastInlineDelegate OnStarted; // 0x9c0 (0x10)
	struct FMulticastInlineDelegate OnStopped; // 0x9d0 (0x10)
	class UMusicHandle* MusicHandle; // 0x9e0 (0x8)
	unsigned char padding_9e8[0x48]; // 0x9e8 (0x48)

	/* Functions */

	// Function /Script/HmxAudio.MediaMusicTimelineGenerator.SetMediaSoundComponent (Underlying native function: SetMediaSoundComponent 0x5457530)
	void SetMediaSoundComponent(class UMediaSoundComponent*& InMediaSoundComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MediaMusicTimelineGenerator.GetMusicHandle (Underlying native function: GetMusicHandle 0x544a1e0)
	class UMusicHandle* GetMusicHandle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MediaMusicTimelineGenerator.GetLengthMs (Underlying native function: GetLengthMs 0x5449b40)
	float GetLengthMs(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MediaMusicTimelineGenerator.GetElapsedMs (Underlying native function: GetElapsedMs 0x54493b0)
	float GetElapsedMs(); // (Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MediaMusicTimelineGenerator.CalculateSongPosAtTick (Underlying native function: CalculateSongPosAtTick 0x5444e70)
	struct FSongPos CalculateSongPosAtTick(float& Tick); // (Final | Native | Public | BlueprintCallable)
};

