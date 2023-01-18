// ScriptStruct /Script/FortniteUI.FortDisplayAttribute
// Size: 0x88
struct FFortDisplayAttribute
{
	struct FGameplayAttribute Attribute; // 0x0 (0x38)
	struct FText Label; // 0x38 (0x18)
	struct FText Value; // 0x50 (0x18)
	struct FText HoverText; // 0x68 (0x18)
	float NumericValue; // 0x80 (0x4)
	enum EFortStatValueDisplayType DisplayType; // 0x84 (0x1)
	enum EFortBuffState BuffState; // 0x85 (0x1)
	enum EFortClampState ClampState; // 0x86 (0x1)
	enum EFortComparisonType ComparisonType; // 0x87 (0x1)
};

