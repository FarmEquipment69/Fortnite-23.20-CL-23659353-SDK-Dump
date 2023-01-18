// Class /Script/VictoryCrownsUI.VictoryCrownsIndicator
// Size: 0x3a0
class UVictoryCrownsIndicator : public UFortActorIndicatorWidget
{
	unsigned char unreflected_3a0[0x3a0]; 

	/* Functions */

	// Function /Script/VictoryCrownsUI.VictoryCrownsIndicator.OnScreenClampChanged (Has no native function)
	void OnScreenClampChanged(bool& bIsClamped); // (Event | Protected | BlueprintEvent)

	// Function /Script/VictoryCrownsUI.VictoryCrownsIndicator.OnDistanceChanged (Has no native function)
	void OnDistanceChanged(int& Distance); // (Event | Protected | BlueprintEvent)

	// Function /Script/VictoryCrownsUI.VictoryCrownsIndicator.GetIndicatedPlayerStateAthena (Underlying native function: GetIndicatedPlayerStateAthena 0x77c5b14)
	class AFortPlayerStateAthena* GetIndicatedPlayerStateAthena(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

