// Class /Script/FortniteGame.BuildingPropPlaygroundMusicPlayer
// Size: 0xf78
class ABuildingPropPlaygroundMusicPlayer : public ABuildingPropMusicPlayer
{
	class UFortMinigameLogicComponent* MinigameLogicComponent; // 0xf58 (0x8)
	class UFortGameplayReceiverMessageComponent* PlayReceiverComponent; // 0xf60 (0x8)
	class UFortGameplayReceiverMessageComponent* StopReceiverComponent; // 0xf68 (0x8)
	bool PlayDuringWaitingForPlayers; // 0xf70 (0x1)
	bool PlayDuringGameCountdown; // 0xf71 (0x1)
	bool PlayDuringGameplay; // 0xf72 (0x1)
	bool PlayDuringRoundEnd; // 0xf73 (0x1)
	bool PlayDuringGameEnd; // 0xf74 (0x1)
	unsigned char padding_f75[0x3]; // 0xf75 (0x3)

	/* Functions */

	// Function /Script/FortniteGame.BuildingPropPlaygroundMusicPlayer.StopReceiver (Underlying native function: StopReceiver 0x71a663c)
	void StopReceiver(class AController*& TriggerInstigator); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingPropPlaygroundMusicPlayer.Stop (Underlying native function: Stop 0x26daa0c)
	void Stop(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropPlaygroundMusicPlayer.PlayReceiver (Underlying native function: PlayReceiver 0x71a663c)
	void PlayReceiver(class AController*& TriggerInstigator); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingPropPlaygroundMusicPlayer.Play (Underlying native function: Play 0x26daa0c)
	void Play(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropPlaygroundMusicPlayer.OnMinigameStateChanged (Underlying native function: OnMinigameStateChanged 0x738c2ac)
	void OnMinigameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& NewMinigameState); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropPlaygroundMusicPlayer.ConditionallyLoadSongBasedOnMinigameState (Underlying native function: ConditionallyLoadSongBasedOnMinigameState 0x85450c4)
	void ConditionallyLoadSongBasedOnMinigameState(); // (Final | Native | Protected)
};

