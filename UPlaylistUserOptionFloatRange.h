// Class /Script/FortniteGame.PlaylistUserOptionFloatRange
// Size: 0x278
class UPlaylistUserOptionFloatRange : public UPlaylistUserOptionBase
{
	float min; // 0x1d8 (0x4)
	float max; // 0x1dc (0x4)
	float SliderMin; // 0x1e0 (0x4)
	float SliderMax; // 0x1e4 (0x4)
	float DefaultValue; // 0x1e8 (0x4)
	float IncrementValue; // 0x1ec (0x4)
	bool bOverrideSliderRange; // 0x1f0 (0x1)
	bool bRestrictSliderValues; // 0x1f1 (0x1)
	bool bUseNumericInput; // 0x1f2 (0x1)
	unsigned char MinFractionalDigits; // 0x1f3 (0x1)
	unsigned char MaxFractionalDigits; // 0x1f4 (0x1)
	unsigned char unreflected_1f5[0x3]; // 0x1f5 (0x3) 
	struct FText UnitName; // 0x1f8 (0x18)
	struct TMap<float, struct FText> OverrideValueStrings; // 0x210 (0x50)
	struct TArray<struct FPlaylistOptionFloatValue> SliderOptionValues; // 0x260 (0x10)
	int SliderOptionValuesDefaultIndex; // 0x270 (0x4)
	unsigned char padding_274[0x4]; // 0x274 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.PlaylistUserOptionFloatRange.GetSliderMin (Underlying native function: GetSliderMin 0x899c594)
	float GetSliderMin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.PlaylistUserOptionFloatRange.GetSliderMax (Underlying native function: GetSliderMax 0x899c53c)
	float GetSliderMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

