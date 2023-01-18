// Class /Script/FortniteGame.FortCurieElementInteractWithElementHandler
// Size: 0x80
class UFortCurieElementInteractWithElementHandler : public UCurieElementInteractWithElementHandler
{
	struct FGameplayTag InteractingElementTag; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FScalableFloat InteractMagnitudeThreshold; // 0x38 (0x28)
	struct FCurveTableRowHandle ElementMagnitudeToIntensityDecreaseCurve; // 0x60 (0x10)
	struct FCurveTableRowHandle ElementMagnitudeToIntensityDecayRateCurve; // 0x70 (0x10)
};

