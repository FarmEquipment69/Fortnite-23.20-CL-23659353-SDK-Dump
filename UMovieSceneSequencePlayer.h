// Class /Script/MovieScene.MovieSceneSequencePlayer
// Size: 0x4b0
class UMovieSceneSequencePlayer : public UObject
{
	unsigned char unreflected_28[0x1f8]; // 0x28 (0x1f8) 
	struct TScriptInterface<class IMovieSceneSequencePlayerObserver> Observer; // 0x220 (0x10)
	struct FMulticastInlineDelegate OnPlay; // 0x230 (0x10)
	struct FMulticastInlineDelegate OnPlayReverse; // 0x240 (0x10)
	struct FMulticastInlineDelegate OnStop; // 0x250 (0x10)
	struct FMulticastInlineDelegate OnPause; // 0x260 (0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x270 (0x10)
	struct TEnumAsByte<EMovieScenePlayerStatus> Status; // 0x280 (0x1)
	unsigned char unreflected_281[0x3]; // 0x281 (0x3) 
	unsigned char bReversePlayback; // 0x284 (0x1)
	unsigned char unreflected_285[0x3]; // 0x285 (0x3) 
	class UMovieSceneSequence* Sequence; // 0x288 (0x8)
	struct FFrameNumber StartTime; // 0x290 (0x4)
	int DurationFrames; // 0x294 (0x4)
	float DurationSubFrames; // 0x298 (0x4)
	int CurrentNumLoops; // 0x29c (0x4)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x2a0 (0x20)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x2c0 (0x88)
	unsigned char unreflected_348[0x90]; // 0x348 (0x90) 
	struct FMovieSceneSequenceReplProperties NetSyncProps; // 0x3d8 (0x10)
	struct TScriptInterface<class IMovieScenePlaybackClient> PlaybackClient; // 0x3e8 (0x10)
	class UMovieSceneSequenceTickManager* TickManager; // 0x3f8 (0x8)
	unsigned char padding_400[0xb0]; // 0x400 (0xb0)

	/* Functions */

	// Function /Script/MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime (Underlying native function: StopAtCurrentTime 0x99705f0)
	void StopAtCurrentTime(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.Stop (Underlying native function: Stop 0x99705dc)
	void Stop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetWeight (Underlying native function: SetWeight 0x5f98350)
	void SetWeight(double& InWeight); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetTimeRange (Underlying native function: SetTimeRange 0x9970518)
	void SetTimeRange(float& StartTime, float& Duration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetPlayRate (Underlying native function: SetPlayRate 0x8b2fba4)
	void SetPlayRate(float& PlayRate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition (Underlying native function: SetPlaybackPosition 0x99702d4)
	void SetPlaybackPosition(struct FMovieSceneSequencePlaybackParams& PlaybackParams); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetFrameRate (Underlying native function: SetFrameRate 0x99700ac)
	void SetFrameRate(struct FFrameRate*& FrameRate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetFrameRange (Underlying native function: SetFrameRange 0x996ffb0)
	void SetFrameRange(int& StartFrame, int& Duration, float& SubFrames); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts (Underlying native function: SetDisableCameraCuts 0x996ff24)
	void SetDisableCameraCuts(bool& bInDisableCameraCuts); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.ScrubToSeconds (Underlying native function: ScrubToSeconds 0x996fd7c)
	void ScrubToSeconds(float& TimeInSeconds); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame (Underlying native function: ScrubToMarkedFrame 0x996fc08)
	bool ScrubToMarkedFrame(struct FString& InLabel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.ScrubToFrame (Underlying native function: ScrubToFrame 0x996fb60)
	void ScrubToFrame(struct FFrameTime*& NewPosition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.Scrub (Underlying native function: Scrub 0x996fb4c)
	void Scrub(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent (Underlying native function: RPC_OnStopEvent 0x996fa84)
	void RPCOnStopEvent(struct FFrameTime*& StoppedTime); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.RPC_OnFinishPlaybackEvent (Underlying native function: RPC_OnFinishPlaybackEvent 0x996f9f8)
	void RPCOnFinishPlaybackEvent(struct FFrameTime*& StoppedTime); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent (Underlying native function: RPC_ExplicitServerUpdateEvent 0x996f928)
	void RPCExplicitServerUpdateEvent(enum EUpdatePositionMethod& Method, struct FFrameTime*& RelevantTime); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.RestoreState (Underlying native function: RestoreState 0x996fb10)
	void RestoreState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayToSeconds (Underlying native function: PlayToSeconds 0x996f880)
	void PlayToSeconds(float& TimeInSeconds); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame (Underlying native function: PlayToMarkedFrame 0x996f70c)
	bool PlayToMarkedFrame(struct FString& InLabel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayToFrame (Underlying native function: PlayToFrame 0x996f668)
	void PlayToFrame(struct FFrameTime*& NewPosition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayTo (Underlying native function: PlayTo 0x996f56c)
	void PlayTo(struct FMovieSceneSequencePlaybackParams& PlaybackParams, struct FMovieSceneSequencePlayToParams& PlayToParams); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayReverse (Underlying native function: PlayReverse 0x996f558)
	void PlayReverse(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayLooping (Underlying native function: PlayLooping 0x996f4d8)
	void PlayLooping(int& NumLoops); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.Play (Underlying native function: Play 0x996f4c4)
	void Play(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.Pause (Underlying native function: Pause 0x996f4b0)
	void Pause(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.JumpToSeconds (Underlying native function: JumpToSeconds 0x996f110)
	void JumpToSeconds(float& TimeInSeconds); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame (Underlying native function: JumpToMarkedFrame 0x996ef9c)
	bool JumpToMarkedFrame(struct FString& InLabel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.JumpToFrame (Underlying native function: JumpToFrame 0x996eef4)
	void JumpToFrame(struct FFrameTime*& NewPosition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.IsReversed (Underlying native function: IsReversed 0x996eed8)
	bool IsReversed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.IsPlaying (Underlying native function: IsPlaying 0x996eebc)
	bool IsPlaying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.IsPaused (Underlying native function: IsPaused 0x996eea0)
	bool IsPaused(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.GoToEndAndStop (Underlying native function: GoToEndAndStop 0x996ee54)
	void GoToEndAndStop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetStartTime (Underlying native function: GetStartTime 0x996ee0c)
	struct FQualifiedFrameTime GetStartTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetSequenceName (Underlying native function: GetSequenceName 0x996ed3c)
	struct FString GetSequenceName(bool& bAddClientInfo); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetSequence (Underlying native function: GetSequence 0x7341450)
	class UMovieSceneSequence* GetSequence(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetPlayRate (Underlying native function: GetPlayRate 0x996ed24)
	float GetPlayRate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetObjectBindings (Underlying native function: GetObjectBindings 0x996ec44)
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject*& InObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetFrameRate (Underlying native function: GetFrameRate 0x996ec2c)
	struct FFrameRate* GetFrameRate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetFrameDuration (Underlying native function: GetFrameDuration 0x996ec14)
	int GetFrameDuration(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetEndTime (Underlying native function: GetEndTime 0x996ebbc)
	struct FQualifiedFrameTime GetEndTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetDuration (Underlying native function: GetDuration 0x996eb58)
	struct FQualifiedFrameTime GetDuration(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts (Underlying native function: GetDisableCameraCuts 0x996eb3c)
	bool GetDisableCameraCuts(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetCurrentTime (Underlying native function: GetCurrentTime 0x996eb04)
	struct FQualifiedFrameTime GetCurrentTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetBoundObjects (Underlying native function: GetBoundObjects 0x996e9f4)
	struct TArray<class UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID& ObjectBinding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection (Underlying native function: ChangePlaybackDirection 0x996e890)
	void ChangePlaybackDirection(); // (Final | Native | Public | BlueprintCallable)
};

