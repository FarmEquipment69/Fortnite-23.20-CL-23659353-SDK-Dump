// ScriptStruct /Script/FortniteGame.FortEncounterModeSettings
// Size: 0x5
struct FFortEncounterModeSettings
{
	struct TEnumAsByte<EFortEncounterPacingMode> PacingMode; // 0x0 (0x1)
	enum EFortEncounterSpawnLocationManagementMode SpawnLocationManagementMode; // 0x1 (0x1)
	struct TEnumAsByte<EFortEncounterSpawnLocationPlacementMode> SpawnLocationMode; // 0x2 (0x1)
	struct TEnumAsByte<EFortEncounterUtilitiesMode> UtilitiesMode; // 0x3 (0x1)
	struct TEnumAsByte<EFortEncounterSpawnLimitType> SpawnLimitMode; // 0x4 (0x1)
};

