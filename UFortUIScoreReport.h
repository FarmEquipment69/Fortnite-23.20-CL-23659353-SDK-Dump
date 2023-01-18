// Class /Script/FortniteUI.FortUIScoreReport
// Size: 0x30
class UFortUIScoreReport : public UObject
{
	class UFortLocalPlayer* LocalPlayer; // 0x28 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortUIScoreReport.IsLocalPlayer (Underlying native function: IsLocalPlayer 0xa918d50)
	bool IsLocalPlayer(int& ScoreReportIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIScoreReport.GetXpToCompleteLevel (Underlying native function: GetXpToCompleteLevel 0xa918090)
	int GetXpToCompleteLevel(int& Level); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIScoreReport.GetXpInfo (Underlying native function: GetXpInfo 0xa917f98)
	bool GetXpInfo(int& ScoreReportIndex, struct FFortUIXpInfo& OutXpInfo); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIScoreReport.GetTeamScore (Underlying native function: GetTeamScore 0xa917a3c)
	int GetTeamScore(struct TEnumAsByte<EFortUIScoreType>& ScoreType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIScoreReport.GetScoreReportIndicesByPlayerID (Underlying native function: GetScoreReportIndicesByPlayerID 0xa917678)
	void GetScoreReportIndicesByPlayerID(struct TArray<int>& SortedScoreReportIndices); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIScoreReport.GetScoreReportIndex (Underlying native function: GetScoreReportIndex 0xa9175a4)
	int GetScoreReportIndex(struct FUniqueNetIdRepl& PlayerId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIScoreReport.GetPlayerScore (Underlying native function: GetPlayerScore 0xa917494)
	int GetPlayerScore(int& ScoreReportIndex, struct TEnumAsByte<EFortUIScoreType>& ScoreType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIScoreReport.GetPlayerPlatform (Underlying native function: GetPlayerPlatform 0xa9173c8)
	struct FString GetPlayerPlatform(int& ScoreReportIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIScoreReport.GetPlayerName (Underlying native function: GetPlayerName 0xa9172ec)
	struct FText GetPlayerName(int& ScoreReportIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIScoreReport.GetPlayerIDFromScoreReportIndex (Underlying native function: GetPlayerIDFromScoreReportIndex 0xa9171b8)
	void GetPlayerIDFromScoreReportIndex(int& ScoreReportIndex, struct FUniqueNetIdRepl& OutUniqueNetIdRepl); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIScoreReport.GetPlayerCount (Underlying native function: GetPlayerCount 0xa917198)
	int GetPlayerCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIScoreReport.GetLevelProgress (Underlying native function: GetLevelProgress 0xa9170a4)
	float GetLevelProgress(int& Level, int& DisplayXp); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIScoreReport.GetDifficultBonusScore (Underlying native function: GetDifficultBonusScore 0xa9166d0)
	int GetDifficultBonusScore(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIScoreReport.GetDifficultBonusMultiplier (Underlying native function: GetDifficultBonusMultiplier 0xa9166a8)
	float GetDifficultBonusMultiplier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIScoreReport.GetCurrentPlayerState (Underlying native function: GetCurrentPlayerState 0xa916468)
	class AFortPlayerState* GetCurrentPlayerState(int& ScoreReportIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIScoreReport.GetCurrentPlayerPawn (Underlying native function: GetCurrentPlayerPawn 0xa9163dc)
	class AFortPlayerPawn* GetCurrentPlayerPawn(int& ScoreReportIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIScoreReport.GetBadgeScore (Underlying native function: GetBadgeScore 0xa916178)
	int GetBadgeScore(class UFortItem*& BadgeItem); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

