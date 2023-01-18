// ScriptStruct /Script/FortniteGame.FortChaseCameraHelper
// Size: 0x280
struct FFortChaseCameraHelper
{
	struct FTransform PivotToViewTarget; // 0x0 (0x60)
	struct FTransform PivotToViewTargetCrouching; // 0x60 (0x60)
	struct FTransform MinCameraToPivot; // 0xc0 (0x60)
	struct FTransform MaxCameraToPivot; // 0x120 (0x60)
	unsigned char unreflected_180[0x8]; // 0x180 (0x8) 
	float CameraToPivotAlphaInterpSpeed; // 0x188 (0x4)
	float CameraCollisionSphereRadius; // 0x18c (0x4)
	float PivotLocationInterpSpeed; // 0x190 (0x4)
	float PivotRotationInterpSpeed; // 0x194 (0x4)
	unsigned char unreflected_198[0x8]; // 0x198 (0x8) 
	struct TArray<class AActor*> IgnoreActors; // 0x1a0 (0x10)
	enum EThirdPersonAutoFollowMode AutoFollowMode; // 0x1b0 (0x1)
	unsigned char unreflected_1b1[0x3]; // 0x1b1 (0x3) 
	float CameraTruckRate; // 0x1b4 (0x4)
	float AutoFollowPitch; // 0x1b8 (0x4)
	float LazyAutoFollowPitchMin; // 0x1bc (0x4)
	float LazyAutoFollowPitchMax; // 0x1c0 (0x4)
	unsigned char padding_1c4[0xbc]; // 0x1c4 (0xbc)
};

