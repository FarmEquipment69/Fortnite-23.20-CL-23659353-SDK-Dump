// Class /Script/FortniteGame.FortControllerComponent_RadiusTracker
// Size: 0x1d0
class UFortControllerComponent_RadiusTracker : public UFortControllerComponent
{
	struct FRadiusTrackingDisplayInfoArray TrackingDisplayInfos; // 0xa0 (0x118)
	class UFortMiniMapRadiusTrackerIndicator* RadiusTrackerIndicator; // 0x1b8 (0x8)
	unsigned char padding_1c0[0x10]; // 0x1c0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_RadiusTracker.UpdateTrackingDisplayIndicators (Underlying native function: UpdateTrackingDisplayIndicators 0x8287688)
	void UpdateTrackingDisplayIndicators(); // (Native | Public)

	// Function /Script/FortniteGame.FortControllerComponent_RadiusTracker.OnRep_TrackingDisplayInfos (Underlying native function: OnRep_TrackingDisplayInfos 0x6a4bfa4)
	void OnRepTrackingDisplayInfos(); // (Native | Public)
};

