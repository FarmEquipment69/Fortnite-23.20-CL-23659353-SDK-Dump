// ScriptStruct /Script/SuperstormRuntime.TempestLightningBoltData
// Size: 0x78
struct FTempestLightningBoltData
{
	class AFortPawn* SourcePawn; // 0x0 (0x8)
	unsigned char unreflected_8[0x40]; // 0x8 (0x40) 
	class AFortGameplayEffectDeliveryActor* LightningBolt; // 0x48 (0x8)
	struct TArray<class AActor*> TargetActors; // 0x50 (0x10)
	struct TArray<class AFortPawn*> TargetPawns; // 0x60 (0x10)
	unsigned char padding_70[0x8]; // 0x70 (0x8)
};

