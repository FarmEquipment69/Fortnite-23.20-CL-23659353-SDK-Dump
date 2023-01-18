// Class /Script/FortniteUI.FortHUDScoringAlert
// Size: 0x3a0
class UFortHUDScoringAlert : public UFortHUDElementWidget
{
	struct FText PointGainFormat; // 0x2d0 (0x18)
	unsigned char unreflected_2e8[0x88]; // 0x2e8 (0x88) 
	class UFortHUDPointCounter* HUDPointCounter; // 0x370 (0x8)
	class UCommonTextBlock* TextScoreDesc; // 0x378 (0x8)
	class UCommonTextBlock* TextPointCount; // 0x380 (0x8)
	class UCommonLazyImage* IconScoring; // 0x388 (0x8)
	class UClass* AbandonMatchClass; // 0x390 (0x8)
	unsigned char padding_398[0x8]; // 0x398 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortHUDScoringAlert.OnTournamentStatUpdate (Underlying native function: OnTournamentStatUpdate 0xa939c18)
	void OnTournamentStatUpdate(struct FFortTournamentStatInfo& TournamentStatInfo); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortHUDScoringAlert.OnTeamPlacementChanged (Underlying native function: OnTeamPlacementChanged 0xa939b98)
	void OnTeamPlacementChanged(int& NewTeamPlacement); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortHUDScoringAlert.OnPointScored (Has no native function)
	void OnPointScored(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHUDScoringAlert.OnPlayerPlacementChanged (Underlying native function: OnPlayerPlacementChanged 0xa939ad4)
	void OnPlayerPlacementChanged(class AFortPlayerStateAthena*& Sender, int& NewPlayerPlacement); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortHUDScoringAlert.OnPlayerMatchAbandonStateChanged (Underlying native function: OnPlayerMatchAbandonStateChanged 0xa939a10)
	void OnPlayerMatchAbandonStateChanged(enum EMatchAbandonState& OldState, enum EMatchAbandonState& NewState); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortHUDScoringAlert.OnMinigameCurrentRoundChanged (Underlying native function: OnMinigameCurrentRoundChanged 0xa93994c)
	void OnMinigameCurrentRoundChanged(class AFortMinigame*& Minigame, int& CurrentRound); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDScoringAlert.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0xa9398cc)
	void OnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortHUDScoringAlert.HandlePointAnimationFinished (Underlying native function: HandlePointAnimationFinished 0xa9395e8)
	void HandlePointAnimationFinished(); // (Final | Native | Protected | BlueprintCallable)
};

