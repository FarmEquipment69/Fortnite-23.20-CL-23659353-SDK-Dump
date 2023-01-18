// Class /Script/FortniteGame.FortDynamicXpCalculator
// Size: 0x180
class UFortDynamicXpCalculator : public UObject
{
	struct FDynamicXpCircuitBreaker CircuitBreaker; // 0x28 (0x28)
	struct FDynamicXpAfkPenalty* AfkPenalty; // 0x50 (0x8)
	struct FDynamicXpAggregatedStats XPStats; // 0x58 (0x78)
	struct TMap<struct FString, float> AccoladeGroupingTotalWeight; // 0xd0 (0x50)
	struct TMap<struct FString, struct FDynamicXpCreatorAccoladeTuning*> AccoladeTuning; // 0x120 (0x50)
	float XpBudgetPerMin; // 0x170 (0x4)
	float CappedSessionLengthMinutes; // 0x174 (0x4)
	bool bHasVarianceReduction; // 0x178 (0x1)
	bool bRecalculateWeights; // 0x179 (0x1)
	unsigned char unreflected_17a[0x2]; // 0x17a (0x2) 
	int MinXpThreshold; // 0x17c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortDynamicXpCalculator.RemoveAccolade (Underlying native function: RemoveAccolade 0x88451d4)
	void RemoveAccolade(struct FString& AccoladeID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.OnTriggerCalculateXp (Underlying native function: OnTriggerCalculateXp 0x8844f38)
	int OnTriggerCalculateXp(struct FDynamicXpPlayerSession& PlayerSession, struct FString& AccoladeID, float& CurrentTime, int& CurrentDay); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.OnRoundStartForPlayer (Underlying native function: OnRoundStartForPlayer 0x8844dc0)
	void OnRoundStartForPlayer(struct FDynamicXpPlayerSession& PlayerSession, bool& bIsGameStart, float& CurrentTime); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.OnRoundEndForPlayer (Underlying native function: OnRoundEndForPlayer 0x8844c48)
	void OnRoundEndForPlayer(struct FDynamicXpPlayerSession& PlayerSession, bool& bIsGameEnd, float& CurrentTime); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.MakeAccoladeId (Underlying native function: MakeAccoladeId 0x8844874)
	static struct FString MakeAccoladeId(struct FString& AccoladeName, struct FString& AccoladeGrouping); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.IsLive (Underlying native function: IsLive 0x88447c8)
	bool IsLive(enum EDynamicXpCalibrationPhase& CalibrationPhase); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.IsGrantingRealXp (Underlying native function: IsGrantingRealXp 0x8844798)
	bool IsGrantingRealXp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.IsCalculatingPotentialXp (Underlying native function: IsCalculatingPotentialXp 0x8844038)
	bool IsCalculatingPotentialXp(enum EDynamicXpCalibrationPhase& CalibrationPhase); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.InitializeXpStats (Underlying native function: InitializeXpStats 0x8843f00)
	void InitializeXpStats(struct FDynamicXpAggregatedStats& AggregatedStats, int& CurrentGameVersion); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.InitializePlayerSession (Underlying native function: InitializePlayerSession 0x8843dcc)
	void InitializePlayerSession(struct FDynamicXpPlayerSession& PlayerSession, float& SessionStartTime); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.InitializeConstantData (Underlying native function: InitializeConstantData 0x8843c00)
	void InitializeConstantData(float& XpBudgetPerMin, float& CappedSessionLenMinutes, struct FDynamicXpCircuitBreaker& CircuitBreakerValues, struct FDynamicXpAfkPenalty*& Afk); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.GetXpVarianceMult (Underlying native function: GetXpVarianceMult 0x8843bd8)
	float GetXpVarianceMult(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.GetXpStats (Underlying native function: GetXpStats 0x8843bbc)
	struct FDynamicXpAggregatedStats GetXpStats(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.GetXpProfileStats (Underlying native function: GetXpProfileStats 0x8843aa8)
	static struct FDynamicXpProfileStats GetXpProfileStats(struct FDynamicXpPlayerSession& PlayerSession); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.GetTimespanOutlierThreshold (Underlying native function: GetTimespanOutlierThreshold 0x8843a50)
	float GetTimespanOutlierThreshold(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.GetDailyXpCutoffThreshold (Underlying native function: GetDailyXpCutoffThreshold 0x88432c0)
	float GetDailyXpCutoffThreshold(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.GetDailyExcessXpThreshold (Underlying native function: GetDailyExcessXpThreshold 0x88432a0)
	float GetDailyExcessXpThreshold(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.GetAccoladeNameAndGrouping (Underlying native function: GetAccoladeNameAndGrouping 0x8842de8)
	static void GetAccoladeNameAndGrouping(struct FString& AccoladeName, struct FString& Grouping, struct FString& FromId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.CalculatePotentialXp (Underlying native function: CalculatePotentialXp 0x8842360)
	float CalculatePotentialXp(struct FDynamicXpPlayerSession& PlayerSession, struct FString& AccoladeID, float& CurrentTime, bool& bIsFromTrigger); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDynamicXpCalculator.AddAccolade (Underlying native function: AddAccolade 0x8841634)
	void AddAccolade(struct FString& AccoladeID, struct FDynamicXpCreatorAccoladeTuning*& Tuning); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

