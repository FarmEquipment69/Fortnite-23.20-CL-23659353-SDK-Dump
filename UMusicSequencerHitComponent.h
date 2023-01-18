// Class /Script/MusicBlocks.MusicSequencerHitComponent
// Size: 0x1e0
class UMusicSequencerHitComponent : public UActorComponent
{
	struct FMusicSequencerHitArray MusicSequencerEventList; // 0xa0 (0x120)
	struct TArray<class USoundBase*> LoadedSoundsList; // 0x1c0 (0x10)
	struct TArray<class UClass*> SoundPreloadClassList; // 0x1d0 (0x10)

	/* Functions */

	// Function /Script/MusicBlocks.MusicSequencerHitComponent.ReplicateMusicSequencerHit (Underlying native function: ReplicateMusicSequencerHit 0x73416a0)
	static bool ReplicateMusicSequencerHit(class UObject*& WorldContextObject, struct TScriptInterface<class IFortMusicSequencerInterface>& HitInterface, class AController*& Instigator); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/MusicBlocks.MusicSequencerHitComponent.RegisterMusicSequencerActor (Underlying native function: RegisterMusicSequencerActor 0x73415d4)
	static bool RegisterMusicSequencerActor(class UObject*& WorldContextObject, struct TScriptInterface<class IFortMusicSequencerInterface>& Actor); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/MusicBlocks.MusicSequencerHitComponent.ProcessSequenceHitEvent (Underlying native function: ProcessSequenceHitEvent 0x73414e8)
	bool ProcessSequenceHitEvent(struct FMusicSequencerHitEntry& Event); // (Final | Native | Protected | HasOutParms)

	// Function /Script/MusicBlocks.MusicSequencerHitComponent.OnSequenceHitEventExpired (Underlying native function: OnSequenceHitEventExpired 0x7341468)
	void OnSequenceHitEventExpired(struct FMusicSequencerHitHandle*& ExpiredHandle); // (Final | Native | Protected)

	// Function /Script/MusicBlocks.MusicSequencerHitComponent.AddSequenceHitEvent (Underlying native function: AddSequenceHitEvent 0x7341370)
	bool AddSequenceHitEvent(struct TScriptInterface<class IFortMusicSequencerInterface>& HitInterface, class AController*& Instigator); // (Final | Native | Protected)

	// Function /Script/MusicBlocks.MusicSequencerHitComponent.AddMusicSequencerActor (Underlying native function: AddMusicSequencerActor 0x73412d4)
	bool AddMusicSequencerActor(struct TScriptInterface<class IFortMusicSequencerInterface>& HitInterface); // (Final | Native | Protected)
};

