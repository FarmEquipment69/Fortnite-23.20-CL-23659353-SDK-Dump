// ScriptStruct /Script/GameplayCameras.ActiveCameraAnimationInfo
// Size: 0x70
struct FActiveCameraAnimationInfo
{
	class UCameraAnimationSequence* Sequence; // 0x0 (0x8)
	struct FCameraAnimationParams Params; // 0x8 (0x40)
	struct FCameraAnimationHandle Handle; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	class UCameraAnimationSequencePlayer* Player; // 0x50 (0x8)
	class UCameraAnimationSequenceCameraStandIn* CameraStandIn; // 0x58 (0x8)
	float EaseInCurrentTime; // 0x60 (0x4)
	float EaseOutCurrentTime; // 0x64 (0x4)
	bool bIsEasingIn; // 0x68 (0x1)
	bool bIsEasingOut; // 0x69 (0x1)
	unsigned char padding_6a[0x6]; // 0x6a (0x6)
};

