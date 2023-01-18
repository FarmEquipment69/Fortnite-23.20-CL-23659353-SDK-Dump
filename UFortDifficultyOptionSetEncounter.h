// Class /Script/FortniteGame.FortDifficultyOptionSetEncounter
// Size: 0xe8
class UFortDifficultyOptionSetEncounter : public UDataAsset
{
	struct TEnumAsByte<EFortEncounterPacingMode> PacingMode; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	class UFortDifficultyOptionCategoryEncounter_IntensityCurveSequence* IntensityCurveSequenceCategory; // 0x38 (0x8)
	class UFortDifficultyOptionCategoryEncounter_SpawnPointsCurve* SpawnPointsPercentageCurveSequenceCategory; // 0x40 (0x8)
	class UFortDifficultyOptionCategoryEncounter_SpawnPointsBurst* SpawnPointsBurstCategory; // 0x48 (0x8)
	class UFortDifficultyOptionCategoryEncounter_Breathers* BreathersCategory; // 0x50 (0x8)
	class UFortDifficultyOptionCategoryEncounter_SpawnPointsMultiplier* SpawnPointsMultiplierCategory; // 0x58 (0x8)
	class UFortDifficultyOptionCategoryEncounter_PawnNumberCap* PawnNumberCapCategory; // 0x60 (0x8)
	class UFortDifficultyOptionCategoryEncounter_SpawnTiming* OptionalSpawnTimingCategory; // 0x68 (0x8)
	struct TEnumAsByte<EFortEncounterSpawnLimitType> SpawnLimitMode; // 0x70 (0x1)
	unsigned char unreflected_71[0x7]; // 0x71 (0x7) 
	class UFortDifficultyOptionCategoryEncounter_SpawnLimitPoints* SpawnPointsLimitCategory; // 0x78 (0x8)
	class UFortDifficultyOptionCategoryEncounter_SpawnLimitPawns* PawnLimitCategory; // 0x80 (0x8)
	struct TEnumAsByte<EFortEncounterUtilitiesMode> UtilitiesMode; // 0x88 (0x1)
	unsigned char unreflected_89[0x7]; // 0x89 (0x7) 
	class UFortDifficultyOptionCategoryEncounter_UtilitiesLocked* LockedUtilitiesCategory; // 0x90 (0x8)
	class UFortDifficultyOptionCategoryEncounter_UtilitiesFree* FreeUtilitiesCategory; // 0x98 (0x8)
	class UFortDifficultyOptionCategoryEncounter_UtilitiesAdjustment* UtilitiesAdjustmentCategory; // 0xa0 (0x8)
	enum EFortEncounterSpawnLocationManagementMode SpawnLocationManagementMode; // 0xa8 (0x1)
	struct TEnumAsByte<EFortEncounterSpawnLocationPlacementMode> SpawnLocationPlacementMode; // 0xa9 (0x1)
	unsigned char unreflected_aa[0x6]; // 0xaa (0x6) 
	class UFortDifficultyOptionCategoryEncounter_DirectionNumber* DirectionNumberCategory; // 0xb0 (0x8)
	class UFortDifficultyOptionCategoryEncounter_DirectionChange* DirectionChangeCategory; // 0xb8 (0x8)
	class UFortDifficultyOptionCategoryEncounter_Distance* DistanceCategory; // 0xc0 (0x8)
	class UFortDifficultyOptionCategoryEncounter_SpawnGroupProgression* SpawnGroupProgressionCategory; // 0xc8 (0x8)
	class UFortDifficultyOptionCategoryEncounter_Time* TimeCategory; // 0xd0 (0x8)
	class UFortDifficultyOptionCategoryEncounter_ModifierTags* OptionalModifierTagsCategory; // 0xd8 (0x8)
	class UFortDifficultyOptionCategoryEncounter_TimedModifierTags* OptionalMiniBossStartTimedTagsCategory; // 0xe0 (0x8)
};

