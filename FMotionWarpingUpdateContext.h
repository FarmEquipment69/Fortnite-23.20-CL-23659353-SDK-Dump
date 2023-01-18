// ScriptStruct /Script/MotionWarping.MotionWarpingUpdateContext
// Size: 0x1c
struct FMotionWarpingUpdateContext
{
	struct TWeakObjectPtr<class UAnimSequenceBase> Animation; // 0x0 (0x8)
	float PreviousPosition; // 0x8 (0x4)
	float CurrentPosition; // 0xc (0x4)
	float Weight; // 0x10 (0x4)
	float PlayRate; // 0x14 (0x4)
	float DeltaSeconds; // 0x18 (0x4)
};

