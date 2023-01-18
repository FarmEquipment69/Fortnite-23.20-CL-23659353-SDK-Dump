// Class /Script/FortniteGame.FortDeployableBaseManager
// Size: 0x600
class AFortDeployableBaseManager : public AInfo
{
	unsigned char bRestrictedBuildingActive; // 0x288 (0x1)
	unsigned char bBusyWithPlotActions; // 0x288 (0x1)
	unsigned char bDestroyAllBuildingPiecesOnReload; // 0x288 (0x1)
	unsigned char unreflected_289[0x3]; // 0x289 (0x3) 
	int NumPiecesDestroyedOnZoneCleanupPerUpdate; // 0x28c (0x4)
	int NumEnvPiecesRestoredPerUpdate; // 0x290 (0x4)
	bool bDeployableBasesReadOnly; // 0x294 (0x1)
	enum EDeployableBaseUseType DeployableBaseUseType; // 0x295 (0x1)
	unsigned char unreflected_296[0x2]; // 0x296 (0x2) 
	struct FActiveTieredCollectionLayoutArray ActiveTieredCollectionLayouts; // 0x298 (0x120)
	struct FMulticastInlineDelegate OnDeployableBasePlotsSpawned; // 0x3b8 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerEntersDeployablePlotEvent; // 0x3c8 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerLeavesDeployablePlotEvent; // 0x3d8 (0x10)
	struct FMulticastInlineDelegate OnLocalDeployablePlotInventoryChangedEvent; // 0x3e8 (0x10)
	struct FDeployableBaseArray DeployableBaseArray; // 0x3f8 (0x118)
	class UFortDeployableBaseCloudSaveItemDefinition* DeployableBaseItemDefinition; // 0x510 (0x8)
	class UClass* DeployableBasePlotClass; // 0x518 (0x8)
	class UFortDeployableBaseSkillTreeUnlocks* SupportedSkillTreeBasedUnlocks; // 0x520 (0x8)
	int NumExpectedPlots; // 0x528 (0x4)
	unsigned char unreflected_52c[0x4]; // 0x52c (0x4) 
	struct TArray<struct FPendingDeployableBaseUser> PendingUsers; // 0x530 (0x10)
	struct TArray<struct FPendingDeployableManagerAction> PendingDeployableManagerActions; // 0x540 (0x10)
	struct TArray<struct FEnvironmentBuildingRestorationRecord> EnvironmentActorsRequiringRestoration; // 0x550 (0x10)
	unsigned char bCaptureEnvironmentActorsForRestoration; // 0x560 (0x1)
	unsigned char bWorldInitialized; // 0x560 (0x1)
	unsigned char bKeepBasesOnLogout; // 0x560 (0x1)
	unsigned char unreflected_561[0x7]; // 0x561 (0x7) 
	struct TArray<struct FUniqueNetIdRepl> PlayersPendingPlotReset; // 0x568 (0x10)
	unsigned char padding_578[0x88]; // 0x578 (0x88)

	/* Functions */

	// Function /Script/FortniteGame.FortDeployableBaseManager.SetKeepDeployableBasesOnLogout (Underlying native function: SetKeepDeployableBasesOnLogout 0x8eac814)
	void SetKeepDeployableBasesOnLogout(bool& bInKeepBasesOnLogout); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseManager.ReloadAllPlots (Underlying native function: ReloadAllPlots 0x8eac3f8)
	void ReloadAllPlots(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseManager.GetTierOutputForSelectedTier (Underlying native function: GetTierOutputForSelectedTier 0x8eaab1c)
	bool GetTierOutputForSelectedTier(int& Tier, class UFortTieredCollectionLayout*& Layout, struct FFortTierCollectionLayoutOutput& Output); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDeployableBaseManager.GetHighestDefeatedTierForPlayerAndLayout (Underlying native function: GetHighestDefeatedTierForPlayerAndLayout 0x8eaa160)
	int GetHighestDefeatedTierForPlayerAndLayout(struct FUniqueNetIdRepl& PlayerId, class UFortTieredCollectionLayout*& Layout); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDeployableBaseManager.GetDeployableBaseUseType (Underlying native function: GetDeployableBaseUseType 0x8ea9f40)
	enum EDeployableBaseUseType GetDeployableBaseUseType(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDeployableBaseManager.GetDeployableBasePlotFromLocation (Underlying native function: GetDeployableBasePlotFromLocation 0x8ea9ea8)
	class ADeployableBasePlot* GetDeployableBasePlotFromLocation(struct FVector& Location); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDeployableBaseManager.GetCurrent (Underlying native function: GetCurrent 0x8ea9e28)
	static class AFortDeployableBaseManager* GetCurrent(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseManager.GetAvailableTiers (Underlying native function: GetAvailableTiers 0x8ea9b74)
	void GetAvailableTiers(struct TArray<struct FAvailableTierLayout>& OutAvailableTiers); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDeployableBaseManager.GetAllDeployableBasePlots (Underlying native function: GetAllDeployableBasePlots 0x8ea9978)
	void GetAllDeployableBasePlots(struct TArray<class ADeployableBasePlot*>& OutDeployableBasePlots); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDeployableBaseManager.BroadcastHordeWaveStinger (Underlying native function: BroadcastHordeWaveStinger 0x8ea8f38)
	void BroadcastHordeWaveStinger(enum EHordeWaveStingerType& StingerType); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)
};

