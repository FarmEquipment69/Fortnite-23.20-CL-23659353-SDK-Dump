// Class /Script/VaultingCodeRuntime.HurdleCameraMode
// Size: 0x1d20
class UHurdleCameraMode : public UFortCameraMode_ThirdPerson
{
	struct FVector StartCameraOriginInterpSpeed; // 0x1b18 (0x18)
	struct FVector ApexCameraOriginInterpSpeed; // 0x1b30 (0x18)
	struct FVector EndCameraOriginInterpSpeed; // 0x1b48 (0x18)
	float ConstantSpeedCameraTrackInterpolationExponent; // 0x1b60 (0x4)
	float CameraOriginVerticalThreshold; // 0x1b64 (0x4)
	float FallingVerticalInterpSpeed; // 0x1b68 (0x4)
	float FallSpeedThreshold; // 0x1b6c (0x4)
	bool bOverrideSpectatorCamera; // 0x1b70 (0x1)
	unsigned char unreflected_1b71[0x7]; // 0x1b71 (0x7) 
	struct FHurdleTargetingData HurdleTargetingData; // 0x1b78 (0x130)
	unsigned char padding_1ca8[0x78]; // 0x1ca8 (0x78)
};

