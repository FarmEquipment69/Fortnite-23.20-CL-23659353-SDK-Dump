// ScriptStruct /Script/MotionWarping.MotionDeltaTrack
// Size: 0x60
struct FMotionDeltaTrack
{
	struct TArray<struct FTransform> BoneTransformTrack; // 0x0 (0x10)
	struct TArray<struct FVector> DeltaTranslationTrack; // 0x10 (0x10)
	struct TArray<struct FRotator> DeltaRotationTrack; // 0x20 (0x10)
	struct FVector TotalTranslation; // 0x30 (0x18)
	struct FRotator TotalRotation; // 0x48 (0x18)
};

