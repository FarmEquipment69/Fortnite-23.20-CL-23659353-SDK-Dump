// ScriptStruct /Script/Engine.TransformCurve
// Size: 0x4c0
struct FTransformCurve : FAnimCurveBase
{
	struct FVectorCurve TranslationCurve; // 0x10 (0x190)
	struct FVectorCurve RotationCurve; // 0x1a0 (0x190)
	struct FVectorCurve ScaleCurve; // 0x330 (0x190)
};

