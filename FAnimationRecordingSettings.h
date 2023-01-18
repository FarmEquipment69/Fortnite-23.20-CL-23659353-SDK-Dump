// ScriptStruct /Script/Engine.AnimationRecordingSettings
// Size: 0x38
struct FAnimationRecordingSettings
{
	bool bRecordInWorldSpace; // 0x0 (0x1)
	bool bRemoveRootAnimation; // 0x1 (0x1)
	bool bAutoSaveAsset; // 0x2 (0x1)
	unsigned char unreflected_3[0x1]; // 0x3 (0x1) 
	struct FFrameRate* SampleFrameRate; // 0x4 (0x8)
	float Length; // 0xc (0x4)
	enum EAnimInterpolationType Interpolation; // 0x10 (0x1)
	struct TEnumAsByte<ERichCurveInterpMode> InterpMode; // 0x11 (0x1)
	struct TEnumAsByte<ERichCurveTangentMode> TangentMode; // 0x12 (0x1)
	unsigned char unreflected_13[0x1]; // 0x13 (0x1) 
	bool bRecordTransforms; // 0x14 (0x1)
	bool bRecordMorphTargets; // 0x15 (0x1)
	bool bRecordAttributeCurves; // 0x16 (0x1)
	bool bRecordMaterialCurves; // 0x17 (0x1)
	struct TArray<struct FString> IncludeAnimationNames; // 0x18 (0x10)
	struct TArray<struct FString> ExcludeAnimationNames; // 0x28 (0x10)
};

