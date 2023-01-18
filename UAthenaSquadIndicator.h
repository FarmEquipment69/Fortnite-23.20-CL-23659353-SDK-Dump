// Class /Script/FortniteUI.AthenaSquadIndicator
// Size: 0x750
class UAthenaSquadIndicator : public UAthenaMarkedActorIndicator
{
	unsigned char unreflected_5c8[0x1c]; // 0x5c8 (0x1c) 
	float IndicatorWorldOffsetProperty; // 0x5e4 (0x4)
	float IndicatorItemOffset; // 0x5e8 (0x4)
	float IndicatorSpecialServerOffset; // 0x5ec (0x4)
	struct FVector2D SmallIndicatorScale; // 0x5f0 (0x10)
	float WorldOffsetInterpValue; // 0x600 (0x4)
	struct FName MIDParamLocationColor; // 0x604 (0x4)
	struct FName MIDParamItemIcon; // 0x608 (0x4)
	struct FName MIDParamItemRarityColor; // 0x60c (0x4)
	struct FName MIDParamSquadCommsPingIcon; // 0x610 (0x4)
	struct FName MIDParamNPCCommandPingIconCrop; // 0x614 (0x4)
	class UTexture2D* LoadingPlaceholder; // 0x618 (0x8)
	struct FMarkerLargeIndicatorType LocationMarker; // 0x620 (0x18)
	struct FMarkerLargeIndicatorType ItemMarker; // 0x638 (0x18)
	struct FMarkerLargeIndicatorType DangerMarker; // 0x650 (0x18)
	struct FMarkerLargeIndicatorType SpecialLocalMarker; // 0x668 (0x18)
	struct FMarkerLargeIndicatorType SpecialServerMarker; // 0x680 (0x18)
	struct FMarkerLargeIndicatorType SquadCommsMarker; // 0x698 (0x18)
	class UMaterialInterface* DefaultIconMaterial; // 0x6b0 (0x8)
	class UMaterialInterface* SquadCommsPingMaterial; // 0x6b8 (0x8)
	unsigned char unreflected_6c0[0x28]; // 0x6c0 (0x28) 
	class UImage* ImageSmallIndicator; // 0x6e8 (0x8)
	class UImage* ImageLocationFlare; // 0x6f0 (0x8)
	class UImage* ImageLargeIndicator; // 0x6f8 (0x8)
	class UWidgetAnimation* AnimLocationPlaced; // 0x700 (0x8)
	class UWidgetAnimation* AnimDangerPlaced; // 0x708 (0x8)
	class UWidgetAnimation* AnimItemPlaced; // 0x710 (0x8)
	class UWidgetAnimation* AnimHovered; // 0x718 (0x8)
	class UImage* ImageTrajectoryLargeIndicator; // 0x720 (0x8)
	class UImage* ImageTrajectorySmallIndicator; // 0x728 (0x8)
	unsigned char padding_730[0x20]; // 0x730 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSquadIndicator.DangerTestStart (Underlying native function: DangerTestStart 0xa4af3a4)
	void DangerTestStart(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaSquadIndicator.DangerTestFinish (Underlying native function: DangerTestFinish 0xa4af390)
	void DangerTestFinish(); // (Final | Native | Protected)
};

