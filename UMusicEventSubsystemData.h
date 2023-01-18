// Class /Script/FortniteGame.MusicEventSubsystemData
// Size: 0x70
class UMusicEventSubsystemData : public UPrimaryDataAsset
{
	class UDataTable* EventDataTable; // 0x30 (0x8)
	struct TArray<struct FMusicEventSoundMixClassOverride> SoundMixClassOverrides; // 0x38 (0x10)
	struct TArray<struct FMusicEventConcurrencyOverride> ConcurrencyOverrides; // 0x48 (0x10)
	struct FGameplayTag AudioComponentOwnerTag; // 0x58 (0x4)
	struct FGameplayTag PersistIntoFrontEnd; // 0x5c (0x4)
	struct FGameplayTag CanRetriggerTag; // 0x60 (0x4)
	unsigned char unreflected_64[0x4]; // 0x64 (0x4) 
	class UClass* DebugWidgetClass; // 0x68 (0x8)
};

