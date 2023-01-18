// Class /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget
// Size: 0x2e8
class UFortPowerupReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{
	enum EPowerupHeatState LastPowerupHeatState; // 0x2e0 (0x1)
	unsigned char padding_2e1[0x7]; // 0x2e1 (0x7)

	/* Functions */

	// Function /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetOverheatingMaxValue (Underlying native function: GetOverheatingMaxValue 0x72c0774)
	float GetOverheatingMaxValue(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetCurrentOverheatValue (Underlying native function: GetCurrentOverheatValue 0x72c074c)
	float GetCurrentOverheatValue(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetCurrentOverheatPercent (Underlying native function: GetCurrentOverheatPercent 0x72c0724)
	float GetCurrentOverheatPercent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

