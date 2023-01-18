// Class /Script/SequencerScripting.MovieSceneFolderExtensions
// Size: 0x28
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.SetFolderName (Underlying native function: SetFolderName 0x7204708)
	static bool SetFolderName(class UMovieSceneFolder*& Folder, struct FName& InFolderName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.SetFolderColor (Underlying native function: SetFolderColor 0x720463c)
	static bool SetFolderColor(class UMovieSceneFolder*& Folder, struct FColor& InFolderColor); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding (Underlying native function: RemoveChildObjectBinding 0x72039a8)
	static bool RemoveChildObjectBinding(class UMovieSceneFolder*& Folder, struct FMovieSceneBindingProxy& InObjectBinding); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack (Underlying native function: RemoveChildMasterTrack 0x72038b4)
	static bool RemoveChildMasterTrack(class UMovieSceneFolder*& Folder, class UMovieSceneTrack*& InMasterTrack); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder (Underlying native function: RemoveChildFolder 0x72037c0)
	static bool RemoveChildFolder(class UMovieSceneFolder*& TargetFolder, class UMovieSceneFolder*& FolderToRemove); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetFolderName (Underlying native function: GetFolderName 0x7201f08)
	static struct FName GetFolderName(class UMovieSceneFolder*& Folder); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetFolderColor (Underlying native function: GetFolderColor 0x7201e80)
	static struct FColor GetFolderColor(class UMovieSceneFolder*& Folder); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings (Underlying native function: GetChildObjectBindings 0x7201714)
	static struct TArray<struct FMovieSceneBindingProxy> GetChildObjectBindings(class UMovieSceneFolder*& Folder); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks (Underlying native function: GetChildMasterTracks 0x720155c)
	static struct TArray<class UMovieSceneTrack*> GetChildMasterTracks(class UMovieSceneFolder*& Folder); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildFolders (Underlying native function: GetChildFolders 0x720138c)
	static struct TArray<class UMovieSceneFolder*> GetChildFolders(class UMovieSceneFolder*& Folder); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding (Underlying native function: AddChildObjectBinding 0x71ff5fc)
	static bool AddChildObjectBinding(class UMovieSceneFolder*& Folder, struct FMovieSceneBindingProxy& InObjectBinding); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack (Underlying native function: AddChildMasterTrack 0x71ff4f4)
	static bool AddChildMasterTrack(class UMovieSceneFolder*& Folder, class UMovieSceneTrack*& InMasterTrack); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildFolder (Underlying native function: AddChildFolder 0x71ff3ec)
	static bool AddChildFolder(class UMovieSceneFolder*& TargetFolder, class UMovieSceneFolder*& FolderToAdd); // (Final | Native | Static | Public | BlueprintCallable)
};

