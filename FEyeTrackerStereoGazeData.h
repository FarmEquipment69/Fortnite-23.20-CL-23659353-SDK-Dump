// ScriptStruct /Script/EyeTracker.EyeTrackerStereoGazeData
// Size: 0x80
struct FEyeTrackerStereoGazeData
{
	struct FVector LeftEyeOrigin; // 0x0 (0x18)
	struct FVector LeftEyeDirection; // 0x18 (0x18)
	struct FVector RightEyeOrigin; // 0x30 (0x18)
	struct FVector RightEyeDirection; // 0x48 (0x18)
	struct FVector FixationPoint; // 0x60 (0x18)
	float ConfidenceValue; // 0x78 (0x4)
	unsigned char padding_7c[0x4]; // 0x7c (0x4)
};

