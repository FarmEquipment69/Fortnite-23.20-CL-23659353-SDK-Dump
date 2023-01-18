// Class /Script/FortniteGame.FortAsyncAction_MiniMapInterfaceReady
// Size: 0x48
class UFortAsyncAction_MiniMapInterfaceReady : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnReady; // 0x30 (0x10)
	unsigned char padding_40[0x8]; // 0x40 (0x8)

	/* Functions */

	// DelegateFunction /Script/FortniteGame.FortAsyncAction_MiniMapInterfaceReady.OnMiniMapInterfaceReady__DelegateSignature (Has no native function)
	void OnMiniMapInterfaceReadyDelegateSignature(struct TScriptInterface<class IFortMiniMapInterface>& MiniMapInterface); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortAsyncAction_MiniMapInterfaceReady.MiniMapInterfaceReadyAsync (Underlying native function: MiniMapInterfaceReadyAsync 0x8265d28)
	static class UFortAsyncAction_MiniMapInterfaceReady* MiniMapInterfaceReadyAsync(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)
};

