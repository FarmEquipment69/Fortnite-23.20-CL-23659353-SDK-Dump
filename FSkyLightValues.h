// ScriptStruct /Script/FortniteGame.SkyLightValues
// Size: 0x38
struct FSkyLightValues
{
	struct FLinearColor SkyLightColor; // 0x0 (0x10)
	struct FLinearColor SkyLightOcclusionTint; // 0x10 (0x10)
	float SkyLightMinOcclusion; // 0x20 (0x4)
	float VolumetricScatteringIntensity; // 0x24 (0x4)
	class UTextureCube* Cubemap; // 0x28 (0x8)
	class UTextureCube* DestinationCubemap; // 0x30 (0x8)
};

