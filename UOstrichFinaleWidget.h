// Class /Script/FortniteUI.OstrichFinaleWidget
// Size: 0x2a0
class UOstrichFinaleWidget : public UUserWidget
{
	unsigned char unreflected_268[0x8]; // 0x268 (0x8) 
	float DestructDisplayUpdateFrequency; // 0x270 (0x4)
	float FinishBroadcastOffset; // 0x274 (0x4)
	class AFortCharacterVehicle_Ostrich* OwningVehicle; // 0x278 (0x8)
	unsigned char padding_280[0x20]; // 0x280 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.OstrichFinaleWidget.OnUpdateSelfDestruct (Has no native function)
	void OnUpdateSelfDestruct(float& RemainingTime); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.OstrichFinaleWidget.OnStartSelfDestructPrime (Has no native function)
	void OnStartSelfDestructPrime(float& Duration); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.OstrichFinaleWidget.OnSetupComplete (Has no native function)
	void OnSetupComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.OstrichFinaleWidget.OnSelfDestructStart (Has no native function)
	void OnSelfDestructStart(float& WarningDuration); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.OstrichFinaleWidget.OnSelfDestructFinish (Has no native function)
	void OnSelfDestructFinish(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.OstrichFinaleWidget.OnCancelSelfDestructPrime (Has no native function)
	void OnCancelSelfDestructPrime(); // (Event | Protected | BlueprintEvent)
};

