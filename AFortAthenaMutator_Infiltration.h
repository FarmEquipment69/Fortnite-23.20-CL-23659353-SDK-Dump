// Class /Script/FortniteGame.FortAthenaMutator_Infiltration
// Size: 0xbe0
class AFortAthenaMutator_Infiltration : public AFortAthenaMutator_GameModeBase
{
	unsigned char unreflected_450[0x60]; // 0x450 (0x60) 
	struct FScalableFloat GroundTimer; // 0x4b0 (0x28)
	struct FInfiltrationTeamInfo* InfiltrationTeamInfos[0x2]; // 0x4d8 (0x8) (ARRAY) 
	struct FScalableFloat CaptureTimeRequired; // 0x4e8 (0x28)
	struct FScalableFloat CaptureRange; // 0x510 (0x28)
	unsigned char unreflected_538[0x8]; // 0x538 (0x8) 
	struct FIconDisplayData IntelIconData; // 0x540 (0x1a0)
	struct FIconDisplayData IntelCapturePointIconData; // 0x6e0 (0x1a0)
	struct FSlateBrush BrushUpArrow; // 0x880 (0xc0)
	struct FSlateBrush BrushDownArrow; // 0x940 (0xc0)
	float VerticalBuffer; // 0xa00 (0x4)
	unsigned char unreflected_a04[0x4]; // 0xa04 (0x4) 
	struct FScalableFloat TimeToBlockRespawnBetweenRounds; // 0xa08 (0x28)
	struct FScalableFloat NumOfActiveCapturePoints; // 0xa30 (0x28)
	class UClass* PerkUnlockedGameplayEffectClass; // 0xa58 (0x8)
	struct FInfiltrationModeState ModeState; // 0xa60 (0x30)
	class AInfiltrationCarryObjectSpawnPoint* CurrentSpawnPoint; // 0xa90 (0x8)
	class AInfiltrationCarryObjectCapturePoint* CurrentCapturePoint; // 0xa98 (0x8)
	struct TArray<struct FInfiltrationPOIInfo> POIInfo; // 0xaa0 (0x10)
	struct FGameplayTag RoundAccoladeTag; // 0xab0 (0x4)
	struct FGameplayTag RoundWinAccoladeTag; // 0xab4 (0x4)
	struct FGameplayTag MostRoundsAccoladeTag; // 0xab8 (0x4)
	struct FGameplayTag PlayedInfAccoladeTag; // 0xabc (0x4)
	struct FText RoundResultsTextAttackerWin; // 0xac0 (0x18)
	struct FText RoundResultsTextAttackerLose; // 0xad8 (0x18)
	struct FText RoundResultsTextDefenderWin; // 0xaf0 (0x18)
	struct FText RoundResultsTextDefenderLose; // 0xb08 (0x18)
	struct TArray<struct FRoundCosmeticInfo> RoundCosmeticInfo; // 0xb20 (0x10)
	struct FScalableFloat bRoundIntroEnabled; // 0xb30 (0x28)
	unsigned char unreflected_b58[0x20]; // 0xb58 (0x20) 
	class UCurveFloat* DilationCurve; // 0xb78 (0x8)
	unsigned char unreflected_b80[0x18]; // 0xb80 (0x18) 
	struct TWeakObjectPtr<class AFortAthenaMutator_RoundHelper> CachedRoundHelper; // 0xb98 (0x8)
	unsigned char unreflected_ba0[0x18]; // 0xba0 (0x18) 
	struct FVector IntelLocation; // 0xbb8 (0x18)
	unsigned char padding_bd0[0x10]; // 0xbd0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Infiltration.ServerOnDownloaded (Has no native function)
	void ServerOnDownloaded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaMutator_Infiltration.ServerOnCaptured (Has no native function)
	void ServerOnCaptured(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaMutator_Infiltration.OnRep_ModeState (Underlying native function: OnRep_ModeState 0x84d0230)
	void OnRepModeState(struct FInfiltrationModeState& OldState); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Infiltration.GetDefendingTeam (Underlying native function: GetDefendingTeam 0x84cd910)
	unsigned char GetDefendingTeam(class AFortPlayerControllerAthena*& PlayerController); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Infiltration.GetAttackingTeam (Underlying native function: GetAttackingTeam 0x84cd7c4)
	unsigned char GetAttackingTeam(class AFortPlayerControllerAthena*& PlayerController); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Infiltration.FinishRoundIntro (Underlying native function: FinishRoundIntro 0x84cd744)
	void FinishRoundIntro(class AFortAthenaMutator_ShowPlacard*& ShowPlacardMutator); // (Final | Native | Protected)
};

