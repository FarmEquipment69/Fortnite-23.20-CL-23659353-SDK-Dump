// Class /Script/FortniteUI.CreativePerformanceHUDHeatmapControlWidget
// Size: 0x2d8
class UCreativePerformanceHUDHeatmapControlWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2d8[0x2d8]; 

	/* Functions */

	// Function /Script/FortniteUI.CreativePerformanceHUDHeatmapControlWidget.StopTimer (Underlying native function: StopTimer 0xa50b830)
	void StopTimer(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.CreativePerformanceHUDHeatmapControlWidget.StartTimer (Underlying native function: StartTimer 0xa50b7f4)
	void StartTimer(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.CreativePerformanceHUDHeatmapControlWidget.RefreshHeatmap (Has no native function)
	void RefreshHeatmap(struct FVector& PlayerPosition); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteUI.CreativePerformanceHUDHeatmapControlWidget.OnPlayerMovementUpdated (Underlying native function: OnPlayerMovementUpdated 0xa50aff4)
	void OnPlayerMovementUpdated(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.CreativePerformanceHUDHeatmapControlWidget.GetCurrentVolumeSize (Underlying native function: GetCurrentVolumeSize 0xa5093a4)
	struct FVector GetCurrentVolumeSize(); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CreativePerformanceHUDHeatmapControlWidget.GetCurrentVolumeBox (Underlying native function: GetCurrentVolumeBox 0xa50935c)
	struct FBox GetCurrentVolumeBox(); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

