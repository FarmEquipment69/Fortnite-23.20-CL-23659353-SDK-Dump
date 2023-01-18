// ScriptStruct /Script/LagerRuntime.FortLivingWorldConfigOverride
// Size: 0x78
struct FFortLivingWorldConfigOverride
{
	struct TWeakObjectPtr<class UWorld> SourceWorld; // 0x0 (0x28)
	struct FGameplayTagContainer PlaylistTag; // 0x28 (0x20)
	struct TWeakObjectPtr<class UFortAthenaLivingWorldConfigData> LagerConfig; // 0x48 (0x28)
	struct FFortReleaseVersion StartVersion; // 0x70 (0x4)
	struct FFortReleaseVersion EndVersion; // 0x74 (0x4)
};

