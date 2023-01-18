// Class /Script/FortniteUI.InfiltrationIntelStatusWidget
// Size: 0x2a8
class UInfiltrationIntelStatusWidget : public UCommonUserWidget
{
	int SpawnerIndex; // 0x290 (0x4)
	unsigned char padding_294[0x14]; // 0x294 (0x14)

	/* Functions */

	// Function /Script/FortniteUI.InfiltrationIntelStatusWidget.UpdateTimerVisuals (Has no native function)
	void UpdateTimerVisuals(float& TimeRemaining, float& TotalTime); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.InfiltrationIntelStatusWidget.SetIsGroundTimer (Has no native function)
	void SetIsGroundTimer(bool& bIsGroundTimer); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.InfiltrationIntelStatusWidget.SetIntelState (Has no native function)
	void SetIntelState(enum EIntelStateEnum& NewState); // (Event | Public | BlueprintEvent)
};

