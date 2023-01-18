// Class /Script/FortniteUI.AthenaMarkedActorIndicator
// Size: 0x5c8
class UAthenaMarkedActorIndicator : public UFortActorIndicatorWidget
{
	unsigned char unreflected_378[0x28]; // 0x378 (0x28) 
	struct FFortWorldMarkerData MarkerData; // 0x3a0 (0x160)
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0x500 (0x98)
	class UFortMarkerDetailsTable* DetailsTable; // 0x598 (0x8)
	float FreshLargeItemShowTime; // 0x5a0 (0x4)
	float IndicatorDotSizeThreshold; // 0x5a4 (0x4)
	class UWidgetSwitcher* SwitcherIndicatorSize; // 0x5a8 (0x8)
	class UPanelWidget* PanelSmallIndicator; // 0x5b0 (0x8)
	class UPanelWidget* PanelLargeIndicator; // 0x5b8 (0x8)
	class UCommonTextBlock* TextDistance; // 0x5c0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMarkedActorIndicator.OnSetMarkerData (Has no native function)
	void OnSetMarkerData(struct FFortWorldMarkerData& FortWorldMarkerData); // (Event | Protected | HasOutParms | BlueprintEvent)
};

