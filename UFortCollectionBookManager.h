// Class /Script/FortniteGame.FortCollectionBookManager
// Size: 0x2a8
class UFortCollectionBookManager : public UObject
{
	struct FMulticastInlineDelegate OnPagesChanged; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnSlottedItemOperationComplete; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnSlotItemComplete; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnInventoryUpdated; // 0x58 (0x10)
	struct FMulticastInlineDelegate OnRewardClaimed; // 0x68 (0x10)
	struct FMulticastInlineDelegate OnUnslotItemComplete; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnResearchItemComplete; // 0x88 (0x10)
	unsigned char unreflected_98[0xf0]; // 0x98 (0xf0) 
	struct TArray<struct FFortPendingSlottedItemOperation> PendingSlottedItems; // 0x188 (0x10)
	struct TArray<struct FFortPendingSlottedItemOperation> PendingUpdatedItems; // 0x198 (0x10)
	unsigned char unreflected_1a8[0x8]; // 0x1a8 (0x8) 
	struct TMap<struct FName, class UFortMcpProfileCollectionBook*> ProfileTable; // 0x1b0 (0x50)
	struct TMap<struct FString, class UFortCollectionBookPage*> PageTable; // 0x200 (0x50)
	struct TSet<struct FString> TemporaryPageTemplateIds; // 0x250 (0x50)
	unsigned char padding_2a0[0x8]; // 0x2a0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCollectionBookManager.UnSlotItem (Underlying native function: UnSlotItem 0x8e8242c)
	bool UnSlotItem(class UFortAccountItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCollectionBookManager.SlotItem (Underlying native function: SlotItem 0x8e81e3c)
	bool SlotItem(class UFortAccountItem*& Item, struct FName& SlotId); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCollectionBookManager.PurchaseItem (Underlying native function: PurchaseItem 0x8e80c24)
	bool PurchaseItem(class UFortAccountItem*& Item); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCollectionBookManager.PopulateCollectionBookRewards (Underlying native function: PopulateCollectionBookRewards 0x8e80b0c)
	void PopulateCollectionBookRewards(struct TArray<struct FFortCollectionBookRewards>& OutAvailableRewards); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortCollectionBookManager.OnPagesChanged__DelegateSignature (Has no native function)
	void OnPagesChangedDelegateSignature(class UFortCollectionBookManager*& CollectionBookManager); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortCollectionBookManager.IsItemMissingFromCollectionBook (Underlying native function: IsItemMissingFromCollectionBook 0x8e7f43c)
	bool IsItemMissingFromCollectionBook(class UFortItemDefinition*& ItemDefinition); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCollectionBookManager.GetItemInSlot (Underlying native function: GetItemInSlot 0x8e7e81c)
	class UFortItem* GetItemInSlot(struct FName& SlotId); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCollectionBookManager.GetBookXPPercentToNextLevel (Underlying native function: GetBookXPPercentToNextLevel 0x8e7e210)
	float GetBookXPPercentToNextLevel(int& CurrentLevel, int& NewXP); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCollectionBookManager.GetBookTotalXPToNextLevel (Underlying native function: GetBookTotalXPToNextLevel 0x8e7e184)
	int GetBookTotalXPToNextLevel(int& CurrentLevel); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCollectionBookManager.DoesItemSlotExistInCollectionBook (Underlying native function: DoesItemSlotExistInCollectionBook 0x8e7dfc4)
	bool DoesItemSlotExistInCollectionBook(class UFortItemDefinition*& ItemDefinition); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCollectionBookManager.ClaimReward (Underlying native function: ClaimReward 0x8e7db40)
	void ClaimReward(struct FFortCollectionBookRewards& RewardToClaim, int& RewardIndex); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCollectionBookManager.CanSlotItem (Underlying native function: CanSlotItem 0x8e7d30c)
	bool CanSlotItem(class UFortAccountItem*& AccountItem, bool& bOnlyAllowIfSlotEmpty, struct FName& OutSlotId); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCollectionBookManager.CalculatePageXp (Underlying native function: CalculatePageXp 0x8e7d260)
	int CalculatePageXp(struct FName& PageId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCollectionBookManager.CalculateBookXp (Underlying native function: CalculateBookXp 0x8e7d23c)
	int CalculateBookXp(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

