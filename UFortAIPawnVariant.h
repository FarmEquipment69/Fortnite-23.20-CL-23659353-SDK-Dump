// Class /Script/FortniteAI.FortAIPawnVariant
// Size: 0x70
class UFortAIPawnVariant : public UObject
{
	struct TArray<class UClass*> PawnClasses; // 0x28 (0x10)
	struct TArray<struct FFortAIPawnVariantDefinition> PawnVariantDefinitions; // 0x38 (0x10)
	int MinPlayersToSpawnVariant; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct FDataTableRowHandle SpawnPointValueHandle; // 0x50 (0x10)
	int CachedSpawnPointValue; // 0x60 (0x4)
	float EncounterExpectedLifespan; // 0x64 (0x4)
	int VersionNum; // 0x68 (0x4)
	unsigned char padding_6c[0x4]; // 0x6c (0x4)
};

