// Class /Script/FortniteUI.FortItemCountTextBlock
// Size: 0x410
class UFortItemCountTextBlock : public UCommonNumericTextBlock
{
	class UFortItemDefinition* ItemDefinition; // 0x3f0 (0x8)
	enum EFortItemCountStyle CountStyle; // 0x3f8 (0x1)
	unsigned char unreflected_3f9[0x3]; // 0x3f9 (0x3) 
	float ItemCountMaxInterpolateDuration; // 0x3fc (0x4)
	float ItemCountMinInterpolateRate; // 0x400 (0x4)
	unsigned char padding_404[0xc]; // 0x404 (0xc)

	/* Functions */

	// Function /Script/FortniteUI.FortItemCountTextBlock.SetOverrideValue (Underlying native function: SetOverrideValue 0xa8271b0)
	void SetOverrideValue(int& InOverrideValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemCountTextBlock.SetItemDefinition (Underlying native function: SetItemDefinition 0xa826aa8)
	void SetItemDefinition(class UFortItemDefinition*& InItemDefinition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemCountTextBlock.SetCountStyle (Underlying native function: SetCountStyle 0xa8267dc)
	void SetCountStyle(enum EFortItemCountStyle& InCountStyle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemCountTextBlock.InterpolateOverrideToValue (Underlying native function: InterpolateOverrideToValue 0xa82627c)
	void InterpolateOverrideToValue(int& TargetValue, float& MaximumInterpolationDuration, float& MinimumChangeRate, float& OutroOffset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemCountTextBlock.HandleItemCountChanged (Underlying native function: HandleItemCountChanged 0xa825e6c)
	void HandleItemCountChanged(class UFortItemDefinition*& Definition, int& Delta); // (Final | Native | Private)
};

