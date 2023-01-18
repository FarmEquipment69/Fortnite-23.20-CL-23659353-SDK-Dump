// Class /Script/Water.WaterRuntimeSettings
// Size: 0xb0
class UWaterRuntimeSettings : public UDeveloperSettings
{
	struct TEnumAsByte<ECollisionChannel> CollisionChannelForWaterTraces; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TWeakObjectPtr<class UMaterialParameterCollection> MaterialParameterCollection; // 0x38 (0x28)
	float WaterBodyIconWorldZOffset; // 0x60 (0x4)
	struct FName DefaultWaterCollisionProfileName; // 0x64 (0x4)
	struct TWeakObjectPtr<class UMaterialInterface> DefaultWaterInfoMaterial; // 0x68 (0x28)
	class UClass* WaterBodyRiverComponentClass; // 0x90 (0x8)
	class UClass* WaterBodyLakeComponentClass; // 0x98 (0x8)
	class UClass* WaterBodyOceanComponentClass; // 0xa0 (0x8)
	class UClass* WaterBodyCustomComponentClass; // 0xa8 (0x8)
};

