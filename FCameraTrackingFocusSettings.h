// ScriptStruct /Script/CinematicCamera.CameraTrackingFocusSettings
// Size: 0x48
struct FCameraTrackingFocusSettings
{
	struct TWeakObjectPtr<class AActor> ActorToTrack; // 0x0 (0x28)
	struct FVector RelativeOffset; // 0x28 (0x18)
	unsigned char bDrawDebugTrackingFocusPoint; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

