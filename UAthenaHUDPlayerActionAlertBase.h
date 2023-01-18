// Class /Script/FortniteUI.AthenaHUDPlayerActionAlertBase
// Size: 0x2f0
class UAthenaHUDPlayerActionAlertBase : public UFortHUDElementWidget
{
	struct FGameplayTag HideStormAlertTag; // 0x2d0 (0x4)
	unsigned char padding_2d4[0x1c]; // 0x2d4 (0x1c)

	/* Functions */

	// Function /Script/FortniteUI.AthenaHUDPlayerActionAlertBase.RequestNextAlert (Underlying native function: RequestNextAlert 0x48764b8)
	void RequestNextAlert(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDPlayerActionAlertBase.BP_ShowAlert (Has no native function)
	void BPShowAlert(enum EAthenaPlayerActionAlert& Alert, struct FText& DetailText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaHUDPlayerActionAlertBase.BP_OnAlertsCleared (Has no native function)
	void BPOnAlertsCleared(); // (Event | Protected | BlueprintEvent)
};

