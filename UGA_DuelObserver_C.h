// BlueprintGeneratedClass /Game/Athena/HUD/Duel/GA_DuelObserver.GA_DuelObserver_C
// Size: 0xb38
class UGA_DuelObserver_C : public UFortGameplayAbility_ObserveDuels
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb30 (0x8)

	/* Functions */

	// Function /Game/Athena/HUD/Duel/GA_DuelObserver.GA_DuelObserver_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/HUD/Duel/GA_DuelObserver.GA_DuelObserver_C.UpdateDuelUI (Has no native function)
	void UpdateDuelUI(enum EDuelState& DuelState, struct FDuelOverlayData& CachedDuelOverlayData); // (Net | NetClient | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Duel/GA_DuelObserver.GA_DuelObserver_C.OnDuelChange (Has no native function)
	void OnDuelChange(enum EDuelState& NewDuelState, struct FDuelOverlayData& ChangedDuelOverlayData); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/HUD/Duel/GA_DuelObserver.GA_DuelObserver_C.ExecuteUbergraph_GA_DuelObserver (Has no native function)
	void ExecuteUbergraphGADuelObserver(int& EntryPoint, enum EDuelState& K2NodeEventNewDuelState, struct FDuelOverlayData& K2NodeEventChangedDuelOverlayData, enum EDuelState& K2NodeCustomEventDuelState, struct FDuelOverlayData& K2NodeCustomEventCachedDuelOverlayData, bool& CallFuncIsServerReturnValue, struct FGameplayEventData& K2NodeEventEventData, class UAthenaHUDContext*& CallFuncGetContextReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess1); // (Final | 0x00008000 | HasDefaults)
};

