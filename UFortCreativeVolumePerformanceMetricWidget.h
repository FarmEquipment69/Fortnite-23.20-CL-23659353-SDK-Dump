// Class /Script/FortniteUI.FortCreativeVolumePerformanceMetricWidget
// Size: 0x2b8
class UFortCreativeVolumePerformanceMetricWidget : public UFortCreativeVolumeWidget
{
	struct FVolumePerformanceMetrics LastVolumePerformanceMetrics; // 0x270 (0x34)
	enum EFortBudgetCategory VolumePerformanceMetricCategory; // 0x2a4 (0x1)
	unsigned char unreflected_2a5[0x3]; // 0x2a5 (0x3) 
	int LastCostPreviewOfSelectedActor; // 0x2a8 (0x4)
	unsigned char padding_2ac[0xc]; // 0x2ac (0xc)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeVolumePerformanceMetricWidget.OnVolumePerformanceMetricsUpdated (Underlying native function: OnVolumePerformanceMetricsUpdated 0xa693288)
	void OnVolumePerformanceMetricsUpdated(struct FVolumePerformanceMetrics& VolumePerformanceMetrics); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortCreativeVolumePerformanceMetricWidget.OnVolumeManagerVolumeStateChanged (Underlying native function: OnVolumeManagerVolumeStateChanged 0xa6931c4)
	void OnVolumeManagerVolumeStateChanged(enum ESpatialLoadingState& VolumeState, class AFortVolume*& Volume); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortCreativeVolumePerformanceMetricWidget.BP_OnVolumePerformanceMetricsUpdated (Has no native function)
	void BPOnVolumePerformanceMetricsUpdated(struct FVolumePerformanceMetrics& VolumePerformanceMetrics); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeVolumePerformanceMetricWidget.BP_OnCostPreviewOfSelectedActorUpdated (Has no native function)
	void BPOnCostPreviewOfSelectedActorUpdated(int& CostPreviewOfSelectedActor); // (Event | Protected | BlueprintEvent)
};

