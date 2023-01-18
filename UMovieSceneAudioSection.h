// Class /Script/MovieSceneTracks.MovieSceneAudioSection
// Size: 0x618
class UMovieSceneAudioSection : public UMovieSceneSection
{
	class USoundBase* sound; // 0xf0 (0x8)
	struct FFrameNumber StartFrameOffset; // 0xf8 (0x4)
	float StartOffset; // 0xfc (0x4)
	float AudioStartTime; // 0x100 (0x4)
	float AudioDilationFactor; // 0x104 (0x4)
	float AudioVolume; // 0x108 (0x4)
	unsigned char unreflected_10c[0x4]; // 0x10c (0x4) 
	struct FMovieSceneFloatChannel SoundVolume; // 0x110 (0x110)
	struct FMovieSceneFloatChannel PitchMultiplier; // 0x220 (0x110)
	struct TMap<struct FName, struct FMovieSceneFloatChannel> InputsFloat; // 0x330 (0x50)
	struct TMap<struct FName, struct FMovieSceneStringChannel> InputsString; // 0x380 (0x50)
	struct TMap<struct FName, struct FMovieSceneBoolChannel> InputsBool; // 0x3d0 (0x50)
	struct TMap<struct FName, struct FMovieSceneIntegerChannel> InputsInt; // 0x420 (0x50)
	struct TMap<struct FName, struct FMovieSceneAudioTriggerChannel> InputsTrigger; // 0x470 (0x50)
	struct FMovieSceneActorReferenceData AttachActorData; // 0x4c0 (0x118)
	bool bLooping; // 0x5d8 (0x1)
	bool bSuppressSubtitles; // 0x5d9 (0x1)
	bool bOverrideAttenuation; // 0x5da (0x1)
	unsigned char unreflected_5db[0x5]; // 0x5db (0x5) 
	class USoundAttenuation* AttenuationSettings; // 0x5e0 (0x8)
	struct FDelegate OnQueueSubtitles; // 0x5e8 (0xc)
	unsigned char unreflected_5f4[0x4]; // 0x5f4 (0x4) 
	struct FMulticastInlineDelegate OnAudioFinished; // 0x5f8 (0x10)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x608 (0x10)

	/* Functions */

	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.SetStartOffset (Underlying native function: SetStartOffset 0x9a84be4)
	void SetStartOffset(struct FFrameNumber& InStartOffset); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.SetSound (Underlying native function: SetSound 0x9a84b58)
	void SetSound(class USoundBase*& InSound); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.GetStartOffset (Underlying native function: GetStartOffset 0x9a84530)
	struct FFrameNumber GetStartOffset(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.GetSound (Underlying native function: GetSound 0x871a794)
	class USoundBase* GetSound(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

