// Class /Script/AudioWidgets.AudioSliderBase
// Size: 0x900
class UAudioSliderBase : public UWidget
{
	float Value; // 0x148 (0x4)
	unsigned char unreflected_14c[0x4]; // 0x14c (0x4) 
	struct FText UnitsText; // 0x150 (0x18)
	struct FLinearColor TextLabelBackgroundColor; // 0x168 (0x10)
	struct FDelegate TextLabelBackgroundColorDelegate; // 0x178 (0xc)
	bool ShowLabelOnlyOnHover; // 0x184 (0x1)
	bool ShowUnitsText; // 0x185 (0x1)
	bool IsUnitsTextReadOnly; // 0x186 (0x1)
	bool IsValueTextReadOnly; // 0x187 (0x1)
	struct FDelegate ValueDelegate; // 0x188 (0xc)
	struct FLinearColor SliderBackgroundColor; // 0x194 (0x10)
	struct FDelegate SliderBackgroundColorDelegate; // 0x1a4 (0xc)
	struct FLinearColor SliderBarColor; // 0x1b0 (0x10)
	struct FDelegate SliderBarColorDelegate; // 0x1c0 (0xc)
	struct FLinearColor SliderThumbColor; // 0x1cc (0x10)
	struct FDelegate SliderThumbColorDelegate; // 0x1dc (0xc)
	struct FLinearColor WidgetBackgroundColor; // 0x1e8 (0x10)
	struct FDelegate WidgetBackgroundColorDelegate; // 0x1f8 (0xc)
	struct TEnumAsByte<EOrientation> Orientation; // 0x204 (0x1)
	unsigned char unreflected_205[0x3]; // 0x205 (0x3) 
	struct FMulticastInlineDelegate OnValueChanged; // 0x208 (0x10)
	unsigned char padding_218[0x6e8]; // 0x218 (0x6e8)

	/* Functions */

	// Function /Script/AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor (Underlying native function: SetWidgetBackgroundColor 0x7a0c14c)
	void SetWidgetBackgroundColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioSliderBase.SetValueTextReadOnly (Underlying native function: SetValueTextReadOnly 0x7a0c0bc)
	void SetValueTextReadOnly(bool& bIsReadOnly); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly (Underlying native function: SetUnitsTextReadOnly 0x7a0bfa0)
	void SetUnitsTextReadOnly(bool& bIsReadOnly); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsText (Underlying native function: SetUnitsText 0x7a0be78)
	void SetUnitsText(struct FText& Units); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor (Underlying native function: SetTextLabelBackgroundColor 0x7a0bd0c)
	void SetTextLabelBackgroundColor(struct FSlateColor& InColor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderThumbColor (Underlying native function: SetSliderThumbColor 0x7a0bbd4)
	void SetSliderThumbColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBarColor (Underlying native function: SetSliderBarColor 0x7a0ba04)
	void SetSliderBarColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBackgroundColor (Underlying native function: SetSliderBackgroundColor 0x7a0b8cc)
	void SetSliderBackgroundColor(struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioSliderBase.SetShowUnitsText (Underlying native function: SetShowUnitsText 0x7a0b840)
	void SetShowUnitsText(bool& bShowUnitsText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover (Underlying native function: SetShowLabelOnlyOnHover 0x7a0b724)
	void SetShowLabelOnlyOnHover(bool& bShowLabelOnlyOnHover); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioSliderBase.GetSliderValue (Underlying native function: GetSliderValue 0x7a0acdc)
	float GetSliderValue(float& OutputValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioSliderBase.GetOutputValue (Underlying native function: GetOutputValue 0x7a0aec4)
	float GetOutputValue(float& InSliderValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioWidgets.AudioSliderBase.GetLinValue (Underlying native function: GetLinValue 0x7a0acdc)
	float GetLinValue(float& OutputValue); // (Final | Native | Public | BlueprintCallable)
};

