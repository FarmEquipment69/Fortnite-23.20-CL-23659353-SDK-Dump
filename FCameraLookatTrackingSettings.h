// ScriptStruct /Script/CinematicCamera.CameraLookatTrackingSettings
// Size: 0x68
struct FCameraLookatTrackingSettings
{
	unsigned char bEnableLookAtTracking; // 0x0 (0x1)
	unsigned char bDrawDebugLookAtTrackingPosition; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float LookAtTrackingInterpSpeed; // 0x4 (0x4)
	unsigned char unreflected_8[0x18]; // 0x8 (0x18) 
	struct TWeakObjectPtr<class AActor> ActorToTrack; // 0x20 (0x28)
	struct FVector RelativeOffset; // 0x48 (0x18)
	unsigned char bAllowRoll; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};

