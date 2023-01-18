// Class /Script/FortniteGame.FortAthenaMutator_GameStartCountdown
// Size: 0x3b8
class AFortAthenaMutator_GameStartCountdown : public AFortAthenaMutator
{
	struct FMulticastInlineDelegate OnGameStartCountdownBegin; // 0x330 (0x10)
	struct FMulticastInlineDelegate OnGameStartCountdownEnd; // 0x340 (0x10)
	unsigned char unreflected_350[0x8]; // 0x350 (0x8) 
	class USoundBase* CountdownMusicStinger; // 0x358 (0x8)
	struct FScalableFloat CountdownDuration; // 0x360 (0x28)
	struct FScalableFloat StartingCountdownInteger; // 0x388 (0x28)
	bool bCountdownTimerRunning; // 0x3b0 (0x1)
	unsigned char padding_3b1[0x7]; // 0x3b1 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_GameStartCountdown.OnRep_CountdownTimerRunning (Underlying native function: OnRep_CountdownTimerRunning 0x84d01e8)
	void OnRepCountdownTimerRunning(); // (Final | Native | Private)
};

