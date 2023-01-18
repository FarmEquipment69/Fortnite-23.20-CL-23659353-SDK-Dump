// Class /Script/FortniteGame.KeepItemContainer
// Size: 0x1140
class AKeepItemContainer : public ABuildingContainer
{
	unsigned char unreflected_10d0[0x4]; // 0x10d0 (0x4) 
	int HostUpgradeLevel; // 0x10d4 (0x4)
	struct TArray<struct TWeakObjectPtr<class AFortPlayerState>> SearchedBy; // 0x10d8 (0x10)
	enum EKeepContainerType ContainerType; // 0x10e8 (0x1)
	bool bUseDefaultLootLogic; // 0x10e9 (0x1)
	bool bResetThisWhenKeepResets; // 0x10ea (0x1)
	unsigned char unreflected_10eb[0x1]; // 0x10eb (0x1) 
	struct FName ContainerNameKey; // 0x10ec (0x4)
	class UDataTable* ContainerDataTable; // 0x10f0 (0x8)
	bool bShowChoiceUI; // 0x10f8 (0x1)
	unsigned char unreflected_10f9[0x7]; // 0x10f9 (0x7) 
	struct TArray<enum EFortItemType> ItemsInChoiceUI; // 0x1100 (0x10)
	unsigned char unreflected_1110[0x10]; // 0x1110 (0x10) 
	enum EFortRarity BestAvailableRarity; // 0x1120 (0x1)
	unsigned char unreflected_1121[0x3]; // 0x1121 (0x3) 
	int MaxItems; // 0x1124 (0x4)
	unsigned char padding_1128[0x18]; // 0x1128 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.KeepItemContainer.RestoreLoot (Underlying native function: RestoreLoot 0x1b4b43c)
	void RestoreLoot(); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.KeepItemContainer.ResetContainer (Underlying native function: ResetContainer 0x71a663c)
	void ResetContainer(class AFortPlayerController*& FortPC); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.KeepItemContainer.OnRep_SearchedBy (Underlying native function: OnRep_SearchedBy 0x8e7fd6c)
	void OnRepSearchedBy(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.KeepItemContainer.OnRep_HostUpgradeLevel (Underlying native function: OnRep_HostUpgradeLevel 0x8e7fb08)
	void OnRepHostUpgradeLevel(); // (Final | Native | Public)

	// Function /Script/FortniteGame.KeepItemContainer.InitializeContainer (Underlying native function: InitializeContainer 0x8e7f298)
	void InitializeContainer(int& InitUpgradeLevel); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.KeepItemContainer.GetLootTierOverride (Underlying native function: GetLootTierOverride 0x8e7e924)
	int GetLootTierOverride(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.KeepItemContainer.GetContainerNameAndLevelKey (Underlying native function: GetContainerNameAndLevelKey 0x8e7e3bc)
	struct FName GetContainerNameAndLevelKey(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

