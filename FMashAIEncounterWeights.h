// ScriptStruct /Script/FortniteGame.MashAIEncounterWeights
// Size: 0xa8
struct FMashAIEncounterWeights
{
	struct FScalableFloat EnabledPercentChance; // 0x0 (0x28)
	struct FScalableFloat SpawnDelay; // 0x28 (0x28)
	struct TMap<struct FName, struct FScalableFloat> EncounterWeightsByNameMap; // 0x50 (0x50)
	unsigned char padding_a0[0x8]; // 0xa0 (0x8)
};

