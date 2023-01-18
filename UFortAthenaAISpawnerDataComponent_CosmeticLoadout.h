// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLoadout
// Size: 0x1e0
class UFortAthenaAISpawnerDataComponent_CosmeticLoadout : public UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase
{
	struct FFortAthenaLoadout CosmeticLoadout; // 0x30 (0x178)
	struct TArray<struct FFortAthenaAIWeightedCosmeticLoadout> WeightedLoadouts; // 0x1a8 (0x10)
	struct TArray<class UCustomCharacterPart*> CustomCharacterParts; // 0x1b8 (0x10)
	bool bCanShowDefaultSkin; // 0x1c8 (0x1)
	unsigned char unreflected_1c9[0x3]; // 0x1c9 (0x3) 
	struct FGameplayTag FallbackTag; // 0x1cc (0x4)
	class UClass* AnimBPOverride; // 0x1d0 (0x8)
	int AnimBPOverridePriority; // 0x1d8 (0x4)
	unsigned char padding_1dc[0x4]; // 0x1dc (0x4)
};

