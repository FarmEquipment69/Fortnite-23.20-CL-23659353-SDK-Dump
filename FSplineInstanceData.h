// ScriptStruct /Script/Engine.SplineInstanceData
// Size: 0x1a0
struct FSplineInstanceData : FSceneComponentInstanceData
{
	bool bSplineHasBeenEdited; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x7]; // 0xb9 (0x7) 
	struct FSplineCurves SplineCurves; // 0xc0 (0x70)
	struct FSplineCurves SplineCurvesPreUCS; // 0x130 (0x70)
};

