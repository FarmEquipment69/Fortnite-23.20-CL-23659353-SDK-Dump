// Class /Script/FortniteGame.FortHomebaseManager
// Size: 0x1f8
class UFortHomebaseManager : public UDataAsset
{
	class UFortHomebaseNodeGameplayEffectDataTable* HomebaseNodeGameplayEffectDataTable; // 0x30 (0x8)
	class UCurveTable* ResearchSystemUpgradesTable; // 0x38 (0x8)
	class UClass* StatsGamplayEffect; // 0x40 (0x8)
	class UDataTable* HomebaseSquadDataTable; // 0x48 (0x8)
	class UDataTable* ExpeditionSlotsDataTable; // 0x50 (0x8)
	class UCurveTable* ManagerSquadSynergyBonusTable; // 0x58 (0x8)
	class UClass* SquadGE; // 0x60 (0x8)
	struct TArray<struct FWorkerPersonalityData> WorkerPersonalities; // 0x68 (0x10)
	struct TArray<struct FWorkerSetBonusData> WorkerSetBonuses; // 0x78 (0x10)
	struct TArray<struct FManagerSynergyData> ManagerSynergies; // 0x88 (0x10)
	unsigned char padding_98[0x160]; // 0x98 (0x160)

	/* Functions */

	// Function /Script/FortniteGame.FortHomebaseManager.IsSquadSlotUnlocked (Underlying native function: IsSquadSlotUnlocked 0x8ed26f0)
	bool IsSquadSlotUnlocked(struct FName& SquadId, int& SlotIdx, class UFortMcpProfileCampaign*& McpProfile); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHomebaseManager.GetWorkerInSquadSlot (Underlying native function: GetWorkerInSquadSlot 0x8ed1db8)
	class UFortWorker* GetWorkerInSquadSlot(struct FName& SquadId, int& SlotIdx, class UFortMcpProfileCampaign*& McpProfile); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHomebaseManager.GetSquadPopulation (Underlying native function: GetSquadPopulation 0x8ed13a4)
	void GetSquadPopulation(struct FName& SquadId, class UFortMcpProfileCampaign*& McpProfile, struct TArray<class UFortWorker*>& OutSquadMembers); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHomebaseManager.GetSquadCopyById (Underlying native function: GetSquadCopyById 0x8ed12a8)
	bool GetSquadCopyById(struct FName& SquadId, struct FHomebaseSquad& OutSquad); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortHomebaseManager.GetNumWorldInventoryBonusTokens (Underlying native function: GetNumWorldInventoryBonusTokens 0x8ed0a60)
	int GetNumWorldInventoryBonusTokens(class UFortMcpProfileCampaign*& McpProfile); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHomebaseManager.GetNumAccountLimitedItems (Underlying native function: GetNumAccountLimitedItems 0x8ed0950)
	int GetNumAccountLimitedItems(class UFortMcpProfileCampaign*& McpProfile); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHomebaseManager.GetNumAccountInventoryBonusTokens (Underlying native function: GetNumAccountInventoryBonusTokens 0x8ed08d0)
	int GetNumAccountInventoryBonusTokens(class UFortMcpProfileCampaign*& McpProfile); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHomebaseManager.GetNodeInstanceIdByNodeId (Underlying native function: GetNodeInstanceIdByNodeId 0x8ed05b0)
	struct FString GetNodeInstanceIdByNodeId(struct FString& NodeTemplateId, class UFortMcpProfileCampaign*& McpProfile); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHomebaseManager.GetHomebaseName (Underlying native function: GetHomebaseName 0x8ecfbcc)
	static struct FString GetHomebaseName(class UFortMcpProfileCommonPublic*& McpProfile); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHomebaseManager.AreNodeCostsMet (Underlying native function: AreNodeCostsMet 0x8ecdd98)
	bool AreNodeCostsMet(class UFortHomebaseNodeItemDefinition*& NodeItemDef, class UFortMcpProfileCampaign*& McpProfile, int& Level); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

