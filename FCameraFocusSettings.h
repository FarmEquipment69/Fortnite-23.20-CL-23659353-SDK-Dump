// ScriptStruct /Script/CinematicCamera.CameraFocusSettings
// Size: 0x60
struct FCameraFocusSettings
{
	enum ECameraFocusMethod FocusMethod; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float ManualFocusDistance; // 0x4 (0x4)
	struct FCameraTrackingFocusSettings TrackingFocusSettings; // 0x8 (0x48)
	unsigned char bSmoothFocusChanges; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	float FocusSmoothingInterpSpeed; // 0x54 (0x4)
	float FocusOffset; // 0x58 (0x4)
	unsigned char padding_5c[0x4]; // 0x5c (0x4)
};

