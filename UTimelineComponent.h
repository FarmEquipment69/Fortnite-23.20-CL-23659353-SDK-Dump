// Class /Script/Engine.TimelineComponent
// Size: 0x138
class UTimelineComponent : public UActorComponent
{
	struct FTimeline TheTimeline; // 0xa0 (0x90)
	unsigned char bIgnoreTimeDilation; // 0x130 (0x1)
	unsigned char padding_131[0x7]; // 0x131 (0x7)

	/* Functions */

	// Function /Script/Engine.TimelineComponent.Stop (Underlying native function: Stop 0x25ae104)
	void Stop(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TimelineComponent.SetVectorCurve (Underlying native function: SetVectorCurve 0x9c20594)
	void SetVectorCurve(class UCurveVector*& NewVectorCurve, struct FName& VectorTrackName); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TimelineComponent.SetTimelineLengthMode (Underlying native function: SetTimelineLengthMode 0x9c20518)
	void SetTimelineLengthMode(struct TEnumAsByte<ETimelineLengthMode>& NewLengthMode); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TimelineComponent.SetTimelineLength (Underlying native function: SetTimelineLength 0x2928970)
	void SetTimelineLength(float& NewLength); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TimelineComponent.SetPlayRate (Underlying native function: SetPlayRate 0x23a3574)
	void SetPlayRate(float& NewRate); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TimelineComponent.SetPlaybackPosition (Underlying native function: SetPlaybackPosition 0x9c20164)
	void SetPlaybackPosition(float& NewPosition, bool& bFireEvents, bool& bFireUpdate); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TimelineComponent.SetNewTime (Underlying native function: SetNewTime 0x9c200dc)
	void SetNewTime(float& NewTime); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TimelineComponent.SetLooping (Underlying native function: SetLooping 0x9c1ff40)
	void SetLooping(bool& bNewLooping); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TimelineComponent.SetLinearColorCurve (Underlying native function: SetLinearColorCurve 0x9c1fe78)
	void SetLinearColorCurve(class UCurveLinearColor*& NewLinearColorCurve, struct FName& LinearColorTrackName); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TimelineComponent.SetIgnoreTimeDilation (Underlying native function: SetIgnoreTimeDilation 0x9c1fd68)
	void SetIgnoreTimeDilation(bool& bNewIgnoreTimeDilation); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TimelineComponent.SetFloatCurve (Underlying native function: SetFloatCurve 0x9c1fae8)
	void SetFloatCurve(class UCurveFloat*& NewFloatCurve, struct FName& FloatTrackName); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TimelineComponent.ReverseFromEnd (Underlying native function: ReverseFromEnd 0x22fe940)
	void ReverseFromEnd(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TimelineComponent.Reverse (Underlying native function: Reverse 0x22fe8d4)
	void Reverse(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TimelineComponent.PlayFromStart (Underlying native function: PlayFromStart 0x22fe990)
	void PlayFromStart(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TimelineComponent.Play (Underlying native function: Play 0x22fe904)
	void Play(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TimelineComponent.OnRep_Timeline (Underlying native function: OnRep_Timeline 0x1cb5940)
	void OnRepTimeline(struct FTimeline& OldTimeline); // (Final | Native | Public | HasOutParms)

	// Function /Script/Engine.TimelineComponent.IsReversing (Underlying native function: IsReversing 0x9c1fa0c)
	bool IsReversing(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.TimelineComponent.IsPlaying (Underlying native function: IsPlaying 0x27d39b8)
	bool IsPlaying(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.TimelineComponent.IsLooping (Underlying native function: IsLooping 0x9c1f9f0)
	bool IsLooping(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.TimelineComponent.GetTimelineLength (Underlying native function: GetTimelineLength 0x2a355ec)
	float GetTimelineLength(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.TimelineComponent.GetScaledTimelineLength (Underlying native function: GetScaledTimelineLength 0x9c1f8ac)
	float GetScaledTimelineLength(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.TimelineComponent.GetPlayRate (Underlying native function: GetPlayRate 0x71cfd1c)
	float GetPlayRate(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.TimelineComponent.GetPlaybackPosition (Underlying native function: GetPlaybackPosition 0x2b41e84)
	float GetPlaybackPosition(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.TimelineComponent.GetIgnoreTimeDilation (Underlying native function: GetIgnoreTimeDilation 0x9c1f868)
	bool GetIgnoreTimeDilation(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

