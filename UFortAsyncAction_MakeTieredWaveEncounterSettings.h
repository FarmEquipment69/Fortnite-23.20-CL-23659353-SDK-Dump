// Class /Script/FortniteAI.FortAsyncAction_MakeTieredWaveEncounterSettings
// Size: 0x2d8
class UFortAsyncAction_MakeTieredWaveEncounterSettings : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnComplete; // 0x30 (0x10)
	struct FTieredWaveSetData WaveData; // 0x40 (0x1c8)
	struct FFortEncounterSettings EncounterSettings; // 0x208 (0xc0)
	unsigned char padding_2c8[0x10]; // 0x2c8 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.FortAsyncAction_MakeTieredWaveEncounterSettings.CreateAsyncAction_MakeTieredWaveEncounterSettings (Underlying native function: CreateAsyncAction_MakeTieredWaveEncounterSettings 0xa29df54)
	static class UFortAsyncAction_MakeTieredWaveEncounterSettings* CreateAsyncActionMakeTieredWaveEncounterSettings(struct FTieredWaveSetData& WaveData, struct FFortEncounterSettings& InEncounterSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

