// ScriptStruct /Script/MusicBlocks.MusicSequencerHitEntry
// Size: 0x60
struct FMusicSequencerHitEntry : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FMusicSequencerHitHandle* Handle; // 0x10 (0x8)
	float ServerWorldTimeStart; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	class UClass* ActorClass; // 0x20 (0x8)
	struct TWeakObjectPtr<class AActor> Actor; // 0x28 (0x8)
	struct TWeakObjectPtr<class APlayerState> InstigatorPlayerState; // 0x30 (0x8)
	struct FVector_NetQuantize SoundLocation; // 0x38 (0x18)
	int SoundIndex; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct FTimerHandle* TimerHandle; // 0x58 (0x8)
};

