// Class /Script/FortniteGame.FortQuartzSynchronizer
// Size: 0x110
class UFortQuartzSynchronizer : public UActorComponent
{
	struct FName QuartzClockName; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	struct FQuartzClockSettings ClockSettings; // 0xa8 (0x20)
	struct TArray<struct FFortTimestampEvent> TimestampEvents; // 0xc8 (0x10)
	struct FMulticastInlineDelegate OnTimestampEvent; // 0xd8 (0x10)
	unsigned char unreflected_e8[0x10]; // 0xe8 (0x10) 
	class UQuartzClockHandle* QuartzClock; // 0xf8 (0x8)
	unsigned char padding_100[0x10]; // 0x100 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortQuartzSynchronizer.SetMediaSoundComponent (Underlying native function: SetMediaSoundComponent 0x8e60ad8)
	void SetMediaSoundComponent(class UMediaSoundComponent*& InMediaSoundComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuartzSynchronizer.SetAudioComponent (Underlying native function: SetAudioComponent 0x8e603d4)
	void SetAudioComponent(class UAudioComponent*& InAudioComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuartzSynchronizer.HandleMediaPlayerSuspended (Underlying native function: HandleMediaPlayerSuspended 0x8e5f560)
	void HandleMediaPlayerSuspended(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortQuartzSynchronizer.HandleMediaPlayerResumed (Underlying native function: HandleMediaPlayerResumed 0x8e5f54c)
	void HandleMediaPlayerResumed(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortQuartzSynchronizer.HandleMediaPlayerOpened (Underlying native function: HandleMediaPlayerOpened 0x8e5f310)
	void HandleMediaPlayerOpened(struct FString& OpenedURL); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortQuartzSynchronizer.HandleMediaPlayerClosed (Underlying native function: HandleMediaPlayerClosed 0x8e5f2fc)
	void HandleMediaPlayerClosed(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortQuartzSynchronizer.HandleAudioComponentPlayStateChanged (Underlying native function: HandleAudioComponentPlayStateChanged 0x8e5f18c)
	void HandleAudioComponentPlayStateChanged(enum EAudioComponentPlayState& PlayState); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortQuartzSynchronizer.HandleAudioComponentPlaybackPercent (Underlying native function: HandleAudioComponentPlaybackPercent 0x8e5f20c)
	void HandleAudioComponentPlaybackPercent(class USoundWave*& PlayingSoundWave, float& PlaybackPercent); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortQuartzSynchronizer.CreateTimestampEventsFromJson (Underlying native function: CreateTimestampEventsFromJson 0x8e5dbe8)
	bool CreateTimestampEventsFromJson(struct FString& JsonString); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuartzSynchronizer.CreateJsonFromTimestampEvents (Underlying native function: CreateJsonFromTimestampEvents 0x8e5da4c)
	struct FString CreateJsonFromTimestampEvents(); // (Final | Native | Public | BlueprintCallable)
};

