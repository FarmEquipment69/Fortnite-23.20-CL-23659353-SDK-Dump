// ScriptStruct /Script/LagerRuntime.FortAthenaLivingWorldPointProviderSpawnLimiter
// Size: 0x68
struct FFortAthenaLivingWorldPointProviderSpawnLimiter
{
	enum ELivingWorldPointProviderSpawnLimiterBehavior Behavior; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FScalableFloat MaxNumberOfSpawn; // 0x10 (0x28)
	struct FScalableFloat MaxNumberOfEventInstance; // 0x38 (0x28)
	bool bResetLimitWhenEnabling; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};

