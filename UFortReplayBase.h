// Class /Script/FortniteUI.FortReplayBase
// Size: 0x2d8
class UFortReplayBase : public UFortHUDElementWidget
{
	class UFortReplayContext* ReplayContext; // 0x2d0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortReplayBase.SetReplayContext (Underlying native function: SetReplayContext 0xa88fbec)
	void SetReplayContext(class UFortReplayContext*& InReplayContext); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortReplayBase.OnTimelineRangeChanged (Has no native function)
	void OnTimelineRangeChanged(float& StartTime, float& EndTime); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortReplayBase.OnReplayPausedChanged (Has no native function)
	void OnReplayPausedChanged(bool& bIsPaused); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortReplayBase.OnPlaybackTimeChanged (Has no native function)
	void OnPlaybackTimeChanged(float& NowTime); // (Event | Public | BlueprintEvent)
};

