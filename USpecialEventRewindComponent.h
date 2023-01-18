// Class /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent
// Size: 0xc8
class USpecialEventRewindComponent : public UActorComponent
{
	float MaxRecordingDuration; // 0xa0 (0x4)
	float LocalRecordingFPS; // 0xa4 (0x4)
	float ReplicatedRecordingFPS; // 0xa8 (0x4)
	bool bAutoStartRecording; // 0xac (0x1)
	unsigned char unreflected_ad[0x3]; // 0xad (0x3) 
	float RewindLerpTime; // 0xb0 (0x4)
	float DefaultRewindDuration; // 0xb4 (0x4)
	float DefaultRewindPlaybackSpeed; // 0xb8 (0x4)
	struct FSpecialEventRewindComponentStateData* StateData; // 0xbc (0x8)
	float ReplicatedRewindDuration; // 0xc4 (0x4)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent.TryStartRewinding (Underlying native function: TryStartRewinding 0x76c8828)
	bool TryStartRewinding(float& Duration, float& PlaybackSpeed); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent.OnRep_StateData (Underlying native function: OnRep_StateData 0x76c5858)
	void OnRepStateData(struct FSpecialEventRewindComponentStateData*& OldStateData); // (Final | Native | Private | HasOutParms)
};

