// Class /Script/FortniteGame.FortMcpProfileWorld
// Size: 0x310
class UFortMcpProfileWorld : public UFortMcpProfile
{
	struct TArray<struct FFortWorldProfileUpdateRequest> UpdateRequests; // 0x178 (0x10)
	struct FFortWorldPlayerLoadout CachedPlayerLoadout; // 0x188 (0x130)
	struct TWeakObjectPtr<class AFortInventory> FortInventoryWeak; // 0x2b8 (0x8)
	bool bIsInventoryInitialized; // 0x2c0 (0x1)
	unsigned char padding_2c1[0x4f]; // 0x2c1 (0x4f)

	/* Functions */

	// Function /Script/FortniteGame.FortMcpProfileWorld.UnlockProfiles (Has no native function)
	void UnlockProfiles(struct FString& Code, struct FDedicatedServerUrlContext& Context); // (Final | Net | NetReliable | NetRequest | Native | Event | Private | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileWorld.StorageTransfer (Has no native function)
	void StorageTransfer(struct TArray<struct FItemTransferOperation>& TransferOperations, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileWorld.OnHotbarUpdated (Underlying native function: OnHotbarUpdated 0x8efd550)
	void OnHotbarUpdated(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMcpProfileWorld.ModifyQuickbar (Has no native function)
	void ModifyQuickbar(struct TArray<struct FString>& PrimaryQuickbarChoices, struct FString& SecondaryQuickbarChoice, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileWorld.LockProfiles (Has no native function)
	void LockProfiles(struct FString& Code, int& Timeout, struct FDedicatedServerUrlContext& Context); // (Final | Net | NetReliable | NetRequest | Native | Event | Private | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileWorld.InitializeTheater (Has no native function)
	void InitializeTheater(struct FString& TheaterGuid, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileWorld.DisassembleWorldItems (Has no native function)
	void DisassembleWorldItems(struct TArray<struct FItemIdAndQuantityPair>& TargetItemIdAndQuantityPairs, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileWorld.DestroyWorldItems (Has no native function)
	void DestroyWorldItems(struct TArray<struct FString>& ItemIds, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileWorld.DepositPostResources (Has no native function)
	void DepositPostResources(struct TArray<struct FString>& itemsToDepositIds, struct TArray<int>& itemCountsToDeposit, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileWorld.CraftWorldItem (Has no native function)
	void CraftWorldItem(struct FString& TargetSchematicItemId, int& NumTimesToCraft, struct FString& TargetSchematicTier, struct FClientUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileWorld.BatchUpdatePlayers_Outpost (Has no native function)
	void BatchUpdatePlayersOutpost(struct TArray<struct FFortBatchUpdatePlayer_Update>& Updates, struct FString& OutpostId, struct FFortOutpostCoreInfo& OutpostInfo, struct FFortCloudSaveInfo& CloudSaveInfo, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileWorld.BatchUpdatePlayers_DeployableBase (Has no native function)
	void BatchUpdatePlayersDeployableBase(struct TArray<struct FFortBatchUpdatePlayer_Update>& Updates, struct TArray<struct FFortBatchUpdatePlayer_DeployableBaseUpdate>& DeployableBaseUpdates, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfileWorld.BatchUpdatePlayers (Has no native function)
	void BatchUpdatePlayers(struct TArray<struct FFortBatchUpdatePlayer_Update>& Updates, struct FDedicatedServerUrlContext& Context); // (Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)
};

