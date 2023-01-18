// Class /Script/LevelSequence.LevelSequencePlayer
// Size: 0x5b0
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
	struct FMulticastInlineDelegate OnCameraCut; // 0x4b0 (0x10)
	unsigned char padding_4c0[0xf0]; // 0x4c0 (0xf0)

	/* Functions */

	// Function /Script/LevelSequence.LevelSequencePlayer.GetActiveCameraComponent (Underlying native function: GetActiveCameraComponent 0x9bd6220)
	class UCameraComponent* GetActiveCameraComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer (Underlying native function: CreateLevelSequencePlayer 0x9bd5d3c)
	static class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject*& WorldContextObject, class ULevelSequence*& LevelSequence, struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor*& OutActor); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

