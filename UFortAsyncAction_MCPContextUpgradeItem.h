// Class /Script/FortniteGame.FortAsyncAction_MCPContextUpgradeItem
// Size: 0x58
class UFortAsyncAction_MCPContextUpgradeItem : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnMCPRequestComplete; // 0x30 (0x10)
	struct TWeakObjectPtr<class UFortMcpContext> MCPContext; // 0x40 (0x8)
	struct TWeakObjectPtr<class UFortItem> ItemToUpgrade; // 0x48 (0x8)
	unsigned char padding_50[0x8]; // 0x50 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_MCPContextUpgradeItem.UpgradeItem (Underlying native function: UpgradeItem 0x8c44d88)
	static class UFortAsyncAction_MCPContextUpgradeItem* UpgradeItem(class UFortMcpContext*& MCPContext, class UFortItem*& ItemToUpgrade, int& TargetLevel); // (Final | Native | Static | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortAsyncAction_MCPContextUpgradeItem.OnMCPRequestComplete__DelegateSignature (Has no native function)
	void OnMCPRequestCompleteDelegateSignature(); // (MulticastDelegate | Public | Delegate)
};

