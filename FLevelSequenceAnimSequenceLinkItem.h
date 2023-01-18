// ScriptStruct /Script/LevelSequence.LevelSequenceAnimSequenceLinkItem
// Size: 0x30
struct FLevelSequenceAnimSequenceLinkItem
{
	struct FGuid SkelTrackGuid; // 0x0 (0x10)
	struct FSoftObjectPath PathToAnimSequence; // 0x10 (0x18)
	bool bExportTransforms; // 0x28 (0x1)
	bool bExportMorphTargets; // 0x29 (0x1)
	bool bExportAttributeCurves; // 0x2a (0x1)
	bool bExportMaterialCurves; // 0x2b (0x1)
	enum EAnimInterpolationType Interpolation; // 0x2c (0x1)
	struct TEnumAsByte<ERichCurveInterpMode> CurveInterpolation; // 0x2d (0x1)
	bool bRecordInWorldSpace; // 0x2e (0x1)
	bool bEvaluateAllSkeletalMeshComponents; // 0x2f (0x1)
};

