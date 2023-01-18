// Class /Script/FortniteGame.FortPlayerControllerOutpost
// Size: 0x3b10
class AFortPlayerControllerOutpost : public AFortPlayerControllerPvE
{
	class UFortOutpostItemDefinition* BuildingBeingUpgraded; // 0x3ae0 (0x8)
	int LevelBeforeUpgrade; // 0x3ae8 (0x4)
	bool bOutpostRefundDialogPending; // 0x3aec (0x1)
	unsigned char unreflected_3aed[0x3]; // 0x3aed (0x3) 
	struct TArray<struct FFortDepositedResources> PostDepositedResources; // 0x3af0 (0x10)
	bool bIsOutpostOwnerInPIE; // 0x3b00 (0x1)
	unsigned char padding_3b01[0xf]; // 0x3b01 (0xf)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.UpgradeBuildingByDefinition (Underlying native function: UpgradeBuildingByDefinition 0x8efe9f4)
	void UpgradeBuildingByDefinition(class UFortOutpostItemDefinition*& OutpostBuilding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.UpgradeBuilding (Underlying native function: UpgradeBuilding 0x8efe8f0)
	void UpgradeBuilding(enum EOutpostBuildings& OutpostBuilding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ToggleOwnerInPIE (Underlying native function: ToggleOwnerInPIE 0x8efe694)
	void ToggleOwnerInPIE(); // (Final | Exec | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ServerUpgradePOST (Underlying native function: ServerUpgradePOST 0x8efdfe0)
	void ServerUpgradePOST(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ServerUpgradeBuilding (Underlying native function: ServerUpgradeBuilding 0x8efdf40)
	void ServerUpgradeBuilding(class UFortOutpostItemDefinition*& BuildingToUpgrade); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ServerMoveItemToStorageVault (Underlying native function: ServerMoveItemToStorageVault 0x8efdd6c)
	void ServerMoveItemToStorageVault(struct FFortItemEntry& NewlyStoredItem); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ServerMoveItemFromStorageVault (Underlying native function: ServerMoveItemFromStorageVault 0x8efdb60)
	void ServerMoveItemFromStorageVault(struct FFortItemEntry& NewlyCollectedItem); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ServerLeaveOutpostAsParty (Underlying native function: ServerLeaveOutpostAsParty 0x8efd8a0)
	void ServerLeaveOutpostAsParty(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ServerDepositPOSTResource (Underlying native function: ServerDepositPOSTResource 0x8efd794)
	void ServerDepositPOSTResource(struct FGuid& ItemGuid, int& Count); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ServerCleanUpOnExit (Underlying native function: ServerCleanUpOnExit 0x8efd748)
	void ServerCleanUpOnExit(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.OnRep_PostDepositedResources (Underlying native function: OnRep_PostDepositedResources 0x8efd564)
	void OnRepPostDepositedResources(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.OnCleanUpOnExit (Has no native function)
	void OnCleanUpOnExit(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.LeaveOutpostAsParty (Underlying native function: LeaveOutpostAsParty 0x8efd1c0)
	void LeaveOutpostAsParty(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.IsOutpostOwner (Underlying native function: IsOutpostOwner 0x8efd19c)
	bool IsOutpostOwner(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.GetOutpostCoreLevel (Underlying native function: GetOutpostCoreLevel 0x8efc1bc)
	int GetOutpostCoreLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.GetHighestEnduranceWaveReached (Underlying native function: GetHighestEnduranceWaveReached 0x8efbc90)
	int GetHighestEnduranceWaveReached(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.GetBuildingUpgradeCostFromDefinition (Underlying native function: GetBuildingUpgradeCostFromDefinition 0x8efb2e0)
	void GetBuildingUpgradeCostFromDefinition(class UFortOutpostItemDefinition*& OutpostBuilding, struct TArray<struct FFortItemQuantityPair>& OutWorldItems, struct TArray<struct FFortItemQuantityPair>& OutAccountItems); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.GetBuildingUpgradeCost (Underlying native function: GetBuildingUpgradeCost 0x8efb034)
	void GetBuildingUpgradeCost(enum EOutpostBuildings& OutpostBuilding, struct TArray<struct FFortItemQuantityPair>& OutWorldItems, struct TArray<struct FFortItemQuantityPair>& OutAccountItems); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.GetBuildingMaxLevelFromDefinition (Underlying native function: GetBuildingMaxLevelFromDefinition 0x8efad64)
	int GetBuildingMaxLevelFromDefinition(class UFortOutpostItemDefinition*& OutpostBuilding); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.GetBuildingMaxLevel (Underlying native function: GetBuildingMaxLevel 0x8efac38)
	int GetBuildingMaxLevel(enum EOutpostBuildings& OutpostBuilding); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.GetBuildingLevelFromDefinition (Underlying native function: GetBuildingLevelFromDefinition 0x8efaa7c)
	int GetBuildingLevelFromDefinition(class UFortOutpostItemDefinition*& OutpostBuilding); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.GetBuildingLevel (Underlying native function: GetBuildingLevel 0x8efa950)
	int GetBuildingLevel(enum EOutpostBuildings& OutpostBuilding); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.DumpInventory (Underlying native function: DumpInventory 0x8efa8a8)
	void DumpInventory(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ClientOnOutpostRefundOccurred (Underlying native function: ClientOnOutpostRefundOccurred 0x8efa48c)
	void ClientOnOutpostRefundOccurred(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.ClientOnBuildingLevelChanged (Underlying native function: ClientOnBuildingLevelChanged 0x8efa1d4)
	void ClientOnBuildingLevelChanged(class UFortOutpostItemDefinition*& UpgradedBuilding, int& InLevelBeforeUpgrade); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.CanUpgradeBuildingFromDefinition (Underlying native function: CanUpgradeBuildingFromDefinition 0x8ef9e84)
	bool CanUpgradeBuildingFromDefinition(class UFortOutpostItemDefinition*& OutpostBuilding, bool& bLog); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerOutpost.CanUpgradeBuilding (Underlying native function: CanUpgradeBuilding 0x8ef9cd8)
	bool CanUpgradeBuilding(enum EOutpostBuildings& OutpostBuilding, bool& bLog); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

