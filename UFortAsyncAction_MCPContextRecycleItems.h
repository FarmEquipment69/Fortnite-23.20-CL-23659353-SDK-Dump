// Class /Script/FortniteGame.FortAsyncAction_MCPContextRecycleItems
// Size: 0x58
class UFortAsyncAction_MCPContextRecycleItems : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnMCPRequestComplete; // 0x30 (0x10)
	struct TWeakObjectPtr<class UFortMcpContext> MCPContext; // 0x40 (0x8)
	struct TArray<struct TWeakObjectPtr<class UFortItem>> ItemsToRecycle; // 0x48 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_MCPContextRecycleItems.RecycleItems (Underlying native function: RecycleItems 0x8c43f9c)
	static class UFortAsyncAction_MCPContextRecycleItems* RecycleItems(class UFortMcpContext*& MCPContext, struct TArray<class UFortItem*>& ItemsToRecycle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortAsyncAction_MCPContextRecycleItems.OnMCPRequestComplete__DelegateSignature (Has no native function)
	void OnMCPRequestCompleteDelegateSignature(); // (MulticastDelegate | Public | Delegate)
};

