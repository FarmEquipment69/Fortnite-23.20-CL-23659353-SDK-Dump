// ScriptStruct /Script/EyeTracker.EyeTrackerGazeData
// Size: 0x58
struct FEyeTrackerGazeData
{
	struct FVector GazeOrigin; // 0x0 (0x18)
	struct FVector GazeDirection; // 0x18 (0x18)
	struct FVector FixationPoint; // 0x30 (0x18)
	float ConfidenceValue; // 0x48 (0x4)
	bool bIsLeftEyeBlink; // 0x4c (0x1)
	bool bIsRightEyeBlink; // 0x4d (0x1)
	unsigned char unreflected_4e[0x2]; // 0x4e (0x2) 
	float LeftPupilDiameter; // 0x50 (0x4)
	float RightPupilDiameter; // 0x54 (0x4)
};

