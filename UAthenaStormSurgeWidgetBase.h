// Class /Script/FortniteUI.AthenaStormSurgeWidgetBase
// Size: 0x2e8
class UAthenaStormSurgeWidgetBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2e8[0x2e8]; 

	/* Functions */

	// Function /Script/FortniteUI.AthenaStormSurgeWidgetBase.UpdateUI (Underlying native function: UpdateUI 0x2b57fa4)
	void UpdateUI(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaStormSurgeWidgetBase.OnUpdateThresholdDisplay (Has no native function)
	void OnUpdateThresholdDisplay(struct FText& ThresholdText, enum EStormSurgeThresholdType& ThresholdType); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaStormSurgeWidgetBase.OnStormCapStateChanged (Underlying native function: OnStormCapStateChanged 0xa4b0444)
	void OnStormCapStateChanged(enum EAthenaStormCapState& StormCapState); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaStormSurgeWidgetBase.OnStopDisplaying (Has no native function)
	void OnStopDisplaying(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaStormSurgeWidgetBase.OnStartDisplaying (Has no native function)
	void OnStartDisplaying(struct FText& TitleText); // (Event | Protected | HasOutParms | BlueprintEvent)
};

