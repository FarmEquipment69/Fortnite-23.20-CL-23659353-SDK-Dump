// Class /Script/FortniteUI.InfiltrationRoundInfoWidget
// Size: 0x340
class UInfiltrationRoundInfoWidget : public UPerkIntroScreenWidget
{
	int CachedRoundIndex; // 0x300 (0x4)
	unsigned char WinningTeam; // 0x304 (0x1)
	unsigned char AttackingTeam; // 0x305 (0x1)
	unsigned char DefendingTeam; // 0x306 (0x1)
	unsigned char NextRoundAttackingTeam; // 0x307 (0x1)
	unsigned char NextRoundDefendingTeam; // 0x308 (0x1)
	unsigned char unreflected_309[0x7]; // 0x309 (0x7) 
	class UClass* MutatorClassToWaitFor; // 0x310 (0x8)
	struct TScriptInterface<class IInfiltrationRoundInfoMutatorInterface> CachedMutator; // 0x318 (0x10)
	unsigned char padding_328[0x18]; // 0x328 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.ShouldSkipWinLossScreen (Underlying native function: ShouldSkipWinLossScreen 0xa5804ec)
	bool ShouldSkipWinLossScreen(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.ShouldPlayRoundEndStinger (Underlying native function: ShouldPlayRoundEndStinger 0xa5804a4)
	bool ShouldPlayRoundEndStinger(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.ShouldPlayFactionIntro (Underlying native function: ShouldPlayFactionIntro 0xa58045c)
	bool ShouldPlayFactionIntro(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.ShouldModifyAttackingDefendingText (Underlying native function: ShouldModifyAttackingDefendingText 0xa580318)
	bool ShouldModifyAttackingDefendingText(struct FText& OutAttackingDefendingText, bool& bLocalTeamIsAttackers); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.SetWinningTeam (Underlying native function: SetWinningTeam 0xa58029c)
	void SetWinningTeam(unsigned char& NewWinningTeam); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.OnReadyToShowStuff (Has no native function)
	void OnReadyToShowStuff(int& CurrentRound, unsigned char& LastRoundWinningTeam); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.OnReadyToShowIntro (Has no native function)
	void OnReadyToShowIntro(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.IsLocalPlayerDefendingNextRound (Underlying native function: IsLocalPlayerDefendingNextRound 0xa57e684)
	bool IsLocalPlayerDefendingNextRound(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.IsLocalPlayerDefending (Underlying native function: IsLocalPlayerDefending 0xa57e604)
	bool IsLocalPlayerDefending(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.IsLocalPlayerAttackingNextRound (Underlying native function: IsLocalPlayerAttackingNextRound 0xa57e584)
	bool IsLocalPlayerAttackingNextRound(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.IsLocalPlayerAttacking (Underlying native function: IsLocalPlayerAttacking 0xa57e504)
	bool IsLocalPlayerAttacking(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.HasWinningTeam (Underlying native function: HasWinningTeam 0xa57e410)
	bool HasWinningTeam(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.GetViewingTeam (Underlying native function: GetViewingTeam 0xa57d284)
	unsigned char GetViewingTeam(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.GetRoundResultsText (Underlying native function: GetRoundResultsText 0xa57ce84)
	void GetRoundResultsText(struct FText& OutResultsText, bool& bLocalTeamIsAttackers, bool& bLocalTeamIsWinners); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.GetRoundIntroFactionSound (Underlying native function: GetRoundIntroFactionSound 0xa57cdd4)
	class USoundBase* GetRoundIntroFactionSound(bool& bLocalTeamIsAttackers); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.GetFirstRound (Underlying native function: GetFirstRound 0xa57cbf8)
	int GetFirstRound(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.GetDefendingTeam (Underlying native function: GetDefendingTeam 0xa57cb68)
	unsigned char GetDefendingTeam(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.InfiltrationRoundInfoWidget.GetAttackingTeam (Underlying native function: GetAttackingTeam 0xa57c778)
	unsigned char GetAttackingTeam(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

