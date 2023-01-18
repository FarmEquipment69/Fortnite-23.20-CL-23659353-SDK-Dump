// Class /Script/FortniteGame.FortCreativeRoundSettings
// Size: 0xfb0
class AFortCreativeRoundSettings : public ABuildingProp
{
	int RoundIndex; // 0xee8 (0x4)
	bool bKeepItemsBetweenRoundsOverride; // 0xeec (0x1)
	bool bKeepItemsBetweenRounds; // 0xeed (0x1)
	unsigned char unreflected_eee[0x2]; // 0xeee (0x2) 
	int KeepItemsBetweenRounds; // 0xef0 (0x4)
	float PercentageOfResourcesKeptBetweenRounds; // 0xef4 (0x4)
	bool bReloadAndRestockWeaponsEachRoundOverride; // 0xef8 (0x1)
	bool bReloadAndRestockWeaponsEachRound; // 0xef9 (0x1)
	unsigned char unreflected_efa[0x2]; // 0xefa (0x2) 
	int ReloadAndRestockWeaponsEachRound; // 0xefc (0x4)
	bool bIsRelevantThisRound; // 0xf00 (0x1)
	bool bEnableOnMinigameStart; // 0xf01 (0x1)
	unsigned char unreflected_f02[0x2]; // 0xf02 (0x2) 
	int Active; // 0xf04 (0x4)
	bool bActiveDuringMinigame; // 0xf08 (0x1)
	unsigned char unreflected_f09[0x3]; // 0xf09 (0x3) 
	int WinningTeamOnMessageReceived; // 0xf0c (0x4)
	bool bLastStandingWinsOverride; // 0xf10 (0x1)
	bool bLastStandingWins; // 0xf11 (0x1)
	unsigned char unreflected_f12[0x2]; // 0xf12 (0x2) 
	int LastTeamStandingWins; // 0xf14 (0x4)
	struct TMap<class UFortWorldItemDefinition*, int> RestockAmmoAmounts; // 0xf18 (0x50)
	int DefaultRestockAmmoAmount; // 0xf68 (0x4)
	unsigned char padding_f6c[0x44]; // 0xf6c (0x44)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeRoundSettings.SetResourceGivenToWinnersPerRound (Underlying native function: SetResourceGivenToWinnersPerRound 0x87b6f50)
	void SetResourceGivenToWinnersPerRound(struct TEnumAsByte<EFortResourceType>& InResourceType, int& Amount); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeRoundSettings.SetResourceGivenPerRound (Underlying native function: SetResourceGivenPerRound 0x87b6e80)
	void SetResourceGivenPerRound(struct TEnumAsByte<EFortResourceType>& InResourceType, int& Amount); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeRoundSettings.IsActive (Underlying native function: IsActive 0x862f3dc)
	bool IsActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeRoundSettings.GetRoundIndex (Underlying native function: GetRoundIndex 0x87b3018)
	int GetRoundIndex(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeRoundSettings.GetResourceGivenToWinnersPerRound (Underlying native function: GetResourceGivenToWinnersPerRound 0x87b2f80)
	int GetResourceGivenToWinnersPerRound(struct TEnumAsByte<EFortResourceType>& InResourceType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeRoundSettings.GetResourceGivenPerRound (Underlying native function: GetResourceGivenPerRound 0x87b2ee8)
	int GetResourceGivenPerRound(struct TEnumAsByte<EFortResourceType>& InResourceType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeRoundSettings.EndRound (Underlying native function: EndRound 0x87b1ea4)
	void EndRound(class AFortPlayerController*& InstigatorPC); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeRoundSettings.ClearResourcesGivenToWinnersPerRound (Underlying native function: ClearResourcesGivenToWinnersPerRound 0x87b0b60)
	void ClearResourcesGivenToWinnersPerRound(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeRoundSettings.ClearResourcesGivenPerRound (Underlying native function: ClearResourcesGivenPerRound 0x87b0b28)
	void ClearResourcesGivenPerRound(); // (Final | Native | Protected | BlueprintCallable)
};

