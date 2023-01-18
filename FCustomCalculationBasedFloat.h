// ScriptStruct /Script/GameplayAbilities.CustomCalculationBasedFloat
// Size: 0x90
struct FCustomCalculationBasedFloat
{
	class UClass* CalculationClassMagnitude; // 0x0 (0x8)
	struct FScalableFloat Coefficient; // 0x8 (0x28)
	struct FScalableFloat PreMultiplyAdditiveValue; // 0x30 (0x28)
	struct FScalableFloat PostMultiplyAdditiveValue; // 0x58 (0x28)
	struct FCurveTableRowHandle FinalLookupCurve; // 0x80 (0x10)
};

