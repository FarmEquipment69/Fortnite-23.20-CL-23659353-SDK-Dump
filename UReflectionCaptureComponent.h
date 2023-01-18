// Class /Script/Engine.ReflectionCaptureComponent
// Size: 0x310
class UReflectionCaptureComponent : public USceneComponent
{
	class UBillboardComponent* CaptureOffsetComponent; // 0x2a0 (0x8)
	enum EReflectionSourceType ReflectionSourceType; // 0x2a8 (0x1)
	unsigned char unreflected_2a9[0x7]; // 0x2a9 (0x7) 
	class UTextureCube* Cubemap; // 0x2b0 (0x8)
	float SourceCubemapAngle; // 0x2b8 (0x4)
	float Brightness; // 0x2bc (0x4)
	struct FVector CaptureOffset; // 0x2c0 (0x18)
	struct FGuid MapBuildDataId; // 0x2d8 (0x10)
	unsigned char padding_2e8[0x28]; // 0x2e8 (0x28)
};

