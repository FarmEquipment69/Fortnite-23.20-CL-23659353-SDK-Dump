// Class /Script/LevelSequence.LevelSequenceActor
// Size: 0x300
class ALevelSequenceActor : public AActor
{
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x298 (0x20)
	class ULevelSequencePlayer* SequencePlayer; // 0x2b8 (0x8)
	class ULevelSequence* LevelSequenceAsset; // 0x2c0 (0x8)
	struct FLevelSequenceCameraSettings CameraSettings; // 0x2c8 (0x2)
	unsigned char unreflected_2ca[0x6]; // 0x2ca (0x6) 
	class ULevelSequenceBurnInOptions* BurnInOptions; // 0x2d0 (0x8)
	class UMovieSceneBindingOverrides* BindingOverrides; // 0x2d8 (0x8)
	unsigned char bAutoPlay; // 0x2e0 (0x1)
	unsigned char bOverrideInstanceData; // 0x2e0 (0x1)
	unsigned char bReplicatePlayback; // 0x2e0 (0x1)
	unsigned char unreflected_2e1[0x7]; // 0x2e1 (0x7) 
	class UObject* DefaultInstanceData; // 0x2e8 (0x8)
	class ULevelSequenceBurnIn* BurnInInstance; // 0x2f0 (0x8)
	bool bShowBurnin; // 0x2f8 (0x1)
	unsigned char padding_2f9[0x7]; // 0x2f9 (0x7)

	/* Functions */

	// Function /Script/LevelSequence.LevelSequenceActor.ShowBurnin (Underlying native function: ShowBurnin 0x9bd6b64)
	void ShowBurnin(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequenceActor.SetSequence (Underlying native function: SetSequence 0x9bd6ae4)
	void SetSequence(class ULevelSequence*& InSequence); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequenceActor.SetReplicatePlayback (Underlying native function: SetReplicatePlayback 0x9bd6a64)
	void SetReplicatePlayback(bool& ReplicatePlayback); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequenceActor.SetBindingByTag (Underlying native function: SetBindingByTag 0x9bd6890)
	void SetBindingByTag(struct FName& BindingTag, struct TArray<class AActor*>& Actors, bool& bAllowBindingsFromAsset); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequenceActor.SetBinding (Underlying native function: SetBinding 0x9bd673c)
	void SetBinding(struct FMovieSceneObjectBindingID& Binding, struct TArray<class AActor*>& Actors, bool& bAllowBindingsFromAsset); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequenceActor.ResetBindings (Underlying native function: ResetBindings 0x9bd66c0)
	void ResetBindings(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequenceActor.ResetBinding (Underlying native function: ResetBinding 0x9bd6614)
	void ResetBinding(struct FMovieSceneObjectBindingID& Binding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBindingByTag (Underlying native function: RemoveBindingByTag 0x9bd6550)
	void RemoveBindingByTag(struct FName& tag, class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBinding (Underlying native function: RemoveBinding 0x9bd6464)
	void RemoveBinding(struct FMovieSceneObjectBindingID& Binding, class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature (Has no native function)
	void OnLevelSequenceLoadedDelegateSignature(); // (Public | Delegate)

	// Function /Script/LevelSequence.LevelSequenceActor.LoadSequence (Underlying native function: LoadSequence 0x2522aa8)
	class ULevelSequence* LoadSequence(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LevelSequence.LevelSequenceActor.HideBurnin (Underlying native function: HideBurnin 0x9bd6408)
	void HideBurnin(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequenceActor.GetSequencePlayer (Underlying native function: GetSequencePlayer 0x9bd63b8)
	class ULevelSequencePlayer* GetSequencePlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LevelSequence.LevelSequenceActor.GetSequence (Underlying native function: GetSequence 0x2522aa8)
	class ULevelSequence* GetSequence(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBindings (Underlying native function: FindNamedBindings 0x9bd611c)
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName& tag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBinding (Underlying native function: FindNamedBinding 0x9bd604c)
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName& tag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LevelSequence.LevelSequenceActor.AddBindingByTag (Underlying native function: AddBindingByTag 0x9bd5c44)
	void AddBindingByTag(struct FName& BindingTag, class AActor*& Actor, bool& bAllowBindingsFromAsset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequenceActor.AddBinding (Underlying native function: AddBinding 0x9bd5b24)
	void AddBinding(struct FMovieSceneObjectBindingID& Binding, class AActor*& Actor, bool& bAllowBindingsFromAsset); // (Final | Native | Public | BlueprintCallable)
};

