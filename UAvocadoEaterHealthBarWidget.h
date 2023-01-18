// Class /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget
// Size: 0x340
class UAvocadoEaterHealthBarWidget : public UFortHUDElementWidget
{
	struct FEventMessageTag AttachedMessageTag; // 0x2d0 (0x4)
	struct FEventMessageTag DetachedMessageTag; // 0x2d4 (0x4)
	struct FEventMessageTag SetMarkerPositionMessageTag; // 0x2d8 (0x4)
	struct FEventMessageTag TargetDamagedMessageTag; // 0x2dc (0x4)
	unsigned char padding_2e0[0x60]; // 0x2e0 (0x60)

	/* Functions */

	// Function /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget.OnTargetDamaged (Has no native function)
	void OnTargetDamaged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget.OnSetMarkerPosition (Has no native function)
	void OnSetMarkerPosition(float& MarkerPosition); // (Event | Protected | BlueprintEvent)

	// Function /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget.OnParasiteDetached (Has no native function)
	void OnParasiteDetached(); // (Event | Protected | BlueprintEvent)

	// Function /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget.OnParasiteAttached (Has no native function)
	void OnParasiteAttached(); // (Event | Protected | BlueprintEvent)
};

