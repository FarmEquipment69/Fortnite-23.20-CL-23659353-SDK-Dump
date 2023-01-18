// Class /Script/FortniteGame.FortReplaySequenceComponent
// Size: 0x120
class UFortReplaySequenceComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct FSavedSpectatorCameras SequenceShots; // 0xa8 (0x10)
	int CurrentShotIdx; // 0xb8 (0x4)
	unsigned char unreflected_bc[0x4]; // 0xbc (0x4) 
	class UFortReplayContext* ReplayContext; // 0xc0 (0x8)
	unsigned char padding_c8[0x58]; // 0xc8 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.FortReplaySequenceComponent.RestartSequence (Underlying native function: RestartSequence 0x8e48ed8)
	void RestartSequence(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplaySequenceComponent.PreviousShot (Underlying native function: PreviousShot 0x8e48e3c)
	void PreviousShot(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplaySequenceComponent.OnVideoExportFinished (Underlying native function: OnVideoExportFinished 0x8e4890c)
	void OnVideoExportFinished(bool& bSuccess, struct FString& Video); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortReplaySequenceComponent.OnReplayLevelStreamingChanged (Underlying native function: OnReplayLevelStreamingChanged 0x8e486b0)
	void OnReplayLevelStreamingChanged(bool& bIsStreaming); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortReplaySequenceComponent.OnPlaybackTimeChanged (Underlying native function: OnPlaybackTimeChanged 0x8e481ac)
	void OnPlaybackTimeChanged(float& NowTime); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortReplaySequenceComponent.NoRecorderVideoFinishedCallback (Underlying native function: NoRecorderVideoFinishedCallback 0x8e47e20)
	void NoRecorderVideoFinishedCallback(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortReplaySequenceComponent.NextShot (Underlying native function: NextShot 0x8e47e0c)
	void NextShot(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplaySequenceComponent.GetNumberOfShotsInSequence (Underlying native function: GetNumberOfShotsInSequence 0x2d00ea0)
	int GetNumberOfShotsInSequence(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortReplaySequenceComponent.GetCurrentShotIndex (Underlying native function: GetCurrentShotIndex 0x2d00a0c)
	int GetCurrentShotIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

