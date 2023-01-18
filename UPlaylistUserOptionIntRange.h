// Class /Script/FortniteGame.PlaylistUserOptionIntRange
// Size: 0x278
class UPlaylistUserOptionIntRange : public UPlaylistUserOptionBase
{
	int min; // 0x1d8 (0x4)
	int max; // 0x1dc (0x4)
	int SliderMin; // 0x1e0 (0x4)
	int SliderMax; // 0x1e4 (0x4)
	int DefaultValue; // 0x1e8 (0x4)
	int IncrementValue; // 0x1ec (0x4)
	bool bOverrideSliderRange; // 0x1f0 (0x1)
	bool bRestrictSliderValues; // 0x1f1 (0x1)
	bool bUseNumericInput; // 0x1f2 (0x1)
	unsigned char unreflected_1f3[0x5]; // 0x1f3 (0x5) 
	struct FText UnitName; // 0x1f8 (0x18)
	struct TMap<int, struct FText> OverrideValueStrings; // 0x210 (0x50)
	struct TArray<struct FPlaylistOptionIntValue> SliderOptionValues; // 0x260 (0x10)
	int SliderOptionValuesDefaultIndex; // 0x270 (0x4)
	unsigned char padding_274[0x4]; // 0x274 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.PlaylistUserOptionIntRange.GetSliderMin (Underlying native function: GetSliderMin 0x899c5c4)
	int GetSliderMin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.PlaylistUserOptionIntRange.GetSliderMax (Underlying native function: GetSliderMax 0x899c56c)
	int GetSliderMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

