// ScriptStruct /Script/Niagara.NiagaraBakerCameraSettings
// Size: 0x50
struct FNiagaraBakerCameraSettings
{
	enum ENiagaraBakerViewMode ViewMode; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector ViewportLocation; // 0x8 (0x18)
	struct FRotator ViewportRotation; // 0x20 (0x18)
	float OrbitDistance; // 0x38 (0x4)
	float FOV; // 0x3c (0x4)
	float OrthoWidth; // 0x40 (0x4)
	bool bUseAspectRatio; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	float AspectRatio; // 0x48 (0x4)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)
};

