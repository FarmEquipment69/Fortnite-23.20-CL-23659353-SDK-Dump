// Class /Script/ScoutDroneUI.ScoutDroneTetherIndicator
// Size: 0x288
class UScoutDroneTetherIndicator : public UUserWidget
{
	unsigned char unreflected_288[0x288]; 

	/* Functions */

	// Function /Script/ScoutDroneUI.ScoutDroneTetherIndicator.GetControlledDrone (Underlying native function: GetControlledDrone 0x53626d0)
	class AFortScoutDrone* GetControlledDrone(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ScoutDroneUI.ScoutDroneTetherIndicator.BP_WhileInWarningRange (Has no native function)
	void BPWhileInWarningRange(float& SignalIntensityPercentage); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnExitWarningRange (Has no native function)
	void BPOnExitWarningRange(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnEnterWarningRange (Has no native function)
	void BPOnEnterWarningRange(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnEnterSignalLossRange (Has no native function)
	void BPOnEnterSignalLossRange(); // (Event | Protected | BlueprintEvent)
};

