// Class /Script/FortniteUI.AthenaAIKillsBase
// Size: 0x2e8
class UAthenaAIKillsBase : public UFortHUDElementWidget
{
	class UTextBlock* KillsText; // 0x2d0 (0x8)
	class UObject* KillsSource; // 0x2d8 (0x8)
	bool bCustomKillSource; // 0x2e0 (0x1)
	unsigned char padding_2e1[0x7]; // 0x2e1 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.AthenaAIKillsBase.SetKillsSourcePlayerState (Underlying native function: SetKillsSourcePlayerState 0xa470d08)
	void SetKillsSourcePlayerState(class AFortPlayerStateAthena*& InPlayerState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaAIKillsBase.SetKillsSourcePlayerController (Underlying native function: SetKillsSourcePlayerController 0xa470d08)
	void SetKillsSourcePlayerController(class AFortPlayerControllerAthena*& InPlayerController); // (Final | Native | Public | BlueprintCallable)
};

