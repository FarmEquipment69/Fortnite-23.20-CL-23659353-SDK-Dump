// ScriptStruct /Script/GameplayAbilities.PredictionKey
// Size: 0x18
struct FPredictionKey
{
	class UPackageMap* PredictiveConnection; // 0x0 (0x8)
	int16_t Current; // 0x8 (0x2)
	int16_t Base; // 0xa (0x2)
	bool bIsStale; // 0xc (0x1)
	bool bIsServerInitiated; // 0xd (0x1)
	unsigned char padding_e[0xa]; // 0xe (0xa)
};

