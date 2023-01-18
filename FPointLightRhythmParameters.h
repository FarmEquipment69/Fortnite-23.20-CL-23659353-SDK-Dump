// ScriptStruct /Script/PointLight.PointLightRhythmParameters
// Size: 0x38
struct FPointLightRhythmParameters
{
	struct FLinearColor LightColor; // 0x0 (0x10)
	class ULightComponent* ActiveLight; // 0x10 (0x8)
	class UStaticMeshComponent* StaticMeshComponent; // 0x18 (0x8)
	int ColorBands; // 0x20 (0x4)
	float RhythmFrequencyValue; // 0x24 (0x4)
	float WindAmplitudeSpotLight; // 0x28 (0x4)
	float FlashFactor; // 0x2c (0x4)
	float SizeBasedIntensity; // 0x30 (0x4)
	enum EPointLightDeviceLightType LightType; // 0x34 (0x1)
	enum EPointLightDeviceModes RhythmMode; // 0x35 (0x1)
	unsigned char padding_36[0x2]; // 0x36 (0x2)
};

