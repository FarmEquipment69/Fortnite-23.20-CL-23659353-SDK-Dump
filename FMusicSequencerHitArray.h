// ScriptStruct /Script/MusicBlocks.MusicSequencerHitArray
// Size: 0x120
struct FMusicSequencerHitArray : FFastArraySerializer
{
	struct TArray<struct FMusicSequencerHitEntry> Items; // 0x108 (0x10)
	struct TWeakObjectPtr<class UMusicSequencerHitComponent> OwningComponent; // 0x118 (0x8)
};

