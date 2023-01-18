// Class /Script/SequencerScripting.MovieSceneBindingExtensions
// Size: 0x28
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetParent (Underlying native function: SetParent 0x7204d70)
	static void SetParent(struct FMovieSceneBindingProxy& InBinding, struct FMovieSceneBindingProxy& InParentBinding); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetName (Underlying native function: SetName 0x7204b00)
	static void SetName(struct FMovieSceneBindingProxy& InBinding, struct FString& InName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetDisplayName (Underlying native function: SetDisplayName 0x7204190)
	static void SetDisplayName(struct FMovieSceneBindingProxy& InBinding, struct FText& InDisplayName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.RemoveTrack (Underlying native function: RemoveTrack 0x7203b38)
	static void RemoveTrack(struct FMovieSceneBindingProxy& InBinding, class UMovieSceneTrack*& TrackToRemove); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.Remove (Underlying native function: Remove 0x720370c)
	static void Remove(struct FMovieSceneBindingProxy& InBinding); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents (Underlying native function: MoveBindingContents 0x7203620)
	static void MoveBindingContents(struct FMovieSceneBindingProxy& SourceBindingId, struct FMovieSceneBindingProxy& DestinationBindingId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.IsValid (Underlying native function: IsValid 0x7203590)
	static bool IsValid(struct FMovieSceneBindingProxy& InBinding); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetTracks (Underlying native function: GetTracks 0x7202f24)
	static struct TArray<class UMovieSceneTrack*> GetTracks(struct FMovieSceneBindingProxy& InBinding); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass (Underlying native function: GetPossessedObjectClass 0x72028e0)
	static class UClass* GetPossessedObjectClass(struct FMovieSceneBindingProxy& InBinding); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetParent (Underlying native function: GetParent 0x7202448)
	static struct FMovieSceneBindingProxy GetParent(struct FMovieSceneBindingProxy& InBinding); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate (Underlying native function: GetObjectTemplate 0x72023b4)
	static class UObject* GetObjectTemplate(struct FMovieSceneBindingProxy& InBinding); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetName (Underlying native function: GetName 0x72021cc)
	static struct FString GetName(struct FMovieSceneBindingProxy& InBinding); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetId (Underlying native function: GetId 0x7201f9c)
	static struct FGuid GetId(struct FMovieSceneBindingProxy& InBinding); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetDisplayName (Underlying native function: GetDisplayName 0x7201ae4)
	static struct FText GetDisplayName(struct FMovieSceneBindingProxy& InBinding); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables (Underlying native function: GetChildPossessables 0x72018d0)
	static struct TArray<struct FMovieSceneBindingProxy> GetChildPossessables(struct FMovieSceneBindingProxy& InBinding); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.FindTracksByType (Underlying native function: FindTracksByType 0x7200314)
	static struct TArray<class UMovieSceneTrack*> FindTracksByType(struct FMovieSceneBindingProxy& InBinding, class UClass*& TrackType); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType (Underlying native function: FindTracksByExactType 0x7200220)
	static struct TArray<class UMovieSceneTrack*> FindTracksByExactType(struct FMovieSceneBindingProxy& InBinding, class UClass*& TrackType); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.AddTrack (Underlying native function: AddTrack 0x71fff00)
	static class UMovieSceneTrack* AddTrack(struct FMovieSceneBindingProxy& InBinding, class UClass*& TrackType); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

