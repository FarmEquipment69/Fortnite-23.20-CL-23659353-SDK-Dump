// Class /Script/FortniteUI.AthenaEventMatchStatusScreenBase
// Size: 0x568
class UAthenaEventMatchStatusScreenBase : public UAthenaEventScreenBase
{
	unsigned char unreflected_568[0x568]; 

	/* Functions */

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateTimeSinceLastKillText (Has no native function)
	void UpdateTimeSinceLastKillText(struct FText& TimeSinceLastKillText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateSupplyDropsLootedText (Has no native function)
	void UpdateSupplyDropsLootedText(struct FText& SupplyDropsLootedText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateShotsFiredText (Has no native function)
	void UpdateShotsFiredText(struct FText& ShotsFiredText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdatePlayersRemainingText (Has no native function)
	void UpdatePlayersRemainingText(struct FText& PlayersRemainingText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdatePiecesDestroyedText (Has no native function)
	void UpdatePiecesDestroyedText(struct FText& PiecesDestroyedText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdatePiecesBuiltText (Has no native function)
	void UpdatePiecesBuiltText(struct FText& PiecesBuiltText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateMostKillsText (Has no native function)
	void UpdateMostKillsText(struct FText& MostKillsText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateMostKillsScore (Has no native function)
	void UpdateMostKillsScore(struct FText& MostKillsScore); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateMatchTimeText (Has no native function)
	void UpdateMatchTimeText(struct FText& MatchTimeText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateLongestEliminationText (Has no native function)
	void UpdateLongestEliminationText(struct FText& LongestEliminationText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateLongestEliminationScore (Has no native function)
	void UpdateLongestEliminationScore(struct FText& LongestEliminationScore); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateGamePhaseTimeTitleText (Has no native function)
	void UpdateGamePhaseTimeTitleText(struct FText& GamePhaseTimeTitleText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateGamePhaseTimeText (Has no native function)
	void UpdateGamePhaseTimeText(struct FText& GamePhaseTimeText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateGamePhaseText (Has no native function)
	void UpdateGamePhaseText(struct FText& GamePhaseText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateFastestKillText (Has no native function)
	void UpdateFastestKillText(struct FText& FastestKillText, struct FText& FastestKillTime); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateDamageTakenText (Has no native function)
	void UpdateDamageTakenText(struct FText& DamageTakenText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateDamageInflictedText (Has no native function)
	void UpdateDamageInflictedText(struct FText& DamageInflictedText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateDamageHealedText (Has no native function)
	void UpdateDamageHealedText(struct FText& DamageHealedText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateCircleRadiusText (Has no native function)
	void UpdateCircleRadiusText(struct FText& CircleRadiusText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.UpdateChestsLootedText (Has no native function)
	void UpdateChestsLootedText(struct FText& ChestsLootedText); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.OnPlayerKillScoreChanged (Underlying native function: OnPlayerKillScoreChanged 0x245c5e0)
	void OnPlayerKillScoreChanged(class UAthenaRemotePlayerViewData*& InPlayerData, int& InKillScore); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.OnPlayerDeadStateChanged_BP (Has no native function)
	void OnPlayerDeadStateChangedBP(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bInIsDead); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchStatusScreenBase.OnPlayerDeadStateChanged (Underlying native function: OnPlayerDeadStateChanged 0x231a33c)
	void OnPlayerDeadStateChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bInIsDead); // (Final | Native | Protected)
};

