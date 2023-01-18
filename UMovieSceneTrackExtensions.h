// Class /Script/SequencerScripting.MovieSceneTrackExtensions
// Size: 0x28
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName (Underlying native function: SetTrackRowDisplayName 0x720c08c)
	static void SetTrackRowDisplayName(class UMovieSceneTrack*& track, struct FText& InName, int& RowIndex); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder (Underlying native function: SetSortingOrder 0x720bc68)
	static void SetSortingOrder(class UMovieSceneTrack*& track, int& SortingOrder); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey (Underlying native function: SetSectionToKey 0x720bba0)
	static void SetSectionToKey(class UMovieSceneTrack*& track, class UMovieSceneSection*& Section); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetDisplayName (Underlying native function: SetDisplayName 0x720afb4)
	static void SetDisplayName(class UMovieSceneTrack*& track, struct FText& InName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetColorTint (Underlying native function: SetColorTint 0x720af00)
	static void SetColorTint(class UMovieSceneTrack*& track, struct FColor& ColorTint); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.RemoveSection (Underlying native function: RemoveSection 0x720ab30)
	static void RemoveSection(class UMovieSceneTrack*& track, class UMovieSceneSection*& Section); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName (Underlying native function: GetTrackRowDisplayName 0x7209ba8)
	static struct FText GetTrackRowDisplayName(class UMovieSceneTrack*& track, int& RowIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder (Underlying native function: GetSortingOrder 0x7209658)
	static int GetSortingOrder(class UMovieSceneTrack*& track); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey (Underlying native function: GetSectionToKey 0x720949c)
	static class UMovieSceneSection* GetSectionToKey(class UMovieSceneTrack*& track); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSections (Underlying native function: GetSections 0x720953c)
	static struct TArray<class UMovieSceneSection*> GetSections(class UMovieSceneTrack*& track); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetDisplayName (Underlying native function: GetDisplayName 0x7208318)
	static struct FText GetDisplayName(class UMovieSceneTrack*& track); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetColorTint (Underlying native function: GetColorTint 0x7208290)
	static struct FColor GetColorTint(class UMovieSceneTrack*& track); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.AddSection (Underlying native function: AddSection 0x7206d88)
	static class UMovieSceneSection* AddSection(class UMovieSceneTrack*& track); // (Final | Native | Static | Public | BlueprintCallable)
};

