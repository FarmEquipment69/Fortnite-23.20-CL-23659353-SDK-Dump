// Class /Script/FortniteUI.AthenaSpatialCustomizationChoice
// Size: 0x2d0
class UAthenaSpatialCustomizationChoice : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	class UFortLazyImage* ImageItemIcon; // 0x298 (0x8)
	class UImage* ImageLocked; // 0x2a0 (0x8)
	class UImage* ImageOwned; // 0x2a8 (0x8)
	struct FName ColorChoiceDivetParam; // 0x2b0 (0x4)
	struct FName NullColorDivetParam; // 0x2b4 (0x4)
	struct FVector2D Size; // 0x2b8 (0x10)
	struct FGameplayTag ChoiceTag; // 0x2c8 (0x4)
	unsigned char padding_2cc[0x4]; // 0x2cc (0x4)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpatialCustomizationChoice.OnSetupChoice (Has no native function)
	void OnSetupChoice(enum ESpatialCustomizationCategoryState& State, struct FLinearColor& Color); // (Event | Protected | HasDefaults | BlueprintEvent)
};

