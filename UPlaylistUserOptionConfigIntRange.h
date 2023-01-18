// Class /Script/FortniteGame.PlaylistUserOptionConfigIntRange
// Size: 0x278
class UPlaylistUserOptionConfigIntRange : public UPlaylistUserOptionBase
{
	int min; // 0x1d8 (0x4)
	int max; // 0x1dc (0x4)
	struct FString MaxValueCVarName; // 0x1e0 (0x10)
	int DefaultValue; // 0x1f0 (0x4)
	int IncrementValue; // 0x1f4 (0x4)
	int Shift; // 0x1f8 (0x4)
	unsigned char unreflected_1fc[0x4]; // 0x1fc (0x4) 
	struct TMap<int, struct FText> OverrideValueStrings; // 0x200 (0x50)
	struct TArray<struct FPlaylistOptionIntValue> OverrideOptionValues; // 0x250 (0x10)
	struct FText OptionPrefix; // 0x260 (0x18)
};

