// Class /Script/SequencerScripting.MovieSceneSequenceExtensions
// Size: 0x28
class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames (Underlying native function: SortMarkedFrames 0x720c4d0)
	static void SortMarkedFrames(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart (Underlying native function: SetWorkRangeStart 0x720c410)
	static void SetWorkRangeStart(class UMovieSceneSequence*& InSequence, float& StartTimeInSeconds); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd (Underlying native function: SetWorkRangeEnd 0x720c350)
	static void SetWorkRangeEnd(class UMovieSceneSequence*& InSequence, float& EndTimeInSeconds); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart (Underlying native function: SetViewRangeStart 0x720c290)
	static void SetViewRangeStart(class UMovieSceneSequence*& InSequence, float& StartTimeInSeconds); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd (Underlying native function: SetViewRangeEnd 0x720c1d0)
	static void SetViewRangeEnd(class UMovieSceneSequence*& InSequence, float& EndTimeInSeconds); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly (Underlying native function: SetTickResolutionDirectly 0x720bfb4)
	static void SetTickResolutionDirectly(class UMovieSceneSequence*& Sequence, struct FFrameRate*& TickResolution); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution (Underlying native function: SetTickResolution 0x720bed0)
	static void SetTickResolution(class UMovieSceneSequence*& Sequence, struct FFrameRate*& TickResolution); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly (Underlying native function: SetReadOnly 0x720baec)
	static void SetReadOnly(class UMovieSceneSequence*& Sequence, bool& bInReadOnly); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds (Underlying native function: SetPlaybackStartSeconds 0x720b9b0)
	static void SetPlaybackStartSeconds(class UMovieSceneSequence*& Sequence, float& StartTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart (Underlying native function: SetPlaybackStart 0x720b888)
	static void SetPlaybackStart(class UMovieSceneSequence*& Sequence, int& StartFrame); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds (Underlying native function: SetPlaybackEndSeconds 0x720b74c)
	static void SetPlaybackEndSeconds(class UMovieSceneSequence*& Sequence, float& EndTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd (Underlying native function: SetPlaybackEnd 0x720b624)
	static void SetPlaybackEnd(class UMovieSceneSequence*& Sequence, int& EndFrame); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame (Underlying native function: SetMarkedFrame 0x720b424)
	static void SetMarkedFrame(class UMovieSceneSequence*& Sequence, int& InMarkIndex, struct FFrameNumber& InFrameNumber); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType (Underlying native function: SetEvaluationType 0x720b344)
	static void SetEvaluationType(class UMovieSceneSequence*& InSequence, enum EMovieSceneEvaluationType& InEvaluationType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate (Underlying native function: SetDisplayRate 0x720b0b8)
	static void SetDisplayRate(class UMovieSceneSequence*& Sequence, struct FFrameRate*& DisplayRate); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetClockSource (Underlying native function: SetClockSource 0x720ae24)
	static void SetClockSource(class UMovieSceneSequence*& InSequence, enum EUpdateClockSource& InClockSource); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID (Underlying native function: ResolveBindingID 0x720ac8c)
	static struct FMovieSceneBindingProxy ResolveBindingID(class UMovieSceneSequence*& MasterSequence, struct FMovieSceneObjectBindingID& InObjectBindingID); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveRootFolderFromSequence (Underlying native function: RemoveRootFolderFromSequence 0x720a8d4)
	static void RemoveRootFolderFromSequence(class UMovieSceneSequence*& Sequence, class UMovieSceneFolder*& Folder); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack (Underlying native function: RemoveMasterTrack 0x720a7b0)
	static bool RemoveMasterTrack(class UMovieSceneSequence*& Sequence, class UMovieSceneTrack*& MasterTrack); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds (Underlying native function: MakeRangeSeconds 0x720a578)
	static struct FSequencerScriptingRange MakeRangeSeconds(class UMovieSceneSequence*& Sequence, float& StartTime, float& Duration); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeRange (Underlying native function: MakeRange 0x720a424)
	static struct FSequencerScriptingRange MakeRange(class UMovieSceneSequence*& Sequence, int& StartFrame, int& Duration); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID (Underlying native function: MakeBindingID 0x720a2c0)
	static struct FMovieSceneObjectBindingID MakeBindingID(class UMovieSceneSequence*& MasterSequence, struct FMovieSceneBindingProxy& InBinding, enum EMovieSceneObjectBindingSpace& Space); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects (Underlying native function: LocateBoundObjects 0x720a0a0)
	static struct TArray<class UObject*> LocateBoundObjects(class UMovieSceneSequence*& Sequence, struct FMovieSceneBindingProxy& InBinding, class UObject*& Context); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly (Underlying native function: IsReadOnly 0x720a01c)
	static bool IsReadOnly(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart (Underlying native function: GetWorkRangeStart 0x7209e60)
	static float GetWorkRangeStart(class UMovieSceneSequence*& InSequence); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd (Underlying native function: GetWorkRangeEnd 0x7209dd4)
	static float GetWorkRangeEnd(class UMovieSceneSequence*& InSequence); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart (Underlying native function: GetViewRangeStart 0x7209d48)
	static float GetViewRangeStart(class UMovieSceneSequence*& InSequence); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd (Underlying native function: GetViewRangeEnd 0x7209cbc)
	static float GetViewRangeEnd(class UMovieSceneSequence*& InSequence); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource (Underlying native function: GetTimecodeSource 0x7209b0c)
	static struct FTimecode GetTimecodeSource(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution (Underlying native function: GetTickResolution 0x7209a84)
	static struct FFrameRate* GetTickResolution(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables (Underlying native function: GetSpawnables 0x72096e8)
	static struct TArray<struct FMovieSceneBindingProxy> GetSpawnables(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence (Underlying native function: GetRootFoldersInSequence 0x72093f8)
	static struct TArray<class UMovieSceneFolder*> GetRootFoldersInSequence(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPossessables (Underlying native function: GetPossessables 0x72091b0)
	static struct TArray<struct FMovieSceneBindingProxy> GetPossessables(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID (Underlying native function: GetPortableBindingID 0x7209090)
	static struct FMovieSceneObjectBindingID GetPortableBindingID(class UMovieSceneSequence*& MasterSequence, class UMovieSceneSequence*& DestinationSequence, struct FMovieSceneBindingProxy& InBinding); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds (Underlying native function: GetPlaybackStartSeconds 0x7208f40)
	static float GetPlaybackStartSeconds(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart (Underlying native function: GetPlaybackStart 0x7208e3c)
	static int GetPlaybackStart(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange (Underlying native function: GetPlaybackRange 0x7208d50)
	static struct FSequencerScriptingRange GetPlaybackRange(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds (Underlying native function: GetPlaybackEndSeconds 0x7208c00)
	static float GetPlaybackEndSeconds(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd (Underlying native function: GetPlaybackEnd 0x7208afc)
	static int GetPlaybackEnd(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene (Underlying native function: GetMovieScene 0x72089ec)
	static class UMovieScene* GetMovieScene(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks (Underlying native function: GetMasterTracks 0x72087d4)
	static struct TArray<class UMovieSceneTrack*> GetMasterTracks(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames (Underlying native function: GetMarkedFrames 0x7208660)
	static struct TArray<struct FMovieSceneMarkedFrame> GetMarkedFrames(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType (Underlying native function: GetEvaluationType 0x72085c8)
	static enum EMovieSceneEvaluationType GetEvaluationType(class UMovieSceneSequence*& InSequence); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate (Underlying native function: GetDisplayRate 0x72083ec)
	static struct FFrameRate* GetDisplayRate(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetClockSource (Underlying native function: GetClockSource 0x72081f0)
	static enum EUpdateClockSource GetClockSource(class UMovieSceneSequence*& InSequence); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetBindings (Underlying native function: GetBindings 0x7207fc8)
	static struct TArray<struct FMovieSceneBindingProxy> GetBindings(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetBindingID (Underlying native function: GetBindingID 0x7207f18)
	static struct FMovieSceneObjectBindingID GetBindingID(struct FMovieSceneBindingProxy& InBinding); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame (Underlying native function: FindNextMarkedFrame 0x7207dec)
	static int FindNextMarkedFrame(class UMovieSceneSequence*& Sequence, struct FFrameNumber& InFrameNumber, bool& bForward); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType (Underlying native function: FindMasterTracksByType 0x7207b44)
	static struct TArray<class UMovieSceneTrack*> FindMasterTracksByType(class UMovieSceneSequence*& Sequence, class UClass*& TrackType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType (Underlying native function: FindMasterTracksByExactType 0x72078a4)
	static struct TArray<class UMovieSceneTrack*> FindMasterTracksByExactType(class UMovieSceneSequence*& Sequence, class UClass*& TrackType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel (Underlying native function: FindMarkedFrameByLabel 0x72076e0)
	static int FindMarkedFrameByLabel(class UMovieSceneSequence*& Sequence, struct FString& InLabel); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber (Underlying native function: FindMarkedFrameByFrameNumber 0x72075fc)
	static int FindMarkedFrameByFrameNumber(class UMovieSceneSequence*& Sequence, struct FFrameNumber& InFrameNumber); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName (Underlying native function: FindBindingByName 0x72073e4)
	static struct FMovieSceneBindingProxy FindBindingByName(class UMovieSceneSequence*& Sequence, struct FString& Name); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindBindingById (Underlying native function: FindBindingById 0x7207268)
	static struct FMovieSceneBindingProxy FindBindingById(class UMovieSceneSequence*& Sequence, struct FGuid& BindingID); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames (Underlying native function: DeleteMarkedFrames 0x7207190)
	static void DeleteMarkedFrames(class UMovieSceneSequence*& Sequence); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame (Underlying native function: DeleteMarkedFrame 0x72070bc)
	static void DeleteMarkedFrame(class UMovieSceneSequence*& Sequence, int& DeleteIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance (Underlying native function: AddSpawnableFromInstance 0x7206f84)
	static struct FMovieSceneBindingProxy AddSpawnableFromInstance(class UMovieSceneSequence*& Sequence, class UObject*& ObjectToSpawn); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass (Underlying native function: AddSpawnableFromClass 0x7206e4c)
	static struct FMovieSceneBindingProxy AddSpawnableFromClass(class UMovieSceneSequence*& Sequence, class UClass*& ClassToSpawn); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence (Underlying native function: AddRootFolderToSequence 0x7206b04)
	static class UMovieSceneFolder* AddRootFolderToSequence(class UMovieSceneSequence*& Sequence, struct FString& NewFolderName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddPossessable (Underlying native function: AddPossessable 0x72069fc)
	static struct FMovieSceneBindingProxy AddPossessable(class UMovieSceneSequence*& Sequence, class UObject*& ObjectToPossess); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack (Underlying native function: AddMasterTrack 0x72068cc)
	static class UMovieSceneTrack* AddMasterTrack(class UMovieSceneSequence*& Sequence, class UClass*& TrackType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame (Underlying native function: AddMarkedFrame 0x72066ec)
	static int AddMarkedFrame(class UMovieSceneSequence*& Sequence, struct FMovieSceneMarkedFrame& InMarkedFrame); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

