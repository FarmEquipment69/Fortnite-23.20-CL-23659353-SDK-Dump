// Class /Script/CinematicCamera.CameraRig_Crane
// Size: 0x2b8
class ACameraRig_Crane : public AActor
{
	float CranePitch; // 0x288 (0x4)
	float CraneYaw; // 0x28c (0x4)
	float CraneArmLength; // 0x290 (0x4)
	bool bLockMountPitch; // 0x294 (0x1)
	bool bLockMountYaw; // 0x295 (0x1)
	unsigned char unreflected_296[0x2]; // 0x296 (0x2) 
	class USceneComponent* TransformComponent; // 0x298 (0x8)
	class USceneComponent* CraneYawControl; // 0x2a0 (0x8)
	class USceneComponent* CranePitchControl; // 0x2a8 (0x8)
	class USceneComponent* CraneCameraMount; // 0x2b0 (0x8)
};

