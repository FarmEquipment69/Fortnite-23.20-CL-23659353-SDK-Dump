// ScriptStruct /Script/Engine.PoseDataContainer
// Size: 0x60
struct FPoseDataContainer
{
	struct TArray<struct FSmartName*> PoseNames; // 0x0 (0x10)
	struct TArray<struct FName> Tracks; // 0x10 (0x10)
	struct TArray<int> TrackBoneIndices; // 0x20 (0x10)
	struct TArray<struct FPoseAssetInfluences> TrackPoseInfluenceIndices; // 0x30 (0x10)
	struct TArray<struct FPoseData> Poses; // 0x40 (0x10)
	struct TArray<struct FAnimCurveBase> Curves; // 0x50 (0x10)
};

