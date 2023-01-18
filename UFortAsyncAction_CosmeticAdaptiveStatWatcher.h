// Class /Script/FortniteGame.FortAsyncAction_CosmeticAdaptiveStatWatcher
// Size: 0x60
class UFortAsyncAction_CosmeticAdaptiveStatWatcher : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnStatChanged; // 0x30 (0x10)
	class AFortPlayerPawn* MyPawn; // 0x40 (0x8)
	unsigned char padding_48[0x18]; // 0x48 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_CosmeticAdaptiveStatWatcher.WatchCosmeticStat (Underlying native function: WatchCosmeticStat 0x269fbac)
	static class UFortAsyncAction_CosmeticAdaptiveStatWatcher* WatchCosmeticStat(class AFortPlayerPawn*& Pawn, struct FFortStatManagerTag& StatTag, int& DefaultValue, bool& bBroadcastInitialValue); // (Final | Native | Static | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortAsyncAction_CosmeticAdaptiveStatWatcher.OnWatchedStatChanged__DelegateSignature (Has no native function)
	void OnWatchedStatChangedDelegateSignature(struct FName& StatName, int& StatValue); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortAsyncAction_CosmeticAdaptiveStatWatcher.OnPawnEndPlay (Underlying native function: OnPawnEndPlay 0x293c838)
	void OnPawnEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& Reason); // (Final | Native | Public)
};

