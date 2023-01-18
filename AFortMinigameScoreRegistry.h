// Class /Script/FortniteGame.FortMinigameScoreRegistry
// Size: 0x3f0
class AFortMinigameScoreRegistry : public AInfo
{
	class UFortPlaysetItemDefinition* Playset; // 0x288 (0x8)
	struct FMinigameScoreTemplate ScoreTemplate; // 0x290 (0xc)
	bool bPostToKillFeed; // 0x29c (0x1)
	unsigned char unreflected_29d[0x3]; // 0x29d (0x3) 
	struct FMulticastInlineDelegate OnScoreRecorded; // 0x2a0 (0x10)
	struct FMulticastInlineDelegate OnScoreRankingsUpdated; // 0x2b0 (0x10)
	struct FMinigameScoreArray Scores; // 0x2c0 (0x130)

	/* Functions */

	// Function /Script/FortniteGame.FortMinigameScoreRegistry.TimeToText (Underlying native function: TimeToText 0x8b10728)
	static struct FText TimeToText(float& Time); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMinigameScoreRegistry.ScoreToText (Underlying native function: ScoreToText 0x8b0daa4)
	struct FText ScoreToText(float& Score); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameScoreRegistry.RemoveAllScores (Underlying native function: RemoveAllScores 0x8b0d5b0)
	bool RemoveAllScores(class AFortPlayerState*& PlayerState); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameScoreRegistry.RecordScore (Underlying native function: RecordScore 0x8b0d270)
	bool RecordScore(class AFortPlayerState*& PlayerState, float& Score); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameScoreRegistry.PointsToText (Underlying native function: PointsToText 0x8b0ced4)
	static struct FText PointsToText(float& Points); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMinigameScoreRegistry.OnRep_Scores (Underlying native function: OnRep_Scores 0x8b0cca0)
	void OnRepScores(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameScoreRegistry.OnRep_Playset (Underlying native function: OnRep_Playset 0x8b0cc58)
	void OnRepPlayset(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameScoreRegistry.GetScores (Underlying native function: GetScores 0x8b09b70)
	bool GetScores(class AFortPlayerState*& PlayerState, struct TArray<struct FMinigameScoreEntry>& ScoreEnties); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameScoreRegistry.GetHighScores (Underlying native function: GetHighScores 0x8b08d98)
	bool GetHighScores(struct TArray<struct FMinigameScoreEntry>& HighScores); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

