// Class /Script/SBMusicalTargets.SBMusicalTargetsTimerComponent
// Size: 0x120
class USBMusicalTargetsTimerComponent : public UActorComponent
{
	float LookaheadBeats; // 0xa0 (0x4)
	float ProgressOverrun; // 0xa4 (0x4)
	int DoubleTimeTempoThreshold; // 0xa8 (0x4)
	int HalfTimeTempoThreshold; // 0xac (0x4)
	struct FMulticastInlineDelegate OnCueClearedEvent; // 0xb0 (0x10)
	class UMusicClockComponent* MusicClock; // 0xc0 (0x8)
	unsigned char padding_c8[0x58]; // 0xc8 (0x58)

	/* Functions */

	// Function /Script/SBMusicalTargets.SBMusicalTargetsTimerComponent.SetTimerEnabled (Underlying native function: SetTimerEnabled 0x55abc80)
	void SetTimerEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SBMusicalTargets.SBMusicalTargetsTimerComponent.SetMusicClockRef (Underlying native function: SetMusicClockRef 0x55abbe0)
	void SetMusicClockRef(class UMusicClockComponent*& MusicClockRef); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SBMusicalTargets.SBMusicalTargetsTimerComponent.SetHalfTimeTempoThreshold (Underlying native function: SetHalfTimeTempoThreshold 0x55abb00)
	void SetHalfTimeTempoThreshold(int& Threshold); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SBMusicalTargets.SBMusicalTargetsTimerComponent.SetDoubleTimeTempoThreshold (Underlying native function: SetDoubleTimeTempoThreshold 0x55aba20)
	void SetDoubleTimeTempoThreshold(int& Threshold); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SBMusicalTargets.SBMusicalTargetsTimerComponent.ClearAllTargets (Underlying native function: ClearAllTargets 0x55aba00)
	void ClearAllTargets(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SBMusicalTargets.SBMusicalTargetsTimerComponent.AssignTargetBeat (Underlying native function: AssignTargetBeat 0x55ab880)
	void AssignTargetBeat(class UUserWidget*& TargetWidget, struct FSBMusicalTargetsCueId& CueId); // (Final | Native | Public | BlueprintCallable)
};

