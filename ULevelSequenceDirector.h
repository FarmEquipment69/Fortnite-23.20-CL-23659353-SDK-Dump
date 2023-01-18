// Class /Script/LevelSequence.LevelSequenceDirector
// Size: 0x38
class ULevelSequenceDirector : public UObject
{
	class ULevelSequencePlayer* Player; // 0x28 (0x8)
	int SubSequenceID; // 0x30 (0x4)
	int MovieScenePlayerIndex; // 0x34 (0x4)

	/* Functions */

	// Function /Script/LevelSequence.LevelSequenceDirector.OnCreated (Has no native function)
	void OnCreated(); // (Event | Public | BlueprintEvent)

	// Function /Script/LevelSequence.LevelSequenceDirector.GetSequence (Underlying native function: GetSequence 0x7fb16d8)
	class UMovieSceneSequence* GetSequence(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequenceDirector.GetMasterSequenceTime (Underlying native function: GetMasterSequenceTime 0x9bd6388)
	struct FQualifiedFrameTime GetMasterSequenceTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LevelSequence.LevelSequenceDirector.GetCurrentTime (Underlying native function: GetCurrentTime 0x7fb1540)
	struct FQualifiedFrameTime GetCurrentTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObjects (Underlying native function: GetBoundObjects 0x9bd628c)
	struct TArray<class UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID& ObjectBinding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObject (Underlying native function: GetBoundObject 0x7fb13b0)
	class UObject* GetBoundObject(struct FMovieSceneObjectBindingID& ObjectBinding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActors (Underlying native function: GetBoundActors 0x7fb12dc)
	struct TArray<class AActor*> GetBoundActors(struct FMovieSceneObjectBindingID& ObjectBinding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActor (Underlying native function: GetBoundActor 0x7fb1220)
	class AActor* GetBoundActor(struct FMovieSceneObjectBindingID& ObjectBinding); // (Final | Native | Public | BlueprintCallable)
};

