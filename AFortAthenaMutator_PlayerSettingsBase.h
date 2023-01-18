// Class /Script/FortniteGame.FortAthenaMutator_PlayerSettingsBase
// Size: 0x570
class AFortAthenaMutator_PlayerSettingsBase : public AFortAthenaMutator
{
	class UFortAbilitySet* AbilitySetToGrant; // 0x330 (0x8)
	class UPlaylistUserOptions* AbilitySetOptions; // 0x338 (0x8)
	class UFortSharedGravityMovementData* GravityPresets; // 0x340 (0x8)
	struct FName GameResourcesCreativeTag; // 0x348 (0x4)
	unsigned char unreflected_34c[0x4]; // 0x34c (0x4) 
	struct TArray<class UCurveTable*> ResourceRateOverrides; // 0x350 (0x10)
	struct TArray<struct FGameplayTagQuery> TargetQueries; // 0x360 (0x10)
	struct TArray<struct FGameplayTagQuery> WeaponQueries; // 0x370 (0x10)
	class UClass* EliminationStat; // 0x380 (0x8)
	struct FStatEventFilter EliminationScoreStatEvent; // 0x388 (0x90)
	class UClass* AssistStat; // 0x418 (0x8)
	struct FStatEventFilter AssistScoreStatEvent; // 0x420 (0x90)
	struct TMap<struct FUniqueNetIdRepl, struct FNameplateAsyncTrace> UncheckedTraces; // 0x4b0 (0x50)
	unsigned char unreflected_500[0x50]; // 0x500 (0x50) 
	class UFortPlayerSettingsComponentBase* DefaultScopeSettings; // 0x550 (0x8)
	class UFortPlayerSettingsComponentBase* CurrentScopeSettings; // 0x558 (0x8)
	unsigned char padding_560[0x10]; // 0x560 (0x10)
};

