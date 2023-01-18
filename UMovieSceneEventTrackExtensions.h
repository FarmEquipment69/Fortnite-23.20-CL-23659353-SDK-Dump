// Class /Script/SequencerScripting.MovieSceneEventTrackExtensions
// Size: 0x28
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass (Underlying native function: GetBoundObjectPropertyClass 0x7200d18)
	static class UClass* GetBoundObjectPropertyClass(struct FMovieSceneEvent& EventKey); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection (Underlying native function: AddEventTriggerSection 0x71ff7d8)
	static class UMovieSceneEventTriggerSection* AddEventTriggerSection(class UMovieSceneEventTrack*& InTrack); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection (Underlying native function: AddEventRepeaterSection 0x71ff724)
	static class UMovieSceneEventRepeaterSection* AddEventRepeaterSection(class UMovieSceneEventTrack*& InTrack); // (Final | Native | Static | Public | BlueprintCallable)
};

