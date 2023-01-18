// Class /Script/FortniteGame.FortAsyncAction_MCPContextConsumeItem
// Size: 0x80
class UFortAsyncAction_MCPContextConsumeItem : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnMCPRequestComplete; // 0x30 (0x10)
	struct TWeakObjectPtr<class UFortMcpContext> MCPContext; // 0x40 (0x8)
	struct TWeakObjectPtr<class UFortItem> ItemToConsume; // 0x48 (0x8)
	struct FUniqueNetIdRepl TargetAccountId; // 0x50 (0x30)

	/* Functions */

	// DelegateFunction /Script/FortniteGame.FortAsyncAction_MCPContextConsumeItem.OnMCPRequestComplete__DelegateSignature (Has no native function)
	void OnMCPRequestCompleteDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortAsyncAction_MCPContextConsumeItem.ConsumeItem (Underlying native function: ConsumeItem 0x8c3ff2c)
	static class UFortAsyncAction_MCPContextConsumeItem* ConsumeItem(class UFortMcpContext*& MCPContext, class UFortItem*& ItemToConsume, struct FUniqueNetIdRepl& TargetAccountId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

