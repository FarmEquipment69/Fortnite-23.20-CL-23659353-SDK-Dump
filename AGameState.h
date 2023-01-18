// Class /Script/Engine.GameState
// Size: 0x2f0
class AGameState : public AGameStateBase
{
	struct FName MatchState; // 0x2d8 (0x4)
	struct FName PreviousMatchState; // 0x2dc (0x4)
	int ElapsedTime; // 0x2e0 (0x4)
	unsigned char padding_2e4[0xc]; // 0x2e4 (0xc)

	/* Functions */

	// Function /Script/Engine.GameState.OnRep_MatchState (Underlying native function: OnRep_MatchState 0x29876d0)
	void OnRepMatchState(); // (Native | Public)

	// Function /Script/Engine.GameState.OnRep_ElapsedTime (Underlying native function: OnRep_ElapsedTime 0x2fd2cec)
	void OnRepElapsedTime(); // (Native | Public)
};

