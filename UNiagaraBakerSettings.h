// Class /Script/Niagara.NiagaraBakerSettings
// Size: 0x1f0
class UNiagaraBakerSettings : public UObject
{
	float StartSeconds; // 0x28 (0x4)
	float DurationSeconds; // 0x2c (0x4)
	int FramesPerSecond; // 0x30 (0x4)
	unsigned char bPreviewLooping; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	struct FIntPoint* FramesPerDimension; // 0x38 (0x8)
	struct TArray<class UNiagaraBakerOutput*> Outputs; // 0x40 (0x10)
	struct TArray<struct FNiagaraBakerCameraSettings> CameraSettings; // 0x50 (0x10)
	int CurrentCameraIndex; // 0x60 (0x4)
	struct FName BakeQualityLevel; // 0x64 (0x4)
	unsigned char bRenderComponentOnly; // 0x68 (0x1)
	unsigned char unreflected_69[0x7]; // 0x69 (0x7) 
	struct TArray<struct FNiagaraBakerTextureSettings> OutputTextures; // 0x70 (0x10)
	enum ENiagaraBakerViewMode CameraViewportMode; // 0x80 (0x4)
	unsigned char unreflected_84[0x4]; // 0x84 (0x4) 
	struct FVector CameraViewportLocation[0x7]; // 0x88 (0x18) (ARRAY) 
	struct FRotator CameraViewportRotation[0x7]; // 0x130 (0x18) (ARRAY) 
	float CameraOrbitDistance; // 0x1d8 (0x4)
	float CameraFOV; // 0x1dc (0x4)
	float CameraOrthoWidth; // 0x1e0 (0x4)
	unsigned char bUseCameraAspectRatio; // 0x1e4 (0x1)
	unsigned char unreflected_1e5[0x3]; // 0x1e5 (0x3) 
	float CameraAspectRatio; // 0x1e8 (0x4)
	unsigned char padding_1ec[0x4]; // 0x1ec (0x4)
};

