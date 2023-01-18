// Class /Script/FortniteUI.FortAthenaVehicleDashboardWidget
// Size: 0x438
class UFortAthenaVehicleDashboardWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0xe4]; // 0x2d0 (0xe4) 
	bool bIsWidgetShowing; // 0x3b4 (0x1)
	unsigned char unreflected_3b5[0x3]; // 0x3b5 (0x3) 
	class AFortAthenaVehicle* CurrentVehicleActor; // 0x3b8 (0x8)
	float CurrentSpeed; // 0x3c0 (0x4)
	float TargetFuelPercent; // 0x3c4 (0x4)
	float DisplayedFuelPercent; // 0x3c8 (0x4)
	float FillBlendSpeed; // 0x3cc (0x4)
	float SpeedTextMaxInterpolationRate; // 0x3d0 (0x4)
	unsigned char unreflected_3d4[0x4]; // 0x3d4 (0x4) 
	struct FGameplayTagContainer WidgetTagsToHideWhenVisible; // 0x3d8 (0x20)
	unsigned char unreflected_3f8[0x4]; // 0x3f8 (0x4) 
	float HUDTopSpeed; // 0x3fc (0x4)
	struct TEnumAsByte<EHorizontalAlignment> MobileFuelGaugeHorizontalAlignment; // 0x400 (0x1)
	struct TEnumAsByte<EVerticalAlignment> MobileFuelGaugeVerticalAlignment; // 0x401 (0x1)
	unsigned char unreflected_402[0x2]; // 0x402 (0x2) 
	struct FMargin MobileFuelGaugePadding; // 0x404 (0x10)
	unsigned char unreflected_414[0x4]; // 0x414 (0x4) 
	class UCommonNumericTextBlock* NumericTextSpeed; // 0x418 (0x8)
	class UOverlay* OverlayGauge; // 0x420 (0x8)
	class UCommonTextBlock* TextItemName; // 0x428 (0x8)
	unsigned char padding_430[0x8]; // 0x430 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.UpdateSpeedometer (Has no native function)
	void UpdateSpeedometer(float& NormalizedSpeed, float& RawSpeed); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.ShowNoFuelMessage (Has no native function)
	void ShowNoFuelMessage(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.SetVehicleUsesRechargableBoost (Has no native function)
	void SetVehicleUsesRechargableBoost(bool& bUsesRechargeableBoost); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.SetVehicleHasInfiniteFuel (Has no native function)
	void SetVehicleHasInfiniteFuel(bool& bInfiniteFuel); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.SetupVehicleFuelWidget (Underlying native function: SetupVehicleFuelWidget 0xa5d36e4)
	void SetupVehicleFuelWidget(class AActor*& NewVehicle, bool& bRequestShowWidget); // (0x00000002 | Native | Public)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.RemoveWidgetTagsToHideWhenVisible (Underlying native function: RemoveWidgetTagsToHideWhenVisible 0x61a8180)
	void RemoveWidgetTagsToHideWhenVisible(struct FGameplayTagContainer& TagToRemove); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.OnWidgetVisibilityChanged (Has no native function)
	void OnWidgetVisibilityChanged(bool& bNewVisibility); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.OnUpdateRechargeableBoostPercent (Has no native function)
	void OnUpdateRechargeableBoostPercent(float& BoostPercent); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.OnUpdateBoostChargePercent (Has no native function)
	void OnUpdateBoostChargePercent(float& BoostPercent); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.OnRPMChanged (Has no native function)
	void OnRPMChanged(float& NormalizedRPM); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.OnRechargableBoostFilled (Has no native function)
	void OnRechargableBoostFilled(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.OnPlayerFacingNameUpdated (Has no native function)
	void OnPlayerFacingNameUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.OnOutOfFuel (Has no native function)
	void OnOutOfFuel(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.OnLowFuel (Has no native function)
	void OnLowFuel(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.OnFuelValueChanged (Has no native function)
	void OnFuelValueChanged(float& FuelPercentage, bool& bIsLowOnFuel); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.OnBoostStarted (Has no native function)
	void OnBoostStarted(); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.OnBoostFinished (Has no native function)
	void OnBoostFinished(); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.OnBoostChargeFilled (Has no native function)
	void OnBoostChargeFilled(); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.OnAddedFuel (Underlying native function: OnAddedFuel 0xa5d16d8)
	void OnAddedFuel(float& NewFuelPercent); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.HandleBoostStarted (Underlying native function: HandleBoostStarted 0xa5d0e48)
	void HandleBoostStarted(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.HandleBoostFinished (Underlying native function: HandleBoostFinished 0xa5d0e34)
	void HandleBoostFinished(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.GetVehicle (Underlying native function: GetVehicle 0x845d9e4)
	class AFortAthenaVehicle* GetVehicle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.GetHUDTopSpeed (Underlying native function: GetHUDTopSpeed 0xa5d0d2c)
	float GetHUDTopSpeed(); // (0x00000002 | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.BP_HandleExtensionWidgetCreated (Has no native function)
	void BPHandleExtensionWidgetCreated(class UUserWidget*& Widget, enum EUIExtensionSlot& SlotType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaVehicleDashboardWidget.AddWidgetTagsToHideWhenVisible (Underlying native function: AddWidgetTagsToHideWhenVisible 0x61a7fa0)
	void AddWidgetTagsToHideWhenVisible(struct FGameplayTagContainer& TagToAdd); // (Final | Native | Public | BlueprintCallable)
};

