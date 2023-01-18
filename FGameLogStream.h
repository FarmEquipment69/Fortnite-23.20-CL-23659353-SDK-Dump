// ScriptStruct /Script/FortniteGame.GameLogStream
// Size: 0x90
struct FGameLogStream
{
	struct TArray<struct FDeathEvent> DeathEvents; // 0x0 (0x10)
	unsigned char unreflected_10[0x8]; // 0x10 (0x8) 
	struct TArray<struct FGameLogPawnSample> PawnSamples; // 0x18 (0x10)
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct TArray<struct FGameLogBuildSample> BuildEvents; // 0x30 (0x10)
	unsigned char unreflected_40[0x8]; // 0x40 (0x8) 
	struct TArray<struct FStormSample> StormSamples; // 0x48 (0x10)
	unsigned char unreflected_58[0x8]; // 0x58 (0x8) 
	struct TArray<struct FGameLogPlayerMetaSample> PlayerMetaInfoSamples; // 0x60 (0x10)
	unsigned char unreflected_70[0x8]; // 0x70 (0x8) 
	struct TArray<struct FGameLogDancePartySample> PlayerDancePartySamples; // 0x78 (0x10)
	unsigned char padding_88[0x8]; // 0x88 (0x8)
};

