// Class /Script/SequencerScripting.MovieScenePropertyTrackExtensions
// Size: 0x28
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath (Underlying native function: SetPropertyNameAndPath 0x7204fe4)
	static void SetPropertyNameAndPath(class UMovieScenePropertyTrack*& track, struct FName& InPropertyName, struct FString& InPropertyPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass (Underlying native function: SetObjectPropertyClass 0x7204cac)
	static void SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack*& track, class UClass*& PropertyClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetByteTrackEnum (Underlying native function: SetByteTrackEnum 0x7203d48)
	static void SetByteTrackEnum(class UMovieSceneByteTrack*& track, class UEnum*& InEnum); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName (Underlying native function: GetUniqueTrackName 0x7202ff8)
	static struct FName GetUniqueTrackName(class UMovieScenePropertyTrack*& track); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath (Underlying native function: GetPropertyPath 0x7202ac8)
	static struct FString GetPropertyPath(class UMovieScenePropertyTrack*& track); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName (Underlying native function: GetPropertyName 0x7202a30)
	static struct FName GetPropertyName(class UMovieScenePropertyTrack*& track); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass (Underlying native function: GetObjectPropertyClass 0x720231c)
	static class UClass* GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack*& track); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetByteTrackEnum (Underlying native function: GetByteTrackEnum 0x7200dd4)
	static class UEnum* GetByteTrackEnum(class UMovieSceneByteTrack*& track); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

