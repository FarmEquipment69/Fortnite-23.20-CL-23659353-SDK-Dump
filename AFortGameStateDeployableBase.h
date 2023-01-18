// Class /Script/FortniteGame.FortGameStateDeployableBase
// Size: 0x1108
class AFortGameStateDeployableBase : public AFortGameStatePvE
{
	class AFortDeployableBaseManager* DeployableBaseManager; // 0x10c8 (0x8)
	struct FMulticastInlineDelegate OnDeployableBaseManagerCreated; // 0x10d0 (0x10)
	bool bFireEndOfDayDelegate; // 0x10e0 (0x1)
	unsigned char unreflected_10e1[0x7]; // 0x10e1 (0x7) 
	struct TArray<struct FHordeDifficultyTierInfo> TierDifficultyConfig; // 0x10e8 (0x10)
	struct TArray<struct FHordeDifficultyTierInfo> PrestigeTierDifficultyConfig; // 0x10f8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateDeployableBase.ShouldUseStormShield (Underlying native function: ShouldUseStormShield 0x8eacb4c)
	bool ShouldUseStormShield(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateDeployableBase.ShouldRespawnAtLastPawnLocation (Underlying native function: ShouldRespawnAtLastPawnLocation 0x8eacad0)
	bool ShouldRespawnAtLastPawnLocation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateDeployableBase.SetGameDifficultyRow (Underlying native function: SetGameDifficultyRow 0x8eac5d8)
	void SetGameDifficultyRow(struct FDataTableRowHandle& GameDifficultyInfo); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateDeployableBase.SetGameDifficultyExplicitly (Underlying native function: SetGameDifficultyExplicitly 0x8eac554)
	void SetGameDifficultyExplicitly(float& InGameDifficulty); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateDeployableBase.OnRep_DeployableBaseManager (Underlying native function: OnRep_DeployableBaseManager 0x8eac360)
	void OnRepDeployableBaseManager(); // (Native | Protected)

	// Function /Script/FortniteGame.FortGameStateDeployableBase.GetStormShieldStartingRadiusOverride (Underlying native function: GetStormShieldStartingRadiusOverride 0x8eaaa94)
	float GetStormShieldStartingRadiusOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateDeployableBase.GetStormShieldEndingRadiusOverride (Underlying native function: GetStormShieldEndingRadiusOverride 0x8eaaa60)
	float GetStormShieldEndingRadiusOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateDeployableBase.GetStormShieldBreatherRadiusOverride (Underlying native function: GetStormShieldBreatherRadiusOverride 0x8eaaa2c)
	float GetStormShieldBreatherRadiusOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateDeployableBase.GetDeployableBaseUseType (Underlying native function: GetDeployableBaseUseType 0x8ea9f58)
	enum EDeployableBaseUseType GetDeployableBaseUseType(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

