// Class /Script/FortniteUI.BattlePassItemChoiceDisplay
// Size: 0x2c8
class UBattlePassItemChoiceDisplay : public UCommonUserWidget
{
	class UCommonButtonLegacy* ButtonSelectAlter; // 0x290 (0x8)
	class UCommonButtonLegacy* ButtonSelectEgo; // 0x298 (0x8)
	class UCommonButtonLegacy* ButtonSelectBase; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x20]; // 0x2a8 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.BattlePassItemChoiceDisplay.OnCosmeticItemChanged (Has no native function)
	void OnCosmeticItemChanged(class UAthenaCosmeticItemDefinition*& CosmeticItem); // (Event | Protected | BlueprintEvent)
};

