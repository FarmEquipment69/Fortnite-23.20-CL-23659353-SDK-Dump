// Class /Script/FortniteGame.FortAsyncAction_CosmeticHitPointsStateWatcher
// Size: 0x48
class UFortAsyncAction_CosmeticHitPointsStateWatcher : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnHitPointsChanged; // 0x30 (0x10)
	class AFortPlayerStateAthena* MyPlayerState; // 0x40 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_CosmeticHitPointsStateWatcher.WatchPlayerHealth (Underlying native function: WatchPlayerHealth 0x8847388)
	static class UFortAsyncAction_CosmeticHitPointsStateWatcher* WatchPlayerHealth(class AFortPlayerStateAthena*& PlayerState); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAsyncAction_CosmeticHitPointsStateWatcher.WatchPawnHealth (Underlying native function: WatchPawnHealth 0x5d450c0)
	static class UFortAsyncAction_CosmeticHitPointsStateWatcher* WatchPawnHealth(class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Static | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortAsyncAction_CosmeticHitPointsStateWatcher.OnWatchedHitPointsChanged__DelegateSignature (Has no native function)
	void OnWatchedHitPointsChangedDelegateSignature(float& Health, float& MaxHealth, float& Shield, float& MaxShield); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortAsyncAction_CosmeticHitPointsStateWatcher.OnPlayerStateEndPlay (Underlying native function: OnPlayerStateEndPlay 0x8844b14)
	void OnPlayerStateEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& Reason); // (Final | Native | Private)
};

