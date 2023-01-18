// Class /Script/SequencerScripting.MovieSceneSectionExtensions
// Size: 0x28
class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds (Underlying native function: SetStartFrameSeconds 0x72057c4)
	static void SetStartFrameSeconds(class UMovieSceneSection*& Section, float& StartTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded (Underlying native function: SetStartFrameBounded 0x72056a8)
	static void SetStartFrameBounded(class UMovieSceneSection*& Section, bool& bIsBounded); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrame (Underlying native function: SetStartFrame 0x720557c)
	static void SetStartFrame(class UMovieSceneSection*& Section, int& StartFrame); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds (Underlying native function: SetRangeSeconds 0x72053a8)
	static void SetRangeSeconds(class UMovieSceneSection*& Section, float& StartTime, float& EndTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetRange (Underlying native function: SetRange 0x72051e4)
	static void SetRange(class UMovieSceneSection*& Section, int& StartFrame, int& EndFrame); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds (Underlying native function: SetEndFrameSeconds 0x720450c)
	static void SetEndFrameSeconds(class UMovieSceneSection*& Section, float& EndTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded (Underlying native function: SetEndFrameBounded 0x72043d8)
	static void SetEndFrameBounded(class UMovieSceneSection*& Section, bool& bIsBounded); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrame (Underlying native function: SetEndFrame 0x72042ac)
	static void SetEndFrame(class UMovieSceneSection*& Section, int& EndFrame); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.HasStartFrame (Underlying native function: HasStartFrame 0x72034f4)
	static bool HasStartFrame(class UMovieSceneSection*& Section); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.HasEndFrame (Underlying native function: HasEndFrame 0x7203458)
	static bool HasEndFrame(class UMovieSceneSection*& Section); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds (Underlying native function: GetStartFrameSeconds 0x7202d78)
	static float GetStartFrameSeconds(class UMovieSceneSection*& Section); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetStartFrame (Underlying native function: GetStartFrame 0x7202c6c)
	static int GetStartFrame(class UMovieSceneSection*& Section); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame (Underlying native function: GetParentSequenceFrame 0x7202530)
	static int GetParentSequenceFrame(class UMovieSceneSubSection*& Section, int& InFrame, class UMovieSceneSequence*& ParentSequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds (Underlying native function: GetEndFrameSeconds 0x7201d24)
	static float GetEndFrameSeconds(class UMovieSceneSection*& Section); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetEndFrame (Underlying native function: GetEndFrame 0x7201c18)
	static int GetEndFrame(class UMovieSceneSection*& Section); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType (Underlying native function: GetChannelsByType 0x7200120)
	static struct TArray<class UMovieSceneScriptingChannel*> GetChannelsByType(class UMovieSceneSection*& Section, class UClass*& ChannelType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetChannels (Underlying native function: GetChannels 0x7200e6c)
	static struct TArray<class UMovieSceneScriptingChannel*> GetChannels(class UMovieSceneSection*& Section); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrameSeconds (Underlying native function: GetAutoSizeStartFrameSeconds 0x7200c98)
	static float GetAutoSizeStartFrameSeconds(class UMovieSceneSection*& Section); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrame (Underlying native function: GetAutoSizeStartFrame 0x7200c18)
	static int GetAutoSizeStartFrame(class UMovieSceneSection*& Section); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasStartFrame (Underlying native function: GetAutoSizeHasStartFrame 0x7200b4c)
	static bool GetAutoSizeHasStartFrame(class UMovieSceneSection*& Section); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasEndFrame (Underlying native function: GetAutoSizeHasEndFrame 0x7200a80)
	static bool GetAutoSizeHasEndFrame(class UMovieSceneSection*& Section); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrameSeconds (Underlying native function: GetAutoSizeEndFrameSeconds 0x7200a00)
	static float GetAutoSizeEndFrameSeconds(class UMovieSceneSection*& Section); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrame (Underlying native function: GetAutoSizeEndFrame 0x7200980)
	static int GetAutoSizeEndFrame(class UMovieSceneSection*& Section); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAllChannels (Underlying native function: GetAllChannels 0x7200408)
	static struct TArray<class UMovieSceneScriptingChannel*> GetAllChannels(class UMovieSceneSection*& Section); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType (Underlying native function: FindChannelsByType 0x7200120)
	static struct TArray<class UMovieSceneScriptingChannel*> FindChannelsByType(class UMovieSceneSection*& Section, class UClass*& ChannelType); // (Final | Native | Static | Public | BlueprintCallable)
};

