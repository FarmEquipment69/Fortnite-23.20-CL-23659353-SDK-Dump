// ScriptStruct /Script/CustomizableObjectPopulation.CustomizableObjectPopulationConstraint
// Size: 0x70
struct FCustomizableObjectPopulationConstraint
{
	enum EPopulationConstraintType Type; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int ConstraintWeight; // 0x4 (0x4)
	int TrueWeight; // 0x8 (0x4)
	int FalseWeight; // 0xc (0x4)
	struct FString DiscreteValue; // 0x10 (0x10)
	struct FLinearColor DiscreteColor; // 0x20 (0x10)
	struct TArray<struct FString> AllowList; // 0x30 (0x10)
	struct TArray<struct FString> Blocklist; // 0x40 (0x10)
	struct TArray<struct FConstraintRanges> Ranges; // 0x50 (0x10)
	class UCurveBase* Curve; // 0x60 (0x8)
	enum ECurveColor CurveColor; // 0x68 (0x1)
	unsigned char padding_69[0x7]; // 0x69 (0x7)
};

