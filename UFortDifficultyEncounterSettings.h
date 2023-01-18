// Class /Script/FortniteGame.FortDifficultyEncounterSettings
// Size: 0x180
class UFortDifficultyEncounterSettings : public UPrimaryDataAsset
{
	struct TArray<class UFortDifficultyOptionEncounter*> DifficultyOptions; // 0x30 (0x10)
	struct FEncounterEnvironmentQueryInfo OverrideEncounterEnvironmentQueryInfo; // 0x40 (0x28)
	struct FFortEncounterSettings EncounterSettings; // 0x68 (0xc0)
	struct TEnumAsByte<EFortEncounterSpawnLimitType> SpawnLimitMode; // 0x128 (0x1)
	struct TEnumAsByte<EFortEncounterPacingMode> PacingMode; // 0x129 (0x1)
	unsigned char padding_12a[0x56]; // 0x12a (0x56)
};

