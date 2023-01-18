// Class /Script/Engine.CameraModifier_CameraShake
// Size: 0xb0
class UCameraModifier_CameraShake : public UCameraModifier
{
	struct TArray<struct FActiveCameraShakeInfo> ActiveShakes; // 0x48 (0x10)
	struct TMap<class UClass*, struct FPooledCameraShakes> ExpiredPooledShakesMap; // 0x58 (0x50)
	float SplitScreenShakeScale; // 0xa8 (0x4)
	unsigned char padding_ac[0x4]; // 0xac (0x4)
};

