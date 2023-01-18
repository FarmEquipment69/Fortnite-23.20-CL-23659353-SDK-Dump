// Class /Script/FortniteUI.FortTimelineBase
// Size: 0x400
class UFortTimelineBase : public UCommonActivatableWidget
{
	struct FDataTableRowHandle ConfirmActionRowHandle; // 0x3a8 (0x10)
	struct FDataTableRowHandle CancelActionRowHandle; // 0x3b8 (0x10)
	class UClass* TimelineMarkerClass; // 0x3c8 (0x8)
	class USlider* SliderGamepad; // 0x3d0 (0x8)
	class UProgressBar* ProgressBarTimeElapsed; // 0x3d8 (0x8)
	class UCommonTextBlock* TextCurrentTime; // 0x3e0 (0x8)
	class UCommonTextBlock* TextEndTime; // 0x3e8 (0x8)
	class UCanvasPanel* CanvasPanelMarkers; // 0x3f0 (0x8)
	class UOverlay* OverlayProgressBar; // 0x3f8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortTimelineBase.HandleReplayTimelineMarkerAdded (Underlying native function: HandleReplayTimelineMarkerAdded 0x14e58f8)
	void HandleReplayTimelineMarkerAdded(enum EFortReplayEventType& EventType, float& RelativeTime, int& EventIndex); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortTimelineBase.HandleReplayTimelineChanged (Underlying native function: HandleReplayTimelineChanged 0xa88e6bc)
	void HandleReplayTimelineChanged(float& StartTime, float& EndTime); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortTimelineBase.HandleReplayTimeChanged (Underlying native function: HandleReplayTimeChanged 0xfa3e54)
	void HandleReplayTimeChanged(float& ReplayTime); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortTimelineBase.HandleReplayHudVisibilityChanged (Underlying native function: HandleReplayHudVisibilityChanged 0x2cf5270)
	void HandleReplayHudVisibilityChanged(enum EHudVisibilityState& VisibilityState); // (Final | Native | Private)
};

